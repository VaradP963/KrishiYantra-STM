/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This software is delivered "as is" and shows the usage of other software
* components. It is provided as an example software which is intended to be
* modified and extended according to particular requirements.
*
* TARA Systems hereby disclaims all warranties and conditions with regard to the
* software, including all implied warranties and conditions of merchantability
* and non-infringement of any third party IPR or other rights which may result
* from the use or the inability to use the software.
*
********************************************************************************
*
* DESCRIPTION:
*   This file is part of the interface (glue layer) between an Embedded Wizard
*   generated UI application and the graphics subsystem.
*
*   This template is responsible to access the graphics subsystem within an
*   embedded Linux environment. The display is accessed by using EGL via the
*   graphics subsystem (e.g. Wayland, DRM, X11 or fbdev).
*
*   Important: This file is intended to be used as a template. Please adapt the
*   implementation and declarations according your particular hardware.
*
*******************************************************************************/

/* undefine __unix__ to avoid that X11.h is included and EGLNative types are
   defined with X11 types */
#if defined(__unix__)
  #undef __unix__
#endif

#include "ewconfig.h"
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <xf86drm.h>
#include <xf86drmMode.h>
#include <sys/mman.h>
#include <errno.h>

#ifdef EW_USE_EGL
#include <gbm.h>
#include <GLES2/gl2.h>
#include <EGL/egl.h>
#include <EGL/eglext.h>
#endif

#include "gfx_system.h"

#ifndef EW_DISPLAY_USE_PREFERRED_MODE
  #define EW_DISPLAY_USE_PREFERRED_MODE 0
#endif

#define EW_DRM_DEVICE_0 "/dev/dri/card0"
#define EW_DRM_DEVICE_1 "/dev/dri/card1"
#define EW_MAX_NUM_DRM_DEVICES 2


void EwPrint( const char* aFormat, ... );


static const char* DrmDevices[] =
{
  EW_DRM_DEVICE_0,
  EW_DRM_DEVICE_1
};

static drmModeModeInfo*    DrmMode = NULL;
static int                 DrmFd;
static uint32_t            DrmCrtcId;
static drmModeConnector*   DrmConnector;
static drmModeCrtcPtr      SavedCrtc = NULL;


#ifdef EW_USE_EGL
static struct gbm_device*  GbmDevice;
static struct gbm_surface* GbmSurface;
static struct gbm_bo*      GbmBuffer;

static EGLDisplay          EglDisplay  = 0;
static EGLSurface          EglSurface  = 0;
static EGLContext          EglContext  = 0;
static GLint               FrameBuffer = 0;

#else

struct drmBuffer
{
  uint32_t  width;
  uint32_t  height;
  uint32_t  stride;
  uint32_t  size;
  uint32_t  handle;
  uint8_t*  map;
  uint32_t  fb;
};

static struct drmBuffer DrmBuffer[2];

#endif


/*******************************************************************************
 * private functions
 *******************************************************************************/

static float       GfxSystemGetErrorSquare( int aValue1, int aValue2 );

#ifdef EW_USE_EGL
static int         DrmEglInit( void );
static void        DrmEglDone( void );

/*
 * callback function, called after frame buffer flip is done
 */
static void DrmFbFlipCallback( int fd, unsigned int frame, unsigned int sec,
  unsigned int usec, void* data )
{
  /* suppress 'unused parameter' warnings */
  (void)fd, (void)frame, (void)sec, (void)usec;

  int* waiting_for_flip = data;
  *waiting_for_flip = 0;
}


/*
 * callback function to destroy a drm frame buffer
 */
static void DrmFbDestroyCallback( struct gbm_bo* aGbmBuffer, void* data )
{
  uint32_t fb_id = (intptr_t)data;

  if ( fb_id )
    drmModeRmFB( DrmFd, fb_id );
}


/*
 * helper function to get a drm frame buffer
 */
static uint32_t DrmGetFb( struct gbm_bo* aGbmBuffer )
{
  uint32_t fb_id = (intptr_t) gbm_bo_get_user_data( aGbmBuffer );
  uint32_t width, height, format, strides[4] = {0}, handles[4] = {0}, offsets[4] = {0};
  int ret = -1;

  if ( fb_id )
    return fb_id;

  width  = gbm_bo_get_width( aGbmBuffer );
  height = gbm_bo_get_height( aGbmBuffer );
  format = gbm_bo_get_format( aGbmBuffer );

  memcpy( handles, (uint32_t [4]){ gbm_bo_get_handle( aGbmBuffer ).u32, 0, 0, 0 }, 16 );
  memcpy( strides, (uint32_t [4]){ gbm_bo_get_stride( aGbmBuffer ), 0, 0, 0 }, 16 );
  memset( offsets, 0, 16 );

  ret = drmModeAddFB2( DrmFd, width, height, format, handles, strides, offsets, &fb_id, 0 );

  if ( ret )
    return 0;

  gbm_bo_set_user_data( aGbmBuffer, (void*)(intptr_t)fb_id, DrmFbDestroyCallback );

  return fb_id;
}

/*
 * helper function to get the config index for the given visual_id
 */
static int match_config_to_visual( EGLDisplay egl_display, EGLint visual_id,
  EGLConfig* configs, int count )
{
  int i;

  for ( i = 0; i < count; ++i )
  {
    EGLint id;

    if ( ! eglGetConfigAttrib( egl_display, configs[ i ], EGL_NATIVE_VISUAL_ID, &id ))
      continue;

    if ( id == visual_id )
      return i;
  }

  return -1;
}


/*
 * helper function to initialize the egl environment
 */
static int DrmEglInit( void )
{
  EGLint            count        = 0;
  EGLint            matched      = 0;
  EGLConfig         eglConfig    = 0;
  EGLConfig*        configs;
  int               config_index = -1;
  uint32_t          fb_id;
  int               errorCode;
  PFNEGLGETPLATFORMDISPLAYEXTPROC eglGetPlatformDisplayEXT = 0;
  const EGLint      contextAttribs[]  = { EGL_CONTEXT_CLIENT_VERSION, 2, EGL_NONE };
  const char*       eglClientExtensions;
  const EGLint      configAttribs[] =
  {
    EGL_SURFACE_TYPE,    EGL_WINDOW_BIT,
    EGL_RENDERABLE_TYPE, EGL_OPENGL_ES2_BIT,
    EGL_RED_SIZE,        1,
    EGL_GREEN_SIZE,      1,
    EGL_BLUE_SIZE,       1,
    EGL_ALPHA_SIZE,      0,
    EGL_SAMPLES,         0,
    EGL_NONE
  };

  if ( !DrmMode )
    return 0;

  /* access to EGL is done via GBM (graphics buffer management) */
  GbmDevice = gbm_create_device( DrmFd );
  if ( !GbmDevice )
    return 0;

  /* get egl extension */
  eglClientExtensions = eglQueryString( EGL_NO_DISPLAY, EGL_EXTENSIONS );
  if ( strstr( eglClientExtensions, "EGL_EXT_platform_base" ))
    eglGetPlatformDisplayEXT = (void*)eglGetProcAddress( "eglGetPlatformDisplayEXT" );

  if ( eglGetPlatformDisplayEXT )
    EglDisplay = eglGetPlatformDisplayEXT( EGL_PLATFORM_GBM_KHR, GbmDevice, NULL );
  else
    EglDisplay = eglGetDisplay((void*)GbmDevice );

  eglInitialize( EglDisplay, 0, 0 );
  eglBindAPI( EGL_OPENGL_ES_API );

  if (!eglGetConfigs(EglDisplay, NULL, 0, &count) || count < 1) {
    EwPrint("No EGL configs to choose from.\n");
    return 0;
  }

  configs = malloc(count * sizeof *configs);
  if (!configs)
    return 0;

  if (!eglChooseConfig(EglDisplay, configAttribs, configs,
            count, &matched) || !matched) {
    EwPrint("No EGL configs with appropriate attributes.\n");
    goto out;
  }

  config_index = match_config_to_visual(
    EglDisplay, GBM_FORMAT_XRGB8888, configs, matched);

  if (config_index != -1)
    eglConfig = configs[config_index];

out:
  free(configs);
  if (config_index == -1)
    return 0;

  EglContext = eglCreateContext( EglDisplay, eglConfig, EGL_NO_CONTEXT, contextAttribs );

  /* create surface */

  GbmSurface = gbm_surface_create( GbmDevice, DrmMode->hdisplay, DrmMode->vdisplay,
    GBM_FORMAT_XRGB8888, GBM_BO_USE_SCANOUT | GBM_BO_USE_RENDERING );
  if ( !GbmSurface )
    return 0;


  EglSurface = eglCreateWindowSurface( EglDisplay, eglConfig, GbmSurface, 0 );

  #if EW_PERFORM_FULLSCREEN_UPDATE == 0
    EGLBoolean  eglResult;
    eglResult = eglSurfaceAttrib( EglDisplay, EglSurface, EGL_SWAP_BEHAVIOR, EGL_BUFFER_PRESERVED );
    if ( eglResult != EGL_TRUE )
      EwPrint( "\nWARNING: egl swap behaviour - buffer preservation not supported (egl error: 0x%04X)\n" \
        "Use macro EW_PERFORM_FULLSCREEN_UPDATE = 1\n\n", eglGetError());
  #else
    eglSurfaceAttrib( EglDisplay, EglSurface, EGL_SWAP_BEHAVIOR, EGL_BUFFER_DESTROYED );
  #endif

  eglMakeCurrent( EglDisplay, EglSurface, EglSurface, EglContext );


  /* get the frame buffer and its size in pixel */
  glGetIntegerv( GL_FRAMEBUFFER_BINDING, &FrameBuffer );

  /* clear entire screen with black color */
  glClearColor( 0.0, 0.0, 0.0, 1.0 );
  glClear( GL_COLOR_BUFFER_BIT );
  glFlush();

  eglSwapBuffers( EglDisplay, EglSurface );
  GbmBuffer = gbm_surface_lock_front_buffer( GbmSurface );
  fb_id = DrmGetFb( GbmBuffer );
  if ( !fb_id )
    return 0;

  /* set mode */
  errorCode = drmModeSetCrtc( DrmFd, DrmCrtcId, fb_id, 0, 0, &DrmConnector->connector_id, 1, DrmMode );
  if ( errorCode )
    return 0;

  return 1;
}


/*
 * helper function to clean-up the egl environment
 */
static void DrmEglDone( void )
{
  /* shutdown the EGL / OpenGL ES 2.0 sub-system */
  eglMakeCurrent( EglDisplay, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT ) ;
  eglTerminate( EglDisplay );

  /* access to EGL was done via GBM (graphics buffer management) */
  if ( GbmSurface )
  {
    if ( GbmBuffer )
      gbm_surface_release_buffer( GbmSurface, GbmBuffer );

    gbm_surface_destroy( GbmSurface );
  }

  if ( GbmDevice )
    gbm_device_destroy( GbmDevice );
}
#endif


/*
 * helper function to calculate the error square of aValue2 in relation to
 * aValue1. If aValue1 == 0, this function returns 0.
 */
static float
GfxSystemGetErrorSquare( int aValue1, int aValue2 )
{
  if ( aValue1 == 0 )
    return 0.0;

  float error = ( float )( aValue1 - aValue2 ) / aValue1;
  return error * error;
}


/*
 * Helper function to get the connector type string by connector type
 */
static const char*
GfxSystemDrmConnectorTypeToString( int aConnectorType )
{
  switch( aConnectorType )
  {
    case DRM_MODE_CONNECTOR_VGA         : return "VGA";
    case DRM_MODE_CONNECTOR_DVII        : return "DVII";
    case DRM_MODE_CONNECTOR_DVID        : return "DVID";
    case DRM_MODE_CONNECTOR_DVIA        : return "DVIA";
    case DRM_MODE_CONNECTOR_Composite   : return "Composite";
    case DRM_MODE_CONNECTOR_SVIDEO      : return "SVIDEO";
    case DRM_MODE_CONNECTOR_LVDS        : return "LVDS";
    case DRM_MODE_CONNECTOR_Component   : return "Component";
    case DRM_MODE_CONNECTOR_9PinDIN     : return "9PinDIN";
    case DRM_MODE_CONNECTOR_DisplayPort : return "DisplayPort";
    case DRM_MODE_CONNECTOR_HDMIA       : return "HDMIA";
    case DRM_MODE_CONNECTOR_HDMIB       : return "HDMIB";
    case DRM_MODE_CONNECTOR_TV          : return "TV";
    case DRM_MODE_CONNECTOR_eDP         : return "eDP";
    case DRM_MODE_CONNECTOR_VIRTUAL     : return "VIRTUAL";
    case DRM_MODE_CONNECTOR_DSI         : return "DSI";
    case DRM_MODE_CONNECTOR_DPI         : return "DPI";
    default                             : ;
  }
  return "unknown";
}



#ifndef EW_USE_EGL

/*
 * Helper function to create a framebuffer object
 */
static int EwBspDrmCreateFb( int drmCard, struct drmBuffer * buf )
{
  struct drm_mode_create_dumb  creq;
  struct drm_mode_destroy_dumb dreq;
  struct drm_mode_map_dumb     mreq;
  int                          ret;

  /* create dumb buffer with RGB32*/
  memset( &creq, 0, sizeof( creq ) );
  creq.width  = buf->width;
  creq.height = buf->height;
  creq.bpp    = 32;
  ret = drmIoctl( drmCard, DRM_IOCTL_MODE_CREATE_DUMB, &creq );
  if ( ret < 0 )
  {
    EwPrint( "cannot create dumb buffer (%d)\n", ret );
    return 0;
  }

  buf->stride = creq.pitch;
  buf->size   = creq.size;
  buf->handle = creq.handle;

  /* create framebuffer object for the dumb-buffer */
#ifndef EW_PREFERRED_DRM_FORMAT

  ret = drmModeAddFB( drmCard, buf->width, buf->height, 32, 32,
          buf->stride, buf->handle, &buf->fb );
#else

  uint32_t strides[4];
  uint32_t handles[4];
  uint32_t offsets[4];

  memcpy( handles, (uint32_t [4]){ buf->handle, 0, 0, 0 }, 16 );
  memcpy( strides, (uint32_t [4]){ buf->stride, 0, 0, 0 }, 16 );
  memset( offsets, 0, 16 );

  ret = drmModeAddFB2( drmCard, buf->width, buf->height,
          EW_PREFERRED_DRM_FORMAT, handles, strides, offsets, &buf->fb, 0);

#endif


  if ( ret )
  {
    EwPrint( "cannot create framebuffer (%d)\n", ret );
    buf->fb = 0;
    goto onError;
  }

  /* prepare buffer for memory mapping */
  memset( &mreq, 0, sizeof( mreq ) );
  mreq.handle = buf->handle;
  ret = drmIoctl( drmCard, DRM_IOCTL_MODE_MAP_DUMB, &mreq );
  if ( ret )
  {
    EwPrint( "cannot map dumb buffer (%d)\n", ret );
    goto onError;
  }

  /* perform actual memory mapping */
  buf->map = mmap( 0, buf->size, PROT_READ | PROT_WRITE, MAP_SHARED, drmCard, mreq.offset );
  if ( buf->map == MAP_FAILED )
  {
    EwPrint( "cannot mmap dumb buffer\n" );
    goto onError;
  }

  /* clear the framebuffer to 0 */
  memset( buf->map, 0x00, buf->size );
  return 1;

onError:
  if ( buf->fb )
    drmModeRmFB(drmCard, buf->fb);

  memset( &dreq, 0, sizeof( dreq ) );
  dreq.handle = buf->handle;
  drmIoctl( drmCard, DRM_IOCTL_MODE_DESTROY_DUMB, &dreq );
  return 0;
}


/*
 * Helper function to destroy a given framebuffer object
 */
static void EwBspDrmDestroyFb( int drmCard, struct drmBuffer * buf )
{
  struct drm_mode_destroy_dumb dreq;

  /* unmap buffer */
  munmap( buf->map, buf->size );

  /* delete framebuffer */
  drmModeRmFB( drmCard, buf->fb );

  /* delete dumb buffer */
  memset( &dreq, 0, sizeof( dreq ) );
  dreq.handle = buf->handle;
  drmIoctl( drmCard, DRM_IOCTL_MODE_DESTROY_DUMB, &dreq );
}

#endif



/*******************************************************************************
* FUNCTION:
*   GfxSystemInit
*
* DESCRIPTION:
*   The function GfxSystemInit is responsible to get an access to the
*   graphics subsystem. In case that the underlying graphics subsystem contains
*   a window manager, the given size is used to create a suitable window.
*   Otherwise, the given size is ignored, because the size of the frame buffer
*   cannot be changed.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   Returns 1 if successful, 0 otherwise.
*
*******************************************************************************/
int GfxSystemInit( void )
{
  drmModeRes*       resources                   = NULL;
  drmModeConnector* connector                   = NULL;
  drmModeEncoder*   encoder                     = NULL;
  uint32_t          drmCrtcId                   = 0;
  unsigned int      i;
  unsigned int      j;
  unsigned int      dev;
  unsigned int      mod;
  float             deviation;
  float             minDeviation                = 100.0;
  int               selectPreferredDisplayMode  = EW_DISPLAY_USE_PREFERRED_MODE;
  int               width                       = EW_DISPLAY_PREFERRED_WIDTH;
  int               height                      = EW_DISPLAY_PREFERRED_HEIGHT;
  int               connIndex                   = -1;
  int               score                       = 0;
  int               maxScore                    = 0;


  DrmMode      = NULL;
  DrmConnector = NULL;

  /* select a suitable drm device node */
  for ( dev = 0; dev < sizeof( DrmDevices ) / sizeof( const char* ); dev++ )
  {
    DrmFd = open( DrmDevices[ dev ], O_RDWR );
    if ( DrmFd < 0 )
      continue;

    /* retrieve resources */
    resources = drmModeGetResources( DrmFd );
    if ( resources )
      break;
  }

  if ( ! resources )
  {
    EwPrint( "GfxSystemInit: no suitable drm device node found!\n" );
    return 0;
  }

  EwPrint( "Using drm device node '%s'!\n", DrmDevices[ dev ] );

  if (( width == 0 ) || ( height == 0 ))
    selectPreferredDisplayMode = 1;

  /* select a display connector according to the given preferences */
  for ( i = 0; i < resources->count_connectors; ++i )
  {
    /* get information for each connector */
    connector = drmModeGetConnector( DrmFd, resources->connectors[ i ] );
    if ( ! connector )
    {
      EwPrint( "cannot retrieve DRM connector %u:%u\n", i, resources->connectors[ i ] );
      continue;
    }

    /* check if a monitor is connected */
    if ( connector->connection != DRM_MODE_CONNECTED )
    {
      EwPrint( "ignoring unconnected connector %u\n", connector->connector_id );
      continue;
    }

    /* check if there is at least one valid mode */
    if ( connector->count_modes == 0)
    {
      EwPrint( "no valid mode for connector %u\n", connector->connector_id );
      continue;
    }

    score = 1;

    if ( connector->connector_type == EW_DISPLAY_PREFERRED_DRM_CONNECTOR_TYPE )
      score += 2;

    if ( connector->connector_type_id == EW_DISPLAY_PREFERRED_DRM_CONNECTOR_TYPE_ID )
      score += 1;

    if ( score > maxScore )
    {
      connIndex = i;
      maxScore = score;
    }

    drmModeFreeConnector( connector );
  }

  if ( connIndex == -1 )
  {
    EwPrint( "No DRM connector found\n" );
    goto onError;
  }


  /* get information for the selected display connector */
  connector = drmModeGetConnector( DrmFd, resources->connectors[ connIndex ] );
  if ( !connector )
    goto onError;

  if ( connector->connection != DRM_MODE_CONNECTED )
  {
    EwPrint( "GfxSystemInit: DRM connector not connected\n" );
    goto onError;
  }

  #if EW_DISPLAY_DUMP_DISPLAY_MODES == 1
    EwPrint( "Display interface '%s_%u' detected.\n",
      GfxSystemDrmConnectorTypeToString( connector->connector_type ), connector->connector_type_id - 1 );
    EwPrint( "\nAvailable output modes:\n" );
  #endif

  /* iterate through the display modes and find the best matching one */
  for ( mod = 0; mod < connector->count_modes; mod++ )
  {
    drmModeModeInfo*  mode = &connector->modes[ mod ];

    #if EW_DISPLAY_DUMP_DISPLAY_MODES == 1
    EwPrint( "%5u x%5u @%3uHz (pixel clock: %7ukHz) %s\n",
      mode->hdisplay, mode->vdisplay, mode->vrefresh, mode->clock,
      mode->type & DRM_MODE_TYPE_PREFERRED ? "(preferred mode)" : "" );
    #endif

    if ( selectPreferredDisplayMode && ( mode->type & DRM_MODE_TYPE_PREFERRED ))
    {
      DrmMode = mode;
      break;
    }

    if (( mode->hdisplay >= width ) && ( mode->vdisplay >= height ))
    {
      /* calculate the deviation to the requested display parameters */

      deviation  = GfxSystemGetErrorSquare( width, mode->hdisplay );
      deviation += GfxSystemGetErrorSquare( height, mode->vdisplay );
      deviation += GfxSystemGetErrorSquare( EW_DISPLAY_PREFERRED_FRAME_RATE, mode->vrefresh );
      deviation += GfxSystemGetErrorSquare( EW_DISPLAY_PREFERRED_PIXEL_CLOCK, mode->clock );
    }
      else
    {
      /* set maximum derivation, since display size is lower than screen size */
      deviation = 100.0;
    }

    if ( deviation > minDeviation )
        continue;

    DrmMode = mode;
    minDeviation = deviation;
  }

  if ( DrmMode == NULL )
  {
    EwPrint( "No suitable display mode available for interface '%s'!\n",
      GfxSystemDrmConnectorTypeToString( connector->connector_type ));
    if ( selectPreferredDisplayMode )
      EwPrint( "(Please note, that EW_DISPLAY_USE_PREFERRED_MODE is set!)\n" );
    goto onError;
  }

  /* find crtc_id via encoder */
  /* first, check if there is already a bound encoder */
  if ( connector->encoder_id )
  {
    encoder = drmModeGetEncoder( DrmFd, connector->encoder_id );
    if ( encoder )
    {
      drmCrtcId = encoder->crtc_id;
      drmModeFreeEncoder( encoder );
    }
  }

  /* Otherwise iterate all other available encoders to find a matching CRTC. */
  for ( i = 0; drmCrtcId == 0 &&  i < connector->count_encoders; i++ )
  {
    encoder = drmModeGetEncoder( DrmFd, connector->encoders[ i ]);
    if ( ! encoder)
    {
      EwPrint( "cannot retrieve encoder %u:%u\n", i, connector->encoders[ i ] );
      continue;
    }

    /* iterate all global CRTCs */
    for ( j = 0; drmCrtcId == 0 && j < resources->count_crtcs; j++ )
    {
      /* check whether this CRTC works with the encoder */
      if ( encoder->possible_crtcs & ( 1 << j ))
        drmCrtcId = resources->crtcs[ j ];
    }

    drmModeFreeEncoder( encoder );
  }

  if ( ! drmCrtcId )
  {
    EwPrint( "No matching CrtcId found!\n" );
    goto onError;
  }

  DrmConnector   = connector;
  DrmCrtcId      = drmCrtcId;


  if ( selectPreferredDisplayMode )
    EwPrint( "\nPreferred display mode requested\n\n" );
  else
  {
    EwPrint( "\nPreferred display mode: %ux%u", width, height );
    #if EW_DISPLAY_PREFERRED_FRAME_RATE != 0
    EwPrint( "@%uHz ", EW_DISPLAY_PREFERRED_FRAME_RATE );
    #endif
    #if EW_DISPLAY_PREFERRED_PIXEL_CLOCK != 0
    EwPrint( "(pixel clock: %ukHz)", EW_DISPLAY_PREFERRED_PIXEL_CLOCK );
    #endif
    EwPrint( "\n");
  }

  EwPrint( "Selected display mode:  %ux%u@%uHz (pixel clock: %ukHz)\n\n\n",
    DrmMode->hdisplay, DrmMode->vdisplay, DrmMode->vrefresh, DrmMode->clock );

onError:

  if ( connector && ! DrmConnector )
    drmModeFreeConnector( connector );

  if ( resources )
    drmModeFreeResources( resources );

  if ( DrmMode == 0 )
    return 0;


  // save currently active DRM mode
  SavedCrtc = drmModeGetCrtc( DrmFd, DrmCrtcId );

#ifdef EW_USE_EGL
  return DrmEglInit();
#else

  int ret;
  memset( DrmBuffer, 0, sizeof( DrmBuffer ));

  /* create framebuffer #1 for this CRTC */
  DrmBuffer[ 0 ].width  = DrmMode->hdisplay;
  DrmBuffer[ 0 ].height = DrmMode->vdisplay;
  ret = EwBspDrmCreateFb( DrmFd, &DrmBuffer[ 0 ] );
  if ( ! ret )
  {
    EwPrint( "cannot create 1st framebuffer\n" );
    return ret;
  }

  #if EW_USE_DOUBLE_BUFFER == 1
  /* create framebuffer #2 for this CRTC */
  DrmBuffer[ 1 ].width  = DrmMode->hdisplay;
  DrmBuffer[ 1 ].height = DrmMode->vdisplay;
  ret = EwBspDrmCreateFb( DrmFd, &DrmBuffer[ 1 ] );
  if ( ! ret )
  {
    EwPrint( "cannot create 2nd framebuffer\n" );
    EwBspDrmDestroyFb( DrmFd, &DrmBuffer[ 0 ] );
    return ret;
  }
  #endif

  /* set framebuffer */
  if ( drmModeSetCrtc( DrmFd, DrmCrtcId, DrmBuffer[ 0 ].fb, 0, 0, &DrmConnector->connector_id, 1, DrmMode ))
  {
    EwPrint( "EwBspDisplayInit: cannot set CRTC for connector %u.\n", DrmConnector );
    return 0;
  }

  return 1;

#endif
}


/*******************************************************************************
* FUNCTION:
*   GfxSystemDone
*
* DESCRIPTION:
*   The function GfxSystemDone is responsible to close the access to the
*   graphics subsystem.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void GfxSystemDone( void )
{
#ifdef EW_USE_EGL
  /* shutdown the EGL sub-system */
  DrmEglDone();
#else

  /* destroy framebuffers */
  EwBspDrmDestroyFb( DrmFd, &DrmBuffer[ 0 ] );

  #if EW_USE_DOUBLE_BUFFER == 1
    EwBspDrmDestroyFb( DrmFd, &DrmBuffer[ 1 ] );
  #endif

#endif

  /* restore saved CRTC configuration */
  if ( SavedCrtc )
  {
    drmModeSetCrtc( DrmFd, SavedCrtc->crtc_id, SavedCrtc->buffer_id,
     SavedCrtc->x, SavedCrtc->y, &DrmConnector->connector_id, 1, &SavedCrtc->mode );

    drmModeFreeCrtc( SavedCrtc );
    SavedCrtc = NULL;
  }

  if ( DrmConnector )
    drmModeFreeConnector( DrmConnector );

  if ( DrmFd )
    close ( DrmFd );
}


/*******************************************************************************
* FUNCTION:
*   GfxSystemProcess
*
* DESCRIPTION:
*   The function GfxSystemProcess drives the graphics subsystem or window
*   manager in order to process all pending events.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   1, if further processing is needed, 0 otherwise.
*
*******************************************************************************/
int GfxSystemProcess( void )
{
  return 1;
}


/*******************************************************************************
* FUNCTION:
*   GfxSystemGetInfo
*
* DESCRIPTION:
*   The function GfxSystemGetInfo returns the graphic system info struct.
*
* ARGUMENTS:
*   aGfxSystemInfo  - Pointer to return the graphic system info struct.
*
* RETURN VALUE:
*   None.
*
*******************************************************************************/
void GfxSystemGetInfo( XGfxSystemInfo* aGfxSystemInfo )
{
  if ( ! aGfxSystemInfo )
    return;

  memset( aGfxSystemInfo, 0, sizeof( *aGfxSystemInfo ));

  aGfxSystemInfo->Type        = GFX_SYSTEM_DRM;
  aGfxSystemInfo->Interface   = GfxSystemDrmConnectorTypeToString( DrmConnector->connector_type );

#ifdef EW_USE_EGL

  aGfxSystemInfo->FrameBuffer = (void*)(intptr_t)FrameBuffer;
  aGfxSystemInfo->Display     = EglDisplay;
  aGfxSystemInfo->Surface     = EglSurface;
  aGfxSystemInfo->Context     = EglContext;

#else

  aGfxSystemInfo->FrameBuffer  = (void*)(intptr_t)DrmBuffer[ 0 ].map;

  #if EW_USE_DOUBLE_BUFFER == 1
  aGfxSystemInfo->DoubleBuffer = (void*)(intptr_t)DrmBuffer[ 1 ].map;
  #endif

  aGfxSystemInfo->Pitch        = DrmBuffer[ 0 ].stride;

#endif

  aGfxSystemInfo->Width       = DrmMode->hdisplay;
  aGfxSystemInfo->Height      = DrmMode->vdisplay;
}


/*******************************************************************************
* FUNCTION:
*   GfxSystemUpdateSurface
*
* DESCRIPTION:
*   The function GfxSystemUpdateSurface updates the graphic surface.
*
* ARGUMENTS:
*   aSurfaceContext  - Surface context
*   aX1              - Surface update area left.
*   aY1              - Surface update area topt.
*   aX2              - Surface update area right.
*   aY2              - Surface update area bottom.
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void GfxSystemUpdateSurface ( void * aSurfaceContext, int aX1, int aY1, int aX2, int aY2 )
{
#ifdef EW_USE_EGL
  struct gbm_bo*  next_bo;
  int             waiting_for_flip = 1;
  int             ret;
  fd_set          fds;
  uint32_t        fb_id;
  drmEventContext evctx =
  {
    .version = 2,
    .page_flip_handler = DrmFbFlipCallback
  };

  /* perform the swap if there was something drawn on the screen */
  eglSwapBuffers( EglDisplay, EglSurface );

  next_bo = gbm_surface_lock_front_buffer( GbmSurface );
  fb_id = DrmGetFb( next_bo );
  if ( !fb_id )
    return;

  ret = drmModePageFlip( DrmFd, DrmCrtcId, fb_id,
    DRM_MODE_PAGE_FLIP_EVENT, &waiting_for_flip );
  if ( ret )
    return;

  while ( waiting_for_flip )
  {
    FD_ZERO( &fds );
    FD_SET( 0, &fds );
    FD_SET( DrmFd, &fds );

    ret = select( DrmFd + 1, &fds, NULL, NULL, NULL );
    if ( ret <= 0 )
      break;
    else if ( FD_ISSET( DrmFd, &fds ) )
      drmHandleEvent( DrmFd, &evctx );
  }

  /* release last buffer to render on again */
  if ( GbmBuffer )
    gbm_surface_release_buffer( GbmSurface, GbmBuffer );

  GbmBuffer = next_bo;
#else

  #if EW_USE_DOUBLE_BUFFER == 1

    uint32_t fb;

    if ( aSurfaceContext == DrmBuffer[ 0 ].map )
      fb =  DrmBuffer[ 0 ].fb;
    else
      fb =  DrmBuffer[ 1 ].fb;

    if ( drmModeSetCrtc( DrmFd, DrmCrtcId, fb, 0, 0, &DrmConnector->connector_id, 1, DrmMode ))
    {
      EwPrint( "EwBspDisplayCommitBuffer: cannot set CRTC for connector %u\n", DrmConnector->connector_id );
    }

  #endif

#endif
}


/* mli, msy */

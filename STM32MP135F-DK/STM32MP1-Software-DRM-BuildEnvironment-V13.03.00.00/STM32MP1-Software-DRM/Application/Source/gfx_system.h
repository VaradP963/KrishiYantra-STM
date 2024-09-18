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
*   This template is responsible to access the grafics subsystem within an
*   embedded Linux environment. The display is accessed by using EGL via the
*   graphics subsystem (e.g. Wayland, DRM, X11 or fbdev).
*
*   Important: This file is intended to be used as a template. Please adapt the
*   implementation and declarations according your particular hardware.
*
*******************************************************************************/

#ifndef GFX_SYSTEM_H
#define GFX_SYSTEM_H

#define GFX_SYSTEM_UNKNOWN                       0
#define GFX_SYSTEM_WINDOWS                       1
#define GFX_SYSTEM_FBDEV                         2
#define GFX_SYSTEM_WAYLAND                       3
#define GFX_SYSTEM_DRM                           4



/* The display interfaces */
#define EW_DISPLAY_INTERFACE_DSI_0     0
#define EW_DISPLAY_INTERFACE_HDMI_0    1
#define EW_DISPLAY_INTERFACE_HDMI_1    2


/******************************************************************************
* TYPE:
*   XGfxSystemInfo
*
* DESCRIPTION:
*   The structure XGfxSystemInfo contains information regarding the graphics
*   system.
*
* ELEMENTS:
*   Type          - Type of Grahics System.
*   NativeDisplay - The native display handle.
*   Display       - The display handle of the GFX system.
*   Surface       - The surface handle of the GFX system.
*   Width         - The width of the GFX system.
*   Height        - The height of the GFX system.
*   FrameBuffer   - The frame buffer.
*   DoubleBuffer  - The double buffer (2nd frame buffer).
*   PixelFormat   - The pixel format as FourCC code.
*   Pitch         - The byte-distance in the framebuffer between two pixel rows
*   Context       - The context of the GFX system.
*
******************************************************************************/
typedef struct
{
  int         Type;
  void *      NativeDisplay;
  void *      Display;
  const char* Interface;
  void *      Surface;
  int         Width;
  int         Height;
  void *      FrameBuffer;
  void *      DoubleBuffer;
  const char* PixelFormat;
  int         Pitch;
  void *      Context;
} XGfxSystemInfo;


#ifdef __cplusplus
  extern "C"
  {
#endif


/*******************************************************************************
* FUNCTION:
*   GfxSystemInit
*
* DESCRIPTION:
*   The function GfxSystemInit is responsible to get an access to the
*   graphics subsystem. In case that the underlying graphics subsystem contains
*   a window manager, the given size is used to create a suitable window.
*   Otherwise, the given size is ignored, because the size of the framebuffer
*   cannot be changed.
*
* ARGUMENTS:
*   NONE.
*
* RETURN VALUE:
*   Returns 1 if successful, 0 otherwise.
*
*******************************************************************************/
int GfxSystemInit
(
  void
);


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
void GfxSystemDone( void );


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
int GfxSystemProcess( void );


/*******************************************************************************
* FUNCTION:
*   GfxSystemCreateSurface
*
* DESCRIPTION:
*   The function GfxSystemCreateSurface creates a graphic surface with the
*   given dimensions.
*
* ARGUMENTS:
*   aWidth  - Required surface width.
*   aHeight - Required surface height.
*
* RETURN VALUE:
*   Returns 1, if native window could be created, otherwise 0.
*
*******************************************************************************/
int GfxSystemCreateSurface
(
  int aWidth,
  int aHeight
);


/*******************************************************************************
* FUNCTION:
*   GfxSystemCreateSubSurface
*
* DESCRIPTION:
*   The function GfxSystemCreateSubSurface creates a sub surface that is located
*   below the main surface.
*
* ARGUMENTS:
*   aWidth  - Required surface width.
*   aHeight - Required surface height.
*
* RETURN VALUE:
*   Returns the handle of the new sub surface or NULL if creation has failed.
*
*******************************************************************************/

void * GfxSystemCreateSubSurface
(
  int aWidth,
  int aHeight
);


/*******************************************************************************
* FUNCTION:
*   GfxSystemDestroySubSurface
*
* DESCRIPTION:
*   The function GfxSystemDestroySubSurface the given sub surface.
*
* ARGUMENTS:
*   aSubSurface  - SubSurface handle.
*
* RETURN VALUE:
*   None.
*
*******************************************************************************/

void GfxSystemDestroySubSurface(
  void * aSubSurface
);


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
*   None.
*
*******************************************************************************/
void GfxSystemUpdateSurface
(
  void * aSurfaceContext,
  int    aX1,
  int    aY1,
  int    aX2,
  int    aY2
);


/*******************************************************************************
* FUNCTION:
*   GfxSystemWaitForCompletion
*
* DESCRIPTION:
*   The function GfxSystemWaitForCompletion is called to ensure that all pending
*   activities of the display system are completed, so that the rendering of the
*   next frame can start.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void GfxSystemWaitForCompletion( void );


/*******************************************************************************
* FUNCTION:
*   GfxSystemSetClut
*
* DESCRIPTION:
*   The function EwBspDisplaySetClut is used to update the hardware CLUT of the
*   current framebuffer.
*
* ARGUMENTS:
*   aClut - Pointer to a color lookup table with 256 entries.
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void GfxSystemSetClut
(
  unsigned long* aClut
);


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
void GfxSystemGetInfo
(
  XGfxSystemInfo* aGfxSystemInfo
);


#ifdef EW_BSP_TOUCH_H
/*******************************************************************************
* FUNCTION:
*   GfxSystemGetTouchEvents
*
* DESCRIPTION:
*   The function GfxSystemGetTouchEvents returns the current touch position and
*   touch status of the different fingers. The returned number of touch events
*   indicates the number of XTouchEvent that contain position and status
*   information.
*   The orientation of the touch positions is adjusted to match GUI coordinates.
*   If the hardware supports only single touch, the finger number is always 0.
*
* ARGUMENTS:
*   aToucEvents  - Pointer to return array of XTouchEvent.
*
* RETURN VALUE:
*   Returns the number of available touch events.
*
*******************************************************************************/
int GfxSystemGetTouchEvents
(
  XTouchEvent ** aToucEvents
);
#endif


#ifdef EW_BSP_CURSOR_H
/*******************************************************************************
* FUNCTION:
*   GfxSystemGetCursorEvent
*
* DESCRIPTION:
*   The function GfxSystemGetCursorEvent returns the current cursor state and the
*   cursor position.
*
* ARGUMENTS:
*   aCursorEvent  - Pointer to return the cursor event.
*
* RETURN VALUE:
*   Returns 1 in case of a valid cursor event, 0 otherwise.
*
*******************************************************************************/
int GfxSystemGetCursorEvent
(
  XCursorEvent* aCursorEvent
);
#endif


#ifdef EW_BSP_KEYBOARD_H
/*******************************************************************************
* FUNCTION:
*   GfxSystemGetKeyboardEvent
*
* DESCRIPTION:
*   The function GfxSystemGetKeyboardEvent returns the latest keyboard event.
*
* ARGUMENTS:
*   aKeyboardEvent  - Pointer to return the keyboard event.
*
* RETURN VALUE:
*   Returns 1 in case of a valid keyboard event, 0 otherwise.
*
*******************************************************************************/
int GfxSystemGetKeyboardEvent
(
  XKeyboardEvent * aEvent
);
#endif


#ifdef __cplusplus
  }
#endif

#endif /* GFX_SYSTEM_H */


/* msy */

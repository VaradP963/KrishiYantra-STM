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
*   generated UI application and the board support package (BSP) of a dedicated
*   target.
*   This template is responsible to initialize the touch driver of the display
*   hardware and to receive the touch events for the UI application.
*   Important: This file is intended to be used as a template. Please adapt the
*   implementation according your particular hardware.
*
*******************************************************************************/

#include <string.h>
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/fcntl.h>

#include <linux/input.h>

#include "ewrte.h"

#include "ew_bsp_os.h"
#include "ew_bsp_display.h"
#include "ew_bsp_touch.h"

#define TOUCH_DEVICE_NAME               "/dev/input/event"
#define DEVICE_NAME_MAX_LEN             31
#define INPUT_DEVICE_MAX_NUMBER         8

#define NO_OF_FINGERS                   10
#define DELTA_TOUCH                     16
#define DELTA_TIME                      500

/* additional touch flag to indicate idle state */
#define EW_BSP_TOUCH_IDLE               0

/* additional touch flag to indicate hold state */
#define EW_BSP_TOUCH_HOLD               4

#ifndef EW_TOUCH_INIT_DELAY
  #define EW_TOUCH_INIT_DELAY 0
#endif

/* structure to store internal touch information for one finger */
typedef struct
{
  int           XPos;      /* horizontal position in pixel */
  int           YPos;      /* vertical position in pixel */
  unsigned long Ticks;     /* time of recent touch event */
  int           TouchId;   /* constant touch ID provided by touch controller */
  unsigned char State;     /* current state within a touch cycle */
} XTouchData;

static int           ShutDown         =  0;
static pthread_t     TouchEventThread =  0;

static int           GuiWidth         =  0; /* width of the GUI application (EwScreenSize.X) */
static int           GuiHeight        =  0; /* height of the GUI application (EwScreenSize.Y) */
static int           ViewportX        =  0; /* x origin of the viewport (= area where the GUI will be drawn) */
static int           ViewportY        =  0; /* y origin of the viewport (= area where the GUI will be drawn) */
static int           ViewportWidth    =  0; /* width of the viewport */
static int           ViewportHeight   =  0; /* height of the viewport */
static int           TouchAreaMinX    =  0; /* raw touch value of the leftmost position on the touch screen */
static int           TouchAreaMinY    =  0; /* raw touch value of the topmost position on the touch screen */
static int           TouchAreaMaxX    =  0; /* raw touch value of the rightmost position on the touch screen */
static int           TouchAreaMaxY    =  0; /* raw touch value of the bottommost position on the touch screen */
static int           DisplayWidth     =  0; /* width of the display */
static int           DisplayHeight    =  0; /* height of the display */
static int           TouchDev         = -1;
static int           IsMultiTouch     =  0;
static int           IsInitalized     =  0;

static XTouchEvent   TouchEvent[ NO_OF_FINGERS ];
static XTouchData    TouchData[ NO_OF_FINGERS ];

/* current touch information read from input device within touch event thread */
static int           TouchX[ NO_OF_FINGERS ];
static int           TouchY[ NO_OF_FINGERS ];
static int           TouchId[ NO_OF_FINGERS ];
static int           TouchDown[ NO_OF_FINGERS ];


/*******************************************************************************
* FUNCTION:
*   EwBspTouchEventThread
*
* DESCRIPTION:
*   The function EwBspTouchEventThread implements an independend thread to read data
*   from the touch controller and to provide them as touch events for the
*   EmWi application. The thread is running until the flag ShutDown is set.
*   This function may be adapted to the touch driver of your hardware.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   Zero.
*
*******************************************************************************/
static void* EwBspTouchEventThread( void* aArg )
{
  struct input_event events[ 64 ];
  int                i;
  int                rd;
  int                touchX = 0;
  int                touchY = 0;
  int                touchSlot = 0;
  int                touchId = -1;

  /* clear all current touch state variables */
  for ( i = 0; i < NO_OF_FINGERS; i++ )
  {
    TouchX[ i ]    = 0;
    TouchY[ i ]    = 0;
    TouchId[ i ]   = -1;
    TouchDown[ i ] = 0;
  }

  /* loop forever until main application is finished */
  while ( !ShutDown )
  {
    fd_set fds;
    FD_ZERO( &fds );
    FD_SET( TouchDev, &fds);
    struct timeval timeOut = { 0, 10000 };

    /* check for touch events before reading in order to avoid blocking thread */
    if ( select( TouchDev + 1, &fds, 0, 0, &timeOut ) != 1)
      continue;

    /* read touch event from input device */
    rd = read( TouchDev, events, sizeof( struct input_event ) * 64 );

    /* check for right size - otherwise terminate */
    if ( rd < (int) sizeof( struct input_event ) )
      break;

    for ( i = 0; i < rd / sizeof( struct input_event ); i++ )
    {
      unsigned int type;
      unsigned int code;
      long         value;

      type  = events[ i ].type;
      code  = events[ i ].code;
      value = events[ i ].value;

      if ( IsMultiTouch )
      {
        /* store current read parameter if report event occurs or if slot changes */
        if (( type == SYN_MT_REPORT ) || ( type == SYN_REPORT ) || (( type == EV_ABS ) && ( code == ABS_MT_SLOT )))
        {
          if (( touchSlot >= 0 ) && ( touchSlot < NO_OF_FINGERS ))
          {
            if ( touchId != -1 )
            {
              TouchX[ touchSlot ]    = touchX;
              TouchY[ touchSlot ]    = touchY;
              TouchId[ touchSlot ]   = touchId;
              TouchDown[ touchSlot ] = 1;
            }
            else
              TouchDown[ touchSlot ] = 0;

            // EwPrint( "Multi-touch: slot %d, id %d, x %d, y %d, down %d\n", touchSlot, TouchId[ touchSlot ], TouchX[ touchSlot ], TouchY[ touchSlot ], TouchDown[ touchSlot ]);
          }
        }

        /* read next touch parameters */
        if ( type == EV_ABS )
        {
          if ( code == ABS_MT_POSITION_X )
            touchX = value;
          else if ( code == ABS_MT_POSITION_Y )
            touchY = value;
          else if ( code == ABS_MT_TRACKING_ID )
            touchId = value;
          else if ( code == ABS_MT_SLOT )
          {
            touchSlot = value;

            /* read back all current values when slot has changed */
            if (( touchSlot >= 0 ) && ( touchSlot < NO_OF_FINGERS ))
            {
              touchX  = TouchX[ touchSlot ];
              touchY  = TouchY[ touchSlot ];
              touchId = TouchId[ touchSlot ];
            }
          }
        }
      }
      else
      {
        /* store current read parameter if single touch event occurs */
        if ( type == SYN_REPORT )
        {
          if ( touchId != -1 )
          {
            TouchX[ touchSlot ]    = touchX;
            TouchY[ touchSlot ]    = touchY;
            TouchId[ touchSlot ]   = touchId;
            TouchDown[ touchSlot ] = 1;
          }
          else
            TouchDown[ touchSlot ] = 0;

          // EwPrint( "Single-touch: id %d, x %d, y %d, down %d\n", TouchId[ touchSlot ], TouchX[ touchSlot ], TouchY[ touchSlot ], TouchDown[ touchSlot ]);
        }
        else if (( type == EV_KEY ) && ( code == BTN_TOUCH ))
        {
          if ( value == 1 ) /* down / touched */
            touchId = 0;
          else if ( value == 0 ) /* up / not touched */
            touchId = -1;
        }
        else if ( type == EV_ABS )
        {
          if ( code == ABS_X )
            touchX = value;
          else if ( code == ABS_Y )
            touchY = value;
        }
      }
    }
  }
  return 0;
}


/* Helper function to determine the touch area (minX, minY, maxX, maxY) from the touch device */
static int GetTouchArea( int aFileDesc )
{
  struct input_absinfo absinfo;

  /* try to get min/max values of touch area in X direction from touch device */
  TouchAreaMinX = 0;
  TouchAreaMaxX = 0;


  if ( ioctl( aFileDesc, EVIOCGABS( ABS_MT_POSITION_X ), &absinfo ) >= 0 )
  {
    TouchAreaMinX = absinfo.minimum;
    TouchAreaMaxX = absinfo.maximum;
    IsMultiTouch = 1;
  }

  if ( TouchAreaMinX==0 && TouchAreaMaxX==0 && ioctl( aFileDesc, EVIOCGABS( ABS_X ), &absinfo ) >= 0 )
  {
    TouchAreaMinX = absinfo.minimum;
    TouchAreaMaxX = absinfo.maximum;
    IsMultiTouch = 0;
  }

  if ( TouchAreaMinX==0 && TouchAreaMaxX==0 )
    return 0;

  /* try to get min/max values of touch area in Y direction from touch device */
  TouchAreaMinY = 0;
  TouchAreaMaxY = 0;

  if ( ioctl( aFileDesc, EVIOCGABS( ABS_MT_POSITION_Y ), &absinfo ) >= 0 )
  {
    TouchAreaMinY = absinfo.minimum;
    TouchAreaMaxY = absinfo.maximum;
  }

  if ( TouchAreaMinY==0 && TouchAreaMaxY==0 && ioctl( aFileDesc, EVIOCGABS( ABS_Y ), &absinfo ) >= 0 )
  {
    TouchAreaMinY = absinfo.minimum;
    TouchAreaMaxY = absinfo.maximum;
  }

  if ( TouchAreaMinY==0 && TouchAreaMaxY==0 )
    return 0;

  return 1;
}


/*******************************************************************************
* FUNCTION:
*   EwBspTouchInit
*
* DESCRIPTION:
*   Initalizes the touch driver interface. The provided display information is
*   used to configure the touch driver interface so that a proper mapping of
*   touch coordinates to GUI coordinates can be done.
*
* ARGUMENTS:
*   aGuiWidth,
*   aGuiHeight   - Size of the GUI in pixel.
*   aDisplayInfo - Display info data structure.
*
* RETURN VALUE:
*   Returns 1 if successful, 0 otherwise.
*
*******************************************************************************/
int EwBspTouchInit( int aGuiWidth, int aGuiHeight, XDisplayInfo* aDisplayInfo )
{
  pthread_attr_t   threadAttr;
  char             touchDevName[ DEVICE_NAME_MAX_LEN + 1 ];
  char*            pTouchDevName;
  int              i;
  int              result;


  /* clear all touch state variables */
  memset( TouchData, 0, sizeof( TouchData ));
  memset( TouchEvent, 0, sizeof( TouchEvent ));
  memset( TouchId, -1, sizeof( TouchId ));

  /* adjust size of gui if viewport is rotated */
  #if (( EW_SURFACE_ROTATION == 90 ) || ( EW_SURFACE_ROTATION == 270 ))
    GuiWidth  = aGuiHeight;
    GuiHeight = aGuiWidth;
  #else
    GuiWidth  = aGuiWidth;
    GuiHeight = aGuiHeight;
  #endif

  /* check display info structure */
  if ( !aDisplayInfo )
  {
    EwPrint( "EwBspTouchInit: Invalid DisplayInfo!\n" );
    goto onError;
  }

  /* take physical size of display from provided display info structure */
  ViewportX      = ( aDisplayInfo->DisplayWidth  - GuiWidth ) / 2;
  ViewportY      = ( aDisplayInfo->DisplayHeight - GuiHeight ) / 2;
  ViewportWidth  = GuiWidth;
  ViewportHeight = GuiHeight;
  DisplayWidth   = aDisplayInfo->DisplayWidth;
  DisplayHeight  = aDisplayInfo->DisplayHeight;

  if ( ViewportWidth == 0 || ViewportHeight == 0 )
  {
    EwPrint( "EwBspTouchInit: Invalid Viewport size!\n" );
    goto onError;
  }

  /* optionally   wait some time until touch device is available */
  EwBspOsDelay( EW_TOUCH_INIT_DELAY );

  /* take optional touch device name from environment varaible */
  if (( pTouchDevName = getenv( "EW_TOUCHDEVICE" )) == NULL )
    pTouchDevName = touchDevName;

  /* otherwise search for input device that can provide touch events */
  for ( i = 0; i <= INPUT_DEVICE_MAX_NUMBER; i++ )
  {
    if ( pTouchDevName == touchDevName )
      snprintf( touchDevName, DEVICE_NAME_MAX_LEN, TOUCH_DEVICE_NAME "%d", i );
    else
      i = INPUT_DEVICE_MAX_NUMBER;

    /* get access to touch events from input device */
    TouchDev = open( pTouchDevName, O_RDONLY );
    if ( TouchDev < 0 )
      continue;

    if ( !GetTouchArea( TouchDev ))
    {
      close( TouchDev );
      continue;
    }
    break;
  }

  if ( i > INPUT_DEVICE_MAX_NUMBER )
  {
    EwPrint( "EwBspTouchInit: No touch input device found!\n" );
    goto onError;
  }

  /* use manual touch calibration if requested */
  #ifdef EW_TOUCH_AREA_MIN_X

    TouchAreaMinX = EW_TOUCH_AREA_MIN_X;

  #endif

  #ifdef EW_TOUCH_AREA_MIN_Y

    TouchAreaMinY = EW_TOUCH_AREA_MIN_Y;

  #endif

  #ifdef EW_TOUCH_AREA_MAX_X

    TouchAreaMaxX = EW_TOUCH_AREA_MAX_X;

  #endif

  #ifdef EW_TOUCH_AREA_MAX_Y

    TouchAreaMaxY = EW_TOUCH_AREA_MAX_Y;

  #endif

  /* check touch calibration and configuration to avoid division by zero */
  if (( TouchAreaMaxX == TouchAreaMinX ) || ( TouchAreaMaxY == TouchAreaMinY ))
  {
    EwPrint( "EwBspTouchInit: Invalid touch area!\n" );
    goto onError;
  }


  #ifdef EW_PRINT_TOUCH_DATA

    EwPrint( "\n" );
    EwPrint( "EwBspTouchInit: Using input device '%s'\n", pTouchDevName );
    EwPrint( "EwBspTouchInit: Using TouchArea %d, %d - %d, %d\n", TouchAreaMinX, TouchAreaMinY, TouchAreaMaxX, TouchAreaMaxY );
    EwPrint( "EwBspTouchInit: MultiTouchMode: %s\n", IsMultiTouch ? "yes" : "no" );

  #endif

  /* create thread for touch events */
  ShutDown = 0;
  pthread_attr_init( &threadAttr );
  pthread_attr_setdetachstate( &threadAttr, PTHREAD_CREATE_JOINABLE );
  result = pthread_create( &TouchEventThread, &threadAttr, EwBspTouchEventThread, NULL );
  pthread_attr_destroy( &threadAttr );
  if ( result != 0 )
  {
    EwPrint( "EwBspTouchInit: Cannot create working thread!\n" );
    goto onError;
  }


  IsInitalized = 1;
  return 1;

onError:

  EwBspTouchDone();
  return 0;
}


/*******************************************************************************
* FUNCTION:
*   EwBspTouchDone
*
* DESCRIPTION:
*   Terminates the touch driver.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspTouchDone( void )
{
  /* terminate the TouchEventThread */
  ShutDown = 1;

  if ( TouchEventThread )
    pthread_join( TouchEventThread, NULL );

  /* finally, close the input device */
  if ( TouchDev >= 0 )
    close( TouchDev );

  IsInitalized = 0;
}


/*******************************************************************************
* FUNCTION:
*   EwBspTouchGetEvents
*
* DESCRIPTION:
*   The function EwBspTouchGetEvents reads the current touch positions from the
*   touch driver and returns the current touch position and touch status of the
*   different fingers. The returned number of touch events indicates the number
*   of XTouchEvent that contain position and status information.
*   The orientation of the touch positions is adjusted to match GUI coordinates.
*   If the hardware supports only single touch, the finger number is always 0.
*
* ARGUMENTS:
*   aTouchEvent - Pointer to return array of XTouchEvent.
*
* RETURN VALUE:
*   Returns the number of detected touch events, otherwise 0.
*
*******************************************************************************/
int EwBspTouchGetEvents( XTouchEvent** aTouchEvent )
{
  int           touchX;
  int           touchY;
  int           x, y;
  int           t;
  int           f;
  unsigned long ticks;
  int           noOfEvents = 0;
  int           finger;
  char          identified[ NO_OF_FINGERS ];
  XTouchData*   touch;


  if ( !IsInitalized )
    return 0;

  /* all fingers have the state unidentified */
  memset( identified, 0, sizeof( identified ));

  /* get current time in ms */
  ticks = EwGetTicks();

  /* iterate through all potential touch events from the touch event thread */
  for ( t = 0; t < NO_OF_FINGERS; t++ )
  {
    /* check for valid touch id */
    if ( TouchId[ t ] < 0 )
      continue;

    #ifdef EW_PRINT_TOUCH_DATA

      EwPrint( "Raw touch data: id %d, x %d, y %d, down %d\n", TouchId[ t ], TouchX[ t ], TouchY[ t ], TouchDown[ t ]);

    #endif

    /* apply swapping of raw touch coordinates if required */
    #if ( EW_TOUCH_SWAP_XY )

      touchX = TouchY[ t ];
      touchY = TouchX[ t ];

    #else

      touchX = TouchX[ t ];
      touchY = TouchY[ t ];

    #endif

    /* convert raw touch coordinates into display coordinates */
    touchX = (( touchX - TouchAreaMinX ) * DisplayWidth ) / ( TouchAreaMaxX - TouchAreaMinX );
    touchY = (( touchY - TouchAreaMinY ) * DisplayHeight ) / ( TouchAreaMaxY - TouchAreaMinY );

    /* convert display coordinates into GUI coordinates */
    #if ( EW_SURFACE_ROTATION == 90 )

      x = ( touchY - ViewportY );
      y = ( ViewportWidth - ( touchX - ViewportX ));

    #elif ( EW_SURFACE_ROTATION == 270 )

      x = ( ViewportHeight - ( touchY - ViewportY ));
      y = ( touchX - ViewportX );

    #elif ( EW_SURFACE_ROTATION == 180 )

      x = ( ViewportWidth - ( touchX - ViewportX ));
      y = ( ViewportHeight - ( touchY - ViewportY ));

    #else

      x = ( touchX - ViewportX );
      y = ( touchY - ViewportY );

    #endif

    #ifdef EW_PRINT_TOUCH_DATA

      EwPrint( "GUI coordinates: x %d, y %d\n", x, y );

    #endif

    /* iterate through all fingers to find a finger that matches with the provided touch event */
    for ( finger = -1, f = 0; f < NO_OF_FINGERS; f++ )
    {
      touch = &TouchData[ f ];

      /* check if the finger is already active */
      if (( touch->State != EW_BSP_TOUCH_IDLE ) && ( touch->TouchId == TouchId[ t ]))
      {
        finger = f;
        break;
      }

      if ( TouchDown[ t ] == 0 )
        continue;

      /* check if the finger was used within the recent time span and if the touch position is in the vicinity */
      if (( touch->State == EW_BSP_TOUCH_IDLE ) && ( ticks < touch->Ticks + DELTA_TIME )
        && ( x > touch->XPos - DELTA_TOUCH ) && ( x < touch->XPos + DELTA_TOUCH )
        && ( y > touch->YPos - DELTA_TOUCH ) && ( y < touch->YPos + DELTA_TOUCH ))
        finger = f;

      /* otherwise take the first free finger */
      if (( touch->State == EW_BSP_TOUCH_IDLE ) && ( finger == -1 ))
        finger = f;
    }

    /* determine the state within a touch cycle and assign the touch parameter to the found finger */
    if ( finger >= 0 )
    {
      touch = &TouchData[ finger ];
      identified[ finger ] = 1;

      if ( TouchDown[ t ] == 1 )
      {
        /* check for start of touch cycle */
        if ( touch->State == EW_BSP_TOUCH_IDLE )
          touch->State = EW_BSP_TOUCH_DOWN;
        else
        {
          /* check if the finger has moved */
          if (( touch->XPos != x ) || ( touch->YPos != y ))
            touch->State = EW_BSP_TOUCH_MOVE;
          else
            touch->State = EW_BSP_TOUCH_HOLD;
        }
      }
      else if ( touch->State != EW_BSP_TOUCH_IDLE )
        touch->State = EW_BSP_TOUCH_UP;

      /* store current touch parameter */
      touch->XPos    = x;
      touch->YPos    = y;
      touch->TouchId = TouchId[ t ];
      touch->Ticks   = ticks;

      /* clear touch id when touch cycle is completed - no further data required for this id */
      if ( touch->State == EW_BSP_TOUCH_UP )
        TouchId[ t ] = -1;
    }
  }

  /* prepare sequence of touch events suitable for Embedded Wizard GUI application */
  for ( f = 0; f < NO_OF_FINGERS; f++ )
  {
    touch = &TouchData[ f ];

    /* begin of a touch cycle */
    if ( identified[ f ] && ( touch->State == EW_BSP_TOUCH_DOWN ))
      TouchEvent[ noOfEvents ].State = EW_BSP_TOUCH_DOWN;

    /* move within a touch cycle */
    else if ( identified[ f ] && ( touch->State == EW_BSP_TOUCH_MOVE ))
      TouchEvent[ noOfEvents ].State = EW_BSP_TOUCH_MOVE;

    /* end of a touch cycle */
    else if (( !identified[ f ] && ( touch->State != EW_BSP_TOUCH_IDLE )) || ( touch->State == EW_BSP_TOUCH_UP ))
    {
      TouchEvent[ noOfEvents ].State = EW_BSP_TOUCH_UP;
      touch->State = EW_BSP_TOUCH_IDLE;
    }
    else
      continue;

    TouchEvent[ noOfEvents ].XPos   = touch->XPos;
    TouchEvent[ noOfEvents ].YPos   = touch->YPos;
    TouchEvent[ noOfEvents ].Finger = f;

    #ifdef EW_PRINT_TOUCH_EVENTS

      EwPrint( "Touch event for finger %d with state %d ( %4d, %4d )\n", f, TouchEvent[ noOfEvents ].State, TouchEvent[ noOfEvents ].XPos, TouchEvent[ noOfEvents ].YPos );

    #endif

    noOfEvents++;
  }

  /* return the prepared touch events and the number of prepared touch events */
  if ( aTouchEvent )
    *aTouchEvent = TouchEvent;

  return noOfEvents;
}


/* msy */

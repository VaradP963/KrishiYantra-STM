/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This file was generated automatically by Embedded Wizard Studio.
*
* Please do not make any modifications of this file! The modifications are lost
* when the file is generated again by Embedded Wizard Studio!
*
* The template of this heading text can be found in the file 'head.ewt' in the
* directory 'Platforms' of your Embedded Wizard installation directory. If you
* wish to adapt this text, please copy the template file 'head.ewt' into your
* project directory and edit the copy only. Please avoid any modifications of
* the original template file!
*
* Version  : 13.05
* Profile  : Profile
* Platform : Linux.Software.RGBA8888
*
*******************************************************************************/

#ifndef _ApplicationSensorScreen_H
#define _ApplicationSensorScreen_H

#ifdef __cplusplus
  extern "C"
  {
#endif

#include "ewrte.h"
#if ( EW_RTE_VERSION >> 16 ) != 13
  #error Wrong version of Embedded Wizard Runtime Environment.
#endif

#include "ewgfx.h"
#if ( EW_GFX_VERSION >> 16 ) != 13
  #error Wrong version of Embedded Wizard Graphics Engine.
#endif

#include "_ApplicationBaseScreen.h"
#include "_CoreSimpleTouchHandler.h"
#include "_EffectsFadeInOutTransition.h"
#include "_EffectsInt32Effect.h"
#include "_ViewsImage.h"
#include "_ViewsText.h"
#include "_WidgetSetGauge.h"
#include "_WidgetSetValueDisplay.h"
#include "_WidgetSetValueDisplayConfig.h"
#include "_WidgetSetVerticalValueBar.h"

/* Forward declaration of the class Application::SensorScreen */
#ifndef _ApplicationSensorScreen_
  EW_DECLARE_CLASS( ApplicationSensorScreen )
#define _ApplicationSensorScreen_
#endif

/* Forward declaration of the class Core::DialogContext */
#ifndef _CoreDialogContext_
  EW_DECLARE_CLASS( CoreDialogContext )
#define _CoreDialogContext_
#endif

/* Forward declaration of the class Core::Group */
#ifndef _CoreGroup_
  EW_DECLARE_CLASS( CoreGroup )
#define _CoreGroup_
#endif

/* Forward declaration of the class Core::KeyPressHandler */
#ifndef _CoreKeyPressHandler_
  EW_DECLARE_CLASS( CoreKeyPressHandler )
#define _CoreKeyPressHandler_
#endif

/* Forward declaration of the class Core::LayoutContext */
#ifndef _CoreLayoutContext_
  EW_DECLARE_CLASS( CoreLayoutContext )
#define _CoreLayoutContext_
#endif

/* Forward declaration of the class Core::TaskQueue */
#ifndef _CoreTaskQueue_
  EW_DECLARE_CLASS( CoreTaskQueue )
#define _CoreTaskQueue_
#endif

/* Forward declaration of the class Core::View */
#ifndef _CoreView_
  EW_DECLARE_CLASS( CoreView )
#define _CoreView_
#endif

/* Forward declaration of the class Effects::Fader */
#ifndef _EffectsFader_
  EW_DECLARE_CLASS( EffectsFader )
#define _EffectsFader_
#endif

/* Forward declaration of the class Graphics::Canvas */
#ifndef _GraphicsCanvas_
  EW_DECLARE_CLASS( GraphicsCanvas )
#define _GraphicsCanvas_
#endif


/* Deklaration of class : 'Application::SensorScreen' */
EW_DEFINE_FIELDS( ApplicationSensorScreen, ApplicationBaseScreen )
  EW_OBJECT  ( Image,           ViewsImage )
  EW_OBJECT  ( Text,            ViewsText )
  EW_OBJECT  ( Gauge,           WidgetSetGauge )
  EW_OBJECT  ( Gauge1,          WidgetSetGauge )
  EW_OBJECT  ( ValueDisplay,    WidgetSetValueDisplay )
  EW_OBJECT  ( VerticalValueBar, WidgetSetVerticalValueBar )
  EW_OBJECT  ( SimpleTouchHandler1, CoreSimpleTouchHandler )
  EW_OBJECT  ( Text1,           ViewsText )
  EW_OBJECT  ( Text2,           ViewsText )
  EW_OBJECT  ( Text3,           ViewsText )
  EW_OBJECT  ( ValueDisplay1,   WidgetSetValueDisplay )
  EW_OBJECT  ( FadeInOutTransition, EffectsFadeInOutTransition )
  EW_OBJECT  ( Int32Effect,     EffectsInt32Effect )
  EW_OBJECT  ( ValueDisplayConfig, WidgetSetValueDisplayConfig )
  EW_OBJECT  ( Int33Effect,     EffectsInt32Effect )
  EW_OBJECT  ( Int34Effect,     EffectsInt32Effect )
EW_END_OF_FIELDS( ApplicationSensorScreen )

/* Virtual Method Table (VMT) for the class : 'Application::SensorScreen' */
EW_DEFINE_METHODS( ApplicationSensorScreen, ApplicationBaseScreen )
  EW_METHOD( initLayoutContext, void )( CoreRectView _this, XRect aBounds, CoreOutline 
    aOutline )
  EW_METHOD( GetRoot,           CoreRoot )( CoreView _this )
  EW_METHOD( Draw,              void )( CoreGroup _this, GraphicsCanvas aCanvas, 
    XRect aClip, XPoint aOffset, XInt32 aOpacity, XBool aBlend )
  EW_METHOD( GetClipping,       XRect )( CoreGroup _this )
  EW_METHOD( HandleEvent,       XObject )( CoreView _this, CoreEvent aEvent )
  EW_METHOD( CursorHitTest,     CoreCursorHit )( CoreGroup _this, XRect aArea, XInt32 
    aFinger, XInt32 aStrikeCount, CoreView aDedicatedView, CoreView aStartView, 
    XSet aRetargetReason )
  EW_METHOD( AdjustDrawingArea, XRect )( CoreGroup _this, XRect aArea )
  EW_METHOD( ArrangeView,       XPoint )( CoreRectView _this, XRect aBounds, XEnum 
    aFormation )
  EW_METHOD( MoveView,          void )( CoreRectView _this, XPoint aOffset, XBool 
    aFastMove )
  EW_METHOD( GetExtent,         XRect )( CoreRectView _this )
  EW_METHOD( ChangeViewState,   void )( CoreGroup _this, XSet aSetState, XSet aClearState )
  EW_METHOD( OnSetBounds,       void )( CoreGroup _this, XRect value )
  EW_METHOD( OnSetFocus,        void )( CoreGroup _this, CoreView value )
  EW_METHOD( OnSetBuffered,     void )( CoreGroup _this, XBool value )
  EW_METHOD( OnSetOpacity,      void )( CoreGroup _this, XInt32 value )
  EW_METHOD( DispatchEvent,     XObject )( CoreGroup _this, CoreEvent aEvent )
  EW_METHOD( BroadcastEvent,    XObject )( CoreGroup _this, CoreEvent aEvent, XSet 
    aFilter )
  EW_METHOD( UpdateViewState,   void )( CoreGroup _this, XSet aState )
  EW_METHOD( InvalidateArea,    void )( CoreGroup _this, XRect aArea )
EW_END_OF_METHODS( ApplicationSensorScreen )

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationSensorScreen_Init( ApplicationSensorScreen _this, XHandle aArg );

/* 'C' function for method : 'Application::SensorScreen.GoToHome()' */
void ApplicationSensorScreen_GoToHome( ApplicationSensorScreen _this, XObject sender );

/* 'C' function for method : 'Application::SensorScreen.Slot()' */
void ApplicationSensorScreen_Slot( ApplicationSensorScreen _this, XObject sender );

/* 'C' function for method : 'Application::SensorScreen.Slot1()' */
void ApplicationSensorScreen_Slot1( ApplicationSensorScreen _this, XObject sender );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationSensorScreen_H */

/* Embedded Wizard */

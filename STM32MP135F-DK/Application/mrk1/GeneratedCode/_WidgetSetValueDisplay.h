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

#ifndef _WidgetSetValueDisplay_H
#define _WidgetSetValueDisplay_H

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

#include "_CoreGroup.h"

/* Forward declaration of the class Core::DialogContext */
#ifndef _CoreDialogContext_
  EW_DECLARE_CLASS( CoreDialogContext )
#define _CoreDialogContext_
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

/* Forward declaration of the class Views::Text */
#ifndef _ViewsText_
  EW_DECLARE_CLASS( ViewsText )
#define _ViewsText_
#endif

/* Forward declaration of the class WidgetSet::ValueDisplay */
#ifndef _WidgetSetValueDisplay_
  EW_DECLARE_CLASS( WidgetSetValueDisplay )
#define _WidgetSetValueDisplay_
#endif

/* Forward declaration of the class WidgetSet::ValueDisplayConfig */
#ifndef _WidgetSetValueDisplayConfig_
  EW_DECLARE_CLASS( WidgetSetValueDisplayConfig )
#define _WidgetSetValueDisplayConfig_
#endif


/* This class implements a 'value display' widget. The widget is intended to display 
   a numerical value together with the associated unit (e.g. �C or Volt). The actual 
   value is determined in the property @CurrentValue. Since @CurrentValue is 'int32', 
   you can use the properties @CurrentFactor and @CurrentBias to convert the original 
   value to the expected value range. The conversion follows the equation below:
   ValueToDisplay = ( @CurrentValue * @CurrentFactor ) + @CurrentBias
   Alternative to modify directly the property @CurrentValue, the property @Outlet 
   can refer to any other 'int32' property the widget should remain synchronized 
   with. When the referred property is modified by another one, the widget is automatically 
   notified to remain in sync with the property.
   This approach follows the Model-View-Controller (MVC) programming paradigm. Here 
   the value display widget represents the 'View' and the property referred via 
   'Outlet' can be seen as a part of the 'Model'.
   During its lifetime the widget remains always in one of the both states: 'positive' 
   or 'negative'. The state 'positive' is true if the value resulting from the above 
   equation is greater than or equal to 0 (zero). The state 'negative' is true, 
   if the resulting value is less than 0 (zero).
   The exact look and feel of the widget is determined by the 'Value Display Configuration' 
   object assigned to the property @Appearance. The configuration object provides 
   fonts, colors and other configuration parameters needed to construct and display 
   the widget. Usually, you will manage in your project your own configuration objects 
   and customize the value display widgets according to your design expectations.
   Per default the both views 'Value' and 'Unit' are arranged within the widget 
   area independently. In the configuration object you can specify other layout 
   modes to e.g. arrange the unit to appear appended at the right edge of the displayed 
   value.
   For more details regarding the customization of the value display widget see 
   the description of WidgetSet::ValueDisplayConfig class. */
EW_DEFINE_FIELDS( WidgetSetValueDisplay, CoreGroup )
  EW_VARIABLE( textView2,       ViewsText )
  EW_VARIABLE( textView1,       ViewsText )
  EW_PROPERTY( Appearance,      WidgetSetValueDisplayConfig )
  EW_PROPERTY( Outlet,          XRef )
  EW_VARIABLE( valueString,     XString )
  EW_PROPERTY( Unit,            XString )
  EW_PROPERTY( Precision,       XInt32 )
  EW_PROPERTY( CurrentValue,    XInt32 )
  EW_VARIABLE( isNegative,      XBool )
EW_END_OF_FIELDS( WidgetSetValueDisplay )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::ValueDisplay' */
EW_DEFINE_METHODS( WidgetSetValueDisplay, CoreGroup )
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
  EW_METHOD( OnSetBounds,       void )( WidgetSetValueDisplay _this, XRect value )
  EW_METHOD( OnSetFocus,        void )( CoreGroup _this, CoreView value )
  EW_METHOD( OnSetBuffered,     void )( CoreGroup _this, XBool value )
  EW_METHOD( OnSetOpacity,      void )( CoreGroup _this, XInt32 value )
  EW_METHOD( DispatchEvent,     XObject )( CoreGroup _this, CoreEvent aEvent )
  EW_METHOD( BroadcastEvent,    XObject )( CoreGroup _this, CoreEvent aEvent, XSet 
    aFilter )
  EW_METHOD( UpdateViewState,   void )( WidgetSetValueDisplay _this, XSet aState )
  EW_METHOD( InvalidateArea,    void )( CoreGroup _this, XRect aArea )
EW_END_OF_METHODS( WidgetSetValueDisplay )

/* 'C' function for method : 'WidgetSet::ValueDisplay.OnSetBounds()' */
void WidgetSetValueDisplay_OnSetBounds( WidgetSetValueDisplay _this, XRect value );

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void WidgetSetValueDisplay_UpdateViewState( WidgetSetValueDisplay _this, XSet aState );

/* 'C' function for method : 'WidgetSet::ValueDisplay.onLayoutViews()' */
void WidgetSetValueDisplay_onLayoutViews( WidgetSetValueDisplay _this, XObject sender );

/* 'C' function for method : 'WidgetSet::ValueDisplay.onFormatValue()' */
void WidgetSetValueDisplay_onFormatValue( WidgetSetValueDisplay _this, XObject sender );

/* 'C' function for method : 'WidgetSet::ValueDisplay.onConfigChanged()' */
void WidgetSetValueDisplay_onConfigChanged( WidgetSetValueDisplay _this, XObject 
  sender );

/* 'C' function for method : 'WidgetSet::ValueDisplay.onOutlet()' */
void WidgetSetValueDisplay_onOutlet( WidgetSetValueDisplay _this, XObject sender );

/* 'C' function for method : 'WidgetSet::ValueDisplay.OnSetOutlet()' */
void WidgetSetValueDisplay_OnSetOutlet( WidgetSetValueDisplay _this, XRef value );

/* 'C' function for method : 'WidgetSet::ValueDisplay.OnSetUnit()' */
void WidgetSetValueDisplay_OnSetUnit( WidgetSetValueDisplay _this, XString value );

/* 'C' function for method : 'WidgetSet::ValueDisplay.OnSetPrecision()' */
void WidgetSetValueDisplay_OnSetPrecision( WidgetSetValueDisplay _this, XInt32 value );

/* 'C' function for method : 'WidgetSet::ValueDisplay.OnSetCurrentValue()' */
void WidgetSetValueDisplay_OnSetCurrentValue( WidgetSetValueDisplay _this, XInt32 
  value );

/* 'C' function for method : 'WidgetSet::ValueDisplay.OnSetAppearance()' */
void WidgetSetValueDisplay_OnSetAppearance( WidgetSetValueDisplay _this, WidgetSetValueDisplayConfig 
  value );

#ifdef __cplusplus
  }
#endif

#endif /* _WidgetSetValueDisplay_H */

/* Embedded Wizard */

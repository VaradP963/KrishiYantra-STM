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

#ifndef _WidgetSetHorizontalScrollbar_H
#define _WidgetSetHorizontalScrollbar_H

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
#include "_CoreSimpleTouchHandler.h"
#include "_CoreTimer.h"

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

/* Forward declaration of the class Effects::Int32Effect */
#ifndef _EffectsInt32Effect_
  EW_DECLARE_CLASS( EffectsInt32Effect )
#define _EffectsInt32Effect_
#endif

/* Forward declaration of the class Graphics::Canvas */
#ifndef _GraphicsCanvas_
  EW_DECLARE_CLASS( GraphicsCanvas )
#define _GraphicsCanvas_
#endif

/* Forward declaration of the class Views::Border */
#ifndef _ViewsBorder_
  EW_DECLARE_CLASS( ViewsBorder )
#define _ViewsBorder_
#endif

/* Forward declaration of the class Views::Rectangle */
#ifndef _ViewsRectangle_
  EW_DECLARE_CLASS( ViewsRectangle )
#define _ViewsRectangle_
#endif

/* Forward declaration of the class WidgetSet::HorizontalScrollbar */
#ifndef _WidgetSetHorizontalScrollbar_
  EW_DECLARE_CLASS( WidgetSetHorizontalScrollbar )
#define _WidgetSetHorizontalScrollbar_
#endif

/* Forward declaration of the class WidgetSet::HorizontalScrollbarConfig */
#ifndef _WidgetSetHorizontalScrollbarConfig_
  EW_DECLARE_CLASS( WidgetSetHorizontalScrollbarConfig )
#define _WidgetSetHorizontalScrollbarConfig_
#endif


/* This class implements a 'horizontal scrollbar' widget. The widget is intended 
   to show the horizontal scroll position and the size of the actually visible area 
   (view) within the body of a large document (content). The size of the entire 
   scrollable content and the size of the actually visible area are specified in 
   the properties @ContentArea and @ViewArea. The current scroll position is determined 
   by the property @Position. The scrollbar calculates from these values the size 
   and the position of the scrollbar thumb.
   If the scrollbar is configured to handle user inputs (see below) and the user 
   touches the thumb and drags it horizontally, the scrollbar current scroll position 
   (@Position) is adjusted and signal is sent to the slot method stored in the property 
   @OnScroll. By connecting further slot methods to the properties @OnStart and 
   @OnEnd you can react to other events triggered while the user starts and ends 
   the interaction with the scrollbar. With the properties @SnapFirst, @SnapNext 
   and @SnapLast the scrollbar can be configured to automatically snap at predetermined 
   positions when the user finishes the scroll interaction.
   During its lifetime the scrollbar remains always in one of the three states: 
   'disabled', 'default' and 'active'. The state 'disabled' is true for every not 
   available scrollbar (the property @Enabled of the scrollbar is 'false'). Such 
   scrollbars will ignore all user inputs. The state 'default' determines a scrollbar, 
   which is ready to be touched by the user. Finally, the state 'active' is true, 
   if the user actually interacts with the scrollbar (the scrollbar's thumb is pressed).
   The exact look and feel of the scrollbar is determined by the 'Horizontal Scrollbar 
   Configuration' object assigned to the property @Appearance. The configuration 
   object provides bitmaps, colors and other configuration parameters needed to 
   construct and display the scrollbar. Usually, you will manage in your project 
   your own configuration objects and customize the scrollbars according to your 
   design expectations.
   In the configuration object the scrollbar can be configured to disappear automatically 
   when it is not needed (e.g. when the @ViewArea is greater than or equal to the 
   @ContentArea) or it has not been used for a while. In the last case, the scrollbar 
   appears again automatically when one of the properties @Position, @ContentArea 
   or @ViewArea has changed or the user has touched within the scrollbar area and 
   the scrollbar is enabled for user interactions. Furthermore, the show and hide 
   operation can be configured to be performed with an opacity fade-in/out effect.
   In the configuration object you can determine, whether the scrollbar should be 
   able to react to user touch interactions or not. If this mode is enabled, the 
   user can touch and drag the thumb as described above. If this mode is not enabled, 
   the scrollbar serves as a pure passive widget.
   The scrollbar widget provides an additional set of methods useful to query the 
   actual state of the widget (@GetCurrentState(), @GetTransitionStartState(), @GetTransitionEndState(), 
   @GetTransitionProgress()). These methods can be invoked from a slot method assigned 
   to the property @OnUpdate. In this manner you can automatically arrange and updated 
   additional decoration according to the actual state of the widget.
   For more details regarding the customization of the scrollbar see the description 
   of WidgetSet::HorizontalScrollbarConfig class. */
EW_DEFINE_FIELDS( WidgetSetHorizontalScrollbar, CoreGroup )
  EW_OBJECT  ( AutoHideTimer,   CoreTimer )
  EW_OBJECT  ( TouchHandlerTrack, CoreSimpleTouchHandler )
  EW_OBJECT  ( TouchHandlerThumb, CoreSimpleTouchHandler )
  EW_VARIABLE( snapEffect,      EffectsInt32Effect )
  EW_VARIABLE( fadeInOutEffect, EffectsInt32Effect )
  EW_VARIABLE( rectView2,       ViewsRectangle )
  EW_VARIABLE( borderView1,     ViewsBorder )
  EW_PROPERTY( Appearance,      WidgetSetHorizontalScrollbarConfig )
  EW_VARIABLE( touchStartPosition, XInt32 )
  EW_PROPERTY( Position,        XInt32 )
  EW_VARIABLE( prevState,       XChar )
  EW_VARIABLE( autoHideTimerExpired, XBool )
EW_END_OF_FIELDS( WidgetSetHorizontalScrollbar )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::HorizontalScrollbar' */
EW_DEFINE_METHODS( WidgetSetHorizontalScrollbar, CoreGroup )
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
  EW_METHOD( OnSetBounds,       void )( WidgetSetHorizontalScrollbar _this, XRect 
    value )
  EW_METHOD( OnSetFocus,        void )( CoreGroup _this, CoreView value )
  EW_METHOD( OnSetBuffered,     void )( CoreGroup _this, XBool value )
  EW_METHOD( OnSetOpacity,      void )( CoreGroup _this, XInt32 value )
  EW_METHOD( DispatchEvent,     XObject )( CoreGroup _this, CoreEvent aEvent )
  EW_METHOD( BroadcastEvent,    XObject )( CoreGroup _this, CoreEvent aEvent, XSet 
    aFilter )
  EW_METHOD( UpdateViewState,   void )( WidgetSetHorizontalScrollbar _this, XSet 
    aState )
  EW_METHOD( InvalidateArea,    void )( CoreGroup _this, XRect aArea )
EW_END_OF_METHODS( WidgetSetHorizontalScrollbar )

/* 'C' function for method : 'WidgetSet::HorizontalScrollbar.OnSetBounds()' */
void WidgetSetHorizontalScrollbar_OnSetBounds( WidgetSetHorizontalScrollbar _this, 
  XRect value );

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
void WidgetSetHorizontalScrollbar_UpdateViewState( WidgetSetHorizontalScrollbar _this, 
  XSet aState );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbar.onFinishedEffect()' */
void WidgetSetHorizontalScrollbar_onFinishedEffect( WidgetSetHorizontalScrollbar _this, 
  XObject sender );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbar.updateVisibility()' */
void WidgetSetHorizontalScrollbar_updateVisibility( WidgetSetHorizontalScrollbar _this, 
  XObject sender );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbar.onAutoHideTimer()' */
void WidgetSetHorizontalScrollbar_onAutoHideTimer( WidgetSetHorizontalScrollbar _this, 
  XObject sender );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbar.onFinishedSnapEffect()' */
void WidgetSetHorizontalScrollbar_onFinishedSnapEffect( WidgetSetHorizontalScrollbar _this, 
  XObject sender );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbar.onSnapEffect()' */
void WidgetSetHorizontalScrollbar_onSnapEffect( WidgetSetHorizontalScrollbar _this, 
  XObject sender );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbar.onConfigChanged()' */
void WidgetSetHorizontalScrollbar_onConfigChanged( WidgetSetHorizontalScrollbar _this, 
  XObject sender );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbar.onReleaseTrack()' */
void WidgetSetHorizontalScrollbar_onReleaseTrack( WidgetSetHorizontalScrollbar _this, 
  XObject sender );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbar.onPressTrack()' */
void WidgetSetHorizontalScrollbar_onPressTrack( WidgetSetHorizontalScrollbar _this, 
  XObject sender );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbar.onDragThumb()' */
void WidgetSetHorizontalScrollbar_onDragThumb( WidgetSetHorizontalScrollbar _this, 
  XObject sender );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbar.onReleaseThumb()' */
void WidgetSetHorizontalScrollbar_onReleaseThumb( WidgetSetHorizontalScrollbar _this, 
  XObject sender );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbar.onPressThumb()' */
void WidgetSetHorizontalScrollbar_onPressThumb( WidgetSetHorizontalScrollbar _this, 
  XObject sender );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbar.OnGetPosition()' */
XInt32 WidgetSetHorizontalScrollbar_OnGetPosition( WidgetSetHorizontalScrollbar _this );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbar.OnSetPosition()' */
void WidgetSetHorizontalScrollbar_OnSetPosition( WidgetSetHorizontalScrollbar _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbar.OnSetAppearance()' */
void WidgetSetHorizontalScrollbar_OnSetAppearance( WidgetSetHorizontalScrollbar _this, 
  WidgetSetHorizontalScrollbarConfig value );

#ifdef __cplusplus
  }
#endif

#endif /* _WidgetSetHorizontalScrollbar_H */

/* Embedded Wizard */

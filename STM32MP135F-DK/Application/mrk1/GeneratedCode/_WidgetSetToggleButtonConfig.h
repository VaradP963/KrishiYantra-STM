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

#ifndef _WidgetSetToggleButtonConfig_H
#define _WidgetSetToggleButtonConfig_H

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

#include "_WidgetSetWidgetConfig.h"

/* Forward declaration of the class Resources::Font */
#ifndef _ResourcesFont_
  EW_DECLARE_CLASS( ResourcesFont )
#define _ResourcesFont_
#endif

/* Forward declaration of the class WidgetSet::ToggleButtonConfig */
#ifndef _WidgetSetToggleButtonConfig_
  EW_DECLARE_CLASS( WidgetSetToggleButtonConfig )
#define _WidgetSetToggleButtonConfig_
#endif


/* This class implements the functionality permitting you to simply customize the 
   look and feel of a bistable 'toggle button' widget (WidgetSet::ToggleButton). 
   In the practice, you will create an instance of this class, configure its properties 
   with bitmaps, colors and other relevant attributes according to your design expectations 
   and assign such prepared configuration object to the property 'Appearance' of 
   every affected toggle button widget. Thereupon the widgets will use the configuration 
   information provided in the object.
   During its lifetime the button remains always in one of the four states: 'disabled', 
   'default', 'focused' and 'active'. The state 'disabled' is true for every not 
   available button (the property 'Enabled' of the button is 'false'). Such buttons 
   will ignore all user inputs. The state 'default' determines a button, which is 
   ready to be touched by the user or ready to become focused. As soon as the button 
   becomes focused, it switches in the state 'focused'. In this state the user can 
   activate the button by pressing a key on the keyboard. Finally, the state 'active' 
   is true, if the user actually interacts with the button (the button is pressed). 
   At the same time, the toggle button distinguishes between two further states: 
   'on' (checked) and 'off' (unchecked). With the configuration object you can specify 
   the appearance of the button for every state combination individually. For this 
   purpose you should know from which views the button is composed of:
   - 'FaceImage' is a bitmap frame view (Views::Frame) filling per default the entire 
   background of the button unless the area is reduced by using the properties @FaceMarginBottom, 
   @FaceMarginLeft, @FaceMarginRight, @FaceMarginTop. The position can additionally 
   be adjusted for each state individually (@CommonOffOffsetActive, @CommonOffOffsetDefault, 
   @CommonOffOffsetDisabled, @CommonOffOffsetFocused, @CommonOnOffsetActive, @CommonOnOffsetDefault, 
   @CommonOnOffsetDisabled, @CommonOnOffsetFocused). In the configuration object 
   you can individually specify for every button state combination the desired bitmap 
   (@FaceOffBitmapActive, @FaceOffBitmapDefault, @FaceOffBitmapDisabled, @FaceOffBitmapFocused, 
   @FaceOnBitmapActive, @FaceOnBitmapDefault, @FaceOnBitmapDisabled, @FaceOnBitmapFocused), 
   the frame number within the bitmap (@FaceOffFrameActive, @FaceOffFrameDefault, 
   @FaceOffFrameDisabled, @FaceOffFrameFocused, @FaceOnFrameActive, @FaceOnFrameDefault, 
   @FaceOnFrameDisabled, @FaceOnFrameFocused) and opacity or color to tint the bitmap 
   (@FaceOffTintActive, @FaceOffTintDefault, @FaceOffTintDisabled, @FaceOffTintFocused, 
   @FaceOnTintActive, @FaceOnTintDefault, @FaceOnTintDisabled, @FaceOnTintFocused). 
   The button can automatically play animated bitmaps if the corresponding frame 
   number is -1. If desired, with the property @FaceLayout you can also configure 
   the bitmap to be arranged horizontally and vertically instead of filling the 
   entire widget area.
   - 'ThumbRectangle' is a rectangle view (Views::Rectangle) filling per default 
   the entire area of the button unless other constraints (@ThumbLayout), a size 
   alternation (@ThumbOffSizeActive, @ThumbOffSizeDefault, @ThumbOffSizeDisabled, 
   @ThumbOffSizeFocused, @ThumbOnSizeActive, @ThumbOnSizeDefault, @ThumbOnSizeDisabled, 
   @ThumbOnSizeFocused) or a displacement (@ThumbOffOffsetActive, @ThumbOffOffsetDefault, 
   @ThumbOffOffsetDisabled, @ThumbOffOffsetFocused, @ThumbOnOffsetActive, @ThumbOnOffsetDefault, 
   @ThumbOnOffsetDisabled, @ThumbOnOffsetFocused) have been specified. Normally, 
   the thumb has rectangular shape with sharp corners. If desired the corners can 
   be rounded (@ThumbOffCornerRadiusActive, @ThumbOffCornerRadiusDefault, @ThumbOffCornerRadiusDisabled, 
   @ThumbOffCornerRadiusFocused, @ThumbOnCornerRadiusActive, @ThumbOnCornerRadiusDefault, 
   @ThumbOnCornerRadiusDisabled, @ThumbOnCornerRadiusFocused). The thumb can be 
   filled with a solid color (@ThumbOffColorActive, @ThumbOffColorDefault, @ThumbOffColorDisabled, 
   @ThumbOffColorFocused, @ThumbOnColorActive, @ThumbOnColorDefault, @ThumbOnColorDisabled, 
   @ThumbOnColorFocused).
   - 'ThumbBorder' is a border view (Views::Border) surrounding the above described 
   'ThumbRectangle' and lying in front of it. Its size, position and corner radius 
   correspond thus to the of the 'ThumbRectangle'. The thickness of the border (@ThumbOffBorderWidthActive, 
   @ThumbOffBorderWidthDefault, @ThumbOffBorderWidthDisabled, @ThumbOffBorderWidthFocused, 
   @ThumbOnBorderWidthActive, @ThumbOnBorderWidthDefault, @ThumbOnBorderWidthDisabled, 
   @ThumbOnBorderWidthFocused) and its color (@ThumbOffBorderColorActive, @ThumbOffBorderColorDefault, 
   @ThumbOffBorderColorDisabled, @ThumbOffBorderColorFocused, @ThumbOnBorderColorActive, 
   @ThumbOnBorderColorDefault, @ThumbOnBorderColorDisabled, @ThumbOnBorderColorFocused) 
   can be specified.
   - 'ThumbShadow' is a shadow view (Views::Shadow) lying always behind the above 
   described 'ThumbRectangle' view. Its size, position and corner radius correspond 
   thus to the of the 'ThumbRectangle'. However, an additional displacement for 
   the shadow can be specified (@ThumbOffShadowOffsetActive, @ThumbOffShadowOffsetDefault, 
   @ThumbOffShadowOffsetDisabled, @ThumbOffShadowOffsetFocused, @ThumbOnShadowOffsetActive, 
   @ThumbOnShadowOffsetDefault, @ThumbOnShadowOffsetDisabled, @ThumbOnShadowOffsetFocused). 
   The color of the shadow (@ThumbOffShadowColorActive, @ThumbOffShadowColorDefault, 
   @ThumbOffShadowColorDisabled, @ThumbOffShadowColorFocused, @ThumbOnShadowColorActive, 
   @ThumbOnShadowColorDefault, @ThumbOnShadowColorDisabled, @ThumbOnShadowColorFocused) 
   as well as its blur radius (@ThumbOffShadowBlurRadiusActive, @ThumbOffShadowBlurRadiusDefault, 
   @ThumbOffShadowBlurRadiusDisabled, @ThumbOffShadowBlurRadiusFocused, @ThumbOnShadowBlurRadiusActive, 
   @ThumbOnShadowBlurRadiusDefault, @ThumbOnShadowBlurRadiusDisabled, @ThumbOnShadowBlurRadiusFocused) 
   can be specified.
   - 'TrackRectangle' is a rectangle view (Views::Rectangle) filling per default 
   the entire area of the button unless other constraints (@TrackLayout), a size 
   alternation (@TrackSize) or a displacement (@TrackOffset) have been specified. 
   Normally, the track has rectangular shape with sharp corners. If desired the 
   corners can be rounded (@TrackCornerRadius). The track can be filled with a solid 
   color (@TrackOffColorActive, @TrackOffColorDefault, @TrackOffColorDisabled, @TrackOffColorFocused, 
   @TrackOnColorActive, @TrackOnColorDefault, @TrackOnColorDisabled, @TrackOnColorFocused). 
   Track usually serves to visualize the area where thumb is moved and it is usually 
   arranged behind the thumb.
   - 'TrackBorder' is a border view (Views::Border) surrounding the above described 
   'TrackRectangle' and lying in front of it. Its size, position and corner radius 
   correspond thus to the of the 'TrackRectangle'. The thickness of the border (@TrackOffBorderWidthActive, 
   @TrackOffBorderWidthDefault, @TrackOffBorderWidthDisabled, @TrackOffBorderWidthFocused, 
   @TrackOnBorderWidthActive, @TrackOnBorderWidthDefault, @TrackOnBorderWidthDisabled, 
   @TrackOnBorderWidthFocused) and its color (@TrackOffBorderColorActive, @TrackOffBorderColorDefault, 
   @TrackOffBorderColorDisabled, @TrackOffBorderColorFocused, @TrackOnBorderColorActive, 
   @TrackOnBorderColorDefault, @TrackOnBorderColorDisabled, @TrackOnBorderColorFocused) 
   can be specified. Track usually serves to visualize the area where thumb is moved 
   and it is usually arranged behind the thumb.
   - 'AccentRectangle' is a rectangle view (Views::Rectangle) filling per default 
   the entire area of the button unless other constraints (@AccentLayout), a size 
   alternation (@AccentOffSizeActive, @AccentOffSizeDefault, @AccentOffSizeDisabled, 
   @AccentOffSizeFocused, @AccentOnSizeActive, @AccentOnSizeDefault, @AccentOnSizeDisabled, 
   @AccentOnSizeFocused) or a displacement (@AccentOffOffsetActive, @AccentOffOffsetDefault, 
   @AccentOffOffsetDisabled, @AccentOffOffsetFocused, @AccentOnOffsetActive, @AccentOnOffsetDefault, 
   @AccentOnOffsetDisabled, @AccentOnOffsetFocused) have been specified. Normally, 
   the accent area has rectangular shape with sharp corners. If desired the corners 
   can be rounded (@AccentOffCornerRadiusActive, @AccentOffCornerRadiusDefault, 
   @AccentOffCornerRadiusDisabled, @AccentOffCornerRadiusFocused, @AccentOnCornerRadiusActive, 
   @AccentOnCornerRadiusDefault, @AccentOnCornerRadiusDisabled, @AccentOnCornerRadiusFocused). 
   The accent area can be filled with a solid color (@AccentOffColorActive, @AccentOffColorDefault, 
   @AccentOffColorDisabled, @AccentOffColorFocused, @AccentOnColorActive, @AccentOnColorDefault, 
   @AccentOnColorDisabled, @AccentOnColorFocused). Accent usually serves to highlight 
   the widget when the user interacts with it actively or when the widget is focused.
   - 'AccentBorder' is a border view (Views::Border) surrounding the above described 
   'AccentRectangle' and lying in front of it. Its size, position and corner radius 
   correspond thus to the of the 'AccentRectangle'. The thickness of the border 
   (@AccentOffBorderWidthActive, @AccentOffBorderWidthDefault, @AccentOffBorderWidthDisabled, 
   @AccentOffBorderWidthFocused, @AccentOnBorderWidthActive, @AccentOnBorderWidthDefault, 
   @AccentOnBorderWidthDisabled, @AccentOnBorderWidthFocused) and its color (@AccentOffBorderColorActive, 
   @AccentOffBorderColorDefault, @AccentOffBorderColorDisabled, @AccentOffBorderColorFocused, 
   @AccentOnBorderColorActive, @AccentOnBorderColorDefault, @AccentOnBorderColorDisabled, 
   @AccentOnBorderColorFocused) can be specified. Accent usually serves to highlight 
   the widget when the user interacts with it actively or when the widget is focused.
   - 'Icon' is an image view (Views::Image) displayed per default in the center 
   of the button. The corresponding bitmap is determined in the property 'Icon' 
   in the toggle button widget. In the configuration object you can specify the 
   alignment (@IconAlignment) and margins (@IconMarginBottom, @IconMarginLeft, @IconMarginRight, 
   @IconMarginTop) how to arrange the 'Icon' bitmap within the button area. The 
   position can additionally be adjusted for each state individually (@CommonOffOffsetActive, 
   @CommonOffOffsetDefault, @CommonOffOffsetDisabled, @CommonOffOffsetFocused, @CommonOnOffsetActive, 
   @CommonOnOffsetDefault, @CommonOnOffsetDisabled, @CommonOnOffsetFocused). Furthermore, 
   for every button state combination the opacity or color to tint the bitmap can 
   be determined (@IconOffTintActive, @IconOffTintDefault, @IconOffTintDisabled, 
   @IconOffTintFocused, @IconOnTintActive, @IconOnTintDefault, @IconOnTintDisabled, 
   @IconOnTintFocused).
   - 'Label' is a text view (Views::Text) displayed per default in the center of 
   the button. The corresponding text is determined in the property 'LabelOff' or 
   'LabelOn' in the toggle button widget. In the configuration object you can specify 
   the font (@LabelOffFont, @LabelOnFont), alignment (@LabelAlignment) and margins 
   (@LabelMarginBottom, @LabelMarginLeft, @LabelMarginRight, @LabelMarginTop) to 
   use for the text view. The position can additionally be adjusted for each state 
   individually (@CommonOffOffsetActive, @CommonOffOffsetDefault, @CommonOffOffsetDisabled, 
   @CommonOffOffsetFocused, @CommonOnOffsetActive, @CommonOnOffsetDefault, @CommonOnOffsetDisabled, 
   @CommonOnOffsetFocused). For every button state combination you can specify individual 
   text color values (@LabelOffColorActive, @LabelOffColorDefault, @LabelOffColorDisabled, 
   @LabelOffColorFocused, @LabelOnColorActive, @LabelOnColorDefault, @LabelOnColorDisabled, 
   @LabelOnColorFocused).
   All above mentioned views are arranged one above the other whereby the resulting 
   stacking order can be configured by using the properties @FaceStackingPriority, 
   @IconStackingPriority, @LabelStackingPriority, @ThumbStackingPriority, @TrackStackingPriority 
   and @AccentStackingPriority. The view with higher priority will appear in front 
   of other views with lower priority.
   Normally, when a state alternation occurs, the affected views are updated immediatelly 
   to reflect the new state. By using the property @StateTransitionDuration it is 
   possible to configure the toggle button to perform state alternations with animations 
   (e.g. the displacement of the shadow can be animated). This affects all attributes 
   of the views 'ThumbRectangle', 'ThumbBorder', 'ThumbShadow', 'TrackRectangle' 
   and 'TrackBorder'. In case of the views 'FaceImage', 'Label' and 'Icon' the animation 
   has an effect only on the colors and offsets used to configure the views. Consequently, 
   during animations these views can fade-out/in their colors and move only.
   If the button is actually focused, it can also be activated by pressing the keyboard 
   key specified in the property @KeyCode. To prevent the button from being able 
   to be focused, initialize this property with the value Core::KeyCode.NoKey. The 
   property @PressedFeedbackDuration configures the duration how long the button 
   should appear active (pressed) even if it has been taped for a very short time.
   To further enhance the widgets, a slot method can be assigned to the property 
   @OnUpdate. Within the slot method new decoration views can be added to the widgets 
   and updated according to the current state of the widget. 
   With the properties @WidgetMinSize and @WidgetMaxSize you can configure size 
   constraints for the widget itself. You can, for example, limit the button to 
   not shrink below a specified width or height. */
EW_DEFINE_FIELDS( WidgetSetToggleButtonConfig, WidgetSetWidgetConfig )
  EW_PROPERTY( LabelOnFont,     ResourcesFont )
  EW_PROPERTY( LabelOffFont,    ResourcesFont )
  EW_PROPERTY( StateTransitionDuration, XInt32 )
  EW_PROPERTY( PressedFeedbackDuration, XInt32 )
  EW_PROPERTY( AccentOnColorActive, XColor )
  EW_PROPERTY( AccentOnColorFocused, XColor )
  EW_PROPERTY( AccentOnCornerRadiusActive, XInt32 )
  EW_PROPERTY( AccentOnCornerRadiusFocused, XInt32 )
  EW_PROPERTY( AccentOnCornerRadiusDisabled, XInt32 )
  EW_PROPERTY( AccentOnCornerRadiusDefault, XInt32 )
  EW_PROPERTY( AccentOnOffsetActive, XPoint )
  EW_PROPERTY( AccentOnOffsetFocused, XPoint )
  EW_PROPERTY( AccentOnOffsetDisabled, XPoint )
  EW_PROPERTY( AccentOnOffsetDefault, XPoint )
  EW_PROPERTY( AccentOnSizeActive, XPoint )
  EW_PROPERTY( AccentOnSizeFocused, XPoint )
  EW_PROPERTY( AccentOnSizeDisabled, XPoint )
  EW_PROPERTY( AccentOnSizeDefault, XPoint )
  EW_PROPERTY( AccentOffColorActive, XColor )
  EW_PROPERTY( AccentOffColorFocused, XColor )
  EW_PROPERTY( AccentOffCornerRadiusActive, XInt32 )
  EW_PROPERTY( AccentOffCornerRadiusFocused, XInt32 )
  EW_PROPERTY( AccentOffCornerRadiusDisabled, XInt32 )
  EW_PROPERTY( AccentOffCornerRadiusDefault, XInt32 )
  EW_PROPERTY( AccentOffOffsetActive, XPoint )
  EW_PROPERTY( AccentOffOffsetFocused, XPoint )
  EW_PROPERTY( AccentOffOffsetDisabled, XPoint )
  EW_PROPERTY( AccentOffOffsetDefault, XPoint )
  EW_PROPERTY( AccentOffSizeActive, XPoint )
  EW_PROPERTY( AccentOffSizeFocused, XPoint )
  EW_PROPERTY( AccentOffSizeDisabled, XPoint )
  EW_PROPERTY( AccentOffSizeDefault, XPoint )
  EW_PROPERTY( AccentLayout,    XSet )
  EW_PROPERTY( ThumbOnBorderColorActive, XColor )
  EW_PROPERTY( ThumbOnBorderColorFocused, XColor )
  EW_PROPERTY( ThumbOnBorderColorDisabled, XColor )
  EW_PROPERTY( ThumbOnBorderColorDefault, XColor )
  EW_PROPERTY( ThumbOnBorderWidthActive, XInt32 )
  EW_PROPERTY( ThumbOnBorderWidthFocused, XInt32 )
  EW_PROPERTY( ThumbOnBorderWidthDisabled, XInt32 )
  EW_PROPERTY( ThumbOnBorderWidthDefault, XInt32 )
  EW_PROPERTY( ThumbOnColorActive, XColor )
  EW_PROPERTY( ThumbOnColorFocused, XColor )
  EW_PROPERTY( ThumbOnColorDisabled, XColor )
  EW_PROPERTY( ThumbOnColorDefault, XColor )
  EW_PROPERTY( ThumbOnCornerRadiusActive, XInt32 )
  EW_PROPERTY( ThumbOnCornerRadiusFocused, XInt32 )
  EW_PROPERTY( ThumbOnCornerRadiusDisabled, XInt32 )
  EW_PROPERTY( ThumbOnCornerRadiusDefault, XInt32 )
  EW_PROPERTY( ThumbOnOffsetActive, XPoint )
  EW_PROPERTY( ThumbOnOffsetFocused, XPoint )
  EW_PROPERTY( ThumbOnOffsetDisabled, XPoint )
  EW_PROPERTY( ThumbOnOffsetDefault, XPoint )
  EW_PROPERTY( ThumbOnSizeActive, XPoint )
  EW_PROPERTY( ThumbOnSizeFocused, XPoint )
  EW_PROPERTY( ThumbOnSizeDisabled, XPoint )
  EW_PROPERTY( ThumbOnSizeDefault, XPoint )
  EW_PROPERTY( ThumbOffBorderColorActive, XColor )
  EW_PROPERTY( ThumbOffBorderColorFocused, XColor )
  EW_PROPERTY( ThumbOffBorderColorDisabled, XColor )
  EW_PROPERTY( ThumbOffBorderColorDefault, XColor )
  EW_PROPERTY( ThumbOffBorderWidthActive, XInt32 )
  EW_PROPERTY( ThumbOffBorderWidthFocused, XInt32 )
  EW_PROPERTY( ThumbOffBorderWidthDisabled, XInt32 )
  EW_PROPERTY( ThumbOffBorderWidthDefault, XInt32 )
  EW_PROPERTY( ThumbOffColorActive, XColor )
  EW_PROPERTY( ThumbOffColorFocused, XColor )
  EW_PROPERTY( ThumbOffColorDisabled, XColor )
  EW_PROPERTY( ThumbOffColorDefault, XColor )
  EW_PROPERTY( ThumbOffCornerRadiusActive, XInt32 )
  EW_PROPERTY( ThumbOffCornerRadiusFocused, XInt32 )
  EW_PROPERTY( ThumbOffCornerRadiusDisabled, XInt32 )
  EW_PROPERTY( ThumbOffCornerRadiusDefault, XInt32 )
  EW_PROPERTY( ThumbOffOffsetActive, XPoint )
  EW_PROPERTY( ThumbOffOffsetFocused, XPoint )
  EW_PROPERTY( ThumbOffOffsetDisabled, XPoint )
  EW_PROPERTY( ThumbOffOffsetDefault, XPoint )
  EW_PROPERTY( ThumbOffSizeActive, XPoint )
  EW_PROPERTY( ThumbOffSizeFocused, XPoint )
  EW_PROPERTY( ThumbOffSizeDisabled, XPoint )
  EW_PROPERTY( ThumbOffSizeDefault, XPoint )
  EW_PROPERTY( ThumbLayout,     XSet )
  EW_PROPERTY( TrackOnBorderColorActive, XColor )
  EW_PROPERTY( TrackOnBorderColorFocused, XColor )
  EW_PROPERTY( TrackOnBorderColorDisabled, XColor )
  EW_PROPERTY( TrackOnBorderColorDefault, XColor )
  EW_PROPERTY( TrackOnBorderWidthActive, XInt32 )
  EW_PROPERTY( TrackOnBorderWidthFocused, XInt32 )
  EW_PROPERTY( TrackOnBorderWidthDisabled, XInt32 )
  EW_PROPERTY( TrackOnBorderWidthDefault, XInt32 )
  EW_PROPERTY( TrackOnColorActive, XColor )
  EW_PROPERTY( TrackOnColorFocused, XColor )
  EW_PROPERTY( TrackOnColorDisabled, XColor )
  EW_PROPERTY( TrackOnColorDefault, XColor )
  EW_PROPERTY( TrackOffBorderColorActive, XColor )
  EW_PROPERTY( TrackOffBorderColorFocused, XColor )
  EW_PROPERTY( TrackOffBorderColorDisabled, XColor )
  EW_PROPERTY( TrackOffBorderColorDefault, XColor )
  EW_PROPERTY( TrackOffBorderWidthActive, XInt32 )
  EW_PROPERTY( TrackOffBorderWidthFocused, XInt32 )
  EW_PROPERTY( TrackOffBorderWidthDisabled, XInt32 )
  EW_PROPERTY( TrackOffBorderWidthDefault, XInt32 )
  EW_PROPERTY( TrackOffColorActive, XColor )
  EW_PROPERTY( TrackOffColorFocused, XColor )
  EW_PROPERTY( TrackOffColorDisabled, XColor )
  EW_PROPERTY( TrackOffColorDefault, XColor )
  EW_PROPERTY( TrackCornerRadius, XInt32 )
  EW_PROPERTY( TrackSize,       XPoint )
  EW_PROPERTY( TrackLayout,     XSet )
  EW_PROPERTY( LabelOnColorActive, XColor )
  EW_PROPERTY( LabelOnColorFocused, XColor )
  EW_PROPERTY( LabelOnColorDisabled, XColor )
  EW_PROPERTY( LabelOnColorDefault, XColor )
  EW_PROPERTY( LabelOffColorActive, XColor )
  EW_PROPERTY( LabelOffColorFocused, XColor )
  EW_PROPERTY( LabelOffColorDisabled, XColor )
  EW_PROPERTY( LabelOffColorDefault, XColor )
  EW_PROPERTY( LabelMarginRight, XInt32 )
  EW_PROPERTY( IconOnTintActive, XColor )
  EW_PROPERTY( IconOnTintFocused, XColor )
  EW_PROPERTY( IconOnTintDisabled, XColor )
  EW_PROPERTY( IconOnTintDefault, XColor )
  EW_PROPERTY( IconOffTintActive, XColor )
  EW_PROPERTY( IconOffTintFocused, XColor )
  EW_PROPERTY( IconOffTintDisabled, XColor )
  EW_PROPERTY( IconOffTintDefault, XColor )
  EW_PROPERTY( IconMarginRight, XInt32 )
  EW_PROPERTY( LabelAlignment,  XSet )
  EW_PROPERTY( IconAlignment,   XSet )
  EW_PROPERTY( WidgetMinSize,   XPoint )
  EW_PROPERTY( LimitTouchArea,  XBool )
EW_END_OF_FIELDS( WidgetSetToggleButtonConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::ToggleButtonConfig' */
EW_DEFINE_METHODS( WidgetSetToggleButtonConfig, WidgetSetWidgetConfig )
EW_END_OF_METHODS( WidgetSetToggleButtonConfig )

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetStateTransitionDuration()' */
void WidgetSetToggleButtonConfig_OnSetStateTransitionDuration( WidgetSetToggleButtonConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetPressedFeedbackDuration()' */
void WidgetSetToggleButtonConfig_OnSetPressedFeedbackDuration( WidgetSetToggleButtonConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLimitTouchArea()' */
void WidgetSetToggleButtonConfig_OnSetLimitTouchArea( WidgetSetToggleButtonConfig _this, 
  XBool value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnColorActive()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnCornerRadiusActive()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnCornerRadiusActive( WidgetSetToggleButtonConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnCornerRadiusFocused()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnCornerRadiusFocused( WidgetSetToggleButtonConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnCornerRadiusDisabled()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnCornerRadiusDisabled( WidgetSetToggleButtonConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnCornerRadiusDefault()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnCornerRadiusDefault( WidgetSetToggleButtonConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnOffsetActive()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnOffsetActive( WidgetSetToggleButtonConfig _this, 
  XPoint value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnOffsetFocused()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnOffsetFocused( WidgetSetToggleButtonConfig _this, 
  XPoint value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnOffsetDisabled()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnOffsetDisabled( WidgetSetToggleButtonConfig _this, 
  XPoint value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnOffsetDefault()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnOffsetDefault( WidgetSetToggleButtonConfig _this, 
  XPoint value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnSizeActive()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnSizeActive( WidgetSetToggleButtonConfig _this, 
  XPoint value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnSizeFocused()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnSizeFocused( WidgetSetToggleButtonConfig _this, 
  XPoint value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnSizeDisabled()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnSizeDisabled( WidgetSetToggleButtonConfig _this, 
  XPoint value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnSizeDefault()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnSizeDefault( WidgetSetToggleButtonConfig _this, 
  XPoint value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffColorActive()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffCornerRadiusActive()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffCornerRadiusActive( WidgetSetToggleButtonConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffCornerRadiusFocused()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffCornerRadiusFocused( WidgetSetToggleButtonConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffCornerRadiusDisabled()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffCornerRadiusDisabled( WidgetSetToggleButtonConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffCornerRadiusDefault()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffCornerRadiusDefault( WidgetSetToggleButtonConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffOffsetActive()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffOffsetActive( WidgetSetToggleButtonConfig _this, 
  XPoint value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffOffsetFocused()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffOffsetFocused( WidgetSetToggleButtonConfig _this, 
  XPoint value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffOffsetDisabled()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffOffsetDisabled( WidgetSetToggleButtonConfig _this, 
  XPoint value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffOffsetDefault()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffOffsetDefault( WidgetSetToggleButtonConfig _this, 
  XPoint value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffSizeActive()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffSizeActive( WidgetSetToggleButtonConfig _this, 
  XPoint value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffSizeFocused()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffSizeFocused( WidgetSetToggleButtonConfig _this, 
  XPoint value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffSizeDisabled()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffSizeDisabled( WidgetSetToggleButtonConfig _this, 
  XPoint value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffSizeDefault()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffSizeDefault( WidgetSetToggleButtonConfig _this, 
  XPoint value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentLayout()' */
void WidgetSetToggleButtonConfig_OnSetAccentLayout( WidgetSetToggleButtonConfig _this, 
  XSet value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnBorderColorActive()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnBorderColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnBorderColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnBorderColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnBorderColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnBorderColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnBorderColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnBorderColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnBorderWidthActive()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnBorderWidthActive( WidgetSetToggleButtonConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnBorderWidthFocused()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnBorderWidthFocused( WidgetSetToggleButtonConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnBorderWidthDisabled()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnBorderWidthDisabled( WidgetSetToggleButtonConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnBorderWidthDefault()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnBorderWidthDefault( WidgetSetToggleButtonConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnColorActive()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnCornerRadiusActive()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnCornerRadiusActive( WidgetSetToggleButtonConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnCornerRadiusFocused()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnCornerRadiusFocused( WidgetSetToggleButtonConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnCornerRadiusDisabled()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnCornerRadiusDisabled( WidgetSetToggleButtonConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnCornerRadiusDefault()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnCornerRadiusDefault( WidgetSetToggleButtonConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnOffsetActive()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnOffsetActive( WidgetSetToggleButtonConfig _this, 
  XPoint value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnOffsetFocused()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnOffsetFocused( WidgetSetToggleButtonConfig _this, 
  XPoint value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnOffsetDisabled()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnOffsetDisabled( WidgetSetToggleButtonConfig _this, 
  XPoint value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnOffsetDefault()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnOffsetDefault( WidgetSetToggleButtonConfig _this, 
  XPoint value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnSizeActive()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnSizeActive( WidgetSetToggleButtonConfig _this, 
  XPoint value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnSizeFocused()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnSizeFocused( WidgetSetToggleButtonConfig _this, 
  XPoint value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnSizeDisabled()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnSizeDisabled( WidgetSetToggleButtonConfig _this, 
  XPoint value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnSizeDefault()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnSizeDefault( WidgetSetToggleButtonConfig _this, 
  XPoint value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffBorderColorActive()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffBorderColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffBorderColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffBorderColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffBorderColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffBorderColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffBorderColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffBorderColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffBorderWidthActive()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffBorderWidthActive( WidgetSetToggleButtonConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffBorderWidthFocused()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffBorderWidthFocused( WidgetSetToggleButtonConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffBorderWidthDisabled()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffBorderWidthDisabled( WidgetSetToggleButtonConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffBorderWidthDefault()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffBorderWidthDefault( WidgetSetToggleButtonConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffColorActive()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffCornerRadiusActive()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffCornerRadiusActive( WidgetSetToggleButtonConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffCornerRadiusFocused()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffCornerRadiusFocused( WidgetSetToggleButtonConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffCornerRadiusDisabled()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffCornerRadiusDisabled( WidgetSetToggleButtonConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffCornerRadiusDefault()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffCornerRadiusDefault( WidgetSetToggleButtonConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffOffsetActive()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffOffsetActive( WidgetSetToggleButtonConfig _this, 
  XPoint value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffOffsetFocused()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffOffsetFocused( WidgetSetToggleButtonConfig _this, 
  XPoint value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffOffsetDisabled()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffOffsetDisabled( WidgetSetToggleButtonConfig _this, 
  XPoint value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffOffsetDefault()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffOffsetDefault( WidgetSetToggleButtonConfig _this, 
  XPoint value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffSizeActive()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffSizeActive( WidgetSetToggleButtonConfig _this, 
  XPoint value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffSizeFocused()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffSizeFocused( WidgetSetToggleButtonConfig _this, 
  XPoint value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffSizeDisabled()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffSizeDisabled( WidgetSetToggleButtonConfig _this, 
  XPoint value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffSizeDefault()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffSizeDefault( WidgetSetToggleButtonConfig _this, 
  XPoint value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbLayout()' */
void WidgetSetToggleButtonConfig_OnSetThumbLayout( WidgetSetToggleButtonConfig _this, 
  XSet value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOnBorderColorActive()' */
void WidgetSetToggleButtonConfig_OnSetTrackOnBorderColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOnBorderColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetTrackOnBorderColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOnBorderColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetTrackOnBorderColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOnBorderColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetTrackOnBorderColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOnBorderWidthActive()' */
void WidgetSetToggleButtonConfig_OnSetTrackOnBorderWidthActive( WidgetSetToggleButtonConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOnBorderWidthFocused()' */
void WidgetSetToggleButtonConfig_OnSetTrackOnBorderWidthFocused( WidgetSetToggleButtonConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOnBorderWidthDisabled()' */
void WidgetSetToggleButtonConfig_OnSetTrackOnBorderWidthDisabled( WidgetSetToggleButtonConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOnBorderWidthDefault()' */
void WidgetSetToggleButtonConfig_OnSetTrackOnBorderWidthDefault( WidgetSetToggleButtonConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOnColorActive()' */
void WidgetSetToggleButtonConfig_OnSetTrackOnColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOnColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetTrackOnColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOnColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetTrackOnColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOnColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetTrackOnColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOffBorderColorActive()' */
void WidgetSetToggleButtonConfig_OnSetTrackOffBorderColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOffBorderColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetTrackOffBorderColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOffBorderColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetTrackOffBorderColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOffBorderColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetTrackOffBorderColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOffBorderWidthActive()' */
void WidgetSetToggleButtonConfig_OnSetTrackOffBorderWidthActive( WidgetSetToggleButtonConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOffBorderWidthFocused()' */
void WidgetSetToggleButtonConfig_OnSetTrackOffBorderWidthFocused( WidgetSetToggleButtonConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOffBorderWidthDisabled()' */
void WidgetSetToggleButtonConfig_OnSetTrackOffBorderWidthDisabled( WidgetSetToggleButtonConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOffBorderWidthDefault()' */
void WidgetSetToggleButtonConfig_OnSetTrackOffBorderWidthDefault( WidgetSetToggleButtonConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOffColorActive()' */
void WidgetSetToggleButtonConfig_OnSetTrackOffColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOffColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetTrackOffColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOffColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetTrackOffColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOffColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetTrackOffColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackCornerRadius()' */
void WidgetSetToggleButtonConfig_OnSetTrackCornerRadius( WidgetSetToggleButtonConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackSize()' */
void WidgetSetToggleButtonConfig_OnSetTrackSize( WidgetSetToggleButtonConfig _this, 
  XPoint value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackLayout()' */
void WidgetSetToggleButtonConfig_OnSetTrackLayout( WidgetSetToggleButtonConfig _this, 
  XSet value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOnColorActive()' */
void WidgetSetToggleButtonConfig_OnSetLabelOnColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOnColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetLabelOnColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOnColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetLabelOnColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOnColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetLabelOnColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOffColorActive()' */
void WidgetSetToggleButtonConfig_OnSetLabelOffColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOffColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetLabelOffColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOffColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetLabelOffColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOffColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetLabelOffColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelMarginRight()' */
void WidgetSetToggleButtonConfig_OnSetLabelMarginRight( WidgetSetToggleButtonConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOnTintActive()' */
void WidgetSetToggleButtonConfig_OnSetIconOnTintActive( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOnTintFocused()' */
void WidgetSetToggleButtonConfig_OnSetIconOnTintFocused( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOnTintDisabled()' */
void WidgetSetToggleButtonConfig_OnSetIconOnTintDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOnTintDefault()' */
void WidgetSetToggleButtonConfig_OnSetIconOnTintDefault( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOffTintActive()' */
void WidgetSetToggleButtonConfig_OnSetIconOffTintActive( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOffTintFocused()' */
void WidgetSetToggleButtonConfig_OnSetIconOffTintFocused( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOffTintDisabled()' */
void WidgetSetToggleButtonConfig_OnSetIconOffTintDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOffTintDefault()' */
void WidgetSetToggleButtonConfig_OnSetIconOffTintDefault( WidgetSetToggleButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconMarginRight()' */
void WidgetSetToggleButtonConfig_OnSetIconMarginRight( WidgetSetToggleButtonConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelAlignment()' */
void WidgetSetToggleButtonConfig_OnSetLabelAlignment( WidgetSetToggleButtonConfig _this, 
  XSet value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOnFont()' */
void WidgetSetToggleButtonConfig_OnSetLabelOnFont( WidgetSetToggleButtonConfig _this, 
  ResourcesFont value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOffFont()' */
void WidgetSetToggleButtonConfig_OnSetLabelOffFont( WidgetSetToggleButtonConfig _this, 
  ResourcesFont value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconAlignment()' */
void WidgetSetToggleButtonConfig_OnSetIconAlignment( WidgetSetToggleButtonConfig _this, 
  XSet value );

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetWidgetMinSize()' */
void WidgetSetToggleButtonConfig_OnSetWidgetMinSize( WidgetSetToggleButtonConfig _this, 
  XPoint value );

#ifdef __cplusplus
  }
#endif

#endif /* _WidgetSetToggleButtonConfig_H */

/* Embedded Wizard */

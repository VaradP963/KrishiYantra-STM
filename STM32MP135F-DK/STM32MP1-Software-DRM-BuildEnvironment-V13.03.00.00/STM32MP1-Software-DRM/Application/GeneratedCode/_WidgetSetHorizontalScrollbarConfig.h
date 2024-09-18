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

#ifndef _WidgetSetHorizontalScrollbarConfig_H
#define _WidgetSetHorizontalScrollbarConfig_H

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

/* Forward declaration of the class WidgetSet::HorizontalScrollbarConfig */
#ifndef _WidgetSetHorizontalScrollbarConfig_
  EW_DECLARE_CLASS( WidgetSetHorizontalScrollbarConfig )
#define _WidgetSetHorizontalScrollbarConfig_
#endif


/* This class implements the functionality permitting you to simply customize the 
   look and feel of a 'horizontal scrollbar' widget (WidgetSet::HorizontalScrollbar). 
   In the practice, you will create an instance of this class, configure its properties 
   with bitmaps, colors and other relevant attributes according to your design expectations 
   and assign such prepared configuration object to the property 'Appearance' of 
   every affected horizontal scrollbar widget. Thereupon the widgets will use the 
   configuration information provided in the object.
   During its lifetime the scrollbar remains always in one of the three states: 
   'disabled', 'default' and 'active'. The state 'disabled' is true for every not 
   available scrollbar (the property 'Enabled' of the scrollbar is 'false'). Such 
   scrollbars will ignore all user inputs. The state 'default' determines a scrollbar, 
   which is ready to be touched by the user. Finally, the state 'active' is true, 
   if the user actually interacts with the scrollbar (the scrollbar's thumb is pressed). 
   With the configuration object you can specify the appearance of the scrollbar 
   for every state individually. For this purpose you should know from which views 
   the scrollbar is composed of:
   - 'TrackRectangle' is a rectangle view (Views::Rectangle) filling per default 
   vertically centered the entire width of the scrollbar. The height and an additional 
   vertical displacement of the track are determined by the properties @TrackThicknessActive, 
   @TrackThicknessDefault, @TrackThicknessDisabled and @TrackOffsetActive, @TrackOffsetDefault, 
   @TrackOffsetDisabled. The area destined for the track can be limited by configuring 
   the properties @TrackMarginLeft and @TrackMarginRight. Normally, the track has 
   rectangular shape with sharp corners. If desired the corners can be rounded (@TrackCornerRadiusActive, 
   @TrackCornerRadiusDefault, @TrackCornerRadiusDisabled). The track can be filled 
   with a solid color (@TrackLeftColorActive, @TrackLeftColorDefault, @TrackLeftColorDisabled).
   - 'TrackBorder' is a border view (Views::Border) surrounding the above described 
   'TrackRectangle' and lying in front of it. Its size, position and corner radius 
   correspond thus to the of the 'TrackRectangle'. The thickness of the border (@TrackBorderWidthActive, 
   @TrackBorderWidthDefault, @TrackBorderWidthDisabled) and its color (@TrackBorderColorActive, 
   @TrackBorderColorDefault, @TrackBorderColorDisabled) can be specified.
   - 'TrackImage' is a bitmap frame view (Views::Frame) filling per default vertically 
   centered the entire width of the scrollbar. The area destined for the track can 
   be limited by configuring the properties @TrackMarginLeft and @TrackMarginRight. 
   An additional vertical displacement of the track is determined by the properties 
   @TrackOffsetActive, @TrackOffsetDefault, @TrackOffsetDisabled. In the configuration 
   object you can individually specify for every scrollbar state the desired bitmap 
   (@TrackBitmapActive, @TrackBitmapDefault, @TrackBitmapDisabled), the frame number 
   within the bitmap (@TrackFrameActive, @TrackFrameDefault, @TrackFrameDisabled) 
   and opacity or color to tint the bitmap (@TrackTintActive, @TrackTintDefault, 
   @TrackTintDisabled). The scrollbar can automatically play animated bitmaps if 
   the specified frame number is -1.
   - 'ThumbRectangle' is a rectangle view (Views::Rectangle) displayed per default 
   vertically centered and arranged horizontally at position corresponding to the 
   current scroll position within the scrollable content. The width of the thumb 
   corresponds to the ratio between the size of the 'view area' and 'content area' 
   as specified in the scrollbar widget. If necessary, additional margins on the 
   left and on the right of the thumb can be specified by using the properties @ThumbMarginLeft 
   and @ThumbMarginRight. With the properties @ThumbMinWidthDefault, @ThumbMinWidthDisabled, 
   @ThumbMinWidthActive and @ThumbSizeFixed the minimum width of thumb as well as 
   it size adjustment can be configured. In the configuration object you can individually 
   specify for every scrollbar state the height of the view (@ThumbThicknessActive, 
   @ThumbThicknessDefault, @ThumbThicknessDisabled) and an additional displacement 
   (@ThumbOffsetActive, @ThumbOffsetDefault, @ThumbOffsetDisabled). Normally, the 
   thumb area has rectangular shape with sharp corners. If desired the corners can 
   be rounded (@ThumbCornerRadiusActive, @ThumbCornerRadiusDefault, @ThumbCornerRadiusDisabled). 
   The thumb area can be filled with a solid color (@ThumbColorActive, @ThumbColorDefault, 
   @ThumbColorDisabled).
   - 'ThumbBorder' is a border view (Views::Border) surrounding the above described 
   'ThumbRectangle' and lying in front of it. Its size, position and corner radius 
   correspond thus to the of the 'ThumbRectangle'. The thickness of the border (@ThumbBorderWidthActive, 
   @ThumbBorderWidthDefault, @ThumbBorderWidthDisabled) and its color (@ThumbBorderColorActive, 
   @ThumbBorderColorDefault, @ThumbBorderColorDisabled) can be specified.
   - 'ThumbShadow' is a shadow view (Views::Shadow) lying always behind the above 
   described 'ThumbRectangle' view. Its size, position and corner radius correspond 
   thus to the of the 'ThumbRectangle'. However, an additional displacement for 
   the shadow can be specified (@ThumbShadowOffsetActive, @ThumbShadowOffsetDefault, 
   @ThumbShadowOffsetDisabled). The color of the shadow (@ThumbShadowColorActive, 
   @ThumbShadowColorDefault, @ThumbShadowColorDisabled) as well as its blur radius 
   (@ThumbShadowBlurRadiusActive, @ThumbShadowBlurRadiusDefault, @ThumbShadowBlurRadiusDisabled) 
   can be specified.
   - 'ThumbImage' is a bitmap frame view (Views::Frame) per default centered vertically 
   and arranged horizontally at position corresponding to the current scroll position 
   within the scrollable content. The width of the thumb corresponds to the ratio 
   between the size of the 'view area' and 'content area' as specified in the scrollbar 
   widget. If necessary, additional margins on the left and on the right of the 
   thumb can be specified by using the properties @ThumbMarginLeft and @ThumbMarginRight. 
   With the property @ThumbSizeFixed you can suppress the thumb from being adjustable 
   in its width. An additional displacement for the thumb can be determined by the 
   properties @ThumbOffsetDefault, @ThumbOffsetDisabled and @ThumbOffsetActive. 
   In the configuration object you can individually specify for every scrollbar 
   state the desired bitmap (@ThumbBitmapActive, @ThumbBitmapDefault, @ThumbBitmapDisabled), 
   the frame number within the bitmap (@ThumbFrameActive, @ThumbFrameDefault, @ThumbFrameDisabled) 
   and the opacity or color to tint the bitmap (@ThumbTintActive, @ThumbTintDefault, 
   @ThumbTintDisabled). The scrollbar can automatically play animated bitmaps if 
   the specified frame number is -1.
   All above mentioned views are arranged one above the other whereby the resulting 
   stacking order can be configured by using the properties @TrackStackingPriority 
   and @ThumbStackingPriority. The view with higher priority will appear in front 
   of other views with lower priority.
   Normally, when a state alternation occurs, the affected views are updated immediatelly 
   to reflect the new state. By using the property @StateTransitionDuration it is 
   possible to configure the scrollbar to perform state alternations with animations 
   (e.g. the displacement of the thumb shadow can be animated). This affects all 
   attributes of the filled rectangle, border and shadow views belonging to the 
   thumb and track. In case of the images displayed in the track and thumb, the 
   animation has an effect only on the colors and offsets used to configure the 
   views. Consequently, during animations these views can fade-out/in their colors 
   and move only.
   With the properties @AutoHideDelay and @HideIfNotNeeded you can configure the 
   behavior of the scrollbar, whether and when it should disappear automatically. 
   If the scrollbar is configured to disappear and appear automatically, you can 
   configure an opacity fade-in/out effect to be used for this operation by using 
   the properties @FadeInDuration and @FadeOutDuration.
   Whether the scrollbar should be able to react to user touch interactions or not 
   can be configured in the property @Touchable. If this property is 'true', the 
   user can touch and drag the scrollbar thumb. If this property is 'false', the 
   scrollbar serves as a pure passive widget.
   To further enhance the widgets, a slot method can be assigned to the property 
   @OnUpdate. Within the slot method new decoration views can be added to the widgets 
   and updated according to the current state of the widget. 
   With the properties @WidgetMinSize and @WidgetMaxSize you can configure size 
   constraints for the widget itself. You can, for example, limit the scrollbar 
   to not shrink below a specified width or height. */
EW_DEFINE_FIELDS( WidgetSetHorizontalScrollbarConfig, WidgetSetWidgetConfig )
  EW_PROPERTY( ThumbColorActive, XColor )
  EW_PROPERTY( ThumbColorDisabled, XColor )
  EW_PROPERTY( ThumbColorDefault, XColor )
  EW_PROPERTY( ThumbCornerRadiusActive, XInt32 )
  EW_PROPERTY( ThumbCornerRadiusDisabled, XInt32 )
  EW_PROPERTY( ThumbCornerRadiusDefault, XInt32 )
  EW_PROPERTY( ThumbMinWidthActive, XInt32 )
  EW_PROPERTY( ThumbMinWidthDisabled, XInt32 )
  EW_PROPERTY( ThumbMinWidthDefault, XInt32 )
  EW_PROPERTY( ThumbThicknessActive, XInt32 )
  EW_PROPERTY( ThumbThicknessDisabled, XInt32 )
  EW_PROPERTY( ThumbThicknessDefault, XInt32 )
  EW_PROPERTY( TrackBorderColorActive, XColor )
  EW_PROPERTY( TrackBorderColorDisabled, XColor )
  EW_PROPERTY( TrackBorderColorDefault, XColor )
  EW_PROPERTY( TrackBorderWidthActive, XInt32 )
  EW_PROPERTY( TrackBorderWidthDisabled, XInt32 )
  EW_PROPERTY( TrackBorderWidthDefault, XInt32 )
  EW_PROPERTY( TrackCornerRadiusActive, XInt32 )
  EW_PROPERTY( TrackCornerRadiusDisabled, XInt32 )
  EW_PROPERTY( TrackCornerRadiusDefault, XInt32 )
  EW_PROPERTY( TrackThicknessActive, XInt32 )
  EW_PROPERTY( TrackThicknessDisabled, XInt32 )
  EW_PROPERTY( TrackThicknessDefault, XInt32 )
  EW_PROPERTY( WidgetMinSize,   XPoint )
EW_END_OF_FIELDS( WidgetSetHorizontalScrollbarConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::HorizontalScrollbarConfig' */
EW_DEFINE_METHODS( WidgetSetHorizontalScrollbarConfig, WidgetSetWidgetConfig )
EW_END_OF_METHODS( WidgetSetHorizontalScrollbarConfig )

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetThumbColorActive()' */
void WidgetSetHorizontalScrollbarConfig_OnSetThumbColorActive( WidgetSetHorizontalScrollbarConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetThumbColorDisabled()' */
void WidgetSetHorizontalScrollbarConfig_OnSetThumbColorDisabled( WidgetSetHorizontalScrollbarConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetThumbColorDefault()' */
void WidgetSetHorizontalScrollbarConfig_OnSetThumbColorDefault( WidgetSetHorizontalScrollbarConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetThumbCornerRadiusActive()' */
void WidgetSetHorizontalScrollbarConfig_OnSetThumbCornerRadiusActive( WidgetSetHorizontalScrollbarConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetThumbCornerRadiusDisabled()' */
void WidgetSetHorizontalScrollbarConfig_OnSetThumbCornerRadiusDisabled( WidgetSetHorizontalScrollbarConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetThumbCornerRadiusDefault()' */
void WidgetSetHorizontalScrollbarConfig_OnSetThumbCornerRadiusDefault( WidgetSetHorizontalScrollbarConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetThumbMinWidthActive()' */
void WidgetSetHorizontalScrollbarConfig_OnSetThumbMinWidthActive( WidgetSetHorizontalScrollbarConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetThumbMinWidthDisabled()' */
void WidgetSetHorizontalScrollbarConfig_OnSetThumbMinWidthDisabled( WidgetSetHorizontalScrollbarConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetThumbMinWidthDefault()' */
void WidgetSetHorizontalScrollbarConfig_OnSetThumbMinWidthDefault( WidgetSetHorizontalScrollbarConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetThumbThicknessActive()' */
void WidgetSetHorizontalScrollbarConfig_OnSetThumbThicknessActive( WidgetSetHorizontalScrollbarConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetThumbThicknessDisabled()' */
void WidgetSetHorizontalScrollbarConfig_OnSetThumbThicknessDisabled( WidgetSetHorizontalScrollbarConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetThumbThicknessDefault()' */
void WidgetSetHorizontalScrollbarConfig_OnSetThumbThicknessDefault( WidgetSetHorizontalScrollbarConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetTrackBorderColorActive()' */
void WidgetSetHorizontalScrollbarConfig_OnSetTrackBorderColorActive( WidgetSetHorizontalScrollbarConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetTrackBorderColorDisabled()' */
void WidgetSetHorizontalScrollbarConfig_OnSetTrackBorderColorDisabled( WidgetSetHorizontalScrollbarConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetTrackBorderColorDefault()' */
void WidgetSetHorizontalScrollbarConfig_OnSetTrackBorderColorDefault( WidgetSetHorizontalScrollbarConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetTrackBorderWidthActive()' */
void WidgetSetHorizontalScrollbarConfig_OnSetTrackBorderWidthActive( WidgetSetHorizontalScrollbarConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetTrackBorderWidthDisabled()' */
void WidgetSetHorizontalScrollbarConfig_OnSetTrackBorderWidthDisabled( WidgetSetHorizontalScrollbarConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetTrackBorderWidthDefault()' */
void WidgetSetHorizontalScrollbarConfig_OnSetTrackBorderWidthDefault( WidgetSetHorizontalScrollbarConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetTrackCornerRadiusActive()' */
void WidgetSetHorizontalScrollbarConfig_OnSetTrackCornerRadiusActive( WidgetSetHorizontalScrollbarConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetTrackCornerRadiusDisabled()' */
void WidgetSetHorizontalScrollbarConfig_OnSetTrackCornerRadiusDisabled( WidgetSetHorizontalScrollbarConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetTrackCornerRadiusDefault()' */
void WidgetSetHorizontalScrollbarConfig_OnSetTrackCornerRadiusDefault( WidgetSetHorizontalScrollbarConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetTrackThicknessActive()' */
void WidgetSetHorizontalScrollbarConfig_OnSetTrackThicknessActive( WidgetSetHorizontalScrollbarConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetTrackThicknessDisabled()' */
void WidgetSetHorizontalScrollbarConfig_OnSetTrackThicknessDisabled( WidgetSetHorizontalScrollbarConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetTrackThicknessDefault()' */
void WidgetSetHorizontalScrollbarConfig_OnSetTrackThicknessDefault( WidgetSetHorizontalScrollbarConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetWidgetMinSize()' */
void WidgetSetHorizontalScrollbarConfig_OnSetWidgetMinSize( WidgetSetHorizontalScrollbarConfig _this, 
  XPoint value );

#ifdef __cplusplus
  }
#endif

#endif /* _WidgetSetHorizontalScrollbarConfig_H */

/* Embedded Wizard */

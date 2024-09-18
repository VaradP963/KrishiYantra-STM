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

#ifndef _WidgetSetVerticalValueBarConfig_H
#define _WidgetSetVerticalValueBarConfig_H

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

/* Forward declaration of the class WidgetSet::VerticalValueBarConfig */
#ifndef _WidgetSetVerticalValueBarConfig_
  EW_DECLARE_CLASS( WidgetSetVerticalValueBarConfig )
#define _WidgetSetVerticalValueBarConfig_
#endif


/* This class implements the functionality permitting you to simply customize the 
   look and feel of a 'vertical value bar' widget (WidgetSet::VerticalValueBar). 
   In the practice, you will create an instance of this class, configure its properties 
   with bitmaps, colors and other relevant attributes according to your design expectations 
   and assign such prepared configuration object to the property 'Appearance' of 
   every affected vertical value bar widget. Thereupon the widgets will use the 
   configuration information provided in the object.
   Since with the configuration object you determine the appearance of the value 
   bar widget you should know from which views the widget is composed of:
   - 'FaceImage' is a bitmap frame view (Views::Frame) filling horizontally centered 
   the entire height in the background of the widget. In the configuration object 
   you can specify the desired bitmap (@FaceBitmap), the frame number within the 
   bitmap (@FaceFrame) and opacity or color to tint the bitmap (@FaceTint). The 
   value bar can automatically play animated bitmaps if the specified frame number 
   is -1.
   - 'TrackBelowRectangle' is a rectangle view (Views::Rectangle) filling per default 
   horizontally centered the background of the value bar widget between its bottom 
   edge and the actual position of the needle. The width and an additional horizontal 
   displacement of the track are determined by the properties @TrackBelowThickness 
   and @TrackBelowOffset. The area destined for the track can be limited by configuring 
   the properties @TrackBelowMarginBottom and @TrackBelowMarginTop. With the property 
   @TrackBelowStatic the track can be configured to not depend on the actual needle 
   position. Normally, the track has rectangular shape with sharp corners. If desired 
   the corners can be rounded (@TrackBelowCornerRadius) whereby the rounding at 
   the needle position can be controlled by the property @TrackBelowFlattened. The 
   track can be filled with a solid color (@TrackBelowColor).
   - 'TrackBelowBorder' is a border view (Views::Border) surrounding the above described 
   'TrackBelowRectangle' and lying in front of it. Its size, position and corner 
   radius correspond thus to the of the 'TrackBelowRectangle'. The thickness of 
   the border (@TrackBelowBorderWidth) and its color (@TrackBelowBorderColor) can 
   be specified.
   - 'TrackBelowImage' is a bitmap frame view (Views::Frame) filling per default 
   horizontally centered the background of the value bar widget between its bottom 
   edge and the actual position of the needle. The area destined for the track can 
   be limited by configuring the properties @TrackBelowMarginBottom and @TrackBelowMarginTop. 
   With the property @TrackBelowStatic the track can be configured to not depend 
   on the actual needle position. An additional horizontal displacement of the track 
   is determined by the property @TrackBelowOffset. In the configuration object 
   you can specify the desired bitmap (@TrackBelowBitmap), the frame number within 
   the bitmap (@TrackBelowFrame) and opacity or color to tint the bitmap (@TrackBelowTint). 
   With the property @TrackBelowWithEdge you can configure how the top edge of the 
   track (the edge at the needle position) should appear. The value bar can automatically 
   play animated bitmaps if the specified frame number is -1.
   - 'TrackAboveRectangle' is a rectangle view (Views::Rectangle) filling per default 
   horizontally centered the background of the value bar widget between the actual 
   position of the needle and the top edge of widget. The width and an additional 
   horizontal displacement of the track are determined by the properties @TrackAboveThickness 
   and @TrackAboveOffset. The area destined for the track can be limited by configuring 
   the properties @TrackAboveMarginBottom and @TrackAboveMarginTop. With the property 
   @TrackAboveStatic the track can be configured to not depend on the actual needle 
   position. Normally, the track has rectangular shape with sharp corners. If desired 
   the corners can be rounded (@TrackAboveCornerRadius) whereby the rounding at 
   the needle position can be controlled by the property @TrackAboveFlattened. The 
   track can be filled with a solid color (@TrackAboveColor).
   - 'TrackAboveBorder' is a border view (Views::Border) surrounding the above described 
   'TrackAboveRectangle' and lying in front of it. Its size, position and corner 
   radius correspond thus to the of the 'TrackAboveRectangle'. The thickness of 
   the border (@TrackAboveBorderWidth) and its color (@TrackAboveBorderColor) can 
   be specified.
   - 'TrackAboveImage' is a bitmap frame view (Views::Frame) filling per default 
   horizontally centered the background of the value bar widget between the actual 
   position of the needle and the top edge of the widget. The area destined for 
   the track can be limited by configuring the properties @TrackAboveMarginBottom 
   and @TrackAboveMarginTop. With the property @TrackAboveStatic the track can be 
   configured to not depend on the actual needle position. An additional horizontal 
   displacement of the track is determined by the property @TrackAboveOffset. In 
   the configuration object you can specify the desired bitmap (@TrackAboveBitmap), 
   the frame number within the bitmap (@TrackAboveFrame) and opacity or color to 
   tint the bitmap (@TrackAboveTint). With the property @TrackAboveWithEdge you 
   can configure how the bottom edge of the track (the edge at the needle position) 
   should appear. The value bar can automatically play animated bitmaps if the specified 
   frame number is -1.
   - 'NeedleImage' is an image view (Views::Image) displayed horizontally centered 
   at the actual needle position. In the configuration object you can specify the 
   desired bitmap (@NeedleBitmap), the frame number within the bitmap (@NeedleFrame) 
   and opacity or color to tint the bitmap (@NeedleTint). If necessary, additional 
   margins below and above the needle can be specified by using the properties @NeedleMarginBottom 
   and @NeedleMarginTop. An additional displacement (@NeedleOffset) can be configured. 
   The value bar can automatically play animated bitmaps if the specified frame 
   number is -1.
   - 'CoverImage' is a bitmap frame view (Views::Frame) filling horizontally centered 
   the entire height of the widget and covering so eventually the needle and track. 
   In the configuration object you can specify the desired bitmap (@CoverBitmap), 
   the frame number within the bitmap (@CoverFrame) and opacity or color to tint 
   the bitmap (@CoverTint). The value bar can automatically play animated bitmaps 
   if the specified frame number is -1.
   All above mentioned views are arranged one above the other whereby the resulting 
   stacking order can be configured by using the properties @FaceStackingPriority, 
   @TrackBelowStackingPriority, @TrackAboveStackingPriority, @NeedleStackingPriority 
   and @CoverStackingPriority. The view with higher priority will appear in front 
   of other views with lower priority.
   The value bar widget can move the needle with a smooth animation. This can be 
   configured in the properties @SwingDuration and @SwingElastic.
   To further enhance the widgets, a slot method can be assigned to the property 
   @OnUpdate. Within the slot method new decoration views can be added to the widgets 
   and updated according to the current state of the widget. 
   With the properties @WidgetMinSize and @WidgetMaxSize you can configure size 
   constraints for the widget itself. You can, for example, limit the value bar 
   widget to not shrink below a specified width or height. */
EW_DEFINE_FIELDS( WidgetSetVerticalValueBarConfig, WidgetSetWidgetConfig )
  EW_PROPERTY( SwingDuration,   XInt32 )
  EW_PROPERTY( TrackAboveBorderColor, XColor )
  EW_PROPERTY( TrackAboveBorderWidth, XInt32 )
  EW_PROPERTY( TrackAboveColor, XColor )
  EW_PROPERTY( TrackAboveCornerRadius, XInt32 )
  EW_PROPERTY( TrackAboveThickness, XInt32 )
  EW_PROPERTY( TrackBelowColor, XColor )
  EW_PROPERTY( TrackBelowCornerRadius, XInt32 )
  EW_PROPERTY( TrackBelowThickness, XInt32 )
  EW_PROPERTY( WidgetMinSize,   XPoint )
  EW_PROPERTY( SwingElastic,    XBool )
  EW_PROPERTY( TrackAboveFlattened, XBool )
  EW_PROPERTY( TrackBelowFlattened, XBool )
EW_END_OF_FIELDS( WidgetSetVerticalValueBarConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::VerticalValueBarConfig' */
EW_DEFINE_METHODS( WidgetSetVerticalValueBarConfig, WidgetSetWidgetConfig )
EW_END_OF_METHODS( WidgetSetVerticalValueBarConfig )

/* 'C' function for method : 'WidgetSet::VerticalValueBarConfig.OnSetSwingElastic()' */
void WidgetSetVerticalValueBarConfig_OnSetSwingElastic( WidgetSetVerticalValueBarConfig _this, 
  XBool value );

/* 'C' function for method : 'WidgetSet::VerticalValueBarConfig.OnSetSwingDuration()' */
void WidgetSetVerticalValueBarConfig_OnSetSwingDuration( WidgetSetVerticalValueBarConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::VerticalValueBarConfig.OnSetTrackAboveBorderColor()' */
void WidgetSetVerticalValueBarConfig_OnSetTrackAboveBorderColor( WidgetSetVerticalValueBarConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::VerticalValueBarConfig.OnSetTrackAboveBorderWidth()' */
void WidgetSetVerticalValueBarConfig_OnSetTrackAboveBorderWidth( WidgetSetVerticalValueBarConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::VerticalValueBarConfig.OnSetTrackAboveColor()' */
void WidgetSetVerticalValueBarConfig_OnSetTrackAboveColor( WidgetSetVerticalValueBarConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::VerticalValueBarConfig.OnSetTrackAboveFlattened()' */
void WidgetSetVerticalValueBarConfig_OnSetTrackAboveFlattened( WidgetSetVerticalValueBarConfig _this, 
  XBool value );

/* 'C' function for method : 'WidgetSet::VerticalValueBarConfig.OnSetTrackAboveCornerRadius()' */
void WidgetSetVerticalValueBarConfig_OnSetTrackAboveCornerRadius( WidgetSetVerticalValueBarConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::VerticalValueBarConfig.OnSetTrackAboveThickness()' */
void WidgetSetVerticalValueBarConfig_OnSetTrackAboveThickness( WidgetSetVerticalValueBarConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::VerticalValueBarConfig.OnSetTrackBelowColor()' */
void WidgetSetVerticalValueBarConfig_OnSetTrackBelowColor( WidgetSetVerticalValueBarConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::VerticalValueBarConfig.OnSetTrackBelowFlattened()' */
void WidgetSetVerticalValueBarConfig_OnSetTrackBelowFlattened( WidgetSetVerticalValueBarConfig _this, 
  XBool value );

/* 'C' function for method : 'WidgetSet::VerticalValueBarConfig.OnSetTrackBelowCornerRadius()' */
void WidgetSetVerticalValueBarConfig_OnSetTrackBelowCornerRadius( WidgetSetVerticalValueBarConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::VerticalValueBarConfig.OnSetTrackBelowThickness()' */
void WidgetSetVerticalValueBarConfig_OnSetTrackBelowThickness( WidgetSetVerticalValueBarConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::VerticalValueBarConfig.OnSetWidgetMinSize()' */
void WidgetSetVerticalValueBarConfig_OnSetWidgetMinSize( WidgetSetVerticalValueBarConfig _this, 
  XPoint value );

#ifdef __cplusplus
  }
#endif

#endif /* _WidgetSetVerticalValueBarConfig_H */

/* Embedded Wizard */

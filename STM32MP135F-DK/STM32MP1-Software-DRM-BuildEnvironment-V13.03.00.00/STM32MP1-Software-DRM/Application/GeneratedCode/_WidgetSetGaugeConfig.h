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

#ifndef _WidgetSetGaugeConfig_H
#define _WidgetSetGaugeConfig_H

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

/* Forward declaration of the class WidgetSet::GaugeConfig */
#ifndef _WidgetSetGaugeConfig_
  EW_DECLARE_CLASS( WidgetSetGaugeConfig )
#define _WidgetSetGaugeConfig_
#endif


/* This class implements the functionality permitting you to simply customize the 
   look and feel of a 'gauge' widget (WidgetSet::Gauge). In the practice, you will 
   create an instance of this class, configure its properties with bitmaps, colors 
   and other relevant attributes according to your design expectations and assign 
   such prepared configuration object to the property 'Appearance' of every affected 
   gauge widget. Thereupon the widgets will use the configuration information provided 
   in the object.
   Since with the configuration object you determine the appearance of the gauge 
   you should know from which views the gauge is composed of:
   - 'ScaleImage' is an image view (Views::Image) displayed centered in the background 
   within the widget area. In the configuration object you can specify the desired 
   bitmap (@ScaleBitmap), the frame number within the bitmap (@ScaleFrame) and opacity 
   or color to tint the bitmap (@ScaleTint). The gauge widget can automatically 
   play animated bitmaps if the specified frame number is -1.
   - 'TrackLeftArc' is a vector graphic view (Views::FillPath) displaying a circle 
   segment arranged per default between the needle's leftmost position (clockwise) 
   and its actual position. From this results the effect of a track behind the needle. 
   You can configure the track radius (@TrackLeftRadius), its thickness (@TrackLeftThickness), 
   color (@TrackLeftColor) and the appearance of its caps (@TrackLeftRoundedStart 
   and @TrackLeftRoundedEnd). With the properties @TrackLeftMarginStart and @TrackLeftMarginEnd 
   the start/end position of the track can be adjusted. With the property @TrackLeftStatic 
   the track can be configured to not depend on the actual needle position. The 
   center position of the track is controlled by the property @CenterOffset.
   - 'TrackLeftBorder' is a vector graphic view (Views::StrokePath) displaying an 
   outline of the above described 'TrackLeftArc' and lying in front of it. Its shape 
   and position correspond thus to the of the 'TrackLeftArc'. The thickness of the 
   border (@TrackLeftBorderWidth) and its color (@TrackLeftBorderColor) can be specified.
   - 'TrackRightArc' is a vector graphic view (Views::FillPath) displaying a circle 
   segment arranged per default between the actual position of the needle and its 
   rightmost position (clockwise). From this results the effect of a track behind 
   the needle. You can configure the track radius (@TrackRightRadius), its thickness 
   (@TrackRightThickness), color (@TrackRightColor) and the appearance of its caps 
   (@TrackRightRoundedStart and @TrackRightRoundedEnd). With the properties @TrackRightMarginStart 
   and @TrackRightMarginEnd the start/end position of the track can be adjusted. 
   With the property @TrackRightStatic the track can be configured to not depend 
   on the actual needle position. The center position of the track is controlled 
   by the property @CenterOffset.
   - 'TrackRightBorder' is a vector graphic view (Views::StrokePath) displaying 
   an outline of the above described 'TrackRightArc' and lying in front of it. Its 
   shape and position correspond thus to the of the 'TrackRightArc'. The thickness 
   of the border (@TrackRightBorderWidth) and its color (@TrackRightBorderColor) 
   can be specified.
   - 'NeedleImage' is a warp image view (Views::WarpImage) displayed and rotated 
   around predetermined pivot position along a circle segment with given radius. 
   The desired needle movement range (circle segment) is specified in the properties 
   @NeedleMinAngle and @NeedleMaxAngle. The radius of the circle segment is determined 
   by the property @NeedleRadius. The position to rotate the needle around it is 
   determined in the properties @CenterOffset and @NeedlePivot. With the property 
   @NeedleRotate you control whether the bitmap should appear rotated or only moved 
   along the circle segment. In the configuration object you can specify the desired 
   bitmap (@NeedleBitmap), the frame number within the bitmap (@NeedleFrame) and 
   opacity or color to tint the bitmap (@NeedleTint). The gauge widget can automatically 
   play animated bitmaps if the specified frame number is -1.
   - 'CoverImage' is an image view (Views::Image) displayed centered within the 
   widget area and covering so eventually the scale and needle images. In the configuration 
   object you can specify the desired bitmap (@CoverBitmap), the frame number within 
   the bitmap (@CoverFrame) and opacity or color to tint the bitmap (@CoverTint). 
   The gauge widget can automatically play animated bitmaps if the specified frame 
   number is -1.
   The gauge widget can rotate the needle with a smooth animation. This can be configured 
   in the properties @SwingDuration and @SwingElastic.
   All above mentioned views are arranged one above the other whereby the resulting 
   stacking order can be configured by using the properties @ScaleStackingPriority, 
   @TrackLeftStackingPriority, @TrackRightStackingPriority, @NeedleStackingPriority 
   and @CoverStackingPriority. The view with higher priority will appear in front 
   of other views with lower priority.
   To further enhance the widgets, a slot method can be assigned to the property 
   @OnUpdate. Within the slot method new decoration views can be added to the widgets 
   and updated according to the current state of the widget. 
   With the properties @WidgetMinSize and @WidgetMaxSize you can configure size 
   constraints for the widget itself. You can, for example, limit the gauge to not 
   shrink below a specified width or height. */
EW_DEFINE_FIELDS( WidgetSetGaugeConfig, WidgetSetWidgetConfig )
  EW_PROPERTY( SwingDuration,   XInt32 )
  EW_PROPERTY( TrackRightBorderColor, XColor )
  EW_PROPERTY( TrackRightBorderWidth, XFloat )
  EW_PROPERTY( TrackRightColor, XColor )
  EW_PROPERTY( TrackRightThickness, XFloat )
  EW_PROPERTY( TrackRightRadius, XFloat )
  EW_PROPERTY( TrackLeftColor,  XColor )
  EW_PROPERTY( TrackLeftThickness, XFloat )
  EW_PROPERTY( TrackLeftRadius, XFloat )
  EW_PROPERTY( TrackLeftMarginStart, XFloat )
  EW_PROPERTY( NeedleMaxAngle,  XFloat )
  EW_PROPERTY( NeedleMinAngle,  XFloat )
  EW_PROPERTY( CenterOffset,    XPoint )
  EW_PROPERTY( WidgetMinSize,   XPoint )
  EW_PROPERTY( SwingElastic,    XBool )
  EW_PROPERTY( TrackRightRoundedEnd, XBool )
  EW_PROPERTY( TrackLeftRoundedEnd, XBool )
  EW_PROPERTY( TrackLeftRoundedStart, XBool )
EW_END_OF_FIELDS( WidgetSetGaugeConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::GaugeConfig' */
EW_DEFINE_METHODS( WidgetSetGaugeConfig, WidgetSetWidgetConfig )
EW_END_OF_METHODS( WidgetSetGaugeConfig )

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetSwingElastic()' */
void WidgetSetGaugeConfig_OnSetSwingElastic( WidgetSetGaugeConfig _this, XBool value );

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetSwingDuration()' */
void WidgetSetGaugeConfig_OnSetSwingDuration( WidgetSetGaugeConfig _this, XInt32 
  value );

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetTrackRightBorderColor()' */
void WidgetSetGaugeConfig_OnSetTrackRightBorderColor( WidgetSetGaugeConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetTrackRightBorderWidth()' */
void WidgetSetGaugeConfig_OnSetTrackRightBorderWidth( WidgetSetGaugeConfig _this, 
  XFloat value );

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetTrackRightColor()' */
void WidgetSetGaugeConfig_OnSetTrackRightColor( WidgetSetGaugeConfig _this, XColor 
  value );

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetTrackRightThickness()' */
void WidgetSetGaugeConfig_OnSetTrackRightThickness( WidgetSetGaugeConfig _this, 
  XFloat value );

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetTrackRightRadius()' */
void WidgetSetGaugeConfig_OnSetTrackRightRadius( WidgetSetGaugeConfig _this, XFloat 
  value );

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetTrackRightRoundedEnd()' */
void WidgetSetGaugeConfig_OnSetTrackRightRoundedEnd( WidgetSetGaugeConfig _this, 
  XBool value );

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetTrackLeftColor()' */
void WidgetSetGaugeConfig_OnSetTrackLeftColor( WidgetSetGaugeConfig _this, XColor 
  value );

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetTrackLeftThickness()' */
void WidgetSetGaugeConfig_OnSetTrackLeftThickness( WidgetSetGaugeConfig _this, XFloat 
  value );

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetTrackLeftRadius()' */
void WidgetSetGaugeConfig_OnSetTrackLeftRadius( WidgetSetGaugeConfig _this, XFloat 
  value );

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetTrackLeftRoundedEnd()' */
void WidgetSetGaugeConfig_OnSetTrackLeftRoundedEnd( WidgetSetGaugeConfig _this, 
  XBool value );

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetTrackLeftRoundedStart()' */
void WidgetSetGaugeConfig_OnSetTrackLeftRoundedStart( WidgetSetGaugeConfig _this, 
  XBool value );

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetTrackLeftMarginStart()' */
void WidgetSetGaugeConfig_OnSetTrackLeftMarginStart( WidgetSetGaugeConfig _this, 
  XFloat value );

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetNeedleMaxAngle()' */
void WidgetSetGaugeConfig_OnSetNeedleMaxAngle( WidgetSetGaugeConfig _this, XFloat 
  value );

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetNeedleMinAngle()' */
void WidgetSetGaugeConfig_OnSetNeedleMinAngle( WidgetSetGaugeConfig _this, XFloat 
  value );

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetCenterOffset()' */
void WidgetSetGaugeConfig_OnSetCenterOffset( WidgetSetGaugeConfig _this, XPoint 
  value );

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetWidgetMinSize()' */
void WidgetSetGaugeConfig_OnSetWidgetMinSize( WidgetSetGaugeConfig _this, XPoint 
  value );

#ifdef __cplusplus
  }
#endif

#endif /* _WidgetSetGaugeConfig_H */

/* Embedded Wizard */

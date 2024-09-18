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

#include "ewlocale.h"
#include "_CoreKeyPressHandler.h"
#include "_CoreOutline.h"
#include "_CoreRoot.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreTimer.h"
#include "_CoreView.h"
#include "_EffectsFloatEffect.h"
#include "_EffectsInt32Effect.h"
#include "_GraphicsArcPath.h"
#include "_GraphicsPath.h"
#include "_ResourcesFont.h"
#include "_ViewsBorder.h"
#include "_ViewsFillPath.h"
#include "_ViewsFrame.h"
#include "_ViewsImage.h"
#include "_ViewsRectangle.h"
#include "_ViewsShadow.h"
#include "_ViewsStrokePath.h"
#include "_ViewsText.h"
#include "_WidgetSetGauge.h"
#include "_WidgetSetGaugeConfig.h"
#include "_WidgetSetHorizontalScrollbar.h"
#include "_WidgetSetHorizontalScrollbarConfig.h"
#include "_WidgetSetHorizontalSlider.h"
#include "_WidgetSetHorizontalSliderConfig.h"
#include "_WidgetSetPushButton.h"
#include "_WidgetSetPushButtonConfig.h"
#include "_WidgetSetToggleButton.h"
#include "_WidgetSetToggleButtonConfig.h"
#include "_WidgetSetValueDisplay.h"
#include "_WidgetSetValueDisplayConfig.h"
#include "_WidgetSetVerticalValueBar.h"
#include "_WidgetSetVerticalValueBarConfig.h"
#include "_WidgetSetWidgetConfig.h"
#include "Core.h"
#include "Effects.h"
#include "Graphics.h"
#include "Resources.h"
#include "Views.h"
#include "WidgetSet.h"

/* Compressed strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned int _StringsDefault0[] =
{
  0x0000000C, /* ratio 166.67 % */
  0xB8000900, 0x8005A452, 0x04010883, 0x00000004, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XColor _Const0000 = { 0xA7, 0xA9, 0xAC, 0xFF };
static const XColor _Const0001 = { 0xC4, 0xC6, 0xC9, 0xFF };
static const XPoint _Const0002 = { 40, 22 };
static const XColor _Const0003 = { 0x00, 0x00, 0x00, 0xFF };
static const XColor _Const0004 = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XRect _Const0005 = {{ 0, 0 }, { 200, 30 }};
static const XStringRes _Const0006 = { _StringsDefault0, 0x0002 };
static const XRect _Const0007 = {{ 0, 0 }, { 50, 200 }};
static const XPoint _Const0008 = { -1, -1 };
static const XRect _Const0009 = {{ 0, 0 }, { 120, 120 }};
static const XPoint _Const000A = { 0, 29 };
static const XPoint _Const000B = { 199, 29 };
static const XPoint _Const000C = { 199, 0 };
static const XPoint _Const000D = { 0, 0 };
static const XPoint _Const000E = { 90, 30 };
static const XPoint _Const000F = { 120, 30 };
static const XPoint _Const0010 = { 120, 0 };
static const XPoint _Const0011 = { 90, 0 };
static const XRect _Const0012 = {{ 0, 0 }, { 0, 0 }};
static const XRect _Const0013 = {{ 0, 0 }, { 200, 50 }};
static const XPoint _Const0014 = { 0, 50 };
static const XPoint _Const0015 = { 200, 50 };
static const XPoint _Const0016 = { 200, 0 };
static const XColor _Const0017 = { 0x00, 0x00, 0x00, 0x00 };
static const XRect _Const0018 = {{ -8, -8 }, { 9, 9 }};
static const XRect _Const0019 = {{ 0, 0 }, { 150, 50 }};
static const XPoint _Const001A = { 150, 50 };
static const XPoint _Const001B = { 150, 0 };
static const XColor _Const001C = { 0x00, 0x00, 0x00, 0xEE };
static const XColor _Const001D = { 0x00, 0x00, 0x00, 0x88 };
static const XColor _Const001E = { 0x00, 0x00, 0x00, 0x22 };
static const XColor _Const001F = { 0x00, 0x00, 0x00, 0x44 };
static const XColor _Const0020 = { 0x44, 0x44, 0x44, 0xFF };
static const XColor _Const0021 = { 0x44, 0x44, 0x44, 0x44 };
static const XPoint _Const0022 = { 40, 40 };
static const XColor _Const0023 = { 0x00, 0x00, 0x00, 0x11 };
static const XPoint _Const0024 = { 12, 0 };
static const XPoint _Const0025 = { 70, 60 };
static const XPoint _Const0026 = { 60, 60 };
static const XPoint _Const0027 = { -2, 0 };
static const XPoint _Const0028 = { -12, 0 };
static const XColor _Const0029 = { 0xDD, 0xDD, 0xDD, 0xFF };
static const XColor _Const002A = { 0xEE, 0xEE, 0xEE, 0xFF };
static const XPoint _Const002B = { -3, 0 };
static const XPoint _Const002C = { 40, 30 };
static const XPoint _Const002D = { 30, 30 };
static const XPoint _Const002E = { -17, 0 };
static const XPoint _Const002F = { -27, 0 };
static const XPoint _Const0030 = { 60, 36 };
static const XPoint _Const0031 = { 60, 40 };
static const XPoint _Const0032 = { 56, 56 };
static const XPoint _Const0033 = { 50, 50 };
static const XPoint _Const0034 = { 32, 32 };
static const XColor _Const0035 = { 0xAA, 0xAA, 0xAA, 0xFF };
static const XPoint _Const0036 = { 16, 16 };
static const XPoint _Const0037 = { 0, 11 };
static const XPoint _Const0038 = { 160, 140 };
static const XPoint _Const0039 = { 18, 18 };
static const XPoint _Const003A = { 26, 26 };

/* This autoobject provides the default customization for the 'value display' widget 
   (WidgetSet::ValueDisplay) in its small size variant. Widgets using this configuration 
   display the value and unit aligned at the right widget edge. */
EW_DEFINE_AUTOOBJECT( WidgetSetValueDisplay_Mono_Small, WidgetSetValueDisplayConfig )

/* Initializer for the auto object 'WidgetSet::ValueDisplay_Mono_Small' */
void WidgetSetValueDisplay_Mono_Small__Init( WidgetSetValueDisplayConfig _this )
{
  WidgetSetValueDisplayConfig_OnSetValueMarginRight( _this, 7 );
  WidgetSetValueDisplayConfig_OnSetValueColorNegative( _this, _Const0000 );
  WidgetSetValueDisplayConfig_OnSetValueColorPositive( _this, _Const0000 );
  WidgetSetValueDisplayConfig_OnSetValueAlignment( _this, ViewsTextAlignmentAlignHorzRight 
  | ViewsTextAlignmentAlignVertCenter );
  WidgetSetValueDisplayConfig_OnSetValueFont( _this, EwLoadResource( &ResourcesFontMedium, 
  ResourcesFont ));
  WidgetSetValueDisplayConfig_OnSetUnitColorNegative( _this, _Const0001 );
  WidgetSetValueDisplayConfig_OnSetUnitColorPositive( _this, _Const0001 );
  WidgetSetValueDisplayConfig_OnSetUnitAlignment( _this, ViewsTextAlignmentAlignHorzRight 
  | ViewsTextAlignmentAlignVertCenter );
  WidgetSetValueDisplayConfig_OnSetUnitFont( _this, EwLoadResource( &ResourcesFontMedium, 
  ResourcesFont ));
  WidgetSetValueDisplayConfig_OnSetFormatPlusSign( _this, 0 );
  WidgetSetValueDisplayConfig_OnSetLayout( _this, WidgetSetValueDisplayLayoutAlignValueLeftToUnit );
  WidgetSetValueDisplayConfig_OnSetWidgetMinSize( _this, _Const0002 );
}

/* Re-Initializer for the auto object 'WidgetSet::ValueDisplay_Mono_Small' */
void WidgetSetValueDisplay_Mono_Small__ReInit( WidgetSetValueDisplayConfig _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'WidgetSet::ValueDisplay_Mono_Small' */
EW_DEFINE_AUTOOBJECT_VARIANTS( WidgetSetValueDisplay_Mono_Small )
EW_END_OF_AUTOOBJECT_VARIANTS( WidgetSetValueDisplay_Mono_Small )

/* Initializer for the class 'WidgetSet::ValueDisplayConfig' */
void WidgetSetValueDisplayConfig__Init( WidgetSetValueDisplayConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  WidgetSetWidgetConfig__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetValueDisplayConfig );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetValueDisplayConfig );

  /* ... and initialize objects, variables, properties, etc. */
  _this->ValueColorNegative = _Const0003;
  _this->ValueColorPositive = _Const0003;
  _this->ValueAlignment = ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter;
  _this->UnitColorNegative = _Const0003;
  _this->UnitColorPositive = _Const0003;
  _this->UnitAlignment = ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter;
  _this->Layout = WidgetSetValueDisplayLayoutUnitAndValueAreIndependent;
}

/* Re-Initializer for the class 'WidgetSet::ValueDisplayConfig' */
void WidgetSetValueDisplayConfig__ReInit( WidgetSetValueDisplayConfig _this )
{
  /* At first re-initialize the super class ... */
  WidgetSetWidgetConfig__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'WidgetSet::ValueDisplayConfig' */
void WidgetSetValueDisplayConfig__Done( WidgetSetValueDisplayConfig _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( WidgetSetWidgetConfig );

  /* Don't forget to deinitialize the super class ... */
  WidgetSetWidgetConfig__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetValueMarginRight()' */
void WidgetSetValueDisplayConfig_OnSetValueMarginRight( WidgetSetValueDisplayConfig _this, 
  XInt32 value )
{
  if ( _this->ValueMarginRight == value )
    return;

  _this->ValueMarginRight = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetValueColorNegative()' */
void WidgetSetValueDisplayConfig_OnSetValueColorNegative( WidgetSetValueDisplayConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ValueColorNegative, value ))
    return;

  _this->ValueColorNegative = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetValueColorPositive()' */
void WidgetSetValueDisplayConfig_OnSetValueColorPositive( WidgetSetValueDisplayConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ValueColorPositive, value ))
    return;

  _this->ValueColorPositive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetValueAlignment()' */
void WidgetSetValueDisplayConfig_OnSetValueAlignment( WidgetSetValueDisplayConfig _this, 
  XSet value )
{
  if ( _this->ValueAlignment == value )
    return;

  _this->ValueAlignment = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetValueFont()' */
void WidgetSetValueDisplayConfig_OnSetValueFont( WidgetSetValueDisplayConfig _this, 
  ResourcesFont value )
{
  if ( _this->ValueFont == value )
    return;

  _this->ValueFont = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetUnitColorNegative()' */
void WidgetSetValueDisplayConfig_OnSetUnitColorNegative( WidgetSetValueDisplayConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->UnitColorNegative, value ))
    return;

  _this->UnitColorNegative = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetUnitColorPositive()' */
void WidgetSetValueDisplayConfig_OnSetUnitColorPositive( WidgetSetValueDisplayConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->UnitColorPositive, value ))
    return;

  _this->UnitColorPositive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetUnitAlignment()' */
void WidgetSetValueDisplayConfig_OnSetUnitAlignment( WidgetSetValueDisplayConfig _this, 
  XSet value )
{
  if ( _this->UnitAlignment == value )
    return;

  _this->UnitAlignment = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetUnitFont()' */
void WidgetSetValueDisplayConfig_OnSetUnitFont( WidgetSetValueDisplayConfig _this, 
  ResourcesFont value )
{
  if ( _this->UnitFont == value )
    return;

  _this->UnitFont = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetFormatPlusSign()' */
void WidgetSetValueDisplayConfig_OnSetFormatPlusSign( WidgetSetValueDisplayConfig _this, 
  XString value )
{
  if ( !EwCompString( _this->FormatPlusSign, value ))
    return;

  _this->FormatPlusSign = EwShareString( value );
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetLayout()' */
void WidgetSetValueDisplayConfig_OnSetLayout( WidgetSetValueDisplayConfig _this, 
  XEnum value )
{
  if ( _this->Layout == value )
    return;

  _this->Layout = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetWidgetMinSize()' */
void WidgetSetValueDisplayConfig_OnSetWidgetMinSize( WidgetSetValueDisplayConfig _this, 
  XPoint value )
{
  if ( value.X < 0 )
    value.X = 0;

  if ( value.Y < 0 )
    value.Y = 0;

  if ( !EwCompPoint( _this->WidgetMinSize, value ))
    return;

  _this->WidgetMinSize = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::ValueDisplayConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetValueDisplayConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetValueDisplayConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::ValueDisplayConfig' */
EW_DEFINE_CLASS( WidgetSetValueDisplayConfig, WidgetSetWidgetConfig, ValueFont, 
                 ValueFont, FormatPlusSign, FormatPlusSign, FormatPlusSign, ValueMarginRight, 
                 "WidgetSet::ValueDisplayConfig" )
EW_END_OF_CLASS( WidgetSetValueDisplayConfig )

/* Initializer for the class 'WidgetSet::VerticalValueBarConfig' */
void WidgetSetVerticalValueBarConfig__Init( WidgetSetVerticalValueBarConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  WidgetSetWidgetConfig__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetVerticalValueBarConfig );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetVerticalValueBarConfig );

  /* ... and initialize objects, variables, properties, etc. */
  _this->SwingElastic = 1;
  _this->SwingDuration = 500;
}

/* Re-Initializer for the class 'WidgetSet::VerticalValueBarConfig' */
void WidgetSetVerticalValueBarConfig__ReInit( WidgetSetVerticalValueBarConfig _this )
{
  /* At first re-initialize the super class ... */
  WidgetSetWidgetConfig__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'WidgetSet::VerticalValueBarConfig' */
void WidgetSetVerticalValueBarConfig__Done( WidgetSetVerticalValueBarConfig _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( WidgetSetWidgetConfig );

  /* Don't forget to deinitialize the super class ... */
  WidgetSetWidgetConfig__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::VerticalValueBarConfig.OnSetSwingElastic()' */
void WidgetSetVerticalValueBarConfig_OnSetSwingElastic( WidgetSetVerticalValueBarConfig _this, 
  XBool value )
{
  if ( _this->SwingElastic == value )
    return;

  _this->SwingElastic = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalValueBarConfig.OnSetSwingDuration()' */
void WidgetSetVerticalValueBarConfig_OnSetSwingDuration( WidgetSetVerticalValueBarConfig _this, 
  XInt32 value )
{
  if ( _this->SwingDuration == value )
    return;

  _this->SwingDuration = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalValueBarConfig.OnSetTrackAboveBorderColor()' */
void WidgetSetVerticalValueBarConfig_OnSetTrackAboveBorderColor( WidgetSetVerticalValueBarConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackAboveBorderColor, value ))
    return;

  _this->TrackAboveBorderColor = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalValueBarConfig.OnSetTrackAboveBorderWidth()' */
void WidgetSetVerticalValueBarConfig_OnSetTrackAboveBorderWidth( WidgetSetVerticalValueBarConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackAboveBorderWidth == value )
    return;

  _this->TrackAboveBorderWidth = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalValueBarConfig.OnSetTrackAboveColor()' */
void WidgetSetVerticalValueBarConfig_OnSetTrackAboveColor( WidgetSetVerticalValueBarConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackAboveColor, value ))
    return;

  _this->TrackAboveColor = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalValueBarConfig.OnSetTrackAboveFlattened()' */
void WidgetSetVerticalValueBarConfig_OnSetTrackAboveFlattened( WidgetSetVerticalValueBarConfig _this, 
  XBool value )
{
  if ( _this->TrackAboveFlattened == value )
    return;

  _this->TrackAboveFlattened = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalValueBarConfig.OnSetTrackAboveCornerRadius()' */
void WidgetSetVerticalValueBarConfig_OnSetTrackAboveCornerRadius( WidgetSetVerticalValueBarConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackAboveCornerRadius == value )
    return;

  _this->TrackAboveCornerRadius = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalValueBarConfig.OnSetTrackAboveThickness()' */
void WidgetSetVerticalValueBarConfig_OnSetTrackAboveThickness( WidgetSetVerticalValueBarConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackAboveThickness == value )
    return;

  _this->TrackAboveThickness = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalValueBarConfig.OnSetTrackBelowColor()' */
void WidgetSetVerticalValueBarConfig_OnSetTrackBelowColor( WidgetSetVerticalValueBarConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackBelowColor, value ))
    return;

  _this->TrackBelowColor = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalValueBarConfig.OnSetTrackBelowFlattened()' */
void WidgetSetVerticalValueBarConfig_OnSetTrackBelowFlattened( WidgetSetVerticalValueBarConfig _this, 
  XBool value )
{
  if ( _this->TrackBelowFlattened == value )
    return;

  _this->TrackBelowFlattened = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalValueBarConfig.OnSetTrackBelowCornerRadius()' */
void WidgetSetVerticalValueBarConfig_OnSetTrackBelowCornerRadius( WidgetSetVerticalValueBarConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackBelowCornerRadius == value )
    return;

  _this->TrackBelowCornerRadius = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalValueBarConfig.OnSetTrackBelowThickness()' */
void WidgetSetVerticalValueBarConfig_OnSetTrackBelowThickness( WidgetSetVerticalValueBarConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackBelowThickness == value )
    return;

  _this->TrackBelowThickness = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalValueBarConfig.OnSetWidgetMinSize()' */
void WidgetSetVerticalValueBarConfig_OnSetWidgetMinSize( WidgetSetVerticalValueBarConfig _this, 
  XPoint value )
{
  if ( value.X < 0 )
    value.X = 0;

  if ( value.Y < 0 )
    value.Y = 0;

  if ( !EwCompPoint( _this->WidgetMinSize, value ))
    return;

  _this->WidgetMinSize = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::VerticalValueBarConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetVerticalValueBarConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetVerticalValueBarConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::VerticalValueBarConfig' */
EW_DEFINE_CLASS( WidgetSetVerticalValueBarConfig, WidgetSetWidgetConfig, _.VMT, 
                 _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, "WidgetSet::VerticalValueBarConfig" )
EW_END_OF_CLASS( WidgetSetVerticalValueBarConfig )

/* Initializer for the class 'WidgetSet::GaugeConfig' */
void WidgetSetGaugeConfig__Init( WidgetSetGaugeConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  WidgetSetWidgetConfig__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetGaugeConfig );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetGaugeConfig );

  /* ... and initialize objects, variables, properties, etc. */
  _this->SwingElastic = 1;
  _this->SwingDuration = 500;
  _this->TrackRightBorderColor = _Const0004;
  _this->TrackRightColor = _Const0004;
  _this->TrackLeftColor = _Const0004;
  _this->NeedleMaxAngle = 45.0f;
  _this->NeedleMinAngle = 135.0f;
}

/* Re-Initializer for the class 'WidgetSet::GaugeConfig' */
void WidgetSetGaugeConfig__ReInit( WidgetSetGaugeConfig _this )
{
  /* At first re-initialize the super class ... */
  WidgetSetWidgetConfig__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'WidgetSet::GaugeConfig' */
void WidgetSetGaugeConfig__Done( WidgetSetGaugeConfig _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( WidgetSetWidgetConfig );

  /* Don't forget to deinitialize the super class ... */
  WidgetSetWidgetConfig__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetSwingElastic()' */
void WidgetSetGaugeConfig_OnSetSwingElastic( WidgetSetGaugeConfig _this, XBool value )
{
  if ( _this->SwingElastic == value )
    return;

  _this->SwingElastic = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetSwingDuration()' */
void WidgetSetGaugeConfig_OnSetSwingDuration( WidgetSetGaugeConfig _this, XInt32 
  value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->SwingDuration == value )
    return;

  _this->SwingDuration = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetTrackRightBorderColor()' */
void WidgetSetGaugeConfig_OnSetTrackRightBorderColor( WidgetSetGaugeConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackRightBorderColor, value ))
    return;

  _this->TrackRightBorderColor = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetTrackRightBorderWidth()' */
void WidgetSetGaugeConfig_OnSetTrackRightBorderWidth( WidgetSetGaugeConfig _this, 
  XFloat value )
{
  if ( value < 0.0f )
    value = 0.0f;

  if ( _this->TrackRightBorderWidth == value )
    return;

  _this->TrackRightBorderWidth = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetTrackRightColor()' */
void WidgetSetGaugeConfig_OnSetTrackRightColor( WidgetSetGaugeConfig _this, XColor 
  value )
{
  if ( !EwCompColor( _this->TrackRightColor, value ))
    return;

  _this->TrackRightColor = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetTrackRightThickness()' */
void WidgetSetGaugeConfig_OnSetTrackRightThickness( WidgetSetGaugeConfig _this, 
  XFloat value )
{
  if ( value < 0.0f )
    value = 0.0f;

  if ( _this->TrackRightThickness == value )
    return;

  _this->TrackRightThickness = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetTrackRightRadius()' */
void WidgetSetGaugeConfig_OnSetTrackRightRadius( WidgetSetGaugeConfig _this, XFloat 
  value )
{
  if ( value < 0.0f )
    value = 0.0f;

  if ( _this->TrackRightRadius == value )
    return;

  _this->TrackRightRadius = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetTrackRightRoundedEnd()' */
void WidgetSetGaugeConfig_OnSetTrackRightRoundedEnd( WidgetSetGaugeConfig _this, 
  XBool value )
{
  if ( _this->TrackRightRoundedEnd == value )
    return;

  _this->TrackRightRoundedEnd = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetTrackLeftColor()' */
void WidgetSetGaugeConfig_OnSetTrackLeftColor( WidgetSetGaugeConfig _this, XColor 
  value )
{
  if ( !EwCompColor( _this->TrackLeftColor, value ))
    return;

  _this->TrackLeftColor = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetTrackLeftThickness()' */
void WidgetSetGaugeConfig_OnSetTrackLeftThickness( WidgetSetGaugeConfig _this, XFloat 
  value )
{
  if ( value < 0.0f )
    value = 0.0f;

  if ( _this->TrackLeftThickness == value )
    return;

  _this->TrackLeftThickness = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetTrackLeftRadius()' */
void WidgetSetGaugeConfig_OnSetTrackLeftRadius( WidgetSetGaugeConfig _this, XFloat 
  value )
{
  if ( value < 0.0f )
    value = 0.0f;

  if ( _this->TrackLeftRadius == value )
    return;

  _this->TrackLeftRadius = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetTrackLeftRoundedEnd()' */
void WidgetSetGaugeConfig_OnSetTrackLeftRoundedEnd( WidgetSetGaugeConfig _this, 
  XBool value )
{
  if ( _this->TrackLeftRoundedEnd == value )
    return;

  _this->TrackLeftRoundedEnd = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetTrackLeftRoundedStart()' */
void WidgetSetGaugeConfig_OnSetTrackLeftRoundedStart( WidgetSetGaugeConfig _this, 
  XBool value )
{
  if ( _this->TrackLeftRoundedStart == value )
    return;

  _this->TrackLeftRoundedStart = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetTrackLeftMarginStart()' */
void WidgetSetGaugeConfig_OnSetTrackLeftMarginStart( WidgetSetGaugeConfig _this, 
  XFloat value )
{
  if ( _this->TrackLeftMarginStart == value )
    return;

  _this->TrackLeftMarginStart = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetNeedleMaxAngle()' */
void WidgetSetGaugeConfig_OnSetNeedleMaxAngle( WidgetSetGaugeConfig _this, XFloat 
  value )
{
  if ( _this->NeedleMaxAngle == value )
    return;

  _this->NeedleMaxAngle = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetNeedleMinAngle()' */
void WidgetSetGaugeConfig_OnSetNeedleMinAngle( WidgetSetGaugeConfig _this, XFloat 
  value )
{
  if ( _this->NeedleMinAngle == value )
    return;

  _this->NeedleMinAngle = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetCenterOffset()' */
void WidgetSetGaugeConfig_OnSetCenterOffset( WidgetSetGaugeConfig _this, XPoint 
  value )
{
  if ( !EwCompPoint( _this->CenterOffset, value ))
    return;

  _this->CenterOffset = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::GaugeConfig.OnSetWidgetMinSize()' */
void WidgetSetGaugeConfig_OnSetWidgetMinSize( WidgetSetGaugeConfig _this, XPoint 
  value )
{
  if ( value.X < 0 )
    value.X = 0;

  if ( value.Y < 0 )
    value.Y = 0;

  if ( !EwCompPoint( _this->WidgetMinSize, value ))
    return;

  _this->WidgetMinSize = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::GaugeConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetGaugeConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetGaugeConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::GaugeConfig' */
EW_DEFINE_CLASS( WidgetSetGaugeConfig, WidgetSetWidgetConfig, _.VMT, _.VMT, _.VMT, 
                 _.VMT, _.VMT, _.VMT, "WidgetSet::GaugeConfig" )
EW_END_OF_CLASS( WidgetSetGaugeConfig )

/* Initializer for the class 'WidgetSet::HorizontalScrollbarConfig' */
void WidgetSetHorizontalScrollbarConfig__Init( WidgetSetHorizontalScrollbarConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  WidgetSetWidgetConfig__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetHorizontalScrollbarConfig );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetHorizontalScrollbarConfig );

  /* ... and initialize objects, variables, properties, etc. */
}

/* Re-Initializer for the class 'WidgetSet::HorizontalScrollbarConfig' */
void WidgetSetHorizontalScrollbarConfig__ReInit( WidgetSetHorizontalScrollbarConfig _this )
{
  /* At first re-initialize the super class ... */
  WidgetSetWidgetConfig__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'WidgetSet::HorizontalScrollbarConfig' */
void WidgetSetHorizontalScrollbarConfig__Done( WidgetSetHorizontalScrollbarConfig _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( WidgetSetWidgetConfig );

  /* Don't forget to deinitialize the super class ... */
  WidgetSetWidgetConfig__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetThumbColorActive()' */
void WidgetSetHorizontalScrollbarConfig_OnSetThumbColorActive( WidgetSetHorizontalScrollbarConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbColorActive, value ))
    return;

  _this->ThumbColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetThumbColorDisabled()' */
void WidgetSetHorizontalScrollbarConfig_OnSetThumbColorDisabled( WidgetSetHorizontalScrollbarConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbColorDisabled, value ))
    return;

  _this->ThumbColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetThumbColorDefault()' */
void WidgetSetHorizontalScrollbarConfig_OnSetThumbColorDefault( WidgetSetHorizontalScrollbarConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbColorDefault, value ))
    return;

  _this->ThumbColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetThumbCornerRadiusActive()' */
void WidgetSetHorizontalScrollbarConfig_OnSetThumbCornerRadiusActive( WidgetSetHorizontalScrollbarConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbCornerRadiusActive == value )
    return;

  _this->ThumbCornerRadiusActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetThumbCornerRadiusDisabled()' */
void WidgetSetHorizontalScrollbarConfig_OnSetThumbCornerRadiusDisabled( WidgetSetHorizontalScrollbarConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbCornerRadiusDisabled == value )
    return;

  _this->ThumbCornerRadiusDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetThumbCornerRadiusDefault()' */
void WidgetSetHorizontalScrollbarConfig_OnSetThumbCornerRadiusDefault( WidgetSetHorizontalScrollbarConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbCornerRadiusDefault == value )
    return;

  _this->ThumbCornerRadiusDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetThumbMinWidthActive()' */
void WidgetSetHorizontalScrollbarConfig_OnSetThumbMinWidthActive( WidgetSetHorizontalScrollbarConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbMinWidthActive == value )
    return;

  _this->ThumbMinWidthActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetThumbMinWidthDisabled()' */
void WidgetSetHorizontalScrollbarConfig_OnSetThumbMinWidthDisabled( WidgetSetHorizontalScrollbarConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbMinWidthDisabled == value )
    return;

  _this->ThumbMinWidthDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetThumbMinWidthDefault()' */
void WidgetSetHorizontalScrollbarConfig_OnSetThumbMinWidthDefault( WidgetSetHorizontalScrollbarConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbMinWidthDefault == value )
    return;

  _this->ThumbMinWidthDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetThumbThicknessActive()' */
void WidgetSetHorizontalScrollbarConfig_OnSetThumbThicknessActive( WidgetSetHorizontalScrollbarConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbThicknessActive == value )
    return;

  _this->ThumbThicknessActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetThumbThicknessDisabled()' */
void WidgetSetHorizontalScrollbarConfig_OnSetThumbThicknessDisabled( WidgetSetHorizontalScrollbarConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbThicknessDisabled == value )
    return;

  _this->ThumbThicknessDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetThumbThicknessDefault()' */
void WidgetSetHorizontalScrollbarConfig_OnSetThumbThicknessDefault( WidgetSetHorizontalScrollbarConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbThicknessDefault == value )
    return;

  _this->ThumbThicknessDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetTrackBorderColorActive()' */
void WidgetSetHorizontalScrollbarConfig_OnSetTrackBorderColorActive( WidgetSetHorizontalScrollbarConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackBorderColorActive, value ))
    return;

  _this->TrackBorderColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetTrackBorderColorDisabled()' */
void WidgetSetHorizontalScrollbarConfig_OnSetTrackBorderColorDisabled( WidgetSetHorizontalScrollbarConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackBorderColorDisabled, value ))
    return;

  _this->TrackBorderColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetTrackBorderColorDefault()' */
void WidgetSetHorizontalScrollbarConfig_OnSetTrackBorderColorDefault( WidgetSetHorizontalScrollbarConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackBorderColorDefault, value ))
    return;

  _this->TrackBorderColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetTrackBorderWidthActive()' */
void WidgetSetHorizontalScrollbarConfig_OnSetTrackBorderWidthActive( WidgetSetHorizontalScrollbarConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackBorderWidthActive == value )
    return;

  _this->TrackBorderWidthActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetTrackBorderWidthDisabled()' */
void WidgetSetHorizontalScrollbarConfig_OnSetTrackBorderWidthDisabled( WidgetSetHorizontalScrollbarConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackBorderWidthDisabled == value )
    return;

  _this->TrackBorderWidthDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetTrackBorderWidthDefault()' */
void WidgetSetHorizontalScrollbarConfig_OnSetTrackBorderWidthDefault( WidgetSetHorizontalScrollbarConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackBorderWidthDefault == value )
    return;

  _this->TrackBorderWidthDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetTrackCornerRadiusActive()' */
void WidgetSetHorizontalScrollbarConfig_OnSetTrackCornerRadiusActive( WidgetSetHorizontalScrollbarConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackCornerRadiusActive == value )
    return;

  _this->TrackCornerRadiusActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetTrackCornerRadiusDisabled()' */
void WidgetSetHorizontalScrollbarConfig_OnSetTrackCornerRadiusDisabled( WidgetSetHorizontalScrollbarConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackCornerRadiusDisabled == value )
    return;

  _this->TrackCornerRadiusDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetTrackCornerRadiusDefault()' */
void WidgetSetHorizontalScrollbarConfig_OnSetTrackCornerRadiusDefault( WidgetSetHorizontalScrollbarConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackCornerRadiusDefault == value )
    return;

  _this->TrackCornerRadiusDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetTrackThicknessActive()' */
void WidgetSetHorizontalScrollbarConfig_OnSetTrackThicknessActive( WidgetSetHorizontalScrollbarConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackThicknessActive == value )
    return;

  _this->TrackThicknessActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetTrackThicknessDisabled()' */
void WidgetSetHorizontalScrollbarConfig_OnSetTrackThicknessDisabled( WidgetSetHorizontalScrollbarConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackThicknessDisabled == value )
    return;

  _this->TrackThicknessDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetTrackThicknessDefault()' */
void WidgetSetHorizontalScrollbarConfig_OnSetTrackThicknessDefault( WidgetSetHorizontalScrollbarConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackThicknessDefault == value )
    return;

  _this->TrackThicknessDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbarConfig.OnSetWidgetMinSize()' */
void WidgetSetHorizontalScrollbarConfig_OnSetWidgetMinSize( WidgetSetHorizontalScrollbarConfig _this, 
  XPoint value )
{
  if ( value.X < 0 )
    value.X = 0;

  if ( value.Y < 0 )
    value.Y = 0;

  if ( !EwCompPoint( _this->WidgetMinSize, value ))
    return;

  _this->WidgetMinSize = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::HorizontalScrollbarConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetHorizontalScrollbarConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetHorizontalScrollbarConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::HorizontalScrollbarConfig' */
EW_DEFINE_CLASS( WidgetSetHorizontalScrollbarConfig, WidgetSetWidgetConfig, _.VMT, 
                 _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, "WidgetSet::HorizontalScrollbarConfig" )
EW_END_OF_CLASS( WidgetSetHorizontalScrollbarConfig )

/* Initializer for the class 'WidgetSet::HorizontalSliderConfig' */
void WidgetSetHorizontalSliderConfig__Init( WidgetSetHorizontalSliderConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  WidgetSetWidgetConfig__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetHorizontalSliderConfig );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetHorizontalSliderConfig );

  /* ... and initialize objects, variables, properties, etc. */
}

/* Re-Initializer for the class 'WidgetSet::HorizontalSliderConfig' */
void WidgetSetHorizontalSliderConfig__ReInit( WidgetSetHorizontalSliderConfig _this )
{
  /* At first re-initialize the super class ... */
  WidgetSetWidgetConfig__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'WidgetSet::HorizontalSliderConfig' */
void WidgetSetHorizontalSliderConfig__Done( WidgetSetHorizontalSliderConfig _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( WidgetSetWidgetConfig );

  /* Don't forget to deinitialize the super class ... */
  WidgetSetWidgetConfig__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetStateTransitionDuration()' */
void WidgetSetHorizontalSliderConfig_OnSetStateTransitionDuration( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->StateTransitionDuration == value )
    return;

  _this->StateTransitionDuration = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetKeyRepeatPeriod()' */
void WidgetSetHorizontalSliderConfig_OnSetKeyRepeatPeriod( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->KeyRepeatPeriod == value )
    return;

  _this->KeyRepeatPeriod = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetKeyRepeatDelay()' */
void WidgetSetHorizontalSliderConfig_OnSetKeyRepeatDelay( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->KeyRepeatDelay == value )
    return;

  _this->KeyRepeatDelay = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetAccentColorActive()' */
void WidgetSetHorizontalSliderConfig_OnSetAccentColorActive( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->AccentColorActive, value ))
    return;

  _this->AccentColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetAccentColorFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetAccentColorFocused( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->AccentColorFocused, value ))
    return;

  _this->AccentColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetAccentCornerRadiusActive()' */
void WidgetSetHorizontalSliderConfig_OnSetAccentCornerRadiusActive( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->AccentCornerRadiusActive == value )
    return;

  _this->AccentCornerRadiusActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetAccentCornerRadiusFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetAccentCornerRadiusFocused( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->AccentCornerRadiusFocused == value )
    return;

  _this->AccentCornerRadiusFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetAccentCornerRadiusDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetAccentCornerRadiusDisabled( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->AccentCornerRadiusDisabled == value )
    return;

  _this->AccentCornerRadiusDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetAccentCornerRadiusDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetAccentCornerRadiusDefault( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->AccentCornerRadiusDefault == value )
    return;

  _this->AccentCornerRadiusDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetAccentSizeActive()' */
void WidgetSetHorizontalSliderConfig_OnSetAccentSizeActive( WidgetSetHorizontalSliderConfig _this, 
  XPoint value )
{
  if ( value.X < 0 )
    value.X = 0;

  if ( value.Y < 0 )
    value.Y = 0;

  if ( !EwCompPoint( _this->AccentSizeActive, value ))
    return;

  _this->AccentSizeActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetAccentSizeFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetAccentSizeFocused( WidgetSetHorizontalSliderConfig _this, 
  XPoint value )
{
  if ( value.X < 0 )
    value.X = 0;

  if ( value.Y < 0 )
    value.Y = 0;

  if ( !EwCompPoint( _this->AccentSizeFocused, value ))
    return;

  _this->AccentSizeFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetAccentSizeDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetAccentSizeDisabled( WidgetSetHorizontalSliderConfig _this, 
  XPoint value )
{
  if ( value.X < 0 )
    value.X = 0;

  if ( value.Y < 0 )
    value.Y = 0;

  if ( !EwCompPoint( _this->AccentSizeDisabled, value ))
    return;

  _this->AccentSizeDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetAccentSizeDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetAccentSizeDefault( WidgetSetHorizontalSliderConfig _this, 
  XPoint value )
{
  if ( value.X < 0 )
    value.X = 0;

  if ( value.Y < 0 )
    value.Y = 0;

  if ( !EwCompPoint( _this->AccentSizeDefault, value ))
    return;

  _this->AccentSizeDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbBorderColorActive()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbBorderColorActive( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbBorderColorActive, value ))
    return;

  _this->ThumbBorderColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbBorderColorFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbBorderColorFocused( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbBorderColorFocused, value ))
    return;

  _this->ThumbBorderColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbBorderColorDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbBorderColorDisabled( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbBorderColorDisabled, value ))
    return;

  _this->ThumbBorderColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbBorderColorDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbBorderColorDefault( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbBorderColorDefault, value ))
    return;

  _this->ThumbBorderColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbBorderWidthActive()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbBorderWidthActive( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbBorderWidthActive == value )
    return;

  _this->ThumbBorderWidthActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbBorderWidthFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbBorderWidthFocused( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbBorderWidthFocused == value )
    return;

  _this->ThumbBorderWidthFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbBorderWidthDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbBorderWidthDisabled( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbBorderWidthDisabled == value )
    return;

  _this->ThumbBorderWidthDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbBorderWidthDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbBorderWidthDefault( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbBorderWidthDefault == value )
    return;

  _this->ThumbBorderWidthDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbColorActive()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbColorActive( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbColorActive, value ))
    return;

  _this->ThumbColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbColorFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbColorFocused( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbColorFocused, value ))
    return;

  _this->ThumbColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbColorDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbColorDisabled( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbColorDisabled, value ))
    return;

  _this->ThumbColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbColorDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbColorDefault( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbColorDefault, value ))
    return;

  _this->ThumbColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbCornerRadiusActive()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbCornerRadiusActive( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbCornerRadiusActive == value )
    return;

  _this->ThumbCornerRadiusActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbCornerRadiusFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbCornerRadiusFocused( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbCornerRadiusFocused == value )
    return;

  _this->ThumbCornerRadiusFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbCornerRadiusDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbCornerRadiusDisabled( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbCornerRadiusDisabled == value )
    return;

  _this->ThumbCornerRadiusDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbCornerRadiusDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbCornerRadiusDefault( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbCornerRadiusDefault == value )
    return;

  _this->ThumbCornerRadiusDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbSizeActive()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbSizeActive( WidgetSetHorizontalSliderConfig _this, 
  XPoint value )
{
  if ( value.X < 0 )
    value.X = 0;

  if ( value.Y < 0 )
    value.Y = 0;

  if ( !EwCompPoint( _this->ThumbSizeActive, value ))
    return;

  _this->ThumbSizeActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbSizeFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbSizeFocused( WidgetSetHorizontalSliderConfig _this, 
  XPoint value )
{
  if ( value.X < 0 )
    value.X = 0;

  if ( value.Y < 0 )
    value.Y = 0;

  if ( !EwCompPoint( _this->ThumbSizeFocused, value ))
    return;

  _this->ThumbSizeFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbSizeDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbSizeDisabled( WidgetSetHorizontalSliderConfig _this, 
  XPoint value )
{
  if ( value.X < 0 )
    value.X = 0;

  if ( value.Y < 0 )
    value.Y = 0;

  if ( !EwCompPoint( _this->ThumbSizeDisabled, value ))
    return;

  _this->ThumbSizeDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbSizeDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbSizeDefault( WidgetSetHorizontalSliderConfig _this, 
  XPoint value )
{
  if ( value.X < 0 )
    value.X = 0;

  if ( value.Y < 0 )
    value.Y = 0;

  if ( !EwCompPoint( _this->ThumbSizeDefault, value ))
    return;

  _this->ThumbSizeDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbMarginRight()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbMarginRight( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->ThumbMarginRight == value )
    return;

  _this->ThumbMarginRight = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbMarginLeft()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbMarginLeft( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->ThumbMarginLeft == value )
    return;

  _this->ThumbMarginLeft = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightBorderColorActive()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightBorderColorActive( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackRightBorderColorActive, value ))
    return;

  _this->TrackRightBorderColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightBorderColorFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightBorderColorFocused( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackRightBorderColorFocused, value ))
    return;

  _this->TrackRightBorderColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightBorderColorDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightBorderColorDisabled( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackRightBorderColorDisabled, value ))
    return;

  _this->TrackRightBorderColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightBorderColorDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightBorderColorDefault( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackRightBorderColorDefault, value ))
    return;

  _this->TrackRightBorderColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightBorderWidthActive()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightBorderWidthActive( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackRightBorderWidthActive == value )
    return;

  _this->TrackRightBorderWidthActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightBorderWidthFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightBorderWidthFocused( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackRightBorderWidthFocused == value )
    return;

  _this->TrackRightBorderWidthFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightBorderWidthDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightBorderWidthDisabled( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackRightBorderWidthDisabled == value )
    return;

  _this->TrackRightBorderWidthDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightBorderWidthDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightBorderWidthDefault( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackRightBorderWidthDefault == value )
    return;

  _this->TrackRightBorderWidthDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightColorActive()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightColorActive( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackRightColorActive, value ))
    return;

  _this->TrackRightColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightColorFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightColorFocused( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackRightColorFocused, value ))
    return;

  _this->TrackRightColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightColorDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightColorDefault( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackRightColorDefault, value ))
    return;

  _this->TrackRightColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightCornerRadiusActive()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightCornerRadiusActive( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackRightCornerRadiusActive == value )
    return;

  _this->TrackRightCornerRadiusActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightCornerRadiusFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightCornerRadiusFocused( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackRightCornerRadiusFocused == value )
    return;

  _this->TrackRightCornerRadiusFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightCornerRadiusDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightCornerRadiusDisabled( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackRightCornerRadiusDisabled == value )
    return;

  _this->TrackRightCornerRadiusDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightCornerRadiusDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightCornerRadiusDefault( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackRightCornerRadiusDefault == value )
    return;

  _this->TrackRightCornerRadiusDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightThicknessActive()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightThicknessActive( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackRightThicknessActive == value )
    return;

  _this->TrackRightThicknessActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightThicknessFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightThicknessFocused( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackRightThicknessFocused == value )
    return;

  _this->TrackRightThicknessFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightThicknessDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightThicknessDisabled( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackRightThicknessDisabled == value )
    return;

  _this->TrackRightThicknessDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightThicknessDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightThicknessDefault( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackRightThicknessDefault == value )
    return;

  _this->TrackRightThicknessDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightFlattened()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightFlattened( WidgetSetHorizontalSliderConfig _this, 
  XBool value )
{
  if ( _this->TrackRightFlattened == value )
    return;

  _this->TrackRightFlattened = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftColorActive()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftColorActive( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackLeftColorActive, value ))
    return;

  _this->TrackLeftColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftColorFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftColorFocused( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackLeftColorFocused, value ))
    return;

  _this->TrackLeftColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftColorDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftColorDisabled( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackLeftColorDisabled, value ))
    return;

  _this->TrackLeftColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftColorDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftColorDefault( WidgetSetHorizontalSliderConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackLeftColorDefault, value ))
    return;

  _this->TrackLeftColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftCornerRadiusActive()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftCornerRadiusActive( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackLeftCornerRadiusActive == value )
    return;

  _this->TrackLeftCornerRadiusActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftCornerRadiusFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftCornerRadiusFocused( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackLeftCornerRadiusFocused == value )
    return;

  _this->TrackLeftCornerRadiusFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftCornerRadiusDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftCornerRadiusDisabled( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackLeftCornerRadiusDisabled == value )
    return;

  _this->TrackLeftCornerRadiusDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftCornerRadiusDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftCornerRadiusDefault( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackLeftCornerRadiusDefault == value )
    return;

  _this->TrackLeftCornerRadiusDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftThicknessActive()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftThicknessActive( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackLeftThicknessActive == value )
    return;

  _this->TrackLeftThicknessActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftThicknessFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftThicknessFocused( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackLeftThicknessFocused == value )
    return;

  _this->TrackLeftThicknessFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftThicknessDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftThicknessDisabled( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackLeftThicknessDisabled == value )
    return;

  _this->TrackLeftThicknessDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftThicknessDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftThicknessDefault( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackLeftThicknessDefault == value )
    return;

  _this->TrackLeftThicknessDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftFlattened()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftFlattened( WidgetSetHorizontalSliderConfig _this, 
  XBool value )
{
  if ( _this->TrackLeftFlattened == value )
    return;

  _this->TrackLeftFlattened = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetWidgetMinSize()' */
void WidgetSetHorizontalSliderConfig_OnSetWidgetMinSize( WidgetSetHorizontalSliderConfig _this, 
  XPoint value )
{
  if ( value.X < 0 )
    value.X = 0;

  if ( value.Y < 0 )
    value.Y = 0;

  if ( !EwCompPoint( _this->WidgetMinSize, value ))
    return;

  _this->WidgetMinSize = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::HorizontalSliderConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetHorizontalSliderConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetHorizontalSliderConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::HorizontalSliderConfig' */
EW_DEFINE_CLASS( WidgetSetHorizontalSliderConfig, WidgetSetWidgetConfig, _.VMT, 
                 _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, "WidgetSet::HorizontalSliderConfig" )
EW_END_OF_CLASS( WidgetSetHorizontalSliderConfig )

/* Initializer for the class 'WidgetSet::ToggleButtonConfig' */
void WidgetSetToggleButtonConfig__Init( WidgetSetToggleButtonConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  WidgetSetWidgetConfig__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetToggleButtonConfig );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetToggleButtonConfig );

  /* ... and initialize objects, variables, properties, etc. */
  _this->PressedFeedbackDuration = 50;
  _this->AccentLayout = CoreLayoutAlignToBottom | CoreLayoutAlignToLeft | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert;
  _this->ThumbLayout = CoreLayoutAlignToBottom | CoreLayoutAlignToLeft | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert;
  _this->TrackLayout = CoreLayoutAlignToBottom | CoreLayoutAlignToLeft | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert;
  _this->LabelOnColorActive = _Const0003;
  _this->LabelOnColorFocused = _Const0003;
  _this->LabelOnColorDisabled = _Const0003;
  _this->LabelOnColorDefault = _Const0003;
  _this->LabelOffColorActive = _Const0003;
  _this->LabelOffColorFocused = _Const0003;
  _this->LabelOffColorDisabled = _Const0003;
  _this->LabelOffColorDefault = _Const0003;
  _this->IconOnTintActive = _Const0004;
  _this->IconOnTintFocused = _Const0004;
  _this->IconOnTintDisabled = _Const0004;
  _this->IconOnTintDefault = _Const0004;
  _this->IconOffTintActive = _Const0004;
  _this->IconOffTintFocused = _Const0004;
  _this->IconOffTintDisabled = _Const0004;
  _this->IconOffTintDefault = _Const0004;
  _this->LabelAlignment = ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter;
  _this->IconAlignment = ViewsImageAlignmentAlignHorzCenter | ViewsImageAlignmentAlignVertCenter;
}

/* Re-Initializer for the class 'WidgetSet::ToggleButtonConfig' */
void WidgetSetToggleButtonConfig__ReInit( WidgetSetToggleButtonConfig _this )
{
  /* At first re-initialize the super class ... */
  WidgetSetWidgetConfig__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'WidgetSet::ToggleButtonConfig' */
void WidgetSetToggleButtonConfig__Done( WidgetSetToggleButtonConfig _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( WidgetSetWidgetConfig );

  /* Don't forget to deinitialize the super class ... */
  WidgetSetWidgetConfig__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetStateTransitionDuration()' */
void WidgetSetToggleButtonConfig_OnSetStateTransitionDuration( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->StateTransitionDuration == value )
    return;

  _this->StateTransitionDuration = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetPressedFeedbackDuration()' */
void WidgetSetToggleButtonConfig_OnSetPressedFeedbackDuration( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->PressedFeedbackDuration == value )
    return;

  _this->PressedFeedbackDuration = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLimitTouchArea()' */
void WidgetSetToggleButtonConfig_OnSetLimitTouchArea( WidgetSetToggleButtonConfig _this, 
  XBool value )
{
  if ( _this->LimitTouchArea == value )
    return;

  _this->LimitTouchArea = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnColorActive()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->AccentOnColorActive, value ))
    return;

  _this->AccentOnColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->AccentOnColorFocused, value ))
    return;

  _this->AccentOnColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnCornerRadiusActive()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnCornerRadiusActive( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->AccentOnCornerRadiusActive == value )
    return;

  _this->AccentOnCornerRadiusActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnCornerRadiusFocused()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnCornerRadiusFocused( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->AccentOnCornerRadiusFocused == value )
    return;

  _this->AccentOnCornerRadiusFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnCornerRadiusDisabled()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnCornerRadiusDisabled( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->AccentOnCornerRadiusDisabled == value )
    return;

  _this->AccentOnCornerRadiusDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnCornerRadiusDefault()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnCornerRadiusDefault( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->AccentOnCornerRadiusDefault == value )
    return;

  _this->AccentOnCornerRadiusDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnOffsetActive()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnOffsetActive( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->AccentOnOffsetActive, value ))
    return;

  _this->AccentOnOffsetActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnOffsetFocused()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnOffsetFocused( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->AccentOnOffsetFocused, value ))
    return;

  _this->AccentOnOffsetFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnOffsetDisabled()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnOffsetDisabled( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->AccentOnOffsetDisabled, value ))
    return;

  _this->AccentOnOffsetDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnOffsetDefault()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnOffsetDefault( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->AccentOnOffsetDefault, value ))
    return;

  _this->AccentOnOffsetDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnSizeActive()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnSizeActive( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->AccentOnSizeActive, value ))
    return;

  _this->AccentOnSizeActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnSizeFocused()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnSizeFocused( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->AccentOnSizeFocused, value ))
    return;

  _this->AccentOnSizeFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnSizeDisabled()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnSizeDisabled( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->AccentOnSizeDisabled, value ))
    return;

  _this->AccentOnSizeDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOnSizeDefault()' */
void WidgetSetToggleButtonConfig_OnSetAccentOnSizeDefault( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->AccentOnSizeDefault, value ))
    return;

  _this->AccentOnSizeDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffColorActive()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->AccentOffColorActive, value ))
    return;

  _this->AccentOffColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->AccentOffColorFocused, value ))
    return;

  _this->AccentOffColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffCornerRadiusActive()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffCornerRadiusActive( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->AccentOffCornerRadiusActive == value )
    return;

  _this->AccentOffCornerRadiusActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffCornerRadiusFocused()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffCornerRadiusFocused( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->AccentOffCornerRadiusFocused == value )
    return;

  _this->AccentOffCornerRadiusFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffCornerRadiusDisabled()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffCornerRadiusDisabled( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->AccentOffCornerRadiusDisabled == value )
    return;

  _this->AccentOffCornerRadiusDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffCornerRadiusDefault()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffCornerRadiusDefault( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->AccentOffCornerRadiusDefault == value )
    return;

  _this->AccentOffCornerRadiusDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffOffsetActive()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffOffsetActive( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->AccentOffOffsetActive, value ))
    return;

  _this->AccentOffOffsetActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffOffsetFocused()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffOffsetFocused( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->AccentOffOffsetFocused, value ))
    return;

  _this->AccentOffOffsetFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffOffsetDisabled()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffOffsetDisabled( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->AccentOffOffsetDisabled, value ))
    return;

  _this->AccentOffOffsetDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffOffsetDefault()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffOffsetDefault( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->AccentOffOffsetDefault, value ))
    return;

  _this->AccentOffOffsetDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffSizeActive()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffSizeActive( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->AccentOffSizeActive, value ))
    return;

  _this->AccentOffSizeActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffSizeFocused()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffSizeFocused( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->AccentOffSizeFocused, value ))
    return;

  _this->AccentOffSizeFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffSizeDisabled()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffSizeDisabled( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->AccentOffSizeDisabled, value ))
    return;

  _this->AccentOffSizeDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentOffSizeDefault()' */
void WidgetSetToggleButtonConfig_OnSetAccentOffSizeDefault( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->AccentOffSizeDefault, value ))
    return;

  _this->AccentOffSizeDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetAccentLayout()' */
void WidgetSetToggleButtonConfig_OnSetAccentLayout( WidgetSetToggleButtonConfig _this, 
  XSet value )
{
  if ( _this->AccentLayout == value )
    return;

  _this->AccentLayout = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnBorderColorActive()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnBorderColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbOnBorderColorActive, value ))
    return;

  _this->ThumbOnBorderColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnBorderColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnBorderColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbOnBorderColorFocused, value ))
    return;

  _this->ThumbOnBorderColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnBorderColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnBorderColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbOnBorderColorDisabled, value ))
    return;

  _this->ThumbOnBorderColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnBorderColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnBorderColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbOnBorderColorDefault, value ))
    return;

  _this->ThumbOnBorderColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnBorderWidthActive()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnBorderWidthActive( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbOnBorderWidthActive == value )
    return;

  _this->ThumbOnBorderWidthActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnBorderWidthFocused()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnBorderWidthFocused( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbOnBorderWidthFocused == value )
    return;

  _this->ThumbOnBorderWidthFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnBorderWidthDisabled()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnBorderWidthDisabled( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbOnBorderWidthDisabled == value )
    return;

  _this->ThumbOnBorderWidthDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnBorderWidthDefault()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnBorderWidthDefault( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbOnBorderWidthDefault == value )
    return;

  _this->ThumbOnBorderWidthDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnColorActive()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbOnColorActive, value ))
    return;

  _this->ThumbOnColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbOnColorFocused, value ))
    return;

  _this->ThumbOnColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbOnColorDisabled, value ))
    return;

  _this->ThumbOnColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbOnColorDefault, value ))
    return;

  _this->ThumbOnColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnCornerRadiusActive()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnCornerRadiusActive( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbOnCornerRadiusActive == value )
    return;

  _this->ThumbOnCornerRadiusActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnCornerRadiusFocused()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnCornerRadiusFocused( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbOnCornerRadiusFocused == value )
    return;

  _this->ThumbOnCornerRadiusFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnCornerRadiusDisabled()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnCornerRadiusDisabled( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbOnCornerRadiusDisabled == value )
    return;

  _this->ThumbOnCornerRadiusDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnCornerRadiusDefault()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnCornerRadiusDefault( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbOnCornerRadiusDefault == value )
    return;

  _this->ThumbOnCornerRadiusDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnOffsetActive()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnOffsetActive( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->ThumbOnOffsetActive, value ))
    return;

  _this->ThumbOnOffsetActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnOffsetFocused()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnOffsetFocused( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->ThumbOnOffsetFocused, value ))
    return;

  _this->ThumbOnOffsetFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnOffsetDisabled()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnOffsetDisabled( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->ThumbOnOffsetDisabled, value ))
    return;

  _this->ThumbOnOffsetDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnOffsetDefault()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnOffsetDefault( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->ThumbOnOffsetDefault, value ))
    return;

  _this->ThumbOnOffsetDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnSizeActive()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnSizeActive( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->ThumbOnSizeActive, value ))
    return;

  _this->ThumbOnSizeActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnSizeFocused()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnSizeFocused( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->ThumbOnSizeFocused, value ))
    return;

  _this->ThumbOnSizeFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnSizeDisabled()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnSizeDisabled( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->ThumbOnSizeDisabled, value ))
    return;

  _this->ThumbOnSizeDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOnSizeDefault()' */
void WidgetSetToggleButtonConfig_OnSetThumbOnSizeDefault( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->ThumbOnSizeDefault, value ))
    return;

  _this->ThumbOnSizeDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffBorderColorActive()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffBorderColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbOffBorderColorActive, value ))
    return;

  _this->ThumbOffBorderColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffBorderColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffBorderColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbOffBorderColorFocused, value ))
    return;

  _this->ThumbOffBorderColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffBorderColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffBorderColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbOffBorderColorDisabled, value ))
    return;

  _this->ThumbOffBorderColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffBorderColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffBorderColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbOffBorderColorDefault, value ))
    return;

  _this->ThumbOffBorderColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffBorderWidthActive()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffBorderWidthActive( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbOffBorderWidthActive == value )
    return;

  _this->ThumbOffBorderWidthActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffBorderWidthFocused()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffBorderWidthFocused( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbOffBorderWidthFocused == value )
    return;

  _this->ThumbOffBorderWidthFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffBorderWidthDisabled()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffBorderWidthDisabled( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbOffBorderWidthDisabled == value )
    return;

  _this->ThumbOffBorderWidthDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffBorderWidthDefault()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffBorderWidthDefault( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbOffBorderWidthDefault == value )
    return;

  _this->ThumbOffBorderWidthDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffColorActive()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbOffColorActive, value ))
    return;

  _this->ThumbOffColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbOffColorFocused, value ))
    return;

  _this->ThumbOffColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbOffColorDisabled, value ))
    return;

  _this->ThumbOffColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbOffColorDefault, value ))
    return;

  _this->ThumbOffColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffCornerRadiusActive()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffCornerRadiusActive( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbOffCornerRadiusActive == value )
    return;

  _this->ThumbOffCornerRadiusActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffCornerRadiusFocused()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffCornerRadiusFocused( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbOffCornerRadiusFocused == value )
    return;

  _this->ThumbOffCornerRadiusFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffCornerRadiusDisabled()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffCornerRadiusDisabled( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbOffCornerRadiusDisabled == value )
    return;

  _this->ThumbOffCornerRadiusDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffCornerRadiusDefault()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffCornerRadiusDefault( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbOffCornerRadiusDefault == value )
    return;

  _this->ThumbOffCornerRadiusDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffOffsetActive()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffOffsetActive( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->ThumbOffOffsetActive, value ))
    return;

  _this->ThumbOffOffsetActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffOffsetFocused()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffOffsetFocused( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->ThumbOffOffsetFocused, value ))
    return;

  _this->ThumbOffOffsetFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffOffsetDisabled()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffOffsetDisabled( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->ThumbOffOffsetDisabled, value ))
    return;

  _this->ThumbOffOffsetDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffOffsetDefault()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffOffsetDefault( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->ThumbOffOffsetDefault, value ))
    return;

  _this->ThumbOffOffsetDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffSizeActive()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffSizeActive( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->ThumbOffSizeActive, value ))
    return;

  _this->ThumbOffSizeActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffSizeFocused()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffSizeFocused( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->ThumbOffSizeFocused, value ))
    return;

  _this->ThumbOffSizeFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffSizeDisabled()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffSizeDisabled( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->ThumbOffSizeDisabled, value ))
    return;

  _this->ThumbOffSizeDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbOffSizeDefault()' */
void WidgetSetToggleButtonConfig_OnSetThumbOffSizeDefault( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->ThumbOffSizeDefault, value ))
    return;

  _this->ThumbOffSizeDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetThumbLayout()' */
void WidgetSetToggleButtonConfig_OnSetThumbLayout( WidgetSetToggleButtonConfig _this, 
  XSet value )
{
  if ( _this->ThumbLayout == value )
    return;

  _this->ThumbLayout = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOnBorderColorActive()' */
void WidgetSetToggleButtonConfig_OnSetTrackOnBorderColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackOnBorderColorActive, value ))
    return;

  _this->TrackOnBorderColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOnBorderColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetTrackOnBorderColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackOnBorderColorFocused, value ))
    return;

  _this->TrackOnBorderColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOnBorderColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetTrackOnBorderColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackOnBorderColorDisabled, value ))
    return;

  _this->TrackOnBorderColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOnBorderColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetTrackOnBorderColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackOnBorderColorDefault, value ))
    return;

  _this->TrackOnBorderColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOnBorderWidthActive()' */
void WidgetSetToggleButtonConfig_OnSetTrackOnBorderWidthActive( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackOnBorderWidthActive == value )
    return;

  _this->TrackOnBorderWidthActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOnBorderWidthFocused()' */
void WidgetSetToggleButtonConfig_OnSetTrackOnBorderWidthFocused( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackOnBorderWidthFocused == value )
    return;

  _this->TrackOnBorderWidthFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOnBorderWidthDisabled()' */
void WidgetSetToggleButtonConfig_OnSetTrackOnBorderWidthDisabled( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackOnBorderWidthDisabled == value )
    return;

  _this->TrackOnBorderWidthDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOnBorderWidthDefault()' */
void WidgetSetToggleButtonConfig_OnSetTrackOnBorderWidthDefault( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackOnBorderWidthDefault == value )
    return;

  _this->TrackOnBorderWidthDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOnColorActive()' */
void WidgetSetToggleButtonConfig_OnSetTrackOnColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackOnColorActive, value ))
    return;

  _this->TrackOnColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOnColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetTrackOnColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackOnColorFocused, value ))
    return;

  _this->TrackOnColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOnColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetTrackOnColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackOnColorDisabled, value ))
    return;

  _this->TrackOnColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOnColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetTrackOnColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackOnColorDefault, value ))
    return;

  _this->TrackOnColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOffBorderColorActive()' */
void WidgetSetToggleButtonConfig_OnSetTrackOffBorderColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackOffBorderColorActive, value ))
    return;

  _this->TrackOffBorderColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOffBorderColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetTrackOffBorderColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackOffBorderColorFocused, value ))
    return;

  _this->TrackOffBorderColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOffBorderColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetTrackOffBorderColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackOffBorderColorDisabled, value ))
    return;

  _this->TrackOffBorderColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOffBorderColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetTrackOffBorderColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackOffBorderColorDefault, value ))
    return;

  _this->TrackOffBorderColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOffBorderWidthActive()' */
void WidgetSetToggleButtonConfig_OnSetTrackOffBorderWidthActive( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackOffBorderWidthActive == value )
    return;

  _this->TrackOffBorderWidthActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOffBorderWidthFocused()' */
void WidgetSetToggleButtonConfig_OnSetTrackOffBorderWidthFocused( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackOffBorderWidthFocused == value )
    return;

  _this->TrackOffBorderWidthFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOffBorderWidthDisabled()' */
void WidgetSetToggleButtonConfig_OnSetTrackOffBorderWidthDisabled( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackOffBorderWidthDisabled == value )
    return;

  _this->TrackOffBorderWidthDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOffBorderWidthDefault()' */
void WidgetSetToggleButtonConfig_OnSetTrackOffBorderWidthDefault( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackOffBorderWidthDefault == value )
    return;

  _this->TrackOffBorderWidthDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOffColorActive()' */
void WidgetSetToggleButtonConfig_OnSetTrackOffColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackOffColorActive, value ))
    return;

  _this->TrackOffColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOffColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetTrackOffColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackOffColorFocused, value ))
    return;

  _this->TrackOffColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOffColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetTrackOffColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackOffColorDisabled, value ))
    return;

  _this->TrackOffColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackOffColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetTrackOffColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->TrackOffColorDefault, value ))
    return;

  _this->TrackOffColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackCornerRadius()' */
void WidgetSetToggleButtonConfig_OnSetTrackCornerRadius( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->TrackCornerRadius == value )
    return;

  _this->TrackCornerRadius = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackSize()' */
void WidgetSetToggleButtonConfig_OnSetTrackSize( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->TrackSize, value ))
    return;

  _this->TrackSize = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetTrackLayout()' */
void WidgetSetToggleButtonConfig_OnSetTrackLayout( WidgetSetToggleButtonConfig _this, 
  XSet value )
{
  if ( _this->TrackLayout == value )
    return;

  _this->TrackLayout = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOnColorActive()' */
void WidgetSetToggleButtonConfig_OnSetLabelOnColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOnColorActive, value ))
    return;

  _this->LabelOnColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOnColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetLabelOnColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOnColorFocused, value ))
    return;

  _this->LabelOnColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOnColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetLabelOnColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOnColorDisabled, value ))
    return;

  _this->LabelOnColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOnColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetLabelOnColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOnColorDefault, value ))
    return;

  _this->LabelOnColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOffColorActive()' */
void WidgetSetToggleButtonConfig_OnSetLabelOffColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOffColorActive, value ))
    return;

  _this->LabelOffColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOffColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetLabelOffColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOffColorFocused, value ))
    return;

  _this->LabelOffColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOffColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetLabelOffColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOffColorDisabled, value ))
    return;

  _this->LabelOffColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOffColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetLabelOffColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOffColorDefault, value ))
    return;

  _this->LabelOffColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelMarginRight()' */
void WidgetSetToggleButtonConfig_OnSetLabelMarginRight( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->LabelMarginRight == value )
    return;

  _this->LabelMarginRight = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOnTintActive()' */
void WidgetSetToggleButtonConfig_OnSetIconOnTintActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOnTintActive, value ))
    return;

  _this->IconOnTintActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOnTintFocused()' */
void WidgetSetToggleButtonConfig_OnSetIconOnTintFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOnTintFocused, value ))
    return;

  _this->IconOnTintFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOnTintDisabled()' */
void WidgetSetToggleButtonConfig_OnSetIconOnTintDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOnTintDisabled, value ))
    return;

  _this->IconOnTintDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOnTintDefault()' */
void WidgetSetToggleButtonConfig_OnSetIconOnTintDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOnTintDefault, value ))
    return;

  _this->IconOnTintDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOffTintActive()' */
void WidgetSetToggleButtonConfig_OnSetIconOffTintActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOffTintActive, value ))
    return;

  _this->IconOffTintActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOffTintFocused()' */
void WidgetSetToggleButtonConfig_OnSetIconOffTintFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOffTintFocused, value ))
    return;

  _this->IconOffTintFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOffTintDisabled()' */
void WidgetSetToggleButtonConfig_OnSetIconOffTintDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOffTintDisabled, value ))
    return;

  _this->IconOffTintDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOffTintDefault()' */
void WidgetSetToggleButtonConfig_OnSetIconOffTintDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOffTintDefault, value ))
    return;

  _this->IconOffTintDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconMarginRight()' */
void WidgetSetToggleButtonConfig_OnSetIconMarginRight( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->IconMarginRight == value )
    return;

  _this->IconMarginRight = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelAlignment()' */
void WidgetSetToggleButtonConfig_OnSetLabelAlignment( WidgetSetToggleButtonConfig _this, 
  XSet value )
{
  if ( _this->LabelAlignment == value )
    return;

  _this->LabelAlignment = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOnFont()' */
void WidgetSetToggleButtonConfig_OnSetLabelOnFont( WidgetSetToggleButtonConfig _this, 
  ResourcesFont value )
{
  if ( _this->LabelOnFont == value )
    return;

  _this->LabelOnFont = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOffFont()' */
void WidgetSetToggleButtonConfig_OnSetLabelOffFont( WidgetSetToggleButtonConfig _this, 
  ResourcesFont value )
{
  if ( _this->LabelOffFont == value )
    return;

  _this->LabelOffFont = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconAlignment()' */
void WidgetSetToggleButtonConfig_OnSetIconAlignment( WidgetSetToggleButtonConfig _this, 
  XSet value )
{
  if ( _this->IconAlignment == value )
    return;

  _this->IconAlignment = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetWidgetMinSize()' */
void WidgetSetToggleButtonConfig_OnSetWidgetMinSize( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( value.X < 0 )
    value.X = 0;

  if ( value.Y < 0 )
    value.Y = 0;

  if ( !EwCompPoint( _this->WidgetMinSize, value ))
    return;

  _this->WidgetMinSize = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::ToggleButtonConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetToggleButtonConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetToggleButtonConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::ToggleButtonConfig' */
EW_DEFINE_CLASS( WidgetSetToggleButtonConfig, WidgetSetWidgetConfig, LabelOnFont, 
                 LabelOnFont, StateTransitionDuration, StateTransitionDuration, 
                 StateTransitionDuration, StateTransitionDuration, "WidgetSet::ToggleButtonConfig" )
EW_END_OF_CLASS( WidgetSetToggleButtonConfig )

/* Initializer for the class 'WidgetSet::PushButtonConfig' */
void WidgetSetPushButtonConfig__Init( WidgetSetPushButtonConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  WidgetSetWidgetConfig__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetPushButtonConfig );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetPushButtonConfig );

  /* ... and initialize objects, variables, properties, etc. */
  _this->PressedFeedbackDuration = 50;
  _this->LabelColorActive = _Const0003;
  _this->LabelColorFocused = _Const0003;
  _this->LabelColorDisabled = _Const0003;
  _this->LabelColorDefault = _Const0003;
  _this->IconTintActive = _Const0004;
  _this->IconTintFocused = _Const0004;
  _this->IconTintDisabled = _Const0004;
  _this->IconTintDefault = _Const0004;
}

/* Re-Initializer for the class 'WidgetSet::PushButtonConfig' */
void WidgetSetPushButtonConfig__ReInit( WidgetSetPushButtonConfig _this )
{
  /* At first re-initialize the super class ... */
  WidgetSetWidgetConfig__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'WidgetSet::PushButtonConfig' */
void WidgetSetPushButtonConfig__Done( WidgetSetPushButtonConfig _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( WidgetSetWidgetConfig );

  /* Don't forget to deinitialize the super class ... */
  WidgetSetWidgetConfig__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetStateTransitionDuration()' */
void WidgetSetPushButtonConfig_OnSetStateTransitionDuration( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->StateTransitionDuration == value )
    return;

  _this->StateTransitionDuration = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetPressedFeedbackDuration()' */
void WidgetSetPushButtonConfig_OnSetPressedFeedbackDuration( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->PressedFeedbackDuration == value )
    return;

  _this->PressedFeedbackDuration = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbShadowColorFocused()' */
void WidgetSetPushButtonConfig_OnSetThumbShadowColorFocused( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbShadowColorFocused, value ))
    return;

  _this->ThumbShadowColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbShadowColorDefault()' */
void WidgetSetPushButtonConfig_OnSetThumbShadowColorDefault( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbShadowColorDefault, value ))
    return;

  _this->ThumbShadowColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbShadowBlurRadiusFocused()' */
void WidgetSetPushButtonConfig_OnSetThumbShadowBlurRadiusFocused( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( value > 64 )
    value = 64;

  if ( _this->ThumbShadowBlurRadiusFocused == value )
    return;

  _this->ThumbShadowBlurRadiusFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbShadowBlurRadiusDefault()' */
void WidgetSetPushButtonConfig_OnSetThumbShadowBlurRadiusDefault( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( value > 64 )
    value = 64;

  if ( _this->ThumbShadowBlurRadiusDefault == value )
    return;

  _this->ThumbShadowBlurRadiusDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbBorderColorActive()' */
void WidgetSetPushButtonConfig_OnSetThumbBorderColorActive( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbBorderColorActive, value ))
    return;

  _this->ThumbBorderColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbBorderColorFocused()' */
void WidgetSetPushButtonConfig_OnSetThumbBorderColorFocused( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbBorderColorFocused, value ))
    return;

  _this->ThumbBorderColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbBorderColorDisabled()' */
void WidgetSetPushButtonConfig_OnSetThumbBorderColorDisabled( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbBorderColorDisabled, value ))
    return;

  _this->ThumbBorderColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbBorderColorDefault()' */
void WidgetSetPushButtonConfig_OnSetThumbBorderColorDefault( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbBorderColorDefault, value ))
    return;

  _this->ThumbBorderColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbBorderWidthActive()' */
void WidgetSetPushButtonConfig_OnSetThumbBorderWidthActive( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbBorderWidthActive == value )
    return;

  _this->ThumbBorderWidthActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbBorderWidthFocused()' */
void WidgetSetPushButtonConfig_OnSetThumbBorderWidthFocused( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbBorderWidthFocused == value )
    return;

  _this->ThumbBorderWidthFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbBorderWidthDisabled()' */
void WidgetSetPushButtonConfig_OnSetThumbBorderWidthDisabled( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbBorderWidthDisabled == value )
    return;

  _this->ThumbBorderWidthDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbBorderWidthDefault()' */
void WidgetSetPushButtonConfig_OnSetThumbBorderWidthDefault( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbBorderWidthDefault == value )
    return;

  _this->ThumbBorderWidthDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbColorActive()' */
void WidgetSetPushButtonConfig_OnSetThumbColorActive( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbColorActive, value ))
    return;

  _this->ThumbColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbColorFocused()' */
void WidgetSetPushButtonConfig_OnSetThumbColorFocused( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbColorFocused, value ))
    return;

  _this->ThumbColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbColorDisabled()' */
void WidgetSetPushButtonConfig_OnSetThumbColorDisabled( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbColorDisabled, value ))
    return;

  _this->ThumbColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbColorDefault()' */
void WidgetSetPushButtonConfig_OnSetThumbColorDefault( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ThumbColorDefault, value ))
    return;

  _this->ThumbColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbCornerRadiusActive()' */
void WidgetSetPushButtonConfig_OnSetThumbCornerRadiusActive( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbCornerRadiusActive == value )
    return;

  _this->ThumbCornerRadiusActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbCornerRadiusFocused()' */
void WidgetSetPushButtonConfig_OnSetThumbCornerRadiusFocused( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbCornerRadiusFocused == value )
    return;

  _this->ThumbCornerRadiusFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbCornerRadiusDisabled()' */
void WidgetSetPushButtonConfig_OnSetThumbCornerRadiusDisabled( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbCornerRadiusDisabled == value )
    return;

  _this->ThumbCornerRadiusDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetThumbCornerRadiusDefault()' */
void WidgetSetPushButtonConfig_OnSetThumbCornerRadiusDefault( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( _this->ThumbCornerRadiusDefault == value )
    return;

  _this->ThumbCornerRadiusDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelColorActive()' */
void WidgetSetPushButtonConfig_OnSetLabelColorActive( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelColorActive, value ))
    return;

  _this->LabelColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelColorFocused()' */
void WidgetSetPushButtonConfig_OnSetLabelColorFocused( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelColorFocused, value ))
    return;

  _this->LabelColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelColorDisabled()' */
void WidgetSetPushButtonConfig_OnSetLabelColorDisabled( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelColorDisabled, value ))
    return;

  _this->LabelColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelColorDefault()' */
void WidgetSetPushButtonConfig_OnSetLabelColorDefault( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelColorDefault, value ))
    return;

  _this->LabelColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelMarginBottom()' */
void WidgetSetPushButtonConfig_OnSetLabelMarginBottom( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->LabelMarginBottom == value )
    return;

  _this->LabelMarginBottom = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelMarginTop()' */
void WidgetSetPushButtonConfig_OnSetLabelMarginTop( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->LabelMarginTop == value )
    return;

  _this->LabelMarginTop = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelMarginRight()' */
void WidgetSetPushButtonConfig_OnSetLabelMarginRight( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->LabelMarginRight == value )
    return;

  _this->LabelMarginRight = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelMarginLeft()' */
void WidgetSetPushButtonConfig_OnSetLabelMarginLeft( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->LabelMarginLeft == value )
    return;

  _this->LabelMarginLeft = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconTintActive()' */
void WidgetSetPushButtonConfig_OnSetIconTintActive( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconTintActive, value ))
    return;

  _this->IconTintActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconTintFocused()' */
void WidgetSetPushButtonConfig_OnSetIconTintFocused( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconTintFocused, value ))
    return;

  _this->IconTintFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconTintDisabled()' */
void WidgetSetPushButtonConfig_OnSetIconTintDisabled( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconTintDisabled, value ))
    return;

  _this->IconTintDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconTintDefault()' */
void WidgetSetPushButtonConfig_OnSetIconTintDefault( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconTintDefault, value ))
    return;

  _this->IconTintDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconMarginBottom()' */
void WidgetSetPushButtonConfig_OnSetIconMarginBottom( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->IconMarginBottom == value )
    return;

  _this->IconMarginBottom = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconMarginTop()' */
void WidgetSetPushButtonConfig_OnSetIconMarginTop( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->IconMarginTop == value )
    return;

  _this->IconMarginTop = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconMarginRight()' */
void WidgetSetPushButtonConfig_OnSetIconMarginRight( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->IconMarginRight == value )
    return;

  _this->IconMarginRight = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetIconMarginLeft()' */
void WidgetSetPushButtonConfig_OnSetIconMarginLeft( WidgetSetPushButtonConfig _this, 
  XInt32 value )
{
  if ( _this->IconMarginLeft == value )
    return;

  _this->IconMarginLeft = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelFont()' */
void WidgetSetPushButtonConfig_OnSetLabelFont( WidgetSetPushButtonConfig _this, 
  ResourcesFont value )
{
  if ( _this->LabelFont == value )
    return;

  _this->LabelFont = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetFaceBitmapDefault()' */
void WidgetSetPushButtonConfig_OnSetFaceBitmapDefault( WidgetSetPushButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceBitmapDefault == value )
    return;

  _this->FaceBitmapDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetWidgetMinSize()' */
void WidgetSetPushButtonConfig_OnSetWidgetMinSize( WidgetSetPushButtonConfig _this, 
  XPoint value )
{
  if ( value.X < 0 )
    value.X = 0;

  if ( value.Y < 0 )
    value.Y = 0;

  if ( !EwCompPoint( _this->WidgetMinSize, value ))
    return;

  _this->WidgetMinSize = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::PushButtonConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetPushButtonConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetPushButtonConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::PushButtonConfig' */
EW_DEFINE_CLASS( WidgetSetPushButtonConfig, WidgetSetWidgetConfig, LabelFont, LabelFont, 
                 StateTransitionDuration, StateTransitionDuration, StateTransitionDuration, 
                 StateTransitionDuration, "WidgetSet::PushButtonConfig" )
EW_END_OF_CLASS( WidgetSetPushButtonConfig )

/* Initializer for the class 'WidgetSet::WidgetConfig' */
void WidgetSetWidgetConfig__Init( WidgetSetWidgetConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetWidgetConfig );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetWidgetConfig );
}

/* Re-Initializer for the class 'WidgetSet::WidgetConfig' */
void WidgetSetWidgetConfig__ReInit( WidgetSetWidgetConfig _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'WidgetSet::WidgetConfig' */
void WidgetSetWidgetConfig__Done( WidgetSetWidgetConfig _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::WidgetConfig.onInvalidate()' */
void WidgetSetWidgetConfig_onInvalidate( WidgetSetWidgetConfig _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwNotifyObjObservers((XObject)_this, 0 );
}

/* Variants derived from the class : 'WidgetSet::WidgetConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetWidgetConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetWidgetConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::WidgetConfig' */
EW_DEFINE_CLASS( WidgetSetWidgetConfig, XObject, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 _.VMT, "WidgetSet::WidgetConfig" )
EW_END_OF_CLASS( WidgetSetWidgetConfig )

/* Initializer for the class 'WidgetSet::ValueDisplay' */
void WidgetSetValueDisplay__Init( WidgetSetValueDisplay _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetValueDisplay );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetValueDisplay );

  /* ... and initialize objects, variables, properties, etc. */
  _this->Super3.viewState = CoreViewStateAlphaBlended | CoreViewStateVisible;
  CoreRectView__OnSetBounds( _this, _Const0005 );
}

/* Re-Initializer for the class 'WidgetSet::ValueDisplay' */
void WidgetSetValueDisplay__ReInit( WidgetSetValueDisplay _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'WidgetSet::ValueDisplay' */
void WidgetSetValueDisplay__Done( WidgetSetValueDisplay _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::ValueDisplay.OnSetBounds()' */
void WidgetSetValueDisplay_OnSetBounds( WidgetSetValueDisplay _this, XRect value )
{
  if ( _this->Appearance != 0 )
  {
    XPoint cs = EwGetRectSize( value );
    XPoint ns = cs;
    XPoint delta;

    if ( ns.X < _this->Appearance->WidgetMinSize.X )
      ns.X = _this->Appearance->WidgetMinSize.X;

    if ( ns.Y < _this->Appearance->WidgetMinSize.Y )
      ns.Y = _this->Appearance->WidgetMinSize.Y;

    delta = EwMovePointNeg( ns, cs );

    if ( delta.X != 0 )
    {
      XBool alignToLeft = (( _this->Super3.Layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( _this->Super3.Layout & CoreLayoutAlignToRight ) == 
        CoreLayoutAlignToRight );

      if ( alignToLeft && !alignToRight )
        value.Point2.X = ( value.Point2.X + delta.X );
      else
        if ( !alignToLeft && alignToRight )
          value.Point1.X = ( value.Point1.X - delta.X );
        else
        {
          value.Point1.X = ( value.Point1.X - ( delta.X / 2 ));
          value.Point2.X = ( value.Point1.X + ns.X );
        }
    }

    if ( delta.Y != 0 )
    {
      XBool alignToTop = (( _this->Super3.Layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( _this->Super3.Layout & CoreLayoutAlignToBottom ) 
        == CoreLayoutAlignToBottom );

      if ( alignToTop && !alignToBottom )
        value.Point2.Y = ( value.Point2.Y + delta.Y );
      else
        if ( !alignToTop && alignToBottom )
          value.Point1.Y = ( value.Point1.Y - delta.Y );
        else
        {
          value.Point1.Y = ( value.Point1.Y - ( delta.Y / 2 ));
          value.Point2.Y = ( value.Point1.Y + ns.Y );
        }
    }
  }

  CoreGroup_OnSetBounds((CoreGroup)_this, value );
}

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
void WidgetSetValueDisplay_UpdateViewState( WidgetSetValueDisplay _this, XSet aState )
{
  XBool needsValue;
  XBool needsUnit;
  XRect area;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  needsValue = (XBool)(( _this->Appearance != 0 ) && ( _this->Appearance->ValueFont 
  != 0 ));
  needsUnit = (XBool)(( _this->Appearance != 0 ) && ( _this->Appearance->UnitFont 
  != 0 ));
  area = EwGetRectORect( _this->Super2.Bounds );

  if ( needsValue && ( _this->textView1 == 0 ))
  {
    _this->textView1 = EwNewObject( ViewsText, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->textView1 ), 0 );
  }
  else
    if ( !needsValue && ( _this->textView1 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->textView1 ));
      _this->textView1 = 0;
    }

  if ( needsUnit && ( _this->textView2 == 0 ))
  {
    _this->textView2 = EwNewObject( ViewsText, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->textView2 ), 0 );
    ViewsText_OnSetEnableBidiText( _this->textView2, 1 );
  }
  else
    if ( !needsUnit && ( _this->textView2 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->textView2 ));
      _this->textView2 = 0;
    }

  if ( _this->textView1 != 0 )
  {
    XColor clr;
    XRect r = area;

    if ( _this->isNegative )
      clr = _this->Appearance->ValueColorNegative;
    else
      clr = _this->Appearance->ValueColorPositive;

    if (( _this->Appearance->Layout == WidgetSetValueDisplayLayoutAlignUnitLeftToValue ) 
        || ( _this->Appearance->Layout == WidgetSetValueDisplayLayoutAlignUnitRightToValue ))
      ViewsText_OnSetOnUpdate( _this->textView1, EwNewSlot( _this, WidgetSetValueDisplay_onLayoutViews ));
    else
      ViewsText_OnSetOnUpdate( _this->textView1, EwNullSlot );

    if ((( _this->textView2 != 0 ) && ( EwCompString( _this->Unit, 0 ) != 0 )) && 
        !EwIsRectEmpty( ViewsText_GetContentArea( _this->textView2 )))
    {
      if ( _this->Appearance->Layout == WidgetSetValueDisplayLayoutAlignValueLeftToUnit )
        r.Point2.X = ViewsText_GetContentArea( _this->textView2 ).Point1.X;

      if ( _this->Appearance->Layout == WidgetSetValueDisplayLayoutAlignValueRightToUnit )
        r.Point1.X = ViewsText_GetContentArea( _this->textView2 ).Point2.X;
    }

    CoreRectView__OnSetBounds( _this->textView1, EwNewRect( r.Point1.X, r.Point1.Y, 
    r.Point2.X - _this->Appearance->ValueMarginRight, r.Point2.Y ));
    ViewsText_OnSetFont( _this->textView1, _this->Appearance->ValueFont );
    ViewsText_OnSetAlignment( _this->textView1, _this->Appearance->ValueAlignment );
    ViewsText_OnSetString( _this->textView1, _this->valueString );
    ViewsText_OnSetColor( _this->textView1, clr );
  }

  if ( _this->textView2 != 0 )
  {
    XColor clr;
    XRect r = area;

    if ( _this->isNegative )
      clr = _this->Appearance->UnitColorNegative;
    else
      clr = _this->Appearance->UnitColorPositive;

    if (( _this->Appearance->Layout == WidgetSetValueDisplayLayoutAlignValueLeftToUnit ) 
        || ( _this->Appearance->Layout == WidgetSetValueDisplayLayoutAlignValueRightToUnit ))
      ViewsText_OnSetOnUpdate( _this->textView2, EwNewSlot( _this, WidgetSetValueDisplay_onLayoutViews ));
    else
      ViewsText_OnSetOnUpdate( _this->textView2, EwNullSlot );

    if (( _this->textView1 != 0 ) && ( EwCompString( _this->valueString, 0 ) != 
        0 ))
    {
      if ( _this->Appearance->Layout == WidgetSetValueDisplayLayoutAlignUnitLeftToValue )
        r.Point2.X = ViewsText_GetContentArea( _this->textView1 ).Point1.X;

      if ( _this->Appearance->Layout == WidgetSetValueDisplayLayoutAlignUnitRightToValue )
        r.Point1.X = ViewsText_GetContentArea( _this->textView1 ).Point2.X;
    }

    CoreRectView__OnSetBounds( _this->textView2, EwNewRect( r.Point1.X, r.Point1.Y, 
    r.Point2.X, r.Point2.Y ));
    ViewsText_OnSetFont( _this->textView2, _this->Appearance->UnitFont );
    ViewsText_OnSetAlignment( _this->textView2, _this->Appearance->UnitAlignment );
    ViewsText_OnSetString( _this->textView2, _this->Unit );
    ViewsText_OnSetColor( _this->textView2, clr );
  }
}

/* 'C' function for method : 'WidgetSet::ValueDisplay.onLayoutViews()' */
void WidgetSetValueDisplay_onLayoutViews( WidgetSetValueDisplay _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if (( _this->Appearance != 0 ) && ( _this->Appearance->Layout != WidgetSetValueDisplayLayoutUnitAndValueAreIndependent ))
    CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ValueDisplay.onFormatValue()' */
void WidgetSetValueDisplay_onFormatValue( WidgetSetValueDisplay _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Appearance != 0 )
  {
    XFloat theValue = (XFloat)_this->CurrentValue;
    XInt32 noOfDigits = 0;
    XString newValueString;

    if ( _this->Precision > 0 )
      noOfDigits = 1;

    if ( theValue < 0.0f )
      noOfDigits = noOfDigits + 1;

    newValueString = EwNewStringFloat( theValue, noOfDigits, _this->Precision );

    if ( theValue < 0.0f )
      newValueString = EwStringRemove( newValueString, 0, 1 );

    if ( theValue >= 0.0f )
      newValueString = EwConcatString( _this->Appearance->FormatPlusSign, newValueString );
    else
      newValueString = EwConcatString( EwLoadString( &_Const0006 ), newValueString );

    if ( EwCompString( newValueString, _this->valueString ) != 0 )
    {
      _this->valueString = EwShareString( newValueString );
      _this->isNegative = (XBool)( theValue < 0.0f );
      CoreGroup_InvalidateViewState((CoreGroup)_this );
    }
  }
  else
    if ( EwCompString( _this->valueString, 0 ) != 0 )
    {
      _this->valueString = 0;
      CoreGroup_InvalidateViewState((CoreGroup)_this );
    }
}

/* 'C' function for method : 'WidgetSet::ValueDisplay.onConfigChanged()' */
void WidgetSetValueDisplay_onConfigChanged( WidgetSetValueDisplay _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Appearance != 0 )
    CoreRectView__OnSetBounds( _this, _this->Super2.Bounds );

  EwPostSignal( EwNewSlot( _this, WidgetSetValueDisplay_onFormatValue ), ((XObject)_this ));
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ValueDisplay.onOutlet()' */
void WidgetSetValueDisplay_onOutlet( WidgetSetValueDisplay _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Outlet.Object != 0 )
    WidgetSetValueDisplay_OnSetCurrentValue( _this, EwOnGetInt32( _this->Outlet ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplay.OnSetOutlet()' */
void WidgetSetValueDisplay_OnSetOutlet( WidgetSetValueDisplay _this, XRef value )
{
  if ( !EwCompRef( _this->Outlet, value ))
    return;

  if ( _this->Outlet.Object != 0 )
    EwDetachRefObserver( EwNewSlot( _this, WidgetSetValueDisplay_onOutlet ), _this->Outlet, 
      0 );

  _this->Outlet = value;

  if ( value.Object != 0 )
    EwAttachRefObserver( EwNewSlot( _this, WidgetSetValueDisplay_onOutlet ), value, 
      0 );

  if ( value.Object != 0 )
    EwSignal( EwNewSlot( _this, WidgetSetValueDisplay_onOutlet ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplay.OnSetUnit()' */
void WidgetSetValueDisplay_OnSetUnit( WidgetSetValueDisplay _this, XString value )
{
  if ( !EwCompString( _this->Unit, value ))
    return;

  _this->Unit = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ValueDisplay.OnSetPrecision()' */
void WidgetSetValueDisplay_OnSetPrecision( WidgetSetValueDisplay _this, XInt32 value )
{
  if ( _this->Precision == value )
    return;

  _this->Precision = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetValueDisplay_onFormatValue ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplay.OnSetCurrentValue()' */
void WidgetSetValueDisplay_OnSetCurrentValue( WidgetSetValueDisplay _this, XInt32 
  value )
{
  if ( _this->CurrentValue == value )
    return;

  _this->CurrentValue = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetValueDisplay_onFormatValue ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplay.OnSetAppearance()' */
void WidgetSetValueDisplay_OnSetAppearance( WidgetSetValueDisplay _this, WidgetSetValueDisplayConfig 
  value )
{
  if ( _this->Appearance == value )
    return;

  if ( _this->Appearance != 0 )
    EwDetachObjObserver( EwNewSlot( _this, WidgetSetValueDisplay_onConfigChanged ), 
      (XObject)_this->Appearance, 0 );

  _this->Appearance = value;

  if ( value != 0 )
    EwAttachObjObserver( EwNewSlot( _this, WidgetSetValueDisplay_onConfigChanged ), 
      (XObject)value, 0 );

  EwPostSignal( EwNewSlot( _this, WidgetSetValueDisplay_onConfigChanged ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::ValueDisplay' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetValueDisplay )
EW_END_OF_CLASS_VARIANTS( WidgetSetValueDisplay )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::ValueDisplay' */
EW_DEFINE_CLASS( WidgetSetValueDisplay, CoreGroup, textView2, textView2, Outlet, 
                 Outlet, valueString, Precision, "WidgetSet::ValueDisplay" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  WidgetSetValueDisplay_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  WidgetSetValueDisplay_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( WidgetSetValueDisplay )

/* Initializer for the class 'WidgetSet::VerticalValueBar' */
void WidgetSetVerticalValueBar__Init( WidgetSetVerticalValueBar _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetVerticalValueBar );

  /* ... then construct all embedded objects */
  EffectsFloatEffect__Init( &_this->FloatEffect, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetVerticalValueBar );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0007 );
  _this->setupCurrentPos = 1;
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->FloatEffect, EffectsTimingBack_Out );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->FloatEffect, 1 );
  _this->CurrentValue = 50;
  _this->FloatEffect.Super1.OnFinished = EwNewSlot( _this, WidgetSetVerticalValueBar_onEndFloatEffect );
  _this->FloatEffect.Super1.OnAnimate = EwNewSlot( _this, WidgetSetVerticalValueBar_onFloatEffect );
}

/* Re-Initializer for the class 'WidgetSet::VerticalValueBar' */
void WidgetSetVerticalValueBar__ReInit( WidgetSetVerticalValueBar _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  EffectsFloatEffect__ReInit( &_this->FloatEffect );
}

/* Finalizer method for the class 'WidgetSet::VerticalValueBar' */
void WidgetSetVerticalValueBar__Done( WidgetSetVerticalValueBar _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  EffectsFloatEffect__Done( &_this->FloatEffect );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::VerticalValueBar.OnSetBounds()' */
void WidgetSetVerticalValueBar_OnSetBounds( WidgetSetVerticalValueBar _this, XRect 
  value )
{
  if ( _this->Appearance != 0 )
  {
    XPoint cs = EwGetRectSize( value );
    XPoint ns = cs;
    XPoint delta;

    if ( ns.X < _this->Appearance->WidgetMinSize.X )
      ns.X = _this->Appearance->WidgetMinSize.X;

    if ( ns.Y < _this->Appearance->WidgetMinSize.Y )
      ns.Y = _this->Appearance->WidgetMinSize.Y;

    delta = EwMovePointNeg( ns, cs );

    if ( delta.X != 0 )
    {
      XBool alignToLeft = (( _this->Super3.Layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( _this->Super3.Layout & CoreLayoutAlignToRight ) == 
        CoreLayoutAlignToRight );

      if ( alignToLeft && !alignToRight )
        value.Point2.X = ( value.Point2.X + delta.X );
      else
        if ( !alignToLeft && alignToRight )
          value.Point1.X = ( value.Point1.X - delta.X );
        else
        {
          value.Point1.X = ( value.Point1.X - ( delta.X / 2 ));
          value.Point2.X = ( value.Point1.X + ns.X );
        }
    }

    if ( delta.Y != 0 )
    {
      XBool alignToTop = (( _this->Super3.Layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( _this->Super3.Layout & CoreLayoutAlignToBottom ) 
        == CoreLayoutAlignToBottom );

      if ( alignToTop && !alignToBottom )
        value.Point2.Y = ( value.Point2.Y + delta.Y );
      else
        if ( !alignToTop && alignToBottom )
          value.Point1.Y = ( value.Point1.Y - delta.Y );
        else
        {
          value.Point1.Y = ( value.Point1.Y - ( delta.Y / 2 ));
          value.Point2.Y = ( value.Point1.Y + ns.Y );
        }
    }
  }

  CoreGroup_OnSetBounds((CoreGroup)_this, value );
}

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
void WidgetSetVerticalValueBar_UpdateViewState( WidgetSetVerticalValueBar _this, 
  XSet aState )
{
  XBool needsRect1;
  XBool needsRect2;
  XBool needsBorder2;
  XBool needsOutline1;
  XBool needsOutline2;
  XRect area;
  XInt32 pos;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  needsRect1 = (XBool)((( _this->Appearance != 0 ) && !EwIsColorNull( _this->Appearance->TrackBelowColor )) 
  && !!_this->Appearance->TrackBelowThickness );
  needsRect2 = (XBool)((( _this->Appearance != 0 ) && !EwIsColorNull( _this->Appearance->TrackAboveColor )) 
  && !!_this->Appearance->TrackAboveThickness );
  needsBorder2 = (XBool)(((( _this->Appearance != 0 ) && !EwIsColorNull( _this->Appearance->TrackAboveBorderColor )) 
  && !!_this->Appearance->TrackAboveBorderWidth ) && !!_this->Appearance->TrackAboveThickness );
  needsOutline1 = (XBool)(( needsRect1 && ( _this->Appearance != 0 )) && !!_this->Appearance->TrackBelowCornerRadius );
  needsOutline2 = (XBool)((( needsRect2 || needsBorder2 ) && ( _this->Appearance 
  != 0 )) && !!_this->Appearance->TrackAboveCornerRadius );
  area = EwGetRectORect( _this->Super2.Bounds );

  if ( needsRect1 && !( _this->rectView1 != 0 ))
  {
    _this->rectView1 = EwNewObject( ViewsRectangle, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->rectView1 ), 0 );
  }
  else
    if ( !needsRect1 && ( _this->rectView1 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->rectView1 ));
      _this->rectView1 = 0;
    }

  if ( needsRect2 && !( _this->rectView2 != 0 ))
  {
    _this->rectView2 = EwNewObject( ViewsRectangle, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->rectView2 ), 0 );
  }
  else
    if ( !needsRect2 && ( _this->rectView2 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->rectView2 ));
      _this->rectView2 = 0;
    }

  if ( needsBorder2 && !( _this->borderView2 != 0 ))
  {
    _this->borderView2 = EwNewObject( ViewsBorder, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->borderView2 ), 0 );
  }
  else
    if ( !needsBorder2 && ( _this->borderView2 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->borderView2 ));
      _this->borderView2 = 0;
    }

  if ( needsOutline1 && !( _this->outline1 != 0 ))
  {
    _this->outline1 = EwNewObject( CoreOutline, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->outline1 ), 0 );
  }
  else
    if ( !needsOutline1 && ( _this->outline1 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->outline1 ));
      _this->outline1 = 0;
    }

  if ( needsOutline2 && !( _this->outline2 != 0 ))
  {
    _this->outline2 = EwNewObject( CoreOutline, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->outline2 ), 0 );
  }
  else
    if ( !needsOutline2 && ( _this->outline2 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->outline2 ));
      _this->outline2 = 0;
    }

  if ( _this->rectView1 != 0 )
  {
    ViewsRectangle_OnSetRadius( _this->rectView1, _this->Appearance->TrackBelowCornerRadius );
    ViewsRectangle_OnSetColor( _this->rectView1, _this->Appearance->TrackBelowColor );
    ViewsRectangle_OnSetEmbedded( _this->rectView1, _this->outline1 != 0 );
    CoreView_OnSetStackingPriority((CoreView)_this->rectView1, 52 );
  }

  if ( _this->rectView2 != 0 )
  {
    ViewsRectangle_OnSetRadius( _this->rectView2, _this->Appearance->TrackAboveCornerRadius );
    ViewsRectangle_OnSetColor( _this->rectView2, _this->Appearance->TrackAboveColor );
    ViewsRectangle_OnSetEmbedded( _this->rectView2, _this->outline2 != 0 );
    CoreView_OnSetStackingPriority((CoreView)_this->rectView2, 33 );
  }

  if ( _this->borderView2 != 0 )
  {
    ViewsBorder_OnSetRadius( _this->borderView2, _this->Appearance->TrackAboveCornerRadius );
    ViewsBorder_OnSetColor( _this->borderView2, _this->Appearance->TrackAboveBorderColor );
    ViewsBorder_OnSetWidth( _this->borderView2, _this->Appearance->TrackAboveBorderWidth );
    ViewsBorder_OnSetEmbedded( _this->borderView2, _this->outline2 != 0 );
    CoreView_OnSetStackingPriority((CoreView)_this->borderView2, 34 );
  }

  pos = EwGetRectH( area ) - (XInt32)((XFloat)EwGetRectH( area ) * _this->currentPos );

  if ( pos < 0 )
    pos = 0;

  if ( pos > EwGetRectH( area ))
    pos = EwGetRectH( area );

  if ( _this->outline1 != 0 )
  {
    XInt32 y2 = EwGetRectH( area );
    XInt32 y = pos;

    if ( y < 0 )
      y = 0;

    CoreRectView__OnSetBounds( _this->outline1, EwNewRect( 0, y, EwGetRectW( area ), 
    y2 ));
    CoreView_OnSetStackingPriority((CoreView)_this->outline1, 51 );
  }

  if ( _this->outline2 != 0 )
  {
    XInt32 y2 = EwGetRectH( area );
    XInt32 y = pos;

    if ( y > y2 )
      y = y2;

    CoreRectView__OnSetBounds( _this->outline2, EwNewRect( 0, 0, EwGetRectW( area ), 
    y ));
    CoreView_OnSetStackingPriority((CoreView)_this->outline2, 32 );
  }

  if ( _this->rectView1 != 0 )
  {
    XInt32 w = _this->Appearance->TrackBelowThickness;
    XInt32 y2 = EwGetRectH( area );
    XInt32 y = pos - ( _this->Appearance->TrackBelowFlattened? _this->Appearance->TrackBelowCornerRadius 
      : 0 );
    XRect r;

    if (( y2 - y ) < ( 2 * _this->Appearance->TrackBelowCornerRadius ))
      y = y2 - ( 2 * _this->Appearance->TrackBelowCornerRadius );

    if ( y < 0 )
      y = 0;

    r = EwNewRect(( EwGetRectW( area ) / 2 ) - ( w / 2 ), y, (( EwGetRectW( area ) 
    / 2 ) - ( w / 2 )) + w, y2 );

    if ( _this->rectView1 != 0 )
      CoreRectView__OnSetBounds( _this->rectView1, r );
  }

  if (( _this->rectView2 != 0 ) || ( _this->borderView2 != 0 ))
  {
    XInt32 w = _this->Appearance->TrackAboveThickness;
    XInt32 y2 = EwGetRectH( area );
    XInt32 y = pos + ( _this->Appearance->TrackAboveFlattened? _this->Appearance->TrackAboveCornerRadius 
      : 0 );
    XRect r;

    if ( y < ( 2 * _this->Appearance->TrackAboveCornerRadius ))
      y = 2 * _this->Appearance->TrackAboveCornerRadius;

    if ( y > y2 )
      y = y2;

    r = EwNewRect(( EwGetRectW( area ) / 2 ) - ( w / 2 ), 0, (( EwGetRectW( area ) 
    / 2 ) - ( w / 2 )) + w, y );

    if ( _this->borderView2 != 0 )
      CoreRectView__OnSetBounds( _this->borderView2, r );

    if (((( _this->rectView2 != 0 ) && ( _this->borderView2 != 0 )) && !!_this->borderView2->Width ) 
        && ( _this->borderView2->Color.Alpha == 255 ))
      r = EwInflateRect( r, _Const0008 );

    if ( _this->rectView2 != 0 )
      CoreRectView__OnSetBounds( _this->rectView2, r );
  }
}

/* 'C' function for method : 'WidgetSet::VerticalValueBar.onUpdatePos()' */
void WidgetSetVerticalValueBar_onUpdatePos( WidgetSetVerticalValueBar _this, XObject 
  sender )
{
  XFloat newPos;
  XInt32 swingDuration;
  XFloat ratio;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  swingDuration = 0;

  if ( _this->Appearance != 0 )
    swingDuration = _this->Appearance->SwingDuration;

  if ( _this->setupCurrentPos )
  {
    _this->currentPos = 0.0f;
    _this->setupCurrentPos = 0;
  }

  newPos = (XFloat)WidgetSetVerticalValueBar_OnGetCurrentValue( _this ) / 100.0f;

  if ( newPos == _this->currentPos )
    return;

  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FloatEffect, 0 );

  if ( swingDuration <= 0 )
  {
    _this->currentPos = newPos;
    CoreGroup_InvalidateViewState((CoreGroup)_this );
    return;
  }

  ratio = newPos - _this->currentPos;

  if ( ratio < 0.0f )
    ratio = -ratio;

  if ( _this->Appearance->SwingElastic )
    EffectsEffect_OnSetTiming((EffectsEffect)&_this->FloatEffect, EffectsTimingBack_Out );
  else
    EffectsEffect_OnSetTiming((EffectsEffect)&_this->FloatEffect, EffectsTimingFastIn_EaseOut );

  _this->FloatEffect.Value1 = _this->currentPos;
  _this->FloatEffect.Value2 = newPos;
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->FloatEffect, ( 10 + ( 
  swingDuration / 2 )) + ((XInt32)((XFloat)swingDuration * ratio ) / 2 ));
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FloatEffect, 1 );
}

/* 'C' function for method : 'WidgetSet::VerticalValueBar.onEndFloatEffect()' */
void WidgetSetVerticalValueBar_onEndFloatEffect( WidgetSetVerticalValueBar _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );
}

/* 'C' function for method : 'WidgetSet::VerticalValueBar.onFloatEffect()' */
void WidgetSetVerticalValueBar_onFloatEffect( WidgetSetVerticalValueBar _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->currentPos = _this->FloatEffect.Value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::VerticalValueBar.onConfigChanged()' */
void WidgetSetVerticalValueBar_onConfigChanged( WidgetSetVerticalValueBar _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( EwNewSlot( _this, WidgetSetVerticalValueBar_onUpdatePos ), ((XObject)_this ));

  if ( _this->Appearance != 0 )
    CoreRectView__OnSetBounds( _this, _this->Super2.Bounds );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::VerticalValueBar.OnGetCurrentValue()' */
XInt32 WidgetSetVerticalValueBar_OnGetCurrentValue( WidgetSetVerticalValueBar _this )
{
  XInt32 value = _this->CurrentValue;

  if ( value < 0 )
    value = 0;

  if ( value > 100 )
    value = 100;

  return value;
}

/* 'C' function for method : 'WidgetSet::VerticalValueBar.OnSetCurrentValue()' */
void WidgetSetVerticalValueBar_OnSetCurrentValue( WidgetSetVerticalValueBar _this, 
  XInt32 value )
{
  if ( _this->CurrentValue == value )
    return;

  _this->CurrentValue = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetVerticalValueBar_onUpdatePos ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalValueBar.OnSetAppearance()' */
void WidgetSetVerticalValueBar_OnSetAppearance( WidgetSetVerticalValueBar _this, 
  WidgetSetVerticalValueBarConfig value )
{
  if ( _this->Appearance == value )
    return;

  if ( _this->Appearance != 0 )
    EwDetachObjObserver( EwNewSlot( _this, WidgetSetVerticalValueBar_onConfigChanged ), 
      (XObject)_this->Appearance, 0 );

  _this->Appearance = value;

  if ( value != 0 )
    EwAttachObjObserver( EwNewSlot( _this, WidgetSetVerticalValueBar_onConfigChanged ), 
      (XObject)value, 0 );

  EwPostSignal( EwNewSlot( _this, WidgetSetVerticalValueBar_onConfigChanged ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::VerticalValueBar' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetVerticalValueBar )
EW_END_OF_CLASS_VARIANTS( WidgetSetVerticalValueBar )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::VerticalValueBar' */
EW_DEFINE_CLASS( WidgetSetVerticalValueBar, CoreGroup, FloatEffect, outline2, currentPos, 
                 currentPos, currentPos, currentPos, "WidgetSet::VerticalValueBar" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  WidgetSetVerticalValueBar_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  WidgetSetVerticalValueBar_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( WidgetSetVerticalValueBar )

/* Initializer for the class 'WidgetSet::Gauge' */
void WidgetSetGauge__Init( WidgetSetGauge _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetGauge );

  /* ... then construct all embedded objects */
  EffectsFloatEffect__Init( &_this->FloatEffect, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetGauge );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0009 );
  CoreGroup_OnSetEnabled((CoreGroup)_this, 0 );
  _this->setupCurrentAngle = 1;
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->FloatEffect, EffectsTimingBack_Out );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->FloatEffect, 1 );
  _this->CurrentValue = 50;
  _this->FloatEffect.Super1.OnFinished = EwNewSlot( _this, WidgetSetGauge_onEndFloatEffect );
  _this->FloatEffect.Super1.OnAnimate = EwNewSlot( _this, WidgetSetGauge_onFloatEffect );
}

/* Re-Initializer for the class 'WidgetSet::Gauge' */
void WidgetSetGauge__ReInit( WidgetSetGauge _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  EffectsFloatEffect__ReInit( &_this->FloatEffect );
}

/* Finalizer method for the class 'WidgetSet::Gauge' */
void WidgetSetGauge__Done( WidgetSetGauge _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  EffectsFloatEffect__Done( &_this->FloatEffect );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::Gauge.OnSetBounds()' */
void WidgetSetGauge_OnSetBounds( WidgetSetGauge _this, XRect value )
{
  if ( EwCompRect( _this->Super2.Bounds, value ))
    EwPostSignal( _this->OnUpdate, ((XObject)_this ));

  if ( _this->Appearance != 0 )
  {
    XPoint cs = EwGetRectSize( value );
    XPoint ns = cs;
    XPoint delta;

    if ( ns.X < _this->Appearance->WidgetMinSize.X )
      ns.X = _this->Appearance->WidgetMinSize.X;

    if ( ns.Y < _this->Appearance->WidgetMinSize.Y )
      ns.Y = _this->Appearance->WidgetMinSize.Y;

    delta = EwMovePointNeg( ns, cs );

    if ( delta.X != 0 )
    {
      XBool alignToLeft = (( _this->Super3.Layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( _this->Super3.Layout & CoreLayoutAlignToRight ) == 
        CoreLayoutAlignToRight );

      if ( alignToLeft && !alignToRight )
        value.Point2.X = ( value.Point2.X + delta.X );
      else
        if ( !alignToLeft && alignToRight )
          value.Point1.X = ( value.Point1.X - delta.X );
        else
        {
          value.Point1.X = ( value.Point1.X - ( delta.X / 2 ));
          value.Point2.X = ( value.Point1.X + ns.X );
        }
    }

    if ( delta.Y != 0 )
    {
      XBool alignToTop = (( _this->Super3.Layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( _this->Super3.Layout & CoreLayoutAlignToBottom ) 
        == CoreLayoutAlignToBottom );

      if ( alignToTop && !alignToBottom )
        value.Point2.Y = ( value.Point2.Y + delta.Y );
      else
        if ( !alignToTop && alignToBottom )
          value.Point1.Y = ( value.Point1.Y - delta.Y );
        else
        {
          value.Point1.Y = ( value.Point1.Y - ( delta.Y / 2 ));
          value.Point2.Y = ( value.Point1.Y + ns.Y );
        }
    }
  }

  CoreGroup_OnSetBounds((CoreGroup)_this, value );
}

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
void WidgetSetGauge_UpdateViewState( WidgetSetGauge _this, XSet aState )
{
  XBool needsPath1;
  XBool needsPath2;
  XBool needsPath4;
  XRect area;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  needsPath1 = (XBool)((( _this->Appearance != 0 ) && !!_this->Appearance->TrackLeftThickness ) 
  && !EwIsColorNull( _this->Appearance->TrackLeftColor ));
  needsPath2 = (XBool)((( _this->Appearance != 0 ) && !!_this->Appearance->TrackRightThickness ) 
  && !EwIsColorNull( _this->Appearance->TrackRightColor ));
  needsPath4 = (XBool)(((( _this->Appearance != 0 ) && !!_this->Appearance->TrackRightThickness ) 
  && !!_this->Appearance->TrackRightBorderWidth ) && !EwIsColorNull( _this->Appearance->TrackRightBorderColor ));
  area = EwGetRectORect( _this->Super2.Bounds );

  if ( needsPath1 && !( _this->path1 != 0 ))
    _this->path1 = EwNewObject( GraphicsArcPath, 0 );
  else
    if ( !needsPath1 && ( _this->path1 != 0 ))
      _this->path1 = 0;

  if (( needsPath2 || needsPath4 ) && !( _this->path2 != 0 ))
    _this->path2 = EwNewObject( GraphicsArcPath, 0 );
  else
    if ( !( needsPath2 || needsPath4 ) && ( _this->path2 != 0 ))
      _this->path2 = 0;

  if ( needsPath1 && !( _this->pathView1 != 0 ))
  {
    _this->pathView1 = EwNewObject( ViewsFillPath, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->pathView1 ), 0 );
    ViewsFillPath_OnSetPath( _this->pathView1, ((GraphicsPath)_this->path1 ));
    ViewsFillPath_OnSetFillRule( _this->pathView1, GraphicsFillRuleNonZero );
  }
  else
    if ( !needsPath1 && ( _this->pathView1 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->pathView1 ));
      _this->pathView1 = 0;
    }

  if ( needsPath2 && !( _this->pathView2 != 0 ))
  {
    _this->pathView2 = EwNewObject( ViewsFillPath, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->pathView2 ), 0 );
    ViewsFillPath_OnSetPath( _this->pathView2, ((GraphicsPath)_this->path2 ));
    ViewsFillPath_OnSetFillRule( _this->pathView2, GraphicsFillRuleNonZero );
  }
  else
    if ( !needsPath2 && ( _this->pathView2 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->pathView2 ));
      _this->pathView2 = 0;
    }

  if ( needsPath4 && !( _this->pathView4 != 0 ))
  {
    _this->pathView4 = EwNewObject( ViewsStrokePath, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->pathView4 ), 0 );
    ViewsStrokePath_OnSetPath( _this->pathView4, ((GraphicsPath)_this->path2 ));
  }
  else
    if ( !needsPath4 && ( _this->pathView4 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->pathView4 ));
      _this->pathView4 = 0;
    }

  if ( _this->pathView1 != 0 )
  {
    CoreRectView__OnSetBounds( _this->pathView1, area );
    ViewsFillPath_OnSetOffset( _this->pathView1, EwMovePointPos( EwGetRectCenter( 
    area ), _this->Appearance->CenterOffset ));
    ViewsFillPath_OnSetColor( _this->pathView1, _this->Appearance->TrackLeftColor );
    CoreView_OnSetStackingPriority((CoreView)_this->pathView1, 52 );
  }

  if ( _this->pathView2 != 0 )
  {
    CoreRectView__OnSetBounds( _this->pathView2, area );
    ViewsFillPath_OnSetOffset( _this->pathView2, EwMovePointPos( EwGetRectCenter( 
    area ), _this->Appearance->CenterOffset ));
    ViewsFillPath_OnSetColor( _this->pathView2, _this->Appearance->TrackRightColor );
    CoreView_OnSetStackingPriority((CoreView)_this->pathView2, 33 );
  }

  if ( _this->pathView4 != 0 )
  {
    CoreRectView__OnSetBounds( _this->pathView4, area );
    ViewsStrokePath_OnSetOffset( _this->pathView4, EwMovePointPos( EwGetRectCenter( 
    area ), _this->Appearance->CenterOffset ));
    ViewsStrokePath_OnSetColor( _this->pathView4, _this->Appearance->TrackRightBorderColor );
    ViewsStrokePath_OnSetWidth( _this->pathView4, _this->Appearance->TrackRightBorderWidth );
    CoreView_OnSetStackingPriority((CoreView)_this->pathView4, 34 );
  }

  if ( _this->path1 != 0 )
  {
    XFloat angle = _this->currentAngle;
    XFloat angleEnd = _this->Appearance->NeedleMaxAngle;
    XFloat angleStart = _this->Appearance->NeedleMinAngle - _this->Appearance->TrackLeftMarginStart;

    if ( angle < angleEnd )
      angle = angleEnd;

    if ( angle > angleStart )
      angle = angleStart;

    GraphicsArcPath_OnSetInnerRadius( _this->path1, _this->Appearance->TrackLeftRadius 
    - ( _this->Appearance->TrackLeftThickness * 0.5f ));
    GraphicsArcPath_OnSetRadius( _this->path1, GraphicsArcPath_OnGetInnerRadius( 
    _this->path1 ) + _this->Appearance->TrackLeftThickness );
    GraphicsArcPath_OnSetStartAngle( _this->path1, -angleStart );
    GraphicsArcPath_OnSetEndAngle( _this->path1, -angle );

    if ( _this->Appearance->TrackLeftRoundedStart && _this->Appearance->TrackLeftRoundedEnd )
      GraphicsArcPath_OnSetStyle( _this->path1, GraphicsArcStylePieRounded );
    else
      if ( _this->Appearance->TrackLeftRoundedStart )
        GraphicsArcPath_OnSetStyle( _this->path1, GraphicsArcStylePieRoundedStart );
      else
        if ( _this->Appearance->TrackLeftRoundedEnd )
          GraphicsArcPath_OnSetStyle( _this->path1, GraphicsArcStylePieRoundedEnd );
        else
          GraphicsArcPath_OnSetStyle( _this->path1, GraphicsArcStylePie );
  }

  if ( _this->path2 != 0 )
  {
    XFloat angle = _this->currentAngle;
    XFloat angleEnd = _this->Appearance->NeedleMaxAngle;
    XFloat angleStart = _this->Appearance->NeedleMinAngle;

    if ( angle > angleStart )
      angle = angleStart;

    if ( angle < angleEnd )
      angle = angleEnd;

    GraphicsArcPath_OnSetInnerRadius( _this->path2, _this->Appearance->TrackRightRadius 
    - ( _this->Appearance->TrackRightThickness * 0.5f ));
    GraphicsArcPath_OnSetRadius( _this->path2, GraphicsArcPath_OnGetInnerRadius( 
    _this->path2 ) + _this->Appearance->TrackRightThickness );
    GraphicsArcPath_OnSetStartAngle( _this->path2, -angle );
    GraphicsArcPath_OnSetEndAngle( _this->path2, -angleEnd );

    if ( _this->Appearance->TrackRightRoundedEnd )
      GraphicsArcPath_OnSetStyle( _this->path2, GraphicsArcStylePieRoundedEnd );
    else
      GraphicsArcPath_OnSetStyle( _this->path2, GraphicsArcStylePie );
  }
}

/* 'C' function for method : 'WidgetSet::Gauge.onUpdateAngle()' */
void WidgetSetGauge_onUpdateAngle( WidgetSetGauge _this, XObject sender )
{
  XFloat angleMin;
  XFloat angleMax;
  XFloat newAngle;
  XInt32 swingDuration;
  XFloat ratio;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  angleMin = 135.0f;
  angleMax = 45.0f;
  swingDuration = 0;

  if ( _this->Appearance != 0 )
  {
    angleMin = _this->Appearance->NeedleMinAngle;
    angleMax = _this->Appearance->NeedleMaxAngle;
    swingDuration = _this->Appearance->SwingDuration;
  }

  if ( _this->setupCurrentAngle )
  {
    _this->currentAngle = angleMin;
    _this->setupCurrentAngle = 0;
    EwPostSignal( _this->OnUpdate, ((XObject)_this ));
  }

  newAngle = (((XFloat)WidgetSetGauge_OnGetCurrentValue( _this ) * ( angleMax - 
  angleMin )) / 100.0f ) + angleMin;

  if ( newAngle == _this->currentAngle )
    return;

  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FloatEffect, 0 );

  if (( swingDuration <= 0 ) || ( angleMax == angleMin ))
  {
    _this->currentAngle = newAngle;
    CoreGroup_InvalidateViewState((CoreGroup)_this );
    EwPostSignal( _this->OnUpdate, ((XObject)_this ));
    return;
  }

  ratio = ( newAngle - _this->currentAngle ) / ( angleMax - angleMin );

  if ( ratio < 0.0f )
    ratio = -ratio;

  if ( _this->Appearance->SwingElastic )
    EffectsEffect_OnSetTiming((EffectsEffect)&_this->FloatEffect, EffectsTimingBack_Out );
  else
    EffectsEffect_OnSetTiming((EffectsEffect)&_this->FloatEffect, EffectsTimingFastIn_EaseOut );

  _this->FloatEffect.Value1 = _this->currentAngle;
  _this->FloatEffect.Value2 = newAngle;
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->FloatEffect, ( 10 + ( 
  swingDuration / 2 )) + ((XInt32)((XFloat)swingDuration * ratio ) / 2 ));
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FloatEffect, 1 );
}

/* 'C' function for method : 'WidgetSet::Gauge.onEndFloatEffect()' */
void WidgetSetGauge_onEndFloatEffect( WidgetSetGauge _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( _this->OnUpdate, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::Gauge.onFloatEffect()' */
void WidgetSetGauge_onFloatEffect( WidgetSetGauge _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->currentAngle = _this->FloatEffect.Value;

  if (( _this->Appearance != 0 ) && ( _this->currentAngle > _this->Appearance->NeedleMinAngle ))
    _this->currentAngle = _this->Appearance->NeedleMinAngle;

  if (( _this->Appearance != 0 ) && ( _this->currentAngle < _this->Appearance->NeedleMaxAngle ))
    _this->currentAngle = _this->Appearance->NeedleMaxAngle;

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnUpdate, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::Gauge.onConfigChanged()' */
void WidgetSetGauge_onConfigChanged( WidgetSetGauge _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( EwNewSlot( _this, WidgetSetGauge_onUpdateAngle ), ((XObject)_this ));

  if ( _this->Appearance != 0 )
    CoreRectView__OnSetBounds( _this, _this->Super2.Bounds );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnUpdate, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::Gauge.OnGetCurrentValue()' */
XInt32 WidgetSetGauge_OnGetCurrentValue( WidgetSetGauge _this )
{
  XInt32 value = _this->CurrentValue;

  if ( value < 0 )
    value = 0;

  if ( value > 100 )
    value = 100;

  return value;
}

/* 'C' function for method : 'WidgetSet::Gauge.OnSetCurrentValue()' */
void WidgetSetGauge_OnSetCurrentValue( WidgetSetGauge _this, XInt32 value )
{
  if ( _this->CurrentValue == value )
    return;

  _this->CurrentValue = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetGauge_onUpdateAngle ), ((XObject)_this ));
  EwPostSignal( _this->OnUpdate, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::Gauge.OnSetAppearance()' */
void WidgetSetGauge_OnSetAppearance( WidgetSetGauge _this, WidgetSetGaugeConfig 
  value )
{
  if ( _this->Appearance == value )
    return;

  if ( _this->Appearance != 0 )
    EwDetachObjObserver( EwNewSlot( _this, WidgetSetGauge_onConfigChanged ), (XObject)_this->Appearance, 
      0 );

  _this->Appearance = value;

  if ( value != 0 )
    EwAttachObjObserver( EwNewSlot( _this, WidgetSetGauge_onConfigChanged ), (XObject)value, 
      0 );

  EwPostSignal( EwNewSlot( _this, WidgetSetGauge_onConfigChanged ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::Gauge' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetGauge )
EW_END_OF_CLASS_VARIANTS( WidgetSetGauge )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::Gauge' */
EW_DEFINE_CLASS( WidgetSetGauge, CoreGroup, FloatEffect, path2, OnUpdate, currentAngle, 
                 currentAngle, currentAngle, "WidgetSet::Gauge" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  WidgetSetGauge_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  WidgetSetGauge_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( WidgetSetGauge )

/* Initializer for the class 'WidgetSet::HorizontalScrollbar' */
void WidgetSetHorizontalScrollbar__Init( WidgetSetHorizontalScrollbar _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetHorizontalScrollbar );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->AutoHideTimer, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandlerTrack, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandlerThumb, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetHorizontalScrollbar );

  /* ... and initialize objects, variables, properties, etc. */
  _this->Super3.viewState = CoreViewStateAlphaBlended | CoreViewStateEnabled | CoreViewStatePreEnabled 
  | CoreViewStateTouchable | CoreViewStateVisible;
  CoreRectView__OnSetBounds( _this, _Const0005 );
  CoreTimer_OnSetPeriod( &_this->AutoHideTimer, 0 );
  CoreTimer_OnSetBegin( &_this->AutoHideTimer, 0 );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandlerTrack, 0 );
  CoreQuadView__OnSetPoint4( &_this->TouchHandlerTrack, _Const000A );
  CoreQuadView__OnSetPoint3( &_this->TouchHandlerTrack, _Const000B );
  CoreQuadView__OnSetPoint2( &_this->TouchHandlerTrack, _Const000C );
  CoreQuadView__OnSetPoint1( &_this->TouchHandlerTrack, _Const000D );
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandlerTrack, 100 );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandlerThumb, 0 );
  CoreQuadView__OnSetPoint4( &_this->TouchHandlerThumb, _Const000E );
  CoreQuadView__OnSetPoint3( &_this->TouchHandlerThumb, _Const000F );
  CoreQuadView__OnSetPoint2( &_this->TouchHandlerThumb, _Const0010 );
  CoreQuadView__OnSetPoint1( &_this->TouchHandlerThumb, _Const0011 );
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandlerThumb, 100 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->TouchHandlerTrack ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->TouchHandlerThumb ), 0 );
  _this->AutoHideTimer.OnTrigger = EwNewSlot( _this, WidgetSetHorizontalScrollbar_onAutoHideTimer );
  _this->TouchHandlerTrack.OnRelease = EwNewSlot( _this, WidgetSetHorizontalScrollbar_onReleaseTrack );
  _this->TouchHandlerTrack.OnPress = EwNewSlot( _this, WidgetSetHorizontalScrollbar_onPressTrack );
  _this->TouchHandlerThumb.OnDrag = EwNewSlot( _this, WidgetSetHorizontalScrollbar_onDragThumb );
  _this->TouchHandlerThumb.OnRelease = EwNewSlot( _this, WidgetSetHorizontalScrollbar_onReleaseThumb );
  _this->TouchHandlerThumb.OnPress = EwNewSlot( _this, WidgetSetHorizontalScrollbar_onPressThumb );
}

/* Re-Initializer for the class 'WidgetSet::HorizontalScrollbar' */
void WidgetSetHorizontalScrollbar__ReInit( WidgetSetHorizontalScrollbar _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->AutoHideTimer );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandlerTrack );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandlerThumb );
}

/* Finalizer method for the class 'WidgetSet::HorizontalScrollbar' */
void WidgetSetHorizontalScrollbar__Done( WidgetSetHorizontalScrollbar _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->AutoHideTimer );
  CoreSimpleTouchHandler__Done( &_this->TouchHandlerTrack );
  CoreSimpleTouchHandler__Done( &_this->TouchHandlerThumb );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbar.OnSetBounds()' */
void WidgetSetHorizontalScrollbar_OnSetBounds( WidgetSetHorizontalScrollbar _this, 
  XRect value )
{
  if ( _this->Appearance != 0 )
  {
    XPoint cs = EwGetRectSize( value );
    XPoint ns = cs;
    XPoint delta;

    if ( ns.X < _this->Appearance->WidgetMinSize.X )
      ns.X = _this->Appearance->WidgetMinSize.X;

    if ( ns.Y < _this->Appearance->WidgetMinSize.Y )
      ns.Y = _this->Appearance->WidgetMinSize.Y;

    delta = EwMovePointNeg( ns, cs );

    if ( delta.X != 0 )
    {
      XBool alignToLeft = (( _this->Super3.Layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( _this->Super3.Layout & CoreLayoutAlignToRight ) == 
        CoreLayoutAlignToRight );

      if ( alignToLeft && !alignToRight )
        value.Point2.X = ( value.Point2.X + delta.X );
      else
        if ( !alignToLeft && alignToRight )
          value.Point1.X = ( value.Point1.X - delta.X );
        else
        {
          value.Point1.X = ( value.Point1.X - ( delta.X / 2 ));
          value.Point2.X = ( value.Point1.X + ns.X );
        }
    }

    if ( delta.Y != 0 )
    {
      XBool alignToTop = (( _this->Super3.Layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( _this->Super3.Layout & CoreLayoutAlignToBottom ) 
        == CoreLayoutAlignToBottom );

      if ( alignToTop && !alignToBottom )
        value.Point2.Y = ( value.Point2.Y + delta.Y );
      else
        if ( !alignToTop && alignToBottom )
          value.Point1.Y = ( value.Point1.Y - delta.Y );
        else
        {
          value.Point1.Y = ( value.Point1.Y - ( delta.Y / 2 ));
          value.Point2.Y = ( value.Point1.Y + ns.Y );
        }
    }
  }

  CoreGroup_OnSetBounds((CoreGroup)_this, value );
}

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
  XSet aState )
{
  XBool needsBorder1;
  XBool needsRect2;
  XRect area;
  XInt32 trackThickness;
  XInt32 trackCornerRadius;
  XInt32 thumbThickness;
  XInt32 thumbMinWidth;
  XInt32 thumbCornerRadius;
  XChar isState;
  XRect r;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  needsBorder1 = (XBool)(((( _this->Appearance != 0 ) && (( !EwIsColorNull( _this->Appearance->TrackBorderColorDefault ) 
  || !EwIsColorNull( _this->Appearance->TrackBorderColorDisabled )) || !EwIsColorNull( 
  _this->Appearance->TrackBorderColorActive ))) && (( !!_this->Appearance->TrackBorderWidthDefault 
  || !!_this->Appearance->TrackBorderWidthDisabled ) || !!_this->Appearance->TrackBorderWidthActive )) 
  && (( !!_this->Appearance->TrackThicknessDefault || !!_this->Appearance->TrackThicknessDisabled ) 
  || !!_this->Appearance->TrackThicknessActive ));
  needsRect2 = (XBool)((( _this->Appearance != 0 ) && (( !EwIsColorNull( _this->Appearance->ThumbColorDefault ) 
  || !EwIsColorNull( _this->Appearance->ThumbColorDisabled )) || !EwIsColorNull( 
  _this->Appearance->ThumbColorActive ))) && (( !!_this->Appearance->ThumbThicknessDefault 
  || !!_this->Appearance->ThumbThicknessDisabled ) || !!_this->Appearance->ThumbThicknessActive ));
  area = EwGetRectORect( _this->Super2.Bounds );
  trackThickness = 0;
  trackCornerRadius = 0;
  thumbThickness = 0;
  thumbMinWidth = 0;
  thumbCornerRadius = 0;

  if ( needsBorder1 && !( _this->borderView1 != 0 ))
  {
    _this->borderView1 = EwNewObject( ViewsBorder, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->borderView1 ), 0 );
  }
  else
    if ( !needsBorder1 && ( _this->borderView1 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->borderView1 ));
      _this->borderView1 = 0;
    }

  if ( needsRect2 && !( _this->rectView2 != 0 ))
  {
    _this->rectView2 = EwNewObject( ViewsRectangle, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->rectView2 ), 0 );
  }
  else
    if ( !needsRect2 && ( _this->rectView2 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->rectView2 ));
      _this->rectView2 = 0;
    }

  if ( !(( aState & CoreViewStateEnabled ) == CoreViewStateEnabled ))
    isState = 'D';
  else
    if ( _this->TouchHandlerThumb.Down )
      isState = 'A';
    else
      isState = 'E';

  _this->prevState = isState;

  if ( _this->borderView1 != 0 )
    switch ( isState )
    {
      case 'D' :
      {
        trackThickness = _this->Appearance->TrackThicknessDisabled;
        trackCornerRadius = _this->Appearance->TrackCornerRadiusDisabled;
      }
      break;

      case 'A' :
      {
        trackThickness = _this->Appearance->TrackThicknessActive;
        trackCornerRadius = _this->Appearance->TrackCornerRadiusActive;
      }
      break;

      default : 
      {
        trackThickness = _this->Appearance->TrackThicknessDefault;
        trackCornerRadius = _this->Appearance->TrackCornerRadiusDefault;
      }
    }

  if ( _this->rectView2 != 0 )
    switch ( isState )
    {
      case 'D' :
      {
        thumbThickness = _this->Appearance->ThumbThicknessDisabled;
        thumbMinWidth = _this->Appearance->ThumbMinWidthDisabled;
        thumbCornerRadius = _this->Appearance->ThumbCornerRadiusDisabled;
      }
      break;

      case 'A' :
      {
        thumbThickness = _this->Appearance->ThumbThicknessActive;
        thumbMinWidth = _this->Appearance->ThumbMinWidthActive;
        thumbCornerRadius = _this->Appearance->ThumbCornerRadiusActive;
      }
      break;

      default : 
      {
        thumbThickness = _this->Appearance->ThumbThicknessDefault;
        thumbMinWidth = _this->Appearance->ThumbMinWidthDefault;
        thumbCornerRadius = _this->Appearance->ThumbCornerRadiusDefault;
      }
    }

  if ( _this->borderView1 != 0 )
  {
    XColor clr;
    XInt32 width;

    switch ( isState )
    {
      case 'D' :
      {
        clr = _this->Appearance->TrackBorderColorDisabled;
        width = _this->Appearance->TrackBorderWidthDisabled;
      }
      break;

      case 'A' :
      {
        clr = _this->Appearance->TrackBorderColorActive;
        width = _this->Appearance->TrackBorderWidthActive;
      }
      break;

      default : 
      {
        clr = _this->Appearance->TrackBorderColorDefault;
        width = _this->Appearance->TrackBorderWidthDefault;
      }
    }

    ViewsBorder_OnSetRadius( _this->borderView1, trackCornerRadius );
    ViewsBorder_OnSetColor( _this->borderView1, clr );
    ViewsBorder_OnSetWidth( _this->borderView1, width );
    CoreView_OnSetStackingPriority((CoreView)_this->borderView1, 18 );
  }

  if ( _this->rectView2 != 0 )
  {
    XColor clr;

    switch ( isState )
    {
      case 'D' :
        clr = _this->Appearance->ThumbColorDisabled;
      break;

      case 'A' :
        clr = _this->Appearance->ThumbColorActive;
      break;

      default : 
        clr = _this->Appearance->ThumbColorDefault;
    }

    ViewsRectangle_OnSetRadius( _this->rectView2, thumbCornerRadius );
    ViewsRectangle_OnSetColor( _this->rectView2, clr );
    CoreView_OnSetStackingPriority((CoreView)_this->rectView2, 40 );
  }

  if ( _this->borderView1 != 0 )
  {
    XInt32 h = trackThickness;
    XRect r;
    r = EwNewRect( 0, ( EwGetRectH( area ) / 2 ) - ( h / 2 ), EwGetRectW( area ), 
    (( EwGetRectH( area ) / 2 ) - ( h / 2 )) + h );

    if ( _this->borderView1 != 0 )
      CoreRectView__OnSetBounds( _this->borderView1, r );
  }

  if ( _this->rectView2 != 0 )
  {
    XInt32 minThumbWidth = EwGetInt32Max( 3, thumbMinWidth, thumbCornerRadius * 
      2, 1 );
    XInt32 maxThumbWidth;
    XInt32 thumbPos;
    XInt32 thumbWidth;
    XRect r;
    maxThumbWidth = EwGetRectW( area );
    thumbWidth = minThumbWidth + ((( maxThumbWidth - minThumbWidth ) * 10 ) / 100 );
    thumbPos = ( WidgetSetHorizontalScrollbar_OnGetPosition( _this ) * ( EwGetRectW( 
    area ) - thumbWidth )) / 90;
    r = EwNewRect( thumbPos, ( EwGetRectH( area ) / 2 ) - ( thumbThickness / 2 ), 
    thumbPos + thumbWidth, (( EwGetRectH( area ) / 2 ) - ( thumbThickness / 2 )) 
    + thumbThickness );

    if ( _this->rectView2 != 0 )
      CoreRectView__OnSetBounds( _this->rectView2, r );
  }

  r = _Const0012;

  if ( _this->rectView2 != 0 )
    r = EwUnionRect( r, _this->rectView2->Super1.Bounds );

  CoreQuadView__OnSetPoint1( &_this->TouchHandlerThumb, r.Point1 );
  CoreQuadView__OnSetPoint2( &_this->TouchHandlerThumb, EwNewPoint( r.Point2.X, 
  r.Point1.Y ));
  CoreQuadView__OnSetPoint3( &_this->TouchHandlerThumb, r.Point2 );
  CoreQuadView__OnSetPoint4( &_this->TouchHandlerThumb, EwNewPoint( r.Point1.X, 
  r.Point2.Y ));
  CoreQuadView__OnSetPoint1( &_this->TouchHandlerTrack, EwNewPoint( 0, r.Point1.Y ));
  CoreQuadView__OnSetPoint2( &_this->TouchHandlerTrack, EwNewPoint( area.Point2.X, 
  r.Point1.Y ));
  CoreQuadView__OnSetPoint3( &_this->TouchHandlerTrack, EwNewPoint( area.Point2.X, 
  r.Point2.Y ));
  CoreQuadView__OnSetPoint4( &_this->TouchHandlerTrack, EwNewPoint( 0, r.Point2.Y ));
  CoreGroup_ExtendClipping((CoreGroup)_this, EwGetInt32Max( 2, -r.Point1.X, 0 ), 
  EwGetInt32Max( 2, r.Point2.X - area.Point2.X, 0 ), EwGetInt32Max( 2, -r.Point1.Y, 
  0 ), EwGetInt32Max( 2, r.Point2.Y - area.Point2.Y, 0 ));
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbar.onFinishedEffect()' */
void WidgetSetHorizontalScrollbar_onFinishedEffect( WidgetSetHorizontalScrollbar _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->fadeInOutEffect->Outlet = EwNullRef;
  _this->fadeInOutEffect = 0;
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbar.updateVisibility()' */
void WidgetSetHorizontalScrollbar_updateVisibility( WidgetSetHorizontalScrollbar _this, 
  XObject sender )
{
  XBool fadeOut;
  XBool fadeIn;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  fadeOut = _this->autoHideTimerExpired;
  fadeIn = (XBool)!fadeOut;
  _this->autoHideTimerExpired = 0;
  fadeOut = (XBool)(( fadeOut && ( _this->Super1.Opacity > 0 )) && (( _this->fadeInOutEffect 
  == 0 ) || ( _this->fadeInOutEffect->Value2 > 0 )));
  fadeIn = (XBool)(( fadeIn && ( _this->Super1.Opacity < 255 )) && (( _this->fadeInOutEffect 
  == 0 ) || ( _this->fadeInOutEffect->Value2 < 255 )));

  if (( fadeIn || fadeOut ) && ( _this->fadeInOutEffect != 0 ))
  {
    EffectsEffect_OnSetEnabled((EffectsEffect)_this->fadeInOutEffect, 0 );
    _this->fadeInOutEffect->Outlet = EwNullRef;
    _this->fadeInOutEffect = 0;
  }

  if ( fadeIn )
    CoreGroup__OnSetOpacity( _this, 255 );
  else
    if ( fadeOut )
      CoreGroup__OnSetOpacity( _this, 0 );
    else
      if ( fadeIn )
      {
        _this->fadeInOutEffect = EwNewObject( EffectsInt32Effect, 0 );
        _this->fadeInOutEffect->Outlet = EwNewRef( _this, CoreGroup_OnGetOpacity, 
        CoreGroup__OnSetOpacity );
        EffectsEffect_OnSetCycleDuration((EffectsEffect)_this->fadeInOutEffect, 
        10 );
        EffectsEffect_OnSetNoOfCycles((EffectsEffect)_this->fadeInOutEffect, 1 );
        _this->fadeInOutEffect->Value1 = _this->Super1.Opacity;
        _this->fadeInOutEffect->Value2 = 255;
        _this->fadeInOutEffect->Super1.OnFinished = EwNewSlot( _this, WidgetSetHorizontalScrollbar_onFinishedEffect );
        EffectsEffect_OnSetEnabled((EffectsEffect)_this->fadeInOutEffect, 1 );
      }
      else
        if ( fadeOut )
        {
          _this->fadeInOutEffect = EwNewObject( EffectsInt32Effect, 0 );
          _this->fadeInOutEffect->Outlet = EwNewRef( _this, CoreGroup_OnGetOpacity, 
          CoreGroup__OnSetOpacity );
          EffectsEffect_OnSetCycleDuration((EffectsEffect)_this->fadeInOutEffect, 
          10 );
          EffectsEffect_OnSetNoOfCycles((EffectsEffect)_this->fadeInOutEffect, 1 );
          _this->fadeInOutEffect->Value1 = _this->Super1.Opacity;
          _this->fadeInOutEffect->Value2 = 0;
          _this->fadeInOutEffect->Super1.OnFinished = EwNewSlot( _this, WidgetSetHorizontalScrollbar_onFinishedEffect );
          EffectsEffect_OnSetEnabled((EffectsEffect)_this->fadeInOutEffect, 1 );
        }
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbar.onAutoHideTimer()' */
void WidgetSetHorizontalScrollbar_onAutoHideTimer( WidgetSetHorizontalScrollbar _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->autoHideTimerExpired = 1;
  EwPostSignal( EwNewSlot( _this, WidgetSetHorizontalScrollbar_updateVisibility ), 
    ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbar.onFinishedSnapEffect()' */
void WidgetSetHorizontalScrollbar_onFinishedSnapEffect( WidgetSetHorizontalScrollbar _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->snapEffect = 0;
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbar.onSnapEffect()' */
void WidgetSetHorizontalScrollbar_onSnapEffect( WidgetSetHorizontalScrollbar _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( WidgetSetHorizontalScrollbar_OnGetPosition( _this ) != _this->snapEffect->Value )
    WidgetSetHorizontalScrollbar_OnSetPosition( _this, _this->snapEffect->Value );
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbar.onConfigChanged()' */
void WidgetSetHorizontalScrollbar_onConfigChanged( WidgetSetHorizontalScrollbar _this, 
  XObject sender )
{
  XInt32 oldAutoHideDelay;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  oldAutoHideDelay = _this->AutoHideTimer.Begin;
  CoreTimer_OnSetBegin( &_this->AutoHideTimer, 0 );
  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandlerThumb, 1 );
  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandlerTrack, 1 );

  if ( oldAutoHideDelay != _this->AutoHideTimer.Begin )
  {
    XBool fadeOut = (XBool)( _this->AutoHideTimer.Begin > 0 );
    XBool fadeIn = (XBool)!fadeOut;
    _this->autoHideTimerExpired = fadeOut;
    CoreTimer_OnSetEnabled( &_this->AutoHideTimer, 0 );

    if ( _this->fadeInOutEffect != 0 )
    {
      EffectsEffect_OnSetEnabled((EffectsEffect)_this->fadeInOutEffect, 0 );
      _this->fadeInOutEffect->Outlet = EwNullRef;
      _this->fadeInOutEffect = 0;
    }

    if ( fadeIn )
      CoreGroup__OnSetOpacity( _this, 255 );

    if ( fadeOut )
      CoreGroup__OnSetOpacity( _this, 0 );

    EwPostSignal( EwNewSlot( _this, WidgetSetHorizontalScrollbar_updateVisibility ), 
      ((XObject)_this ));
  }

  if ( _this->Appearance != 0 )
    CoreRectView__OnSetBounds( _this, _this->Super2.Bounds );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbar.onReleaseTrack()' */
void WidgetSetHorizontalScrollbar_onReleaseTrack( WidgetSetHorizontalScrollbar _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->AutoHideTimer.Begin > 0 )
  {
    CoreTimer_OnSetEnabled( &_this->AutoHideTimer, 0 );
    CoreTimer_OnSetEnabled( &_this->AutoHideTimer, 1 );
  }
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbar.onPressTrack()' */
void WidgetSetHorizontalScrollbar_onPressTrack( WidgetSetHorizontalScrollbar _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreTimer_OnSetEnabled( &_this->AutoHideTimer, 0 );
  EwPostSignal( EwNewSlot( _this, WidgetSetHorizontalScrollbar_updateVisibility ), 
    ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbar.onDragThumb()' */
void WidgetSetHorizontalScrollbar_onDragThumb( WidgetSetHorizontalScrollbar _this, 
  XObject sender )
{
  XPoint delta;
  XInt32 maxPos;
  XInt32 oldPos;
  XInt32 newPos;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  delta = EwMovePointNeg( _this->TouchHandlerThumb.CurrentPos, _this->TouchHandlerThumb.HittingPos );
  maxPos = EwGetRectW( _this->Super2.Bounds ) - EwGetRectW( CoreView__GetExtent( 
  &_this->TouchHandlerThumb ));
  oldPos = WidgetSetHorizontalScrollbar_OnGetPosition( _this );
  newPos = oldPos;

  if ( maxPos > 0 )
    newPos = (( delta.X * 90 ) / maxPos ) + _this->touchStartPosition;

  WidgetSetHorizontalScrollbar_OnSetPosition( _this, newPos );

  if ( oldPos == WidgetSetHorizontalScrollbar_OnGetPosition( _this ))
    return;
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbar.onReleaseThumb()' */
void WidgetSetHorizontalScrollbar_onReleaseThumb( WidgetSetHorizontalScrollbar _this, 
  XObject sender )
{
  XInt32 target;
  XInt32 snapN;
  XInt32 snapP;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  target = WidgetSetHorizontalScrollbar_OnGetPosition( _this );
  snapN = 0;
  snapP = 90;

  if ( target < 0 )
    snapP = 0;
  else
    if ( target > 90 )
      snapN = 90;
    else
    {
      snapN = target;
      snapP = target;
    }

  if (( snapN - target ) <= ( target - snapP ))
    target = snapN;
  else
    target = snapP;

  if ((( target == WidgetSetHorizontalScrollbar_OnGetPosition( _this )) || ( _this->Appearance 
      == 0 )) || 1 )
    WidgetSetHorizontalScrollbar_OnSetPosition( _this, target );
  else
  {
    _this->snapEffect = EwNewObject( EffectsInt32Effect, 0 );
    EffectsEffect_OnSetNoOfCycles((EffectsEffect)_this->snapEffect, 1 );
    EffectsEffect_OnSetTiming((EffectsEffect)_this->snapEffect, EffectsTimingFastIn_EaseOut );
    EffectsEffect_OnSetCycleDuration((EffectsEffect)_this->snapEffect, 0 );
    _this->snapEffect->Value1 = WidgetSetHorizontalScrollbar_OnGetPosition( _this );
    _this->snapEffect->Value2 = target;
    _this->snapEffect->Super1.OnAnimate = EwNewSlot( _this, WidgetSetHorizontalScrollbar_onSnapEffect );
    _this->snapEffect->Super1.OnFinished = EwNewSlot( _this, WidgetSetHorizontalScrollbar_onFinishedSnapEffect );
    EffectsEffect_OnSetEnabled((EffectsEffect)_this->snapEffect, 1 );
  }

  if ( _this->AutoHideTimer.Begin > 0 )
  {
    CoreTimer_OnSetEnabled( &_this->AutoHideTimer, 0 );
    CoreTimer_OnSetEnabled( &_this->AutoHideTimer, 1 );
  }
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbar.onPressThumb()' */
void WidgetSetHorizontalScrollbar_onPressThumb( WidgetSetHorizontalScrollbar _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  _this->touchStartPosition = WidgetSetHorizontalScrollbar_OnGetPosition( _this );

  if ( _this->snapEffect != 0 )
  {
    EffectsEffect_OnSetEnabled((EffectsEffect)_this->snapEffect, 0 );
    _this->snapEffect = 0;
  }

  CoreTimer_OnSetEnabled( &_this->AutoHideTimer, 0 );
  EwPostSignal( EwNewSlot( _this, WidgetSetHorizontalScrollbar_updateVisibility ), 
    ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbar.OnGetPosition()' */
XInt32 WidgetSetHorizontalScrollbar_OnGetPosition( WidgetSetHorizontalScrollbar _this )
{
  XInt32 value = _this->Position;

  if ( value > 90 )
    value = 90;

  return value;
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbar.OnSetPosition()' */
void WidgetSetHorizontalScrollbar_OnSetPosition( WidgetSetHorizontalScrollbar _this, 
  XInt32 value )
{
  XInt32 old;

  if ( value < 0 )
    value = 0;

  if ( _this->Position == value )
    return;

  old = WidgetSetHorizontalScrollbar_OnGetPosition( _this );
  _this->Position = value;

  if ( WidgetSetHorizontalScrollbar_OnGetPosition( _this ) == old )
    return;

  EwPostSignal( EwNewSlot( _this, WidgetSetHorizontalScrollbar_updateVisibility ), 
    ((XObject)_this ));
  CoreTimer_OnSetEnabled( &_this->AutoHideTimer, 0 );
  CoreTimer_OnSetEnabled( &_this->AutoHideTimer, (XBool)((( _this->AutoHideTimer.Begin 
  > 0 ) && !_this->TouchHandlerThumb.Down ) && !_this->TouchHandlerTrack.Down ));
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::HorizontalScrollbar.OnSetAppearance()' */
void WidgetSetHorizontalScrollbar_OnSetAppearance( WidgetSetHorizontalScrollbar _this, 
  WidgetSetHorizontalScrollbarConfig value )
{
  if ( _this->Appearance == value )
    return;

  if ( _this->Appearance != 0 )
    EwDetachObjObserver( EwNewSlot( _this, WidgetSetHorizontalScrollbar_onConfigChanged ), 
      (XObject)_this->Appearance, 0 );

  _this->Appearance = value;

  if ( value != 0 )
    EwAttachObjObserver( EwNewSlot( _this, WidgetSetHorizontalScrollbar_onConfigChanged ), 
      (XObject)value, 0 );

  EwPostSignal( EwNewSlot( _this, WidgetSetHorizontalScrollbar_onConfigChanged ), 
    ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::HorizontalScrollbar' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetHorizontalScrollbar )
EW_END_OF_CLASS_VARIANTS( WidgetSetHorizontalScrollbar )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::HorizontalScrollbar' */
EW_DEFINE_CLASS( WidgetSetHorizontalScrollbar, CoreGroup, AutoHideTimer, snapEffect, 
                 touchStartPosition, touchStartPosition, touchStartPosition, touchStartPosition, 
                 "WidgetSet::HorizontalScrollbar" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  WidgetSetHorizontalScrollbar_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  WidgetSetHorizontalScrollbar_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( WidgetSetHorizontalScrollbar )

/* Initializer for the class 'WidgetSet::HorizontalSlider' */
void WidgetSetHorizontalSlider__Init( WidgetSetHorizontalSlider _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetHorizontalSlider );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->RepetitionTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandlerLeft, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandlerRight, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetHorizontalSlider );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0013 );
  CoreTimer_OnSetPeriod( &_this->RepetitionTimer, 0 );
  CoreTimer_OnSetBegin( &_this->RepetitionTimer, 50 );
  _this->KeyHandlerLeft.Filter = CoreKeyCodeLeft;
  _this->KeyHandlerRight.Filter = CoreKeyCodeRight;
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const0014 );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const0015 );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const0016 );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const000D );
  CoreSimpleTouchHandler_OnSetRetargetOffset( &_this->TouchHandler, 16 );
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  _this->CurrentValue = 50;
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->TouchHandler ), 0 );
  _this->RepetitionTimer.OnTrigger = EwNewSlot( _this, WidgetSetHorizontalSlider_onRepetitionTimer );
  _this->KeyHandlerLeft.OnRelease = EwNewSlot( _this, WidgetSetHorizontalSlider_onReleaseKey );
  _this->KeyHandlerLeft.OnPress = EwNewSlot( _this, WidgetSetHorizontalSlider_onPressKey );
  _this->KeyHandlerRight.OnRelease = EwNewSlot( _this, WidgetSetHorizontalSlider_onReleaseKey );
  _this->KeyHandlerRight.OnPress = EwNewSlot( _this, WidgetSetHorizontalSlider_onPressKey );
  _this->TouchHandler.OnDrag = EwNewSlot( _this, WidgetSetHorizontalSlider_onDragTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, WidgetSetHorizontalSlider_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, WidgetSetHorizontalSlider_onPressTouch );
}

/* Re-Initializer for the class 'WidgetSet::HorizontalSlider' */
void WidgetSetHorizontalSlider__ReInit( WidgetSetHorizontalSlider _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->RepetitionTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandlerLeft );
  CoreKeyPressHandler__ReInit( &_this->KeyHandlerRight );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
}

/* Finalizer method for the class 'WidgetSet::HorizontalSlider' */
void WidgetSetHorizontalSlider__Done( WidgetSetHorizontalSlider _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->RepetitionTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandlerLeft );
  CoreKeyPressHandler__Done( &_this->KeyHandlerRight );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.OnSetBounds()' */
void WidgetSetHorizontalSlider_OnSetBounds( WidgetSetHorizontalSlider _this, XRect 
  value )
{
  if ( _this->Appearance != 0 )
  {
    XPoint cs = EwGetRectSize( value );
    XPoint ns = cs;
    XPoint delta;

    if ( ns.X < _this->Appearance->WidgetMinSize.X )
      ns.X = _this->Appearance->WidgetMinSize.X;

    if ( ns.Y < _this->Appearance->WidgetMinSize.Y )
      ns.Y = _this->Appearance->WidgetMinSize.Y;

    delta = EwMovePointNeg( ns, cs );

    if ( delta.X != 0 )
    {
      XBool alignToLeft = (( _this->Super3.Layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( _this->Super3.Layout & CoreLayoutAlignToRight ) == 
        CoreLayoutAlignToRight );

      if ( alignToLeft && !alignToRight )
        value.Point2.X = ( value.Point2.X + delta.X );
      else
        if ( !alignToLeft && alignToRight )
          value.Point1.X = ( value.Point1.X - delta.X );
        else
        {
          value.Point1.X = ( value.Point1.X - ( delta.X / 2 ));
          value.Point2.X = ( value.Point1.X + ns.X );
        }
    }

    if ( delta.Y != 0 )
    {
      XBool alignToTop = (( _this->Super3.Layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( _this->Super3.Layout & CoreLayoutAlignToBottom ) 
        == CoreLayoutAlignToBottom );

      if ( alignToTop && !alignToBottom )
        value.Point2.Y = ( value.Point2.Y + delta.Y );
      else
        if ( !alignToTop && alignToBottom )
          value.Point1.Y = ( value.Point1.Y - delta.Y );
        else
        {
          value.Point1.Y = ( value.Point1.Y - ( delta.Y / 2 ));
          value.Point2.Y = ( value.Point1.Y + ns.Y );
        }
    }
  }

  CoreGroup_OnSetBounds((CoreGroup)_this, value );
}

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
void WidgetSetHorizontalSlider_UpdateViewState( WidgetSetHorizontalSlider _this, 
  XSet aState )
{
  XBool needsRect1;
  XBool needsRect2;
  XBool needsBorder2;
  XBool needsRect3;
  XBool needsBorder3;
  XBool needsRect4;
  XBool needsOutline1;
  XBool needsOutline2;
  XRect area;
  XInt32 trackLeftThickness;
  XInt32 trackLeftCornerRadius;
  XInt32 trackRightThickness;
  XInt32 trackRightCornerRadius;
  XPoint thumbSize;
  XInt32 thumbCornerRadius;
  XPoint accentSize;
  XInt32 accentCornerRadius;
  XChar isState;
  XBool needsAnimation;
  XBool startAnimation;
  XInt32 marginLeft;
  XInt32 marginRight;
  XInt32 minPos;
  XInt32 maxPos;
  XInt32 newThumbPos;
  XRect r;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  needsRect1 = (XBool)((( _this->Appearance != 0 ) && ((( !EwIsColorNull( _this->Appearance->TrackLeftColorDefault ) 
  || !EwIsColorNull( _this->Appearance->TrackLeftColorDisabled )) || !EwIsColorNull( 
  _this->Appearance->TrackLeftColorFocused )) || !EwIsColorNull( _this->Appearance->TrackLeftColorActive ))) 
  && ((( !!_this->Appearance->TrackLeftThicknessDefault || !!_this->Appearance->TrackLeftThicknessDisabled ) 
  || !!_this->Appearance->TrackLeftThicknessFocused ) || !!_this->Appearance->TrackLeftThicknessActive ));
  needsRect2 = (XBool)((( _this->Appearance != 0 ) && (( !EwIsColorNull( _this->Appearance->TrackRightColorDefault ) 
  || !EwIsColorNull( _this->Appearance->TrackRightColorFocused )) || !EwIsColorNull( 
  _this->Appearance->TrackRightColorActive ))) && ((( !!_this->Appearance->TrackRightThicknessDefault 
  || !!_this->Appearance->TrackRightThicknessDisabled ) || !!_this->Appearance->TrackRightThicknessFocused ) 
  || !!_this->Appearance->TrackRightThicknessActive ));
  needsBorder2 = (XBool)(((( _this->Appearance != 0 ) && ((( !EwIsColorNull( _this->Appearance->TrackRightBorderColorDefault ) 
  || !EwIsColorNull( _this->Appearance->TrackRightBorderColorDisabled )) || !EwIsColorNull( 
  _this->Appearance->TrackRightBorderColorFocused )) || !EwIsColorNull( _this->Appearance->TrackRightBorderColorActive ))) 
  && ((( !!_this->Appearance->TrackRightBorderWidthDefault || !!_this->Appearance->TrackRightBorderWidthDisabled ) 
  || !!_this->Appearance->TrackRightBorderWidthFocused ) || !!_this->Appearance->TrackRightBorderWidthActive )) 
  && ((( !!_this->Appearance->TrackRightThicknessDefault || !!_this->Appearance->TrackRightThicknessDisabled ) 
  || !!_this->Appearance->TrackRightThicknessFocused ) || !!_this->Appearance->TrackRightThicknessActive ));
  needsRect3 = (XBool)((( _this->Appearance != 0 ) && ((( !EwIsColorNull( _this->Appearance->ThumbColorDefault ) 
  || !EwIsColorNull( _this->Appearance->ThumbColorDisabled )) || !EwIsColorNull( 
  _this->Appearance->ThumbColorFocused )) || !EwIsColorNull( _this->Appearance->ThumbColorActive ))) 
  && ((( !EwIsPointNull( _this->Appearance->ThumbSizeDefault ) || !EwIsPointNull( 
  _this->Appearance->ThumbSizeDisabled )) || !EwIsPointNull( _this->Appearance->ThumbSizeFocused )) 
  || !EwIsPointNull( _this->Appearance->ThumbSizeActive )));
  needsBorder3 = (XBool)(((( _this->Appearance != 0 ) && ((( !EwIsColorNull( _this->Appearance->ThumbBorderColorDefault ) 
  || !EwIsColorNull( _this->Appearance->ThumbBorderColorDisabled )) || !EwIsColorNull( 
  _this->Appearance->ThumbBorderColorFocused )) || !EwIsColorNull( _this->Appearance->ThumbBorderColorActive ))) 
  && ((( !!_this->Appearance->ThumbBorderWidthDefault || !!_this->Appearance->ThumbBorderWidthDisabled ) 
  || !!_this->Appearance->ThumbBorderWidthFocused ) || !!_this->Appearance->ThumbBorderWidthActive )) 
  && ((( !EwIsPointNull( _this->Appearance->ThumbSizeDefault ) || !EwIsPointNull( 
  _this->Appearance->ThumbSizeDisabled )) || !EwIsPointNull( _this->Appearance->ThumbSizeFocused )) 
  || !EwIsPointNull( _this->Appearance->ThumbSizeActive )));
  needsRect4 = (XBool)((( _this->Appearance != 0 ) && ( !EwIsColorNull( _this->Appearance->AccentColorFocused ) 
  || !EwIsColorNull( _this->Appearance->AccentColorActive ))) && ((( !EwIsPointNull( 
  _this->Appearance->AccentSizeDefault ) || !EwIsPointNull( _this->Appearance->AccentSizeDisabled )) 
  || !EwIsPointNull( _this->Appearance->AccentSizeFocused )) || !EwIsPointNull( 
  _this->Appearance->AccentSizeActive )));
  needsOutline1 = (XBool)(( needsRect1 && ( _this->Appearance != 0 )) && ((( !!_this->Appearance->TrackLeftCornerRadiusDefault 
  || !!_this->Appearance->TrackLeftCornerRadiusDisabled ) || !!_this->Appearance->TrackLeftCornerRadiusFocused ) 
  || !!_this->Appearance->TrackLeftCornerRadiusActive ));
  needsOutline2 = (XBool)((( needsRect2 || needsBorder2 ) && ( _this->Appearance 
  != 0 )) && ((( !!_this->Appearance->TrackRightCornerRadiusDefault || !!_this->Appearance->TrackRightCornerRadiusDisabled ) 
  || !!_this->Appearance->TrackRightCornerRadiusFocused ) || !!_this->Appearance->TrackRightCornerRadiusActive ));
  area = EwGetRectORect( _this->Super2.Bounds );
  trackLeftThickness = 0;
  trackLeftCornerRadius = 0;
  trackRightThickness = 0;
  trackRightCornerRadius = 0;
  thumbSize = _Const000D;
  thumbCornerRadius = 0;
  accentSize = _Const000D;
  accentCornerRadius = 0;

  if ( needsRect1 && !( _this->rectView1 != 0 ))
  {
    _this->rectView1 = EwNewObject( ViewsRectangle, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->rectView1 ), 0 );
  }
  else
    if ( !needsRect1 && ( _this->rectView1 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->rectView1 ));
      _this->rectView1 = 0;
    }

  if ( needsRect2 && !( _this->rectView2 != 0 ))
  {
    _this->rectView2 = EwNewObject( ViewsRectangle, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->rectView2 ), 0 );
  }
  else
    if ( !needsRect2 && ( _this->rectView2 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->rectView2 ));
      _this->rectView2 = 0;
    }

  if ( needsBorder2 && !( _this->borderView2 != 0 ))
  {
    _this->borderView2 = EwNewObject( ViewsBorder, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->borderView2 ), 0 );
  }
  else
    if ( !needsBorder2 && ( _this->borderView2 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->borderView2 ));
      _this->borderView2 = 0;
    }

  if ( needsRect3 && !( _this->rectView3 != 0 ))
  {
    _this->rectView3 = EwNewObject( ViewsRectangle, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->rectView3 ), 0 );
  }
  else
    if ( !needsRect3 && ( _this->rectView3 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->rectView3 ));
      _this->rectView3 = 0;
    }

  if ( needsBorder3 && !( _this->borderView3 != 0 ))
  {
    _this->borderView3 = EwNewObject( ViewsBorder, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->borderView3 ), 0 );
  }
  else
    if ( !needsBorder3 && ( _this->borderView3 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->borderView3 ));
      _this->borderView3 = 0;
    }

  if ( needsRect4 && !( _this->rectView4 != 0 ))
  {
    _this->rectView4 = EwNewObject( ViewsRectangle, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->rectView4 ), 0 );
  }
  else
    if ( !needsRect4 && ( _this->rectView4 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->rectView4 ));
      _this->rectView4 = 0;
    }

  if ( needsOutline1 && !( _this->outline1 != 0 ))
  {
    _this->outline1 = EwNewObject( CoreOutline, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->outline1 ), 0 );
  }
  else
    if ( !needsOutline1 && ( _this->outline1 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->outline1 ));
      _this->outline1 = 0;
    }

  if ( needsOutline2 && !( _this->outline2 != 0 ))
  {
    _this->outline2 = EwNewObject( CoreOutline, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->outline2 ), 0 );
  }
  else
    if ( !needsOutline2 && ( _this->outline2 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->outline2 ));
      _this->outline2 = 0;
    }

  if ( !(( aState & CoreViewStateEnabled ) == CoreViewStateEnabled ))
    isState = 'D';
  else
    if (( _this->touchActive || _this->KeyHandlerRight.Down ) || _this->KeyHandlerLeft.Down )
      isState = 'A';
    else
      if ((( aState & CoreViewStateFocused ) == CoreViewStateFocused ))
        isState = 'F';
      else
        isState = 'E';

  needsAnimation = (XBool)(( _this->Appearance != 0 ) && !!_this->Appearance->StateTransitionDuration );
  startAnimation = (XBool)(( needsAnimation && ( _this->prevState != isState )) 
  && !!_this->prevState );

  if ((( startAnimation && ( _this->animation != 0 )) && !_this->animation->Super1.Reversed ) 
      && ( isState == _this->animStartState ))
  {
    EffectsEffect_OnSetReversed((EffectsEffect)_this->animation, 1 );
    startAnimation = 0;
  }

  if ((( startAnimation && ( _this->animation != 0 )) && _this->animation->Super1.Reversed ) 
      && ( isState == _this->animEndState ))
  {
    EffectsEffect_OnSetReversed((EffectsEffect)_this->animation, 0 );
    startAnimation = 0;
  }

  if (( _this->animation != 0 ) && (( !_this->animation->Super1.Enabled || startAnimation ) 
      || !needsAnimation ))
  {
    EffectsEffect_OnSetEnabled((EffectsEffect)_this->animation, 0 );
    _this->animation->Super1.OnAnimate = EwNullSlot;
    _this->animation->Super1.OnFinished = EwNullSlot;
    _this->animation = 0;
  }

  if ( startAnimation )
  {
    _this->animation = EwNewObject( EffectsFloatEffect, 0 );
    _this->animation->Super1.OnAnimate = EwNewSlot( _this, WidgetSetHorizontalSlider_onAnimate );
    _this->animation->Super1.OnFinished = EwNewSlot( _this, WidgetSetHorizontalSlider_onAnimate );
    EffectsEffect_OnSetCycleDuration((EffectsEffect)_this->animation, _this->Appearance->StateTransitionDuration );
    EffectsEffect_OnSetNoOfCycles((EffectsEffect)_this->animation, 1 );
    EffectsEffect_OnSetEnabled((EffectsEffect)_this->animation, 1 );
    _this->animStartState = _this->prevState;
    _this->animEndState = isState;
  }

  _this->prevState = isState;

  if ( _this->rectView1 != 0 )
  {
    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
      {
        trackLeftThickness = _this->Appearance->TrackLeftThicknessDisabled;
        trackLeftCornerRadius = _this->Appearance->TrackLeftCornerRadiusDisabled;
      }
      break;

      case 'A' :
      {
        trackLeftThickness = _this->Appearance->TrackLeftThicknessActive;
        trackLeftCornerRadius = _this->Appearance->TrackLeftCornerRadiusActive;
      }
      break;

      case 'F' :
      {
        trackLeftThickness = _this->Appearance->TrackLeftThicknessFocused;
        trackLeftCornerRadius = _this->Appearance->TrackLeftCornerRadiusFocused;
      }
      break;

      default : 
      {
        trackLeftThickness = _this->Appearance->TrackLeftThicknessDefault;
        trackLeftCornerRadius = _this->Appearance->TrackLeftCornerRadiusDefault;
      }
    }

    if ( _this->animation != 0 )
    {
      XInt32 trackLeftThicknessS;
      XInt32 trackLeftCornerRadiusS;

      switch ( _this->animStartState )
      {
        case 'D' :
        {
          trackLeftThicknessS = _this->Appearance->TrackLeftThicknessDisabled;
          trackLeftCornerRadiusS = _this->Appearance->TrackLeftCornerRadiusDisabled;
        }
        break;

        case 'A' :
        {
          trackLeftThicknessS = _this->Appearance->TrackLeftThicknessActive;
          trackLeftCornerRadiusS = _this->Appearance->TrackLeftCornerRadiusActive;
        }
        break;

        case 'F' :
        {
          trackLeftThicknessS = _this->Appearance->TrackLeftThicknessFocused;
          trackLeftCornerRadiusS = _this->Appearance->TrackLeftCornerRadiusFocused;
        }
        break;

        default : 
        {
          trackLeftThicknessS = _this->Appearance->TrackLeftThicknessDefault;
          trackLeftCornerRadiusS = _this->Appearance->TrackLeftCornerRadiusDefault;
        }
      }

      trackLeftCornerRadius = EwMathMixInt32( trackLeftCornerRadiusS, trackLeftCornerRadius, 
      _this->animation->Value );
      trackLeftThickness = EwMathMixInt32( trackLeftThicknessS, trackLeftThickness, 
      _this->animation->Value );
    }
  }

  if (( _this->rectView2 != 0 ) || ( _this->borderView2 != 0 ))
  {
    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
      {
        trackRightThickness = _this->Appearance->TrackRightThicknessDisabled;
        trackRightCornerRadius = _this->Appearance->TrackRightCornerRadiusDisabled;
      }
      break;

      case 'A' :
      {
        trackRightThickness = _this->Appearance->TrackRightThicknessActive;
        trackRightCornerRadius = _this->Appearance->TrackRightCornerRadiusActive;
      }
      break;

      case 'F' :
      {
        trackRightThickness = _this->Appearance->TrackRightThicknessFocused;
        trackRightCornerRadius = _this->Appearance->TrackRightCornerRadiusFocused;
      }
      break;

      default : 
      {
        trackRightThickness = _this->Appearance->TrackRightThicknessDefault;
        trackRightCornerRadius = _this->Appearance->TrackRightCornerRadiusDefault;
      }
    }

    if ( _this->animation != 0 )
    {
      XInt32 trackRightThicknessS;
      XInt32 trackRightCornerRadiusS;

      switch ( _this->animStartState )
      {
        case 'D' :
        {
          trackRightThicknessS = _this->Appearance->TrackRightThicknessDisabled;
          trackRightCornerRadiusS = _this->Appearance->TrackRightCornerRadiusDisabled;
        }
        break;

        case 'A' :
        {
          trackRightThicknessS = _this->Appearance->TrackRightThicknessActive;
          trackRightCornerRadiusS = _this->Appearance->TrackRightCornerRadiusActive;
        }
        break;

        case 'F' :
        {
          trackRightThicknessS = _this->Appearance->TrackRightThicknessFocused;
          trackRightCornerRadiusS = _this->Appearance->TrackRightCornerRadiusFocused;
        }
        break;

        default : 
        {
          trackRightThicknessS = _this->Appearance->TrackRightThicknessDefault;
          trackRightCornerRadiusS = _this->Appearance->TrackRightCornerRadiusDefault;
        }
      }

      trackRightCornerRadius = EwMathMixInt32( trackRightCornerRadiusS, trackRightCornerRadius, 
      _this->animation->Value );
      trackRightThickness = EwMathMixInt32( trackRightThicknessS, trackRightThickness, 
      _this->animation->Value );
    }
  }

  if (( _this->rectView3 != 0 ) || ( _this->borderView3 != 0 ))
  {
    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
      {
        thumbSize = _this->Appearance->ThumbSizeDisabled;
        thumbCornerRadius = _this->Appearance->ThumbCornerRadiusDisabled;
      }
      break;

      case 'A' :
      {
        thumbSize = _this->Appearance->ThumbSizeActive;
        thumbCornerRadius = _this->Appearance->ThumbCornerRadiusActive;
      }
      break;

      case 'F' :
      {
        thumbSize = _this->Appearance->ThumbSizeFocused;
        thumbCornerRadius = _this->Appearance->ThumbCornerRadiusFocused;
      }
      break;

      default : 
      {
        thumbSize = _this->Appearance->ThumbSizeDefault;
        thumbCornerRadius = _this->Appearance->ThumbCornerRadiusDefault;
      }
    }

    if ( _this->animation != 0 )
    {
      XPoint thumbSizeS;
      XInt32 thumbCornerRadiusS;

      switch ( _this->animStartState )
      {
        case 'D' :
        {
          thumbSizeS = _this->Appearance->ThumbSizeDisabled;
          thumbCornerRadiusS = _this->Appearance->ThumbCornerRadiusDisabled;
        }
        break;

        case 'A' :
        {
          thumbSizeS = _this->Appearance->ThumbSizeActive;
          thumbCornerRadiusS = _this->Appearance->ThumbCornerRadiusActive;
        }
        break;

        case 'F' :
        {
          thumbSizeS = _this->Appearance->ThumbSizeFocused;
          thumbCornerRadiusS = _this->Appearance->ThumbCornerRadiusFocused;
        }
        break;

        default : 
        {
          thumbSizeS = _this->Appearance->ThumbSizeDefault;
          thumbCornerRadiusS = _this->Appearance->ThumbCornerRadiusDefault;
        }
      }

      thumbCornerRadius = EwMathMixInt32( thumbCornerRadiusS, thumbCornerRadius, 
      _this->animation->Value );
      thumbSize = EwMathMixPoint( thumbSizeS, thumbSize, _this->animation->Value );
    }
  }

  if ( _this->rectView4 != 0 )
  {
    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
      {
        accentSize = _this->Appearance->AccentSizeDisabled;
        accentCornerRadius = _this->Appearance->AccentCornerRadiusDisabled;
      }
      break;

      case 'A' :
      {
        accentSize = _this->Appearance->AccentSizeActive;
        accentCornerRadius = _this->Appearance->AccentCornerRadiusActive;
      }
      break;

      case 'F' :
      {
        accentSize = _this->Appearance->AccentSizeFocused;
        accentCornerRadius = _this->Appearance->AccentCornerRadiusFocused;
      }
      break;

      default : 
      {
        accentSize = _this->Appearance->AccentSizeDefault;
        accentCornerRadius = _this->Appearance->AccentCornerRadiusDefault;
      }
    }

    if ( _this->animation != 0 )
    {
      XPoint accentSizeS;
      XInt32 accentCornerRadiusS;

      switch ( _this->animStartState )
      {
        case 'D' :
        {
          accentSizeS = _this->Appearance->AccentSizeDisabled;
          accentCornerRadiusS = _this->Appearance->AccentCornerRadiusDisabled;
        }
        break;

        case 'A' :
        {
          accentSizeS = _this->Appearance->AccentSizeActive;
          accentCornerRadiusS = _this->Appearance->AccentCornerRadiusActive;
        }
        break;

        case 'F' :
        {
          accentSizeS = _this->Appearance->AccentSizeFocused;
          accentCornerRadiusS = _this->Appearance->AccentCornerRadiusFocused;
        }
        break;

        default : 
        {
          accentSizeS = _this->Appearance->AccentSizeDefault;
          accentCornerRadiusS = _this->Appearance->AccentCornerRadiusDefault;
        }
      }

      accentCornerRadius = EwMathMixInt32( accentCornerRadiusS, accentCornerRadius, 
      _this->animation->Value );
      accentSize = EwMathMixPoint( accentSizeS, accentSize, _this->animation->Value );
    }
  }

  if ( _this->rectView1 != 0 )
  {
    XColor clr;

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
        clr = _this->Appearance->TrackLeftColorDisabled;
      break;

      case 'A' :
        clr = _this->Appearance->TrackLeftColorActive;
      break;

      case 'F' :
        clr = _this->Appearance->TrackLeftColorFocused;
      break;

      default : 
        clr = _this->Appearance->TrackLeftColorDefault;
    }

    if ( _this->animation != 0 )
    {
      XColor clrS;

      switch ( _this->animStartState )
      {
        case 'D' :
          clrS = _this->Appearance->TrackLeftColorDisabled;
        break;

        case 'A' :
          clrS = _this->Appearance->TrackLeftColorActive;
        break;

        case 'F' :
          clrS = _this->Appearance->TrackLeftColorFocused;
        break;

        default : 
          clrS = _this->Appearance->TrackLeftColorDefault;
      }

      clr = EwMathMixColor( clrS, clr, _this->animation->Value );
    }

    ViewsRectangle_OnSetRadius( _this->rectView1, trackLeftCornerRadius );
    ViewsRectangle_OnSetColor( _this->rectView1, clr );
    ViewsRectangle_OnSetEmbedded( _this->rectView1, _this->outline1 != 0 );
    CoreView_OnSetStackingPriority((CoreView)_this->rectView1, 52 );
  }

  if ( _this->rectView2 != 0 )
  {
    XColor clr;

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
        clr = _Const0017;
      break;

      case 'A' :
        clr = _this->Appearance->TrackRightColorActive;
      break;

      case 'F' :
        clr = _this->Appearance->TrackRightColorFocused;
      break;

      default : 
        clr = _this->Appearance->TrackRightColorDefault;
    }

    if ( _this->animation != 0 )
    {
      XColor clrS;

      switch ( _this->animStartState )
      {
        case 'D' :
          clrS = _Const0017;
        break;

        case 'A' :
          clrS = _this->Appearance->TrackRightColorActive;
        break;

        case 'F' :
          clrS = _this->Appearance->TrackRightColorFocused;
        break;

        default : 
          clrS = _this->Appearance->TrackRightColorDefault;
      }

      clr = EwMathMixColor( clrS, clr, _this->animation->Value );
    }

    ViewsRectangle_OnSetRadius( _this->rectView2, trackRightCornerRadius );
    ViewsRectangle_OnSetColor( _this->rectView2, clr );
    ViewsRectangle_OnSetEmbedded( _this->rectView2, _this->outline2 != 0 );
    CoreView_OnSetStackingPriority((CoreView)_this->rectView2, 33 );
  }

  if ( _this->borderView2 != 0 )
  {
    XColor clr;
    XInt32 width;

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
      {
        clr = _this->Appearance->TrackRightBorderColorDisabled;
        width = _this->Appearance->TrackRightBorderWidthDisabled;
      }
      break;

      case 'A' :
      {
        clr = _this->Appearance->TrackRightBorderColorActive;
        width = _this->Appearance->TrackRightBorderWidthActive;
      }
      break;

      case 'F' :
      {
        clr = _this->Appearance->TrackRightBorderColorFocused;
        width = _this->Appearance->TrackRightBorderWidthFocused;
      }
      break;

      default : 
      {
        clr = _this->Appearance->TrackRightBorderColorDefault;
        width = _this->Appearance->TrackRightBorderWidthDefault;
      }
    }

    if ( _this->animation != 0 )
    {
      XColor clrS;
      XInt32 widthS;

      switch ( _this->animStartState )
      {
        case 'D' :
        {
          clrS = _this->Appearance->TrackRightBorderColorDisabled;
          widthS = _this->Appearance->TrackRightBorderWidthDisabled;
        }
        break;

        case 'A' :
        {
          clrS = _this->Appearance->TrackRightBorderColorActive;
          widthS = _this->Appearance->TrackRightBorderWidthActive;
        }
        break;

        case 'F' :
        {
          clrS = _this->Appearance->TrackRightBorderColorFocused;
          widthS = _this->Appearance->TrackRightBorderWidthFocused;
        }
        break;

        default : 
        {
          clrS = _this->Appearance->TrackRightBorderColorDefault;
          widthS = _this->Appearance->TrackRightBorderWidthDefault;
        }
      }

      clr = EwMathMixColor( clrS, clr, _this->animation->Value );
      width = EwMathMixInt32( widthS, width, _this->animation->Value );
    }

    ViewsBorder_OnSetRadius( _this->borderView2, trackRightCornerRadius );
    ViewsBorder_OnSetColor( _this->borderView2, clr );
    ViewsBorder_OnSetWidth( _this->borderView2, width );
    ViewsBorder_OnSetEmbedded( _this->borderView2, _this->outline2 != 0 );
    CoreView_OnSetStackingPriority((CoreView)_this->borderView2, 34 );
  }

  if ( _this->rectView3 != 0 )
  {
    XColor clr;

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
        clr = _this->Appearance->ThumbColorDisabled;
      break;

      case 'A' :
        clr = _this->Appearance->ThumbColorActive;
      break;

      case 'F' :
        clr = _this->Appearance->ThumbColorFocused;
      break;

      default : 
        clr = _this->Appearance->ThumbColorDefault;
    }

    if ( _this->animation != 0 )
    {
      XColor clrS;

      switch ( _this->animStartState )
      {
        case 'D' :
          clrS = _this->Appearance->ThumbColorDisabled;
        break;

        case 'A' :
          clrS = _this->Appearance->ThumbColorActive;
        break;

        case 'F' :
          clrS = _this->Appearance->ThumbColorFocused;
        break;

        default : 
          clrS = _this->Appearance->ThumbColorDefault;
      }

      clr = EwMathMixColor( clrS, clr, _this->animation->Value );
    }

    ViewsRectangle_OnSetRadius( _this->rectView3, thumbCornerRadius );
    ViewsRectangle_OnSetColor( _this->rectView3, clr );
    CoreView_OnSetStackingPriority((CoreView)_this->rectView3, 72 );
  }

  if ( _this->borderView3 != 0 )
  {
    XColor clr;
    XInt32 width;

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
      {
        clr = _this->Appearance->ThumbBorderColorDisabled;
        width = _this->Appearance->ThumbBorderWidthDisabled;
      }
      break;

      case 'A' :
      {
        clr = _this->Appearance->ThumbBorderColorActive;
        width = _this->Appearance->ThumbBorderWidthActive;
      }
      break;

      case 'F' :
      {
        clr = _this->Appearance->ThumbBorderColorFocused;
        width = _this->Appearance->ThumbBorderWidthFocused;
      }
      break;

      default : 
      {
        clr = _this->Appearance->ThumbBorderColorDefault;
        width = _this->Appearance->ThumbBorderWidthDefault;
      }
    }

    if ( _this->animation != 0 )
    {
      XColor clrS;
      XInt32 widthS;

      switch ( _this->animStartState )
      {
        case 'D' :
        {
          clrS = _this->Appearance->ThumbBorderColorDisabled;
          widthS = _this->Appearance->ThumbBorderWidthDisabled;
        }
        break;

        case 'A' :
        {
          clrS = _this->Appearance->ThumbBorderColorActive;
          widthS = _this->Appearance->ThumbBorderWidthActive;
        }
        break;

        case 'F' :
        {
          clrS = _this->Appearance->ThumbBorderColorFocused;
          widthS = _this->Appearance->ThumbBorderWidthFocused;
        }
        break;

        default : 
        {
          clrS = _this->Appearance->ThumbBorderColorDefault;
          widthS = _this->Appearance->ThumbBorderWidthDefault;
        }
      }

      clr = EwMathMixColor( clrS, clr, _this->animation->Value );
      width = EwMathMixInt32( widthS, width, _this->animation->Value );
    }

    ViewsBorder_OnSetRadius( _this->borderView3, thumbCornerRadius );
    ViewsBorder_OnSetColor( _this->borderView3, clr );
    ViewsBorder_OnSetWidth( _this->borderView3, width );
    CoreView_OnSetStackingPriority((CoreView)_this->borderView3, 73 );
  }

  if ( _this->rectView4 != 0 )
  {
    XColor clr;

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'A' :
        clr = _this->Appearance->AccentColorActive;
      break;

      case 'F' :
        clr = _this->Appearance->AccentColorFocused;
      break;

      default : 
        clr = _Const0017;
    }

    if ( _this->animation != 0 )
    {
      XColor clrS;

      switch ( _this->animStartState )
      {
        case 'A' :
          clrS = _this->Appearance->AccentColorActive;
        break;

        case 'F' :
          clrS = _this->Appearance->AccentColorFocused;
        break;

        default : 
          clrS = _Const0017;
      }

      clr = EwMathMixColor( clrS, clr, _this->animation->Value );
    }

    ViewsRectangle_OnSetRadius( _this->rectView4, accentCornerRadius );
    ViewsRectangle_OnSetColor( _this->rectView4, clr );
    CoreView_OnSetStackingPriority((CoreView)_this->rectView4, 93 );
  }

  marginLeft = (( _this->Appearance != 0 )? _this->Appearance->ThumbMarginLeft : 
  0 );
  marginRight = (( _this->Appearance != 0 )? _this->Appearance->ThumbMarginRight 
  : 0 );
  minPos = marginLeft;
  maxPos = EwGetRectW( area ) - marginRight;
  newThumbPos = (XInt32)(((XFloat)WidgetSetHorizontalSlider_OnGetCurrentValue( _this ) 
  * (XFloat)( maxPos - minPos )) / 100.0f ) + minPos;

  if ( newThumbPos < marginLeft )
    newThumbPos = marginLeft;

  if ( newThumbPos > ( EwGetRectW( area ) - marginRight ))
    newThumbPos = EwGetRectW( area ) - marginRight;

  if ( _this->outline1 != 0 )
  {
    XInt32 x2 = EwGetRectW( area );
    XInt32 x = newThumbPos;

    if ( x > x2 )
      x = x2;

    CoreRectView__OnSetBounds( _this->outline1, EwNewRect( 0, 0, x, EwGetRectH( 
    area )));
    CoreView_OnSetStackingPriority((CoreView)_this->outline1, 51 );
  }

  if ( _this->outline2 != 0 )
  {
    XInt32 x2 = EwGetRectW( area );
    XInt32 x = newThumbPos;

    if ( x < 0 )
      x = 0;

    CoreRectView__OnSetBounds( _this->outline2, EwNewRect( x, 0, x2, EwGetRectH( 
    area )));
    CoreView_OnSetStackingPriority((CoreView)_this->outline2, 32 );
  }

  if ( _this->rectView1 != 0 )
  {
    XInt32 h = trackLeftThickness;
    XInt32 x2 = EwGetRectW( area );
    XInt32 x = newThumbPos + ( _this->Appearance->TrackLeftFlattened? trackLeftCornerRadius 
      : 0 );
    XRect r;

    if ( x < ( 2 * trackLeftCornerRadius ))
      x = 2 * trackLeftCornerRadius;

    if ( x > x2 )
      x = x2;

    r = EwNewRect( 0, ( EwGetRectH( area ) / 2 ) - ( h / 2 ), x, (( EwGetRectH( 
    area ) / 2 ) - ( h / 2 )) + h );

    if ( _this->rectView1 != 0 )
      CoreRectView__OnSetBounds( _this->rectView1, r );
  }

  if (( _this->rectView2 != 0 ) || ( _this->borderView2 != 0 ))
  {
    XInt32 h = trackRightThickness;
    XInt32 x2 = EwGetRectW( area );
    XInt32 x = newThumbPos - ( _this->Appearance->TrackRightFlattened? trackRightCornerRadius 
      : 0 );
    XRect r;

    if (( x2 - x ) < ( 2 * trackRightCornerRadius ))
      x = x2 - ( 2 * trackRightCornerRadius );

    if ( x < 0 )
      x = 0;

    r = EwNewRect( x, ( EwGetRectH( area ) / 2 ) - ( h / 2 ), x2, (( EwGetRectH( 
    area ) / 2 ) - ( h / 2 )) + h );

    if ( _this->borderView2 != 0 )
      CoreRectView__OnSetBounds( _this->borderView2, r );

    if (((( _this->rectView2 != 0 ) && ( _this->borderView2 != 0 )) && !!_this->borderView2->Width ) 
        && ( _this->borderView2->Color.Alpha == 255 ))
      r = EwInflateRect( r, _Const0008 );

    if ( _this->rectView2 != 0 )
      CoreRectView__OnSetBounds( _this->rectView2, r );
  }

  if (( _this->rectView3 != 0 ) || ( _this->borderView3 != 0 ))
  {
    XPoint o = EwNewPoint( newThumbPos - ( thumbSize.X / 2 ), ( EwGetRectH( area ) 
      / 2 ) - ( thumbSize.Y / 2 ));
    XRect r = EwMoveRectPos( EwNewRect2Point( _Const000D, thumbSize ), o );

    if ( _this->borderView3 != 0 )
      CoreRectView__OnSetBounds( _this->borderView3, r );

    if (((( _this->rectView3 != 0 ) && ( _this->borderView3 != 0 )) && !!_this->borderView3->Width ) 
        && ( _this->borderView3->Color.Alpha == 255 ))
      r = EwInflateRect( r, _Const0008 );

    if ( _this->rectView3 != 0 )
      CoreRectView__OnSetBounds( _this->rectView3, r );
  }

  if ( _this->rectView4 != 0 )
  {
    XPoint o = EwNewPoint( newThumbPos - ( accentSize.X / 2 ), ( EwGetRectH( area ) 
      / 2 ) - ( accentSize.Y / 2 ));
    XRect r = EwMoveRectPos( EwNewRect2Point( _Const000D, accentSize ), o );

    if ( _this->rectView4 != 0 )
      CoreRectView__OnSetBounds( _this->rectView4, r );
  }

  r = _Const0012;

  if ( _this->rectView3 != 0 )
    r = EwUnionRect( r, _this->rectView3->Super1.Bounds );

  if ( _this->borderView3 != 0 )
    r = EwUnionRect( r, _this->borderView3->Super1.Bounds );

  if ( _this->rectView4 != 0 )
    r = EwUnionRect( r, _this->rectView4->Super1.Bounds );

  CoreGroup_ExtendClipping((CoreGroup)_this, EwGetInt32Max( 2, -r.Point1.X, 0 ), 
  EwGetInt32Max( 2, r.Point2.X - area.Point2.X, 0 ), EwGetInt32Max( 2, -r.Point1.Y, 
  0 ), EwGetInt32Max( 2, r.Point2.Y - area.Point2.Y, 0 ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onAnimate()' */
void WidgetSetHorizontalSlider_onAnimate( WidgetSetHorizontalSlider _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onConfigChanged()' */
void WidgetSetHorizontalSlider_onConfigChanged( WidgetSetHorizontalSlider _this, 
  XObject sender )
{
  XEnum oldKeyCodeRight;
  XEnum oldKeyCodeLeft;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  oldKeyCodeRight = _this->KeyHandlerRight.Filter;
  oldKeyCodeLeft = _this->KeyHandlerLeft.Filter;
  _this->KeyHandlerRight.Filter = CoreKeyCodeRight;
  _this->KeyHandlerLeft.Filter = CoreKeyCodeLeft;

  if (((( oldKeyCodeRight == CoreKeyCodeNoKey ) || ( oldKeyCodeLeft == CoreKeyCodeNoKey )) 
      && ( _this->KeyHandlerRight.Filter != CoreKeyCodeNoKey )) && ( _this->KeyHandlerLeft.Filter 
      != CoreKeyCodeNoKey ))
    CoreView__ChangeViewState( _this, CoreViewStateFocusable, 0 );

  if ((( oldKeyCodeRight != CoreKeyCodeNoKey ) && ( oldKeyCodeLeft != CoreKeyCodeNoKey )) 
      && (( _this->KeyHandlerRight.Filter == CoreKeyCodeNoKey ) || ( _this->KeyHandlerLeft.Filter 
      == CoreKeyCodeNoKey )))
    CoreView__ChangeViewState( _this, 0, CoreViewStateFocusable );

  if ( _this->Appearance != 0 )
  {
    CoreTimer_OnSetBegin( &_this->RepetitionTimer, _this->Appearance->KeyRepeatDelay );
    CoreTimer_OnSetPeriod( &_this->RepetitionTimer, _this->Appearance->KeyRepeatPeriod );
  }
  else
  {
    CoreTimer_OnSetBegin( &_this->RepetitionTimer, 0 );
    CoreTimer_OnSetPeriod( &_this->RepetitionTimer, 0 );
  }

  if ( _this->Appearance != 0 )
    CoreRectView__OnSetBounds( _this, _this->Super2.Bounds );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onRepetitionTimer()' */
void WidgetSetHorizontalSlider_onRepetitionTimer( WidgetSetHorizontalSlider _this, 
  XObject sender )
{
  XInt32 oldValue;
  XInt32 newValue;
  XInt32 delta;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  oldValue = WidgetSetHorizontalSlider_OnGetCurrentValue( _this );
  newValue = oldValue;
  delta = 1;

  if ( _this->KeyHandlerLeft.Down )
    delta = -1;

  if ( oldValue < 0 )
  {
    newValue = -newValue;
    delta = -delta;
  }

  if ( delta > 0 )
    newValue = ( newValue + delta ) - (( newValue + delta ) % delta );

  if ( delta < 0 )
  {
    if (( newValue % -delta ) != 0 )
      newValue = ( newValue - delta ) - ( newValue % -delta );

    newValue = newValue + delta;
  }

  if ( oldValue < 0 )
    newValue = -newValue;

  WidgetSetHorizontalSlider_OnSetCurrentValue( _this, newValue );

  if ( oldValue == WidgetSetHorizontalSlider_OnGetCurrentValue( _this ))
    return;
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onReleaseKey()' */
void WidgetSetHorizontalSlider_onReleaseKey( WidgetSetHorizontalSlider _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 1 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
  CoreTimer_OnSetEnabled( &_this->RepetitionTimer, 0 );
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onPressKey()' */
void WidgetSetHorizontalSlider_onPressKey( WidgetSetHorizontalSlider _this, XObject 
  sender )
{
  XInt32 oldValue;
  XInt32 newValue;
  XInt32 delta;

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 0 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
  CoreTimer_OnSetEnabled( &_this->RepetitionTimer, 1 );
  oldValue = WidgetSetHorizontalSlider_OnGetCurrentValue( _this );
  newValue = oldValue;
  delta = 1;

  if ( sender == ((XObject)&_this->KeyHandlerLeft ))
    delta = -1;

  if ( oldValue < 0 )
  {
    newValue = -newValue;
    delta = -delta;
  }

  if ( delta > 0 )
    newValue = ( newValue + delta ) - (( newValue + delta ) % delta );

  if ( delta < 0 )
  {
    if (( newValue % -delta ) != 0 )
      newValue = ( newValue - delta ) - ( newValue % -delta );

    newValue = newValue + delta;
  }

  if ( oldValue < 0 )
    newValue = -newValue;

  WidgetSetHorizontalSlider_OnSetCurrentValue( _this, newValue );

  if ( oldValue == WidgetSetHorizontalSlider_OnGetCurrentValue( _this ))
    return;
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onDragTouch()' */
void WidgetSetHorizontalSlider_onDragTouch( WidgetSetHorizontalSlider _this, XObject 
  sender )
{
  XInt32 marginLeft;
  XInt32 marginRight;
  XPoint delta;
  XInt32 minPos;
  XInt32 maxPos;
  XInt32 oldValue;
  XInt32 newValue;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->touchActive )
    return;

  marginLeft = 0;
  marginRight = 0;

  if ( _this->Appearance != 0 )
  {
    marginLeft = _this->Appearance->ThumbMarginLeft;
    marginRight = _this->Appearance->ThumbMarginRight;
  }

  delta = EwMovePointNeg( _this->TouchHandler.CurrentPos, _this->TouchHandler.HittingPos );
  minPos = marginLeft;
  maxPos = EwGetRectW( _this->Super2.Bounds ) - marginRight;
  oldValue = WidgetSetHorizontalSlider_OnGetCurrentValue( _this );
  newValue = oldValue;

  if ( maxPos > minPos )
    newValue = (XInt32)(((XFloat)delta.X * 100.0f ) / (XFloat)( maxPos - minPos )) 
    + _this->touchStartValue;

  WidgetSetHorizontalSlider_OnSetCurrentValue( _this, newValue );

  if ( oldValue == WidgetSetHorizontalSlider_OnGetCurrentValue( _this ))
    return;
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onReleaseTouch()' */
void WidgetSetHorizontalSlider_onReleaseTouch( WidgetSetHorizontalSlider _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->touchActive )
    return;

  _this->touchActive = 0;
  _this->KeyHandlerRight.Enabled = 1;
  _this->KeyHandlerLeft.Enabled = 1;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onPressTouch()' */
void WidgetSetHorizontalSlider_onPressTouch( WidgetSetHorizontalSlider _this, XObject 
  sender )
{
  XRect touchArea;
  XBool hasThumb;
  XBool insideThumb;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  touchArea = EwMoveRectPos( _Const0018, _this->TouchHandler.CurrentPos );
  hasThumb = 0;
  insideThumb = 0;

  if ( _this->rectView3 != 0 )
  {
    hasThumb = 1;
    insideThumb |= !EwIsRectEmpty( EwIntersectRect( _this->rectView3->Super1.Bounds, 
    touchArea ));
  }

  if ( _this->borderView3 != 0 )
  {
    hasThumb = 1;
    insideThumb |= !EwIsRectEmpty( EwIntersectRect( _this->borderView3->Super1.Bounds, 
    touchArea ));
  }

  if ( hasThumb && !insideThumb )
  {
    CoreRoot root = CoreView__GetRoot( _this );
    CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 0 );
    CoreRoot_RetargetCursor( root, ((CoreView)root ), 0, ((CoreView)_this ));
    CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 1 );
    return;
  }

  _this->touchActive = 1;
  _this->KeyHandlerRight.Enabled = 0;
  _this->KeyHandlerLeft.Enabled = 0;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
  _this->touchStartValue = WidgetSetHorizontalSlider_OnGetCurrentValue( _this );
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.OnGetCurrentValue()' */
XInt32 WidgetSetHorizontalSlider_OnGetCurrentValue( WidgetSetHorizontalSlider _this )
{
  XInt32 value = _this->CurrentValue;

  if ( value < 0 )
    value = 0;

  if ( value > 100 )
    value = 100;

  return value;
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.OnSetCurrentValue()' */
void WidgetSetHorizontalSlider_OnSetCurrentValue( WidgetSetHorizontalSlider _this, 
  XInt32 value )
{
  if ( _this->CurrentValue == value )
    return;

  _this->CurrentValue = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.OnSetAppearance()' */
void WidgetSetHorizontalSlider_OnSetAppearance( WidgetSetHorizontalSlider _this, 
  WidgetSetHorizontalSliderConfig value )
{
  if ( _this->Appearance == value )
    return;

  if ( _this->Appearance != 0 )
    EwDetachObjObserver( EwNewSlot( _this, WidgetSetHorizontalSlider_onConfigChanged ), 
      (XObject)_this->Appearance, 0 );

  _this->Appearance = value;

  if ( value != 0 )
    EwAttachObjObserver( EwNewSlot( _this, WidgetSetHorizontalSlider_onConfigChanged ), 
      (XObject)value, 0 );

  EwPostSignal( EwNewSlot( _this, WidgetSetHorizontalSlider_onConfigChanged ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::HorizontalSlider' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetHorizontalSlider )
EW_END_OF_CLASS_VARIANTS( WidgetSetHorizontalSlider )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::HorizontalSlider' */
EW_DEFINE_CLASS( WidgetSetHorizontalSlider, CoreGroup, RepetitionTimer, animation, 
                 touchStartValue, touchStartValue, touchStartValue, touchStartValue, 
                 "WidgetSet::HorizontalSlider" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  WidgetSetHorizontalSlider_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  WidgetSetHorizontalSlider_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( WidgetSetHorizontalSlider )

/* Initializer for the class 'WidgetSet::ToggleButton' */
void WidgetSetToggleButton__Init( WidgetSetToggleButton _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetToggleButton );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetToggleButton );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0019 );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const0014 );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const001A );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const001B );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const000D );
  CoreSimpleTouchHandler_OnSetRetargetOffset( &_this->TouchHandler, 16 );
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->TouchHandler ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, WidgetSetToggleButton_onFlashTimer );
  _this->KeyHandler.OnRelease = EwNewSlot( _this, WidgetSetToggleButton_onReleaseKey );
  _this->KeyHandler.OnPress = EwNewSlot( _this, WidgetSetToggleButton_onPressKey );
  _this->TouchHandler.OnLeave = EwNewSlot( _this, WidgetSetToggleButton_onLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, WidgetSetToggleButton_onEnterTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, WidgetSetToggleButton_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, WidgetSetToggleButton_onPressTouch );
}

/* Re-Initializer for the class 'WidgetSet::ToggleButton' */
void WidgetSetToggleButton__ReInit( WidgetSetToggleButton _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
}

/* Finalizer method for the class 'WidgetSet::ToggleButton' */
void WidgetSetToggleButton__Done( WidgetSetToggleButton _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.OnSetBounds()' */
void WidgetSetToggleButton_OnSetBounds( WidgetSetToggleButton _this, XRect value )
{
  if ( _this->Appearance != 0 )
  {
    XPoint cs = EwGetRectSize( value );
    XPoint ns = cs;
    XPoint delta;

    if ( ns.X < _this->Appearance->WidgetMinSize.X )
      ns.X = _this->Appearance->WidgetMinSize.X;

    if ( ns.Y < _this->Appearance->WidgetMinSize.Y )
      ns.Y = _this->Appearance->WidgetMinSize.Y;

    delta = EwMovePointNeg( ns, cs );

    if ( delta.X != 0 )
    {
      XBool alignToLeft = (( _this->Super3.Layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( _this->Super3.Layout & CoreLayoutAlignToRight ) == 
        CoreLayoutAlignToRight );

      if ( alignToLeft && !alignToRight )
        value.Point2.X = ( value.Point2.X + delta.X );
      else
        if ( !alignToLeft && alignToRight )
          value.Point1.X = ( value.Point1.X - delta.X );
        else
        {
          value.Point1.X = ( value.Point1.X - ( delta.X / 2 ));
          value.Point2.X = ( value.Point1.X + ns.X );
        }
    }

    if ( delta.Y != 0 )
    {
      XBool alignToTop = (( _this->Super3.Layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( _this->Super3.Layout & CoreLayoutAlignToBottom ) 
        == CoreLayoutAlignToBottom );

      if ( alignToTop && !alignToBottom )
        value.Point2.Y = ( value.Point2.Y + delta.Y );
      else
        if ( !alignToTop && alignToBottom )
          value.Point1.Y = ( value.Point1.Y - delta.Y );
        else
        {
          value.Point1.Y = ( value.Point1.Y - ( delta.Y / 2 ));
          value.Point2.Y = ( value.Point1.Y + ns.Y );
        }
    }
  }

  CoreGroup_OnSetBounds((CoreGroup)_this, value );
}

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
void WidgetSetToggleButton_UpdateViewState( WidgetSetToggleButton _this, XSet aState )
{
  XBool needsText;
  XBool needsRect1;
  XBool needsBorder1;
  XBool needsRect2;
  XBool needsBorder2;
  XBool needsRect3;
  XRect area;
  XRect trackArea;
  XRect thumbArea;
  XInt32 thumbCornerRadius;
  XRect accentArea;
  XInt32 accentCornerRadius;
  XChar isState;
  XBool needsAnimation;
  XBool startAnimation;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  needsText = (XBool)(( _this->Appearance != 0 ) && (( !EwIsStringEmpty( _this->LabelOff ) 
  && ( _this->Appearance->LabelOffFont != 0 )) || ( !EwIsStringEmpty( _this->LabelOn ) 
  && ( _this->Appearance->LabelOnFont != 0 ))));
  needsRect1 = (XBool)(( _this->Appearance != 0 ) && ((((((( !EwIsColorNull( _this->Appearance->TrackOffColorDefault ) 
  || !EwIsColorNull( _this->Appearance->TrackOffColorDisabled )) || !EwIsColorNull( 
  _this->Appearance->TrackOffColorFocused )) || !EwIsColorNull( _this->Appearance->TrackOffColorActive )) 
  || !EwIsColorNull( _this->Appearance->TrackOnColorDefault )) || !EwIsColorNull( 
  _this->Appearance->TrackOnColorDisabled )) || !EwIsColorNull( _this->Appearance->TrackOnColorFocused )) 
  || !EwIsColorNull( _this->Appearance->TrackOnColorActive )));
  needsBorder1 = (XBool)((( _this->Appearance != 0 ) && ((((((( !EwIsColorNull( 
  _this->Appearance->TrackOffBorderColorDefault ) || !EwIsColorNull( _this->Appearance->TrackOffBorderColorDisabled )) 
  || !EwIsColorNull( _this->Appearance->TrackOffBorderColorFocused )) || !EwIsColorNull( 
  _this->Appearance->TrackOffBorderColorActive )) || !EwIsColorNull( _this->Appearance->TrackOnBorderColorDefault )) 
  || !EwIsColorNull( _this->Appearance->TrackOnBorderColorDisabled )) || !EwIsColorNull( 
  _this->Appearance->TrackOnBorderColorFocused )) || !EwIsColorNull( _this->Appearance->TrackOnBorderColorActive ))) 
  && ((((((( !!_this->Appearance->TrackOffBorderWidthDefault || !!_this->Appearance->TrackOffBorderWidthDisabled ) 
  || !!_this->Appearance->TrackOffBorderWidthFocused ) || !!_this->Appearance->TrackOffBorderWidthActive ) 
  || !!_this->Appearance->TrackOnBorderWidthDefault ) || !!_this->Appearance->TrackOnBorderWidthDisabled ) 
  || !!_this->Appearance->TrackOnBorderWidthFocused ) || !!_this->Appearance->TrackOnBorderWidthActive ));
  needsRect2 = (XBool)(( _this->Appearance != 0 ) && ((((((( !EwIsColorNull( _this->Appearance->ThumbOffColorDefault ) 
  || !EwIsColorNull( _this->Appearance->ThumbOffColorDisabled )) || !EwIsColorNull( 
  _this->Appearance->ThumbOffColorFocused )) || !EwIsColorNull( _this->Appearance->ThumbOffColorActive )) 
  || !EwIsColorNull( _this->Appearance->ThumbOnColorDefault )) || !EwIsColorNull( 
  _this->Appearance->ThumbOnColorDisabled )) || !EwIsColorNull( _this->Appearance->ThumbOnColorFocused )) 
  || !EwIsColorNull( _this->Appearance->ThumbOnColorActive )));
  needsBorder2 = (XBool)((( _this->Appearance != 0 ) && ((((((( !EwIsColorNull( 
  _this->Appearance->ThumbOffBorderColorDefault ) || !EwIsColorNull( _this->Appearance->ThumbOffBorderColorDisabled )) 
  || !EwIsColorNull( _this->Appearance->ThumbOffBorderColorFocused )) || !EwIsColorNull( 
  _this->Appearance->ThumbOffBorderColorActive )) || !EwIsColorNull( _this->Appearance->ThumbOnBorderColorDefault )) 
  || !EwIsColorNull( _this->Appearance->ThumbOnBorderColorDisabled )) || !EwIsColorNull( 
  _this->Appearance->ThumbOnBorderColorFocused )) || !EwIsColorNull( _this->Appearance->ThumbOnBorderColorActive ))) 
  && ((((((( !!_this->Appearance->ThumbOffBorderWidthDefault || !!_this->Appearance->ThumbOffBorderWidthDisabled ) 
  || !!_this->Appearance->ThumbOffBorderWidthFocused ) || !!_this->Appearance->ThumbOffBorderWidthActive ) 
  || !!_this->Appearance->ThumbOnBorderWidthDefault ) || !!_this->Appearance->ThumbOnBorderWidthDisabled ) 
  || !!_this->Appearance->ThumbOnBorderWidthFocused ) || !!_this->Appearance->ThumbOnBorderWidthActive ));
  needsRect3 = (XBool)(( _this->Appearance != 0 ) && ((( !EwIsColorNull( _this->Appearance->AccentOffColorFocused ) 
  || !EwIsColorNull( _this->Appearance->AccentOffColorActive )) || !EwIsColorNull( 
  _this->Appearance->AccentOnColorFocused )) || !EwIsColorNull( _this->Appearance->AccentOnColorActive )));
  area = EwGetRectORect( _this->Super2.Bounds );
  trackArea = _Const0012;
  thumbArea = _Const0012;
  thumbCornerRadius = 0;
  accentArea = _Const0012;
  accentCornerRadius = 0;

  if ( needsText && !( _this->textView != 0 ))
  {
    _this->textView = EwNewObject( ViewsText, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->textView ), 0 );
    ViewsText_OnSetEnableBidiText( _this->textView, 1 );
  }
  else
    if ( !needsText && ( _this->textView != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->textView ));
      _this->textView = 0;
    }

  if ( needsRect1 && !( _this->rectView1 != 0 ))
  {
    _this->rectView1 = EwNewObject( ViewsRectangle, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->rectView1 ), 0 );
  }
  else
    if ( !needsRect1 && ( _this->rectView1 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->rectView1 ));
      _this->rectView1 = 0;
    }

  if ( needsBorder1 && !( _this->borderView1 != 0 ))
  {
    _this->borderView1 = EwNewObject( ViewsBorder, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->borderView1 ), 0 );
  }
  else
    if ( !needsBorder1 && ( _this->borderView1 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->borderView1 ));
      _this->borderView1 = 0;
    }

  if ( needsRect2 && !( _this->rectView2 != 0 ))
  {
    _this->rectView2 = EwNewObject( ViewsRectangle, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->rectView2 ), 0 );
  }
  else
    if ( !needsRect2 && ( _this->rectView2 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->rectView2 ));
      _this->rectView2 = 0;
    }

  if ( needsBorder2 && !( _this->borderView2 != 0 ))
  {
    _this->borderView2 = EwNewObject( ViewsBorder, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->borderView2 ), 0 );
  }
  else
    if ( !needsBorder2 && ( _this->borderView2 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->borderView2 ));
      _this->borderView2 = 0;
    }

  if ( needsRect3 && !( _this->rectView3 != 0 ))
  {
    _this->rectView3 = EwNewObject( ViewsRectangle, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->rectView3 ), 0 );
  }
  else
    if ( !needsRect3 && ( _this->rectView3 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->rectView3 ));
      _this->rectView3 = 0;
    }

  if ( !(( aState & CoreViewStateEnabled ) == CoreViewStateEnabled ))
    isState = 'D';
  else
    if ((( _this->TouchHandler.Down && _this->TouchHandler.Inside ) || _this->KeyHandler.Down ) 
        || _this->FlashTimer.Enabled )
      isState = 'A';
    else
      if ((( aState & CoreViewStateFocused ) == CoreViewStateFocused ))
        isState = 'F';
      else
        isState = 'E';

  if ( !_this->Checked )
    isState = EwGetCharLower( isState );

  needsAnimation = (XBool)(( _this->Appearance != 0 ) && ( _this->Appearance->StateTransitionDuration 
  > 0 ));
  startAnimation = (XBool)(( needsAnimation && ( _this->prevState != isState )) 
  && !!_this->prevState );

  if ((( startAnimation && ( _this->animation != 0 )) && !_this->animation->Super1.Reversed ) 
      && ( isState == _this->animStartState ))
  {
    EffectsEffect_OnSetReversed((EffectsEffect)_this->animation, 1 );
    startAnimation = 0;
  }

  if ((( startAnimation && ( _this->animation != 0 )) && _this->animation->Super1.Reversed ) 
      && ( isState == _this->animEndState ))
  {
    EffectsEffect_OnSetReversed((EffectsEffect)_this->animation, 0 );
    startAnimation = 0;
  }

  if (( _this->animation != 0 ) && (( !_this->animation->Super1.Enabled || startAnimation ) 
      || !needsAnimation ))
  {
    EffectsEffect_OnSetEnabled((EffectsEffect)_this->animation, 0 );
    _this->animation->Super1.OnAnimate = EwNullSlot;
    _this->animation->Super1.OnFinished = EwNullSlot;
    _this->animation = 0;
  }

  if ( startAnimation )
  {
    _this->animation = EwNewObject( EffectsFloatEffect, 0 );
    _this->animation->Super1.OnAnimate = EwNewSlot( _this, WidgetSetToggleButton_onAnimate );
    _this->animation->Super1.OnFinished = EwNewSlot( _this, WidgetSetToggleButton_onAnimate );
    EffectsEffect_OnSetCycleDuration((EffectsEffect)_this->animation, _this->Appearance->StateTransitionDuration );
    EffectsEffect_OnSetNoOfCycles((EffectsEffect)_this->animation, 1 );
    EffectsEffect_OnSetEnabled((EffectsEffect)_this->animation, 1 );
    _this->animStartState = _this->prevState;
    _this->animEndState = isState;
  }

  _this->prevState = isState;

  if (( _this->rectView1 != 0 ) || ( _this->borderView1 != 0 ))
  {
    XSet layout = _this->Appearance->TrackLayout;
    XPoint s = _this->Appearance->TrackSize;
    XRect r = area;
    XBool alignToLeft;
    XBool alignToRight;
    XBool alignToTop;
    XBool alignToBottom;

    if ((( layout & CoreLayoutResizeHorz ) == CoreLayoutResizeHorz ))
      s.X = ( s.X + EwGetRectW( r ));

    if ((( layout & CoreLayoutResizeVert ) == CoreLayoutResizeVert ))
      s.Y = ( s.Y + EwGetRectH( r ));

    alignToLeft = (( layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
    alignToRight = (( layout & CoreLayoutAlignToRight ) == CoreLayoutAlignToRight );
    alignToTop = (( layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
    alignToBottom = (( layout & CoreLayoutAlignToBottom ) == CoreLayoutAlignToBottom );

    if ( alignToLeft && !alignToRight )
      r.Point2.X = ( r.Point1.X + s.X );
    else
      if ( !alignToLeft && alignToRight )
        r.Point1.X = ( r.Point2.X - s.X );
      else
      {
        r.Point1.X = (( EwGetRectW( r ) / 2 ) - ( s.X / 2 ));
        r.Point2.X = ( r.Point1.X + s.X );
      }

    if ( alignToTop && !alignToBottom )
      r.Point2.Y = ( r.Point1.Y + s.Y );
    else
      if ( !alignToTop && alignToBottom )
        r.Point1.Y = ( r.Point2.Y - s.Y );
      else
      {
        r.Point1.Y = (( EwGetRectH( r ) / 2 ) - ( s.Y / 2 ));
        r.Point2.Y = ( r.Point1.Y + s.Y );
      }

    trackArea = r;
  }

  if (( _this->borderView2 != 0 ) || ( _this->rectView2 != 0 ))
  {
    XSet layout = _this->Appearance->ThumbLayout;
    XRect r = area;
    XPoint thumbOffset;
    XPoint thumbSize;
    XBool alignToLeft;
    XBool alignToRight;
    XBool alignToTop;
    XBool alignToBottom;

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
      {
        thumbOffset = _this->Appearance->ThumbOnOffsetDisabled;
        thumbSize = _this->Appearance->ThumbOnSizeDisabled;
        thumbCornerRadius = _this->Appearance->ThumbOnCornerRadiusDisabled;
      }
      break;

      case 'A' :
      {
        thumbOffset = _this->Appearance->ThumbOnOffsetActive;
        thumbSize = _this->Appearance->ThumbOnSizeActive;
        thumbCornerRadius = _this->Appearance->ThumbOnCornerRadiusActive;
      }
      break;

      case 'F' :
      {
        thumbOffset = _this->Appearance->ThumbOnOffsetFocused;
        thumbSize = _this->Appearance->ThumbOnSizeFocused;
        thumbCornerRadius = _this->Appearance->ThumbOnCornerRadiusFocused;
      }
      break;

      case 'E' :
      {
        thumbOffset = _this->Appearance->ThumbOnOffsetDefault;
        thumbSize = _this->Appearance->ThumbOnSizeDefault;
        thumbCornerRadius = _this->Appearance->ThumbOnCornerRadiusDefault;
      }
      break;

      case 'd' :
      {
        thumbOffset = _this->Appearance->ThumbOffOffsetDisabled;
        thumbSize = _this->Appearance->ThumbOffSizeDisabled;
        thumbCornerRadius = _this->Appearance->ThumbOffCornerRadiusDisabled;
      }
      break;

      case 'a' :
      {
        thumbOffset = _this->Appearance->ThumbOffOffsetActive;
        thumbSize = _this->Appearance->ThumbOffSizeActive;
        thumbCornerRadius = _this->Appearance->ThumbOffCornerRadiusActive;
      }
      break;

      case 'f' :
      {
        thumbOffset = _this->Appearance->ThumbOffOffsetFocused;
        thumbSize = _this->Appearance->ThumbOffSizeFocused;
        thumbCornerRadius = _this->Appearance->ThumbOffCornerRadiusFocused;
      }
      break;

      default : 
      {
        thumbOffset = _this->Appearance->ThumbOffOffsetDefault;
        thumbSize = _this->Appearance->ThumbOffSizeDefault;
        thumbCornerRadius = _this->Appearance->ThumbOffCornerRadiusDefault;
      }
    }

    if ((( layout & CoreLayoutResizeHorz ) == CoreLayoutResizeHorz ))
      thumbSize.X = ( thumbSize.X + EwGetRectW( r ));

    if ((( layout & CoreLayoutResizeVert ) == CoreLayoutResizeVert ))
      thumbSize.Y = ( thumbSize.Y + EwGetRectH( r ));

    thumbSize = EwGetPointMax( 2, thumbSize, _Const000D );

    if ( _this->animation != 0 )
    {
      XPoint thumbOffsetS;
      XPoint thumbSizeS;
      XInt32 thumbCornerRadiusS;

      switch ( _this->animStartState )
      {
        case 'D' :
        {
          thumbOffsetS = _this->Appearance->ThumbOnOffsetDisabled;
          thumbSizeS = _this->Appearance->ThumbOnSizeDisabled;
          thumbCornerRadiusS = _this->Appearance->ThumbOnCornerRadiusDisabled;
        }
        break;

        case 'A' :
        {
          thumbOffsetS = _this->Appearance->ThumbOnOffsetActive;
          thumbSizeS = _this->Appearance->ThumbOnSizeActive;
          thumbCornerRadiusS = _this->Appearance->ThumbOnCornerRadiusActive;
        }
        break;

        case 'F' :
        {
          thumbOffsetS = _this->Appearance->ThumbOnOffsetFocused;
          thumbSizeS = _this->Appearance->ThumbOnSizeFocused;
          thumbCornerRadiusS = _this->Appearance->ThumbOnCornerRadiusFocused;
        }
        break;

        case 'E' :
        {
          thumbOffsetS = _this->Appearance->ThumbOnOffsetDefault;
          thumbSizeS = _this->Appearance->ThumbOnSizeDefault;
          thumbCornerRadiusS = _this->Appearance->ThumbOnCornerRadiusDefault;
        }
        break;

        case 'd' :
        {
          thumbOffsetS = _this->Appearance->ThumbOffOffsetDisabled;
          thumbSizeS = _this->Appearance->ThumbOffSizeDisabled;
          thumbCornerRadiusS = _this->Appearance->ThumbOffCornerRadiusDisabled;
        }
        break;

        case 'a' :
        {
          thumbOffsetS = _this->Appearance->ThumbOffOffsetActive;
          thumbSizeS = _this->Appearance->ThumbOffSizeActive;
          thumbCornerRadiusS = _this->Appearance->ThumbOffCornerRadiusActive;
        }
        break;

        case 'f' :
        {
          thumbOffsetS = _this->Appearance->ThumbOffOffsetFocused;
          thumbSizeS = _this->Appearance->ThumbOffSizeFocused;
          thumbCornerRadiusS = _this->Appearance->ThumbOffCornerRadiusFocused;
        }
        break;

        default : 
        {
          thumbOffsetS = _this->Appearance->ThumbOffOffsetDefault;
          thumbSizeS = _this->Appearance->ThumbOffSizeDefault;
          thumbCornerRadiusS = _this->Appearance->ThumbOffCornerRadiusDefault;
        }
      }

      if ((( layout & CoreLayoutResizeHorz ) == CoreLayoutResizeHorz ))
        thumbSizeS.X = ( thumbSizeS.X + EwGetRectW( r ));

      if ((( layout & CoreLayoutResizeVert ) == CoreLayoutResizeVert ))
        thumbSizeS.Y = ( thumbSizeS.Y + EwGetRectH( r ));

      thumbSizeS = EwGetPointMax( 2, thumbSizeS, _Const000D );
      thumbCornerRadius = EwMathMixInt32( thumbCornerRadiusS, thumbCornerRadius, 
      _this->animation->Value );
      thumbOffset = EwMathMixPoint( thumbOffsetS, thumbOffset, _this->animation->Value );
      thumbSize = EwMathMixPoint( thumbSizeS, thumbSize, _this->animation->Value );
    }

    alignToLeft = (( layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
    alignToRight = (( layout & CoreLayoutAlignToRight ) == CoreLayoutAlignToRight );
    alignToTop = (( layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
    alignToBottom = (( layout & CoreLayoutAlignToBottom ) == CoreLayoutAlignToBottom );

    if ( alignToLeft && !alignToRight )
      r.Point2.X = ( r.Point1.X + thumbSize.X );
    else
      if ( !alignToLeft && alignToRight )
        r.Point1.X = ( r.Point2.X - thumbSize.X );
      else
      {
        r.Point1.X = (( EwGetRectW( r ) / 2 ) - ( thumbSize.X / 2 ));
        r.Point2.X = ( r.Point1.X + thumbSize.X );
      }

    if ( alignToTop && !alignToBottom )
      r.Point2.Y = ( r.Point1.Y + thumbSize.Y );
    else
      if ( !alignToTop && alignToBottom )
        r.Point1.Y = ( r.Point2.Y - thumbSize.Y );
      else
      {
        r.Point1.Y = (( EwGetRectH( r ) / 2 ) - ( thumbSize.Y / 2 ));
        r.Point2.Y = ( r.Point1.Y + thumbSize.Y );
      }

    thumbArea = EwMoveRectPos( r, thumbOffset );
  }

  if ( _this->rectView3 != 0 )
  {
    XSet layout = _this->Appearance->AccentLayout;
    XRect r = area;
    XPoint accentOffset;
    XPoint accentSize;
    XBool alignToLeft;
    XBool alignToRight;
    XBool alignToTop;
    XBool alignToBottom;

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
      {
        accentOffset = _this->Appearance->AccentOnOffsetDisabled;
        accentSize = _this->Appearance->AccentOnSizeDisabled;
        accentCornerRadius = _this->Appearance->AccentOnCornerRadiusDisabled;
      }
      break;

      case 'A' :
      {
        accentOffset = _this->Appearance->AccentOnOffsetActive;
        accentSize = _this->Appearance->AccentOnSizeActive;
        accentCornerRadius = _this->Appearance->AccentOnCornerRadiusActive;
      }
      break;

      case 'F' :
      {
        accentOffset = _this->Appearance->AccentOnOffsetFocused;
        accentSize = _this->Appearance->AccentOnSizeFocused;
        accentCornerRadius = _this->Appearance->AccentOnCornerRadiusFocused;
      }
      break;

      case 'E' :
      {
        accentOffset = _this->Appearance->AccentOnOffsetDefault;
        accentSize = _this->Appearance->AccentOnSizeDefault;
        accentCornerRadius = _this->Appearance->AccentOnCornerRadiusDefault;
      }
      break;

      case 'd' :
      {
        accentOffset = _this->Appearance->AccentOffOffsetDisabled;
        accentSize = _this->Appearance->AccentOffSizeDisabled;
        accentCornerRadius = _this->Appearance->AccentOffCornerRadiusDisabled;
      }
      break;

      case 'a' :
      {
        accentOffset = _this->Appearance->AccentOffOffsetActive;
        accentSize = _this->Appearance->AccentOffSizeActive;
        accentCornerRadius = _this->Appearance->AccentOffCornerRadiusActive;
      }
      break;

      case 'f' :
      {
        accentOffset = _this->Appearance->AccentOffOffsetFocused;
        accentSize = _this->Appearance->AccentOffSizeFocused;
        accentCornerRadius = _this->Appearance->AccentOffCornerRadiusFocused;
      }
      break;

      default : 
      {
        accentOffset = _this->Appearance->AccentOffOffsetDefault;
        accentSize = _this->Appearance->AccentOffSizeDefault;
        accentCornerRadius = _this->Appearance->AccentOffCornerRadiusDefault;
      }
    }

    if ((( layout & CoreLayoutResizeHorz ) == CoreLayoutResizeHorz ))
      accentSize.X = ( accentSize.X + EwGetRectW( r ));

    if ((( layout & CoreLayoutResizeVert ) == CoreLayoutResizeVert ))
      accentSize.Y = ( accentSize.Y + EwGetRectH( r ));

    accentSize = EwGetPointMax( 2, accentSize, _Const000D );

    if ( _this->animation != 0 )
    {
      XPoint accentOffsetS;
      XPoint accentSizeS;
      XInt32 accentCornerRadiusS;

      switch ( _this->animStartState )
      {
        case 'D' :
        {
          accentOffsetS = _this->Appearance->AccentOnOffsetDisabled;
          accentSizeS = _this->Appearance->AccentOnSizeDisabled;
          accentCornerRadiusS = _this->Appearance->AccentOnCornerRadiusDisabled;
        }
        break;

        case 'A' :
        {
          accentOffsetS = _this->Appearance->AccentOnOffsetActive;
          accentSizeS = _this->Appearance->AccentOnSizeActive;
          accentCornerRadiusS = _this->Appearance->AccentOnCornerRadiusActive;
        }
        break;

        case 'F' :
        {
          accentOffsetS = _this->Appearance->AccentOnOffsetFocused;
          accentSizeS = _this->Appearance->AccentOnSizeFocused;
          accentCornerRadiusS = _this->Appearance->AccentOnCornerRadiusFocused;
        }
        break;

        case 'E' :
        {
          accentOffsetS = _this->Appearance->AccentOnOffsetDefault;
          accentSizeS = _this->Appearance->AccentOnSizeDefault;
          accentCornerRadiusS = _this->Appearance->AccentOnCornerRadiusDefault;
        }
        break;

        case 'd' :
        {
          accentOffsetS = _this->Appearance->AccentOffOffsetDisabled;
          accentSizeS = _this->Appearance->AccentOffSizeDisabled;
          accentCornerRadiusS = _this->Appearance->AccentOffCornerRadiusDisabled;
        }
        break;

        case 'a' :
        {
          accentOffsetS = _this->Appearance->AccentOffOffsetActive;
          accentSizeS = _this->Appearance->AccentOffSizeActive;
          accentCornerRadiusS = _this->Appearance->AccentOffCornerRadiusActive;
        }
        break;

        case 'f' :
        {
          accentOffsetS = _this->Appearance->AccentOffOffsetFocused;
          accentSizeS = _this->Appearance->AccentOffSizeFocused;
          accentCornerRadiusS = _this->Appearance->AccentOffCornerRadiusFocused;
        }
        break;

        default : 
        {
          accentOffsetS = _this->Appearance->AccentOffOffsetDefault;
          accentSizeS = _this->Appearance->AccentOffSizeDefault;
          accentCornerRadiusS = _this->Appearance->AccentOffCornerRadiusDefault;
        }
      }

      if ((( layout & CoreLayoutResizeHorz ) == CoreLayoutResizeHorz ))
        accentSizeS.X = ( accentSizeS.X + EwGetRectW( r ));

      if ((( layout & CoreLayoutResizeVert ) == CoreLayoutResizeVert ))
        accentSizeS.Y = ( accentSizeS.Y + EwGetRectH( r ));

      accentSizeS = EwGetPointMax( 2, accentSizeS, _Const000D );
      accentCornerRadius = EwMathMixInt32( accentCornerRadiusS, accentCornerRadius, 
      _this->animation->Value );
      accentOffset = EwMathMixPoint( accentOffsetS, accentOffset, _this->animation->Value );
      accentSize = EwMathMixPoint( accentSizeS, accentSize, _this->animation->Value );
    }

    alignToLeft = (( layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
    alignToRight = (( layout & CoreLayoutAlignToRight ) == CoreLayoutAlignToRight );
    alignToTop = (( layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
    alignToBottom = (( layout & CoreLayoutAlignToBottom ) == CoreLayoutAlignToBottom );

    if ( alignToLeft && !alignToRight )
      r.Point2.X = ( r.Point1.X + accentSize.X );
    else
      if ( !alignToLeft && alignToRight )
        r.Point1.X = ( r.Point2.X - accentSize.X );
      else
      {
        r.Point1.X = (( EwGetRectW( r ) / 2 ) - ( accentSize.X / 2 ));
        r.Point2.X = ( r.Point1.X + accentSize.X );
      }

    if ( alignToTop && !alignToBottom )
      r.Point2.Y = ( r.Point1.Y + accentSize.Y );
    else
      if ( !alignToTop && alignToBottom )
        r.Point1.Y = ( r.Point2.Y - accentSize.Y );
      else
      {
        r.Point1.Y = (( EwGetRectH( r ) / 2 ) - ( accentSize.Y / 2 ));
        r.Point2.Y = ( r.Point1.Y + accentSize.Y );
      }

    accentArea = EwMoveRectPos( r, accentOffset );
  }

  if ( _this->borderView1 != 0 )
  {
    XColor clr;
    XInt32 width;

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
      {
        clr = _this->Appearance->TrackOnBorderColorDisabled;
        width = _this->Appearance->TrackOnBorderWidthDisabled;
      }
      break;

      case 'A' :
      {
        clr = _this->Appearance->TrackOnBorderColorActive;
        width = _this->Appearance->TrackOnBorderWidthActive;
      }
      break;

      case 'F' :
      {
        clr = _this->Appearance->TrackOnBorderColorFocused;
        width = _this->Appearance->TrackOnBorderWidthFocused;
      }
      break;

      case 'E' :
      {
        clr = _this->Appearance->TrackOnBorderColorDefault;
        width = _this->Appearance->TrackOnBorderWidthDefault;
      }
      break;

      case 'd' :
      {
        clr = _this->Appearance->TrackOffBorderColorDisabled;
        width = _this->Appearance->TrackOffBorderWidthDisabled;
      }
      break;

      case 'a' :
      {
        clr = _this->Appearance->TrackOffBorderColorActive;
        width = _this->Appearance->TrackOffBorderWidthActive;
      }
      break;

      case 'f' :
      {
        clr = _this->Appearance->TrackOffBorderColorFocused;
        width = _this->Appearance->TrackOffBorderWidthFocused;
      }
      break;

      default : 
      {
        clr = _this->Appearance->TrackOffBorderColorDefault;
        width = _this->Appearance->TrackOffBorderWidthDefault;
      }
    }

    if ( _this->animation != 0 )
    {
      XColor clrS;
      XInt32 widthS;

      switch ( _this->animStartState )
      {
        case 'D' :
        {
          clrS = _this->Appearance->TrackOnBorderColorDisabled;
          widthS = _this->Appearance->TrackOnBorderWidthDisabled;
        }
        break;

        case 'A' :
        {
          clrS = _this->Appearance->TrackOnBorderColorActive;
          widthS = _this->Appearance->TrackOnBorderWidthActive;
        }
        break;

        case 'F' :
        {
          clrS = _this->Appearance->TrackOnBorderColorFocused;
          widthS = _this->Appearance->TrackOnBorderWidthFocused;
        }
        break;

        case 'E' :
        {
          clrS = _this->Appearance->TrackOnBorderColorDefault;
          widthS = _this->Appearance->TrackOnBorderWidthDefault;
        }
        break;

        case 'd' :
        {
          clrS = _this->Appearance->TrackOffBorderColorDisabled;
          widthS = _this->Appearance->TrackOffBorderWidthDisabled;
        }
        break;

        case 'a' :
        {
          clrS = _this->Appearance->TrackOffBorderColorActive;
          widthS = _this->Appearance->TrackOffBorderWidthActive;
        }
        break;

        case 'f' :
        {
          clrS = _this->Appearance->TrackOffBorderColorFocused;
          widthS = _this->Appearance->TrackOffBorderWidthFocused;
        }
        break;

        default : 
        {
          clrS = _this->Appearance->TrackOffBorderColorDefault;
          widthS = _this->Appearance->TrackOffBorderWidthDefault;
        }
      }

      clr = EwMathMixColor( clrS, clr, _this->animation->Value );
      width = EwMathMixInt32( widthS, width, _this->animation->Value );
    }

    CoreRectView__OnSetBounds( _this->borderView1, trackArea );
    ViewsBorder_OnSetRadius( _this->borderView1, _this->Appearance->TrackCornerRadius );
    ViewsBorder_OnSetColor( _this->borderView1, clr );
    ViewsBorder_OnSetWidth( _this->borderView1, width );
    CoreView_OnSetStackingPriority((CoreView)_this->borderView1, 34 );
  }

  if ( _this->rectView1 != 0 )
  {
    XRect r = trackArea;
    XColor clr;

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
        clr = _this->Appearance->TrackOnColorDisabled;
      break;

      case 'A' :
        clr = _this->Appearance->TrackOnColorActive;
      break;

      case 'F' :
        clr = _this->Appearance->TrackOnColorFocused;
      break;

      case 'E' :
        clr = _this->Appearance->TrackOnColorDefault;
      break;

      case 'd' :
        clr = _this->Appearance->TrackOffColorDisabled;
      break;

      case 'a' :
        clr = _this->Appearance->TrackOffColorActive;
      break;

      case 'f' :
        clr = _this->Appearance->TrackOffColorFocused;
      break;

      default : 
        clr = _this->Appearance->TrackOffColorDefault;
    }

    if ( _this->animation != 0 )
    {
      XColor clrS;

      switch ( _this->animStartState )
      {
        case 'D' :
          clrS = _this->Appearance->TrackOnColorDisabled;
        break;

        case 'A' :
          clrS = _this->Appearance->TrackOnColorActive;
        break;

        case 'F' :
          clrS = _this->Appearance->TrackOnColorFocused;
        break;

        case 'E' :
          clrS = _this->Appearance->TrackOnColorDefault;
        break;

        case 'd' :
          clrS = _this->Appearance->TrackOffColorDisabled;
        break;

        case 'a' :
          clrS = _this->Appearance->TrackOffColorActive;
        break;

        case 'f' :
          clrS = _this->Appearance->TrackOffColorFocused;
        break;

        default : 
          clrS = _this->Appearance->TrackOffColorDefault;
      }

      clr = EwMathMixColor( clrS, clr, _this->animation->Value );
    }

    if ((( _this->borderView1 != 0 ) && !!_this->borderView1->Width ) && ( _this->borderView1->Color.Alpha 
        == 255 ))
      r = EwInflateRect( r, _Const0008 );

    CoreRectView__OnSetBounds( _this->rectView1, r );
    ViewsRectangle_OnSetRadius( _this->rectView1, _this->Appearance->TrackCornerRadius );
    ViewsRectangle_OnSetColor( _this->rectView1, clr );
    CoreView_OnSetStackingPriority((CoreView)_this->rectView1, 33 );
  }

  if ( _this->borderView2 != 0 )
  {
    XColor clr;
    XInt32 width;

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
      {
        clr = _this->Appearance->ThumbOnBorderColorDisabled;
        width = _this->Appearance->ThumbOnBorderWidthDisabled;
      }
      break;

      case 'A' :
      {
        clr = _this->Appearance->ThumbOnBorderColorActive;
        width = _this->Appearance->ThumbOnBorderWidthActive;
      }
      break;

      case 'F' :
      {
        clr = _this->Appearance->ThumbOnBorderColorFocused;
        width = _this->Appearance->ThumbOnBorderWidthFocused;
      }
      break;

      case 'E' :
      {
        clr = _this->Appearance->ThumbOnBorderColorDefault;
        width = _this->Appearance->ThumbOnBorderWidthDefault;
      }
      break;

      case 'd' :
      {
        clr = _this->Appearance->ThumbOffBorderColorDisabled;
        width = _this->Appearance->ThumbOffBorderWidthDisabled;
      }
      break;

      case 'a' :
      {
        clr = _this->Appearance->ThumbOffBorderColorActive;
        width = _this->Appearance->ThumbOffBorderWidthActive;
      }
      break;

      case 'f' :
      {
        clr = _this->Appearance->ThumbOffBorderColorFocused;
        width = _this->Appearance->ThumbOffBorderWidthFocused;
      }
      break;

      default : 
      {
        clr = _this->Appearance->ThumbOffBorderColorDefault;
        width = _this->Appearance->ThumbOffBorderWidthDefault;
      }
    }

    if ( _this->animation != 0 )
    {
      XColor clrS;
      XInt32 widthS;

      switch ( _this->animStartState )
      {
        case 'D' :
        {
          clrS = _this->Appearance->ThumbOnBorderColorDisabled;
          widthS = _this->Appearance->ThumbOnBorderWidthDisabled;
        }
        break;

        case 'A' :
        {
          clrS = _this->Appearance->ThumbOnBorderColorActive;
          widthS = _this->Appearance->ThumbOnBorderWidthActive;
        }
        break;

        case 'F' :
        {
          clrS = _this->Appearance->ThumbOnBorderColorFocused;
          widthS = _this->Appearance->ThumbOnBorderWidthFocused;
        }
        break;

        case 'E' :
        {
          clrS = _this->Appearance->ThumbOnBorderColorDefault;
          widthS = _this->Appearance->ThumbOnBorderWidthDefault;
        }
        break;

        case 'd' :
        {
          clrS = _this->Appearance->ThumbOffBorderColorDisabled;
          widthS = _this->Appearance->ThumbOffBorderWidthDisabled;
        }
        break;

        case 'a' :
        {
          clrS = _this->Appearance->ThumbOffBorderColorActive;
          widthS = _this->Appearance->ThumbOffBorderWidthActive;
        }
        break;

        case 'f' :
        {
          clrS = _this->Appearance->ThumbOffBorderColorFocused;
          widthS = _this->Appearance->ThumbOffBorderWidthFocused;
        }
        break;

        default : 
        {
          clrS = _this->Appearance->ThumbOffBorderColorDefault;
          widthS = _this->Appearance->ThumbOffBorderWidthDefault;
        }
      }

      clr = EwMathMixColor( clrS, clr, _this->animation->Value );
      width = EwMathMixInt32( widthS, width, _this->animation->Value );
    }

    CoreRectView__OnSetBounds( _this->borderView2, thumbArea );
    ViewsBorder_OnSetRadius( _this->borderView2, thumbCornerRadius );
    ViewsBorder_OnSetColor( _this->borderView2, clr );
    ViewsBorder_OnSetWidth( _this->borderView2, width );
    CoreView_OnSetStackingPriority((CoreView)_this->borderView2, 57 );
  }

  if ( _this->rectView2 != 0 )
  {
    XRect r = thumbArea;
    XColor clr;

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
        clr = _this->Appearance->ThumbOnColorDisabled;
      break;

      case 'A' :
        clr = _this->Appearance->ThumbOnColorActive;
      break;

      case 'F' :
        clr = _this->Appearance->ThumbOnColorFocused;
      break;

      case 'E' :
        clr = _this->Appearance->ThumbOnColorDefault;
      break;

      case 'd' :
        clr = _this->Appearance->ThumbOffColorDisabled;
      break;

      case 'a' :
        clr = _this->Appearance->ThumbOffColorActive;
      break;

      case 'f' :
        clr = _this->Appearance->ThumbOffColorFocused;
      break;

      default : 
        clr = _this->Appearance->ThumbOffColorDefault;
    }

    if ( _this->animation != 0 )
    {
      XColor clrS;

      switch ( _this->animStartState )
      {
        case 'D' :
          clrS = _this->Appearance->ThumbOnColorDisabled;
        break;

        case 'A' :
          clrS = _this->Appearance->ThumbOnColorActive;
        break;

        case 'F' :
          clrS = _this->Appearance->ThumbOnColorFocused;
        break;

        case 'E' :
          clrS = _this->Appearance->ThumbOnColorDefault;
        break;

        case 'd' :
          clrS = _this->Appearance->ThumbOffColorDisabled;
        break;

        case 'a' :
          clrS = _this->Appearance->ThumbOffColorActive;
        break;

        case 'f' :
          clrS = _this->Appearance->ThumbOffColorFocused;
        break;

        default : 
          clrS = _this->Appearance->ThumbOffColorDefault;
      }

      clr = EwMathMixColor( clrS, clr, _this->animation->Value );
    }

    if ((( _this->borderView2 != 0 ) && !!_this->borderView2->Width ) && ( _this->borderView2->Color.Alpha 
        == 255 ))
      r = EwInflateRect( r, _Const0008 );

    CoreRectView__OnSetBounds( _this->rectView2, r );
    ViewsRectangle_OnSetRadius( _this->rectView2, thumbCornerRadius );
    ViewsRectangle_OnSetColor( _this->rectView2, clr );
    CoreView_OnSetStackingPriority((CoreView)_this->rectView2, 56 );
  }

  if ( _this->rectView3 != 0 )
  {
    XRect r = accentArea;
    XColor clr;

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'A' :
        clr = _this->Appearance->AccentOnColorActive;
      break;

      case 'F' :
        clr = _this->Appearance->AccentOnColorFocused;
      break;

      case 'a' :
        clr = _this->Appearance->AccentOffColorActive;
      break;

      case 'f' :
        clr = _this->Appearance->AccentOffColorFocused;
      break;

      default : 
        clr = _Const0017;
    }

    if ( _this->animation != 0 )
    {
      XColor clrS;

      switch ( _this->animStartState )
      {
        case 'A' :
          clrS = _this->Appearance->AccentOnColorActive;
        break;

        case 'F' :
          clrS = _this->Appearance->AccentOnColorFocused;
        break;

        case 'a' :
          clrS = _this->Appearance->AccentOffColorActive;
        break;

        case 'f' :
          clrS = _this->Appearance->AccentOffColorFocused;
        break;

        default : 
          clrS = _Const0017;
      }

      clr = EwMathMixColor( clrS, clr, _this->animation->Value );
    }

    CoreRectView__OnSetBounds( _this->rectView3, r );
    ViewsRectangle_OnSetRadius( _this->rectView3, accentCornerRadius );
    ViewsRectangle_OnSetColor( _this->rectView3, clr );
    CoreView_OnSetStackingPriority((CoreView)_this->rectView3, 109 );
  }

  if ( _this->textView != 0 )
  {
    XColor clr;
    ResourcesFont font;
    XString label;

    switch ( isState )
    {
      case 'D' :
      case 'A' :
      case 'F' :
      case 'E' :
      {
        font = _this->Appearance->LabelOnFont;
        label = _this->LabelOn;
      }
      break;

      default : 
      {
        font = _this->Appearance->LabelOffFont;
        label = _this->LabelOff;
      }
    }

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
        clr = _this->Appearance->LabelOnColorDisabled;
      break;

      case 'A' :
        clr = _this->Appearance->LabelOnColorActive;
      break;

      case 'F' :
        clr = _this->Appearance->LabelOnColorFocused;
      break;

      case 'E' :
        clr = _this->Appearance->LabelOnColorDefault;
      break;

      case 'd' :
        clr = _this->Appearance->LabelOffColorDisabled;
      break;

      case 'a' :
        clr = _this->Appearance->LabelOffColorActive;
      break;

      case 'f' :
        clr = _this->Appearance->LabelOffColorFocused;
      break;

      default : 
        clr = _this->Appearance->LabelOffColorDefault;
    }

    if ( _this->animation != 0 )
    {
      XColor clrS;

      switch ( _this->animStartState )
      {
        case 'D' :
          clrS = _this->Appearance->LabelOnColorDisabled;
        break;

        case 'A' :
          clrS = _this->Appearance->LabelOnColorActive;
        break;

        case 'F' :
          clrS = _this->Appearance->LabelOnColorFocused;
        break;

        case 'E' :
          clrS = _this->Appearance->LabelOnColorDefault;
        break;

        case 'd' :
          clrS = _this->Appearance->LabelOffColorDisabled;
        break;

        case 'a' :
          clrS = _this->Appearance->LabelOffColorActive;
        break;

        case 'f' :
          clrS = _this->Appearance->LabelOffColorFocused;
        break;

        default : 
          clrS = _this->Appearance->LabelOffColorDefault;
      }

      clr = EwMathMixColor( clrS, clr, _this->animation->Value );
    }

    CoreRectView__OnSetBounds( _this->textView, EwNewRect( area.Point1.X, area.Point1.Y, 
    area.Point2.X - _this->Appearance->LabelMarginRight, area.Point2.Y ));
    ViewsText_OnSetAlignment( _this->textView, _this->Appearance->LabelAlignment );
    ViewsText_OnSetFont( _this->textView, font );
    ViewsText_OnSetString( _this->textView, label );
    ViewsText_OnSetColor( _this->textView, clr );
    ViewsText_OnSetWrapText( _this->textView, 1 );
    ViewsText_OnSetEllipsis( _this->textView, 1 );
    CoreView_OnSetStackingPriority((CoreView)_this->textView, 92 );
  }

  if ( !EwIsRectNull( thumbArea ) || !EwIsRectNull( accentArea ))
  {
    XRect r = EwUnionRect( thumbArea, accentArea );
    CoreGroup_ExtendClipping((CoreGroup)_this, EwGetInt32Max( 2, -r.Point1.X, 0 ), 
    EwGetInt32Max( 2, r.Point2.X - area.Point2.X, 0 ), EwGetInt32Max( 2, -r.Point1.Y, 
    0 ), EwGetInt32Max( 2, r.Point2.Y - area.Point2.Y, 0 ));
  }
  else
    CoreGroup_ExtendClipping((CoreGroup)_this, 0, 0, 0, 0 );

  if ( !( _this->animation != 0 ))
  {
    XRect touchArea = area;

    if ((( _this->Appearance != 0 ) && _this->Appearance->LimitTouchArea ) && (((( 
        _this->rectView1 != 0 ) || ( _this->borderView1 != 0 )) || ( _this->rectView2 
        != 0 )) || ( _this->borderView2 != 0 )))
      touchArea = EwIntersectRect( EwUnionRect( trackArea, thumbArea ), area );

    CoreQuadView__OnSetPoint1( &_this->TouchHandler, touchArea.Point1 );
    CoreQuadView__OnSetPoint3( &_this->TouchHandler, touchArea.Point2 );
    CoreQuadView__OnSetPoint2( &_this->TouchHandler, EwNewPoint( touchArea.Point2.X, 
    touchArea.Point1.Y ));
    CoreQuadView__OnSetPoint4( &_this->TouchHandler, EwNewPoint( touchArea.Point1.X, 
    touchArea.Point2.Y ));
  }
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onAnimate()' */
void WidgetSetToggleButton_onAnimate( WidgetSetToggleButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onConfigChanged()' */
void WidgetSetToggleButton_onConfigChanged( WidgetSetToggleButton _this, XObject 
  sender )
{
  XEnum oldKeyCode;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  oldKeyCode = _this->KeyHandler.Filter;
  _this->KeyHandler.Filter = CoreKeyCodeEnter;

  if (( oldKeyCode == CoreKeyCodeNoKey ) && ( _this->KeyHandler.Filter != CoreKeyCodeNoKey ))
    CoreView__ChangeViewState( _this, CoreViewStateFocusable, 0 );

  if (( oldKeyCode != CoreKeyCodeNoKey ) && ( _this->KeyHandler.Filter == CoreKeyCodeNoKey ))
    CoreView__ChangeViewState( _this, 0, CoreViewStateFocusable );

  if ( _this->Appearance != 0 )
    CoreRectView__OnSetBounds( _this, _this->Super2.Bounds );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onFlashTimer()' */
void WidgetSetToggleButton_onFlashTimer( WidgetSetToggleButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  WidgetSetToggleButton_OnSetChecked( _this, (XBool)!_this->Checked );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onReleaseKey()' */
void WidgetSetToggleButton_onReleaseKey( WidgetSetToggleButton _this, XObject sender )
{
  XInt32 pressFeedbackDuration;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  pressFeedbackDuration = 0;

  if ( _this->Appearance != 0 )
    pressFeedbackDuration = _this->Appearance->PressedFeedbackDuration;

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 1 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ((XInt32)( _this->KeyHandler.Time - _this->onPressKeyTime ) >= pressFeedbackDuration )
    WidgetSetToggleButton_OnSetChecked( _this, (XBool)!_this->Checked );
  else
  {
    CoreTimer_OnSetBegin( &_this->FlashTimer, pressFeedbackDuration - (XInt32)( 
    _this->KeyHandler.Time - _this->onPressKeyTime ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
  }
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onPressKey()' */
void WidgetSetToggleButton_onPressKey( WidgetSetToggleButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 0 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ( _this->FlashTimer.Enabled )
  {
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
    WidgetSetToggleButton_OnSetChecked( _this, (XBool)!_this->Checked );
  }

  _this->onPressKeyTime = _this->KeyHandler.Time;
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onLeaveTouch()' */
void WidgetSetToggleButton_onLeaveTouch( WidgetSetToggleButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onEnterTouch()' */
void WidgetSetToggleButton_onEnterTouch( WidgetSetToggleButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onReleaseTouch()' */
void WidgetSetToggleButton_onReleaseTouch( WidgetSetToggleButton _this, XObject 
  sender )
{
  XInt32 pressFeedbackDuration;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  pressFeedbackDuration = 0;

  if ( _this->Appearance != 0 )
    pressFeedbackDuration = _this->Appearance->PressedFeedbackDuration;

  _this->KeyHandler.Enabled = 1;

  if ( !_this->TouchHandler.Inside )
    return;

  if ( _this->TouchHandler.AutoDeflected )
    return;

  if ( _this->TouchHandler.HoldPeriod >= pressFeedbackDuration )
    WidgetSetToggleButton_OnSetChecked( _this, (XBool)!_this->Checked );
  else
  {
    CoreTimer_OnSetBegin( &_this->FlashTimer, pressFeedbackDuration - _this->TouchHandler.HoldPeriod );
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
  }
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onPressTouch()' */
void WidgetSetToggleButton_onPressTouch( WidgetSetToggleButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->KeyHandler.Enabled = 0;

  if ( _this->FlashTimer.Enabled )
  {
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
    WidgetSetToggleButton_OnSetChecked( _this, (XBool)!_this->Checked );
  }
}

/* 'C' function for method : 'WidgetSet::ToggleButton.OnSetChecked()' */
void WidgetSetToggleButton_OnSetChecked( WidgetSetToggleButton _this, XBool value )
{
  if ( _this->Checked == value )
    return;

  _this->Checked = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.OnSetLabel()' */
void WidgetSetToggleButton_OnSetLabel( WidgetSetToggleButton _this, XString value )
{
  if ( !EwCompString( value, _this->LabelOff ) && !EwCompString( value, _this->LabelOn ))
    return;

  _this->LabelOff = EwShareString( value );
  _this->LabelOn = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.OnSetAppearance()' */
void WidgetSetToggleButton_OnSetAppearance( WidgetSetToggleButton _this, WidgetSetToggleButtonConfig 
  value )
{
  if ( _this->Appearance == value )
    return;

  if ( _this->Appearance != 0 )
    EwDetachObjObserver( EwNewSlot( _this, WidgetSetToggleButton_onConfigChanged ), 
      (XObject)_this->Appearance, 0 );

  _this->Appearance = value;

  if ( value != 0 )
    EwAttachObjObserver( EwNewSlot( _this, WidgetSetToggleButton_onConfigChanged ), 
      (XObject)value, 0 );

  EwPostSignal( EwNewSlot( _this, WidgetSetToggleButton_onConfigChanged ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::ToggleButton' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetToggleButton )
EW_END_OF_CLASS_VARIANTS( WidgetSetToggleButton )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::ToggleButton' */
EW_DEFINE_CLASS( WidgetSetToggleButton, CoreGroup, FlashTimer, animation, LabelOn, 
                 LabelOn, LabelOn, onPressKeyTime, "WidgetSet::ToggleButton" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  WidgetSetToggleButton_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  WidgetSetToggleButton_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( WidgetSetToggleButton )

/* Initializer for the class 'WidgetSet::PushButton' */
void WidgetSetPushButton__Init( WidgetSetPushButton _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetPushButton );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetPushButton );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0019 );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const0014 );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const001A );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const001B );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const000D );
  CoreSimpleTouchHandler_OnSetRetargetOffset( &_this->TouchHandler, 16 );
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->TouchHandler ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, WidgetSetPushButton_onFlashTimer );
  _this->KeyHandler.OnRelease = EwNewSlot( _this, WidgetSetPushButton_onReleaseKey );
  _this->KeyHandler.OnPress = EwNewSlot( _this, WidgetSetPushButton_onPressKey );
  _this->TouchHandler.OnLeave = EwNewSlot( _this, WidgetSetPushButton_onLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, WidgetSetPushButton_onEnterTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, WidgetSetPushButton_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, WidgetSetPushButton_onPressTouch );
}

/* Re-Initializer for the class 'WidgetSet::PushButton' */
void WidgetSetPushButton__ReInit( WidgetSetPushButton _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
}

/* Finalizer method for the class 'WidgetSet::PushButton' */
void WidgetSetPushButton__Done( WidgetSetPushButton _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::PushButton.OnSetBounds()' */
void WidgetSetPushButton_OnSetBounds( WidgetSetPushButton _this, XRect value )
{
  if ( _this->Appearance != 0 )
  {
    XPoint cs = EwGetRectSize( value );
    XPoint ns = cs;
    XPoint delta;

    if ( ns.X < _this->Appearance->WidgetMinSize.X )
      ns.X = _this->Appearance->WidgetMinSize.X;

    if ( ns.Y < _this->Appearance->WidgetMinSize.Y )
      ns.Y = _this->Appearance->WidgetMinSize.Y;

    delta = EwMovePointNeg( ns, cs );

    if ( delta.X != 0 )
    {
      XBool alignToLeft = (( _this->Super3.Layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( _this->Super3.Layout & CoreLayoutAlignToRight ) == 
        CoreLayoutAlignToRight );

      if ( alignToLeft && !alignToRight )
        value.Point2.X = ( value.Point2.X + delta.X );
      else
        if ( !alignToLeft && alignToRight )
          value.Point1.X = ( value.Point1.X - delta.X );
        else
        {
          value.Point1.X = ( value.Point1.X - ( delta.X / 2 ));
          value.Point2.X = ( value.Point1.X + ns.X );
        }
    }

    if ( delta.Y != 0 )
    {
      XBool alignToTop = (( _this->Super3.Layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( _this->Super3.Layout & CoreLayoutAlignToBottom ) 
        == CoreLayoutAlignToBottom );

      if ( alignToTop && !alignToBottom )
        value.Point2.Y = ( value.Point2.Y + delta.Y );
      else
        if ( !alignToTop && alignToBottom )
          value.Point1.Y = ( value.Point1.Y - delta.Y );
        else
        {
          value.Point1.Y = ( value.Point1.Y - ( delta.Y / 2 ));
          value.Point2.Y = ( value.Point1.Y + ns.Y );
        }
    }
  }

  CoreGroup_OnSetBounds((CoreGroup)_this, value );
}

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
void WidgetSetPushButton_UpdateViewState( WidgetSetPushButton _this, XSet aState )
{
  XBool needsFrame;
  XBool needsImage;
  XBool needsText;
  XBool needsRect1;
  XBool needsBorder1;
  XBool needsShadow;
  XRect area;
  XRect thumbArea;
  XInt32 thumbCornerRadius;
  XChar isState;
  XBool needsAnimation;
  XBool startAnimation;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  needsFrame = (XBool)(( _this->Appearance != 0 ) && ( _this->Appearance->FaceBitmapDefault 
  != 0 ));
  needsImage = _this->Icon != 0;
  needsText = (XBool)((( _this->Appearance != 0 ) && !EwIsStringEmpty( _this->Label )) 
  && ( _this->Appearance->LabelFont != 0 ));
  needsRect1 = (XBool)(( _this->Appearance != 0 ) && ((( !EwIsColorNull( _this->Appearance->ThumbColorDefault ) 
  || !EwIsColorNull( _this->Appearance->ThumbColorDisabled )) || !EwIsColorNull( 
  _this->Appearance->ThumbColorFocused )) || !EwIsColorNull( _this->Appearance->ThumbColorActive )));
  needsBorder1 = (XBool)((( _this->Appearance != 0 ) && ((( !EwIsColorNull( _this->Appearance->ThumbBorderColorDefault ) 
  || !EwIsColorNull( _this->Appearance->ThumbBorderColorDisabled )) || !EwIsColorNull( 
  _this->Appearance->ThumbBorderColorFocused )) || !EwIsColorNull( _this->Appearance->ThumbBorderColorActive ))) 
  && ((( !!_this->Appearance->ThumbBorderWidthDefault || !!_this->Appearance->ThumbBorderWidthDisabled ) 
  || !!_this->Appearance->ThumbBorderWidthFocused ) || !!_this->Appearance->ThumbBorderWidthActive ));
  needsShadow = (XBool)(( _this->Appearance != 0 ) && ( !EwIsColorNull( _this->Appearance->ThumbShadowColorDefault ) 
  || !EwIsColorNull( _this->Appearance->ThumbShadowColorFocused )));
  area = EwGetRectORect( _this->Super2.Bounds );
  thumbArea = _Const0012;
  thumbCornerRadius = 0;

  if ( needsFrame && !( _this->frameView != 0 ))
  {
    _this->frameView = EwNewObject( ViewsFrame, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->frameView ), 0 );
  }
  else
    if ( !needsFrame && ( _this->frameView != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->frameView ));
      _this->frameView = 0;
    }

  if ( needsImage && !( _this->imageView != 0 ))
  {
    _this->imageView = EwNewObject( ViewsImage, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->imageView ), 0 );
  }
  else
    if ( !needsImage && ( _this->imageView != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->imageView ));
      _this->imageView = 0;
    }

  if ( needsText && !( _this->textView != 0 ))
  {
    _this->textView = EwNewObject( ViewsText, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->textView ), 0 );
    ViewsText_OnSetEnableBidiText( _this->textView, 1 );
  }
  else
    if ( !needsText && ( _this->textView != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->textView ));
      _this->textView = 0;
    }

  if ( needsRect1 && !( _this->rectView1 != 0 ))
  {
    _this->rectView1 = EwNewObject( ViewsRectangle, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->rectView1 ), 0 );
  }
  else
    if ( !needsRect1 && ( _this->rectView1 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->rectView1 ));
      _this->rectView1 = 0;
    }

  if ( needsBorder1 && !( _this->borderView1 != 0 ))
  {
    _this->borderView1 = EwNewObject( ViewsBorder, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->borderView1 ), 0 );
  }
  else
    if ( !needsBorder1 && ( _this->borderView1 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->borderView1 ));
      _this->borderView1 = 0;
    }

  if ( needsShadow && !( _this->shadowView != 0 ))
  {
    _this->shadowView = EwNewObject( ViewsShadow, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->shadowView ), 0 );
  }
  else
    if ( !needsShadow && ( _this->shadowView != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->shadowView ));
      _this->shadowView = 0;
    }

  if ( !(( aState & CoreViewStateEnabled ) == CoreViewStateEnabled ))
    isState = 'D';
  else
    if ((( _this->TouchHandler.Down && _this->TouchHandler.Inside ) || _this->KeyHandler.Down ) 
        || _this->FlashTimer.Enabled )
      isState = 'A';
    else
      if ((( aState & CoreViewStateFocused ) == CoreViewStateFocused ))
        isState = 'F';
      else
        isState = 'E';

  needsAnimation = (XBool)(( _this->Appearance != 0 ) && !!_this->Appearance->StateTransitionDuration );
  startAnimation = (XBool)(( needsAnimation && ( _this->prevState != isState )) 
  && !!_this->prevState );

  if ((( startAnimation && ( _this->animation != 0 )) && !_this->animation->Super1.Reversed ) 
      && ( isState == _this->animStartState ))
  {
    EffectsEffect_OnSetReversed((EffectsEffect)_this->animation, 1 );
    startAnimation = 0;
  }

  if ((( startAnimation && ( _this->animation != 0 )) && _this->animation->Super1.Reversed ) 
      && ( isState == _this->animEndState ))
  {
    EffectsEffect_OnSetReversed((EffectsEffect)_this->animation, 0 );
    startAnimation = 0;
  }

  if (( _this->animation != 0 ) && (( !_this->animation->Super1.Enabled || startAnimation ) 
      || !needsAnimation ))
  {
    EffectsEffect_OnSetEnabled((EffectsEffect)_this->animation, 0 );
    _this->animation->Super1.OnAnimate = EwNullSlot;
    _this->animation->Super1.OnFinished = EwNullSlot;
    _this->animation = 0;
  }

  if ( startAnimation )
  {
    _this->animation = EwNewObject( EffectsFloatEffect, 0 );
    _this->animation->Super1.OnAnimate = EwNewSlot( _this, WidgetSetPushButton_onAnimate );
    _this->animation->Super1.OnFinished = EwNewSlot( _this, WidgetSetPushButton_onAnimate );
    EffectsEffect_OnSetCycleDuration((EffectsEffect)_this->animation, _this->Appearance->StateTransitionDuration );
    EffectsEffect_OnSetNoOfCycles((EffectsEffect)_this->animation, 1 );
    EffectsEffect_OnSetEnabled((EffectsEffect)_this->animation, 1 );
    _this->animStartState = _this->prevState;
    _this->animEndState = isState;
  }

  _this->prevState = isState;

  if ((( _this->shadowView != 0 ) || ( _this->borderView1 != 0 )) || ( _this->rectView1 
      != 0 ))
  {
    XRect r = area;
    XPoint thumbSize;

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
      {
        thumbSize = _Const000D;
        thumbCornerRadius = _this->Appearance->ThumbCornerRadiusDisabled;
      }
      break;

      case 'A' :
      {
        thumbSize = _Const000D;
        thumbCornerRadius = _this->Appearance->ThumbCornerRadiusActive;
      }
      break;

      case 'F' :
      {
        thumbSize = _Const000D;
        thumbCornerRadius = _this->Appearance->ThumbCornerRadiusFocused;
      }
      break;

      default : 
      {
        thumbSize = _Const000D;
        thumbCornerRadius = _this->Appearance->ThumbCornerRadiusDefault;
      }
    }

    thumbSize.X = ( thumbSize.X + EwGetRectW( r ));
    thumbSize.Y = ( thumbSize.Y + EwGetRectH( r ));
    thumbSize = EwGetPointMax( 2, thumbSize, _Const000D );

    if ( _this->animation != 0 )
    {
      XPoint thumbSizeS;
      XInt32 thumbCornerRadiusS;

      switch ( _this->animStartState )
      {
        case 'D' :
        {
          thumbSizeS = _Const000D;
          thumbCornerRadiusS = _this->Appearance->ThumbCornerRadiusDisabled;
        }
        break;

        case 'A' :
        {
          thumbSizeS = _Const000D;
          thumbCornerRadiusS = _this->Appearance->ThumbCornerRadiusActive;
        }
        break;

        case 'F' :
        {
          thumbSizeS = _Const000D;
          thumbCornerRadiusS = _this->Appearance->ThumbCornerRadiusFocused;
        }
        break;

        default : 
        {
          thumbSizeS = _Const000D;
          thumbCornerRadiusS = _this->Appearance->ThumbCornerRadiusDefault;
        }
      }

      thumbSizeS.X = ( thumbSizeS.X + EwGetRectW( r ));
      thumbSizeS.Y = ( thumbSizeS.Y + EwGetRectH( r ));
      thumbSizeS = EwGetPointMax( 2, thumbSizeS, _Const000D );
      thumbCornerRadius = EwMathMixInt32( thumbCornerRadiusS, thumbCornerRadius, 
      _this->animation->Value );
      thumbSize = EwMathMixPoint( thumbSizeS, thumbSize, _this->animation->Value );
    }

    r.Point1.X = (( EwGetRectW( r ) / 2 ) - ( thumbSize.X / 2 ));
    r.Point2.X = ( r.Point1.X + thumbSize.X );
    r.Point1.Y = (( EwGetRectH( r ) / 2 ) - ( thumbSize.Y / 2 ));
    r.Point2.Y = ( r.Point1.Y + thumbSize.Y );
    thumbArea = r;
  }

  if ( _this->shadowView != 0 )
  {
    XInt32 blur;
    XColor clr;

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
      case 'A' :
      {
        blur = 0;
        clr = _Const0017;
      }
      break;

      case 'F' :
      {
        blur = _this->Appearance->ThumbShadowBlurRadiusFocused;
        clr = _this->Appearance->ThumbShadowColorFocused;
      }
      break;

      default : 
      {
        blur = _this->Appearance->ThumbShadowBlurRadiusDefault;
        clr = _this->Appearance->ThumbShadowColorDefault;
      }
    }

    if ( _this->animation != 0 )
    {
      XInt32 blurS;
      XColor clrS;

      switch ( _this->animStartState )
      {
        case 'D' :
        case 'A' :
        {
          blurS = 0;
          clrS = _Const0017;
        }
        break;

        case 'F' :
        {
          blurS = _this->Appearance->ThumbShadowBlurRadiusFocused;
          clrS = _this->Appearance->ThumbShadowColorFocused;
        }
        break;

        default : 
        {
          blurS = _this->Appearance->ThumbShadowBlurRadiusDefault;
          clrS = _this->Appearance->ThumbShadowColorDefault;
        }
      }

      blur = EwMathMixInt32( blurS, blur, _this->animation->Value );
      clr = EwMathMixColor( clrS, clr, _this->animation->Value );
    }

    CoreRectView__OnSetBounds( _this->shadowView, thumbArea );
    ViewsShadow_OnSetBlurRadius( _this->shadowView, blur );
    ViewsShadow_OnSetRadius( _this->shadowView, thumbCornerRadius );
    ViewsShadow_OnSetColor( _this->shadowView, clr );
    ViewsShadow_OnSetOffset( _this->shadowView, _Const000D );
    CoreView_OnSetStackingPriority((CoreView)_this->shadowView, 39 );
  }

  if ( _this->borderView1 != 0 )
  {
    XColor clr;
    XInt32 width;

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
      {
        clr = _this->Appearance->ThumbBorderColorDisabled;
        width = _this->Appearance->ThumbBorderWidthDisabled;
      }
      break;

      case 'A' :
      {
        clr = _this->Appearance->ThumbBorderColorActive;
        width = _this->Appearance->ThumbBorderWidthActive;
      }
      break;

      case 'F' :
      {
        clr = _this->Appearance->ThumbBorderColorFocused;
        width = _this->Appearance->ThumbBorderWidthFocused;
      }
      break;

      default : 
      {
        clr = _this->Appearance->ThumbBorderColorDefault;
        width = _this->Appearance->ThumbBorderWidthDefault;
      }
    }

    if ( _this->animation != 0 )
    {
      XColor clrS;
      XInt32 widthS;

      switch ( _this->animStartState )
      {
        case 'D' :
        {
          clrS = _this->Appearance->ThumbBorderColorDisabled;
          widthS = _this->Appearance->ThumbBorderWidthDisabled;
        }
        break;

        case 'A' :
        {
          clrS = _this->Appearance->ThumbBorderColorActive;
          widthS = _this->Appearance->ThumbBorderWidthActive;
        }
        break;

        case 'F' :
        {
          clrS = _this->Appearance->ThumbBorderColorFocused;
          widthS = _this->Appearance->ThumbBorderWidthFocused;
        }
        break;

        default : 
        {
          clrS = _this->Appearance->ThumbBorderColorDefault;
          widthS = _this->Appearance->ThumbBorderWidthDefault;
        }
      }

      clr = EwMathMixColor( clrS, clr, _this->animation->Value );
      width = EwMathMixInt32( widthS, width, _this->animation->Value );
    }

    CoreRectView__OnSetBounds( _this->borderView1, thumbArea );
    ViewsBorder_OnSetRadius( _this->borderView1, thumbCornerRadius );
    ViewsBorder_OnSetColor( _this->borderView1, clr );
    ViewsBorder_OnSetWidth( _this->borderView1, width );
    CoreView_OnSetStackingPriority((CoreView)_this->borderView1, 41 );
  }

  if ( _this->rectView1 != 0 )
  {
    XRect r = thumbArea;
    XColor clr;

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
        clr = _this->Appearance->ThumbColorDisabled;
      break;

      case 'A' :
        clr = _this->Appearance->ThumbColorActive;
      break;

      case 'F' :
        clr = _this->Appearance->ThumbColorFocused;
      break;

      default : 
        clr = _this->Appearance->ThumbColorDefault;
    }

    if ( _this->animation != 0 )
    {
      XColor clrS;

      switch ( _this->animStartState )
      {
        case 'D' :
          clrS = _this->Appearance->ThumbColorDisabled;
        break;

        case 'A' :
          clrS = _this->Appearance->ThumbColorActive;
        break;

        case 'F' :
          clrS = _this->Appearance->ThumbColorFocused;
        break;

        default : 
          clrS = _this->Appearance->ThumbColorDefault;
      }

      clr = EwMathMixColor( clrS, clr, _this->animation->Value );
    }

    if ((( _this->borderView1 != 0 ) && !!_this->borderView1->Width ) && ( _this->borderView1->Color.Alpha 
        == 255 ))
      r = EwInflateRect( r, _Const0008 );

    CoreRectView__OnSetBounds( _this->rectView1, r );
    ViewsRectangle_OnSetRadius( _this->rectView1, thumbCornerRadius );
    ViewsRectangle_OnSetColor( _this->rectView1, clr );
    CoreView_OnSetStackingPriority((CoreView)_this->rectView1, 40 );
  }

  if ( _this->frameView != 0 )
  {
    ResourcesBitmap bitmap;
    XRect r = EwNewRect( area.Point1.X, area.Point1.Y, area.Point2.X, area.Point2.Y );

    switch ( isState )
    {
      case 'D' :
      case 'A' :
      case 'F' :
        bitmap = 0;
      break;

      default : 
        bitmap = _this->Appearance->FaceBitmapDefault;
    }

    ViewsFrame_OnSetAnimated( _this->frameView, 1 );
    ViewsFrame_OnSetColor( _this->frameView, _Const0004 );
    ViewsFrame_OnSetFrameNumber( _this->frameView, 0 );
    ViewsFrame_OnSetBitmap( _this->frameView, bitmap );
    CoreRectView__OnSetBounds( _this->frameView, r );
    CoreView_OnSetStackingPriority((CoreView)_this->frameView, 16 );
  }

  if (( _this->imageView != 0 ) && ( _this->Appearance != 0 ))
  {
    XColor clr;

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
        clr = _this->Appearance->IconTintDisabled;
      break;

      case 'A' :
        clr = _this->Appearance->IconTintActive;
      break;

      case 'F' :
        clr = _this->Appearance->IconTintFocused;
      break;

      default : 
        clr = _this->Appearance->IconTintDefault;
    }

    if ( _this->animation != 0 )
    {
      XColor clrS;

      switch ( _this->animStartState )
      {
        case 'D' :
          clrS = _this->Appearance->IconTintDisabled;
        break;

        case 'A' :
          clrS = _this->Appearance->IconTintActive;
        break;

        case 'F' :
          clrS = _this->Appearance->IconTintFocused;
        break;

        default : 
          clrS = _this->Appearance->IconTintDefault;
      }

      clr = EwMathMixColor( clrS, clr, _this->animation->Value );
    }

    ViewsImage_OnSetAnimated( _this->imageView, 1 );
    CoreRectView__OnSetBounds( _this->imageView, EwNewRect( area.Point1.X + _this->Appearance->IconMarginLeft, 
    area.Point1.Y + _this->Appearance->IconMarginTop, area.Point2.X - _this->Appearance->IconMarginRight, 
    area.Point2.Y - _this->Appearance->IconMarginBottom ));
    ViewsImage_OnSetAlignment( _this->imageView, ViewsImageAlignmentAlignHorzCenter 
    | ViewsImageAlignmentAlignVertCenter );
    ViewsImage_OnSetBitmap( _this->imageView, _this->Icon );
    ViewsImage_OnSetFrameNumber( _this->imageView, 0 );
    ViewsImage_OnSetColor( _this->imageView, clr );
    CoreView_OnSetStackingPriority((CoreView)_this->imageView, 59 );
  }
  else
    if ( _this->imageView != 0 )
    {
      CoreRectView__OnSetBounds( _this->imageView, area );
      ViewsImage_OnSetAlignment( _this->imageView, ViewsImageAlignmentAlignHorzCenter 
      | ViewsImageAlignmentAlignVertCenter );
      ViewsImage_OnSetBitmap( _this->imageView, _this->Icon );
      ViewsImage_OnSetFrameNumber( _this->imageView, -1 );
      ViewsImage_OnSetColor( _this->imageView, _Const0004 );
      CoreView_OnSetStackingPriority((CoreView)_this->imageView, 59 );
    }

  if ( _this->textView != 0 )
  {
    XColor clr;

    switch ((( _this->animation != 0 )? _this->animEndState : isState ))
    {
      case 'D' :
        clr = _this->Appearance->LabelColorDisabled;
      break;

      case 'A' :
        clr = _this->Appearance->LabelColorActive;
      break;

      case 'F' :
        clr = _this->Appearance->LabelColorFocused;
      break;

      default : 
        clr = _this->Appearance->LabelColorDefault;
    }

    if ( _this->animation != 0 )
    {
      XColor clrS;

      switch ( _this->animStartState )
      {
        case 'D' :
          clrS = _this->Appearance->LabelColorDisabled;
        break;

        case 'A' :
          clrS = _this->Appearance->LabelColorActive;
        break;

        case 'F' :
          clrS = _this->Appearance->LabelColorFocused;
        break;

        default : 
          clrS = _this->Appearance->LabelColorDefault;
      }

      clr = EwMathMixColor( clrS, clr, _this->animation->Value );
    }

    CoreRectView__OnSetBounds( _this->textView, EwNewRect( area.Point1.X + _this->Appearance->LabelMarginLeft, 
    area.Point1.Y + _this->Appearance->LabelMarginTop, area.Point2.X - _this->Appearance->LabelMarginRight, 
    area.Point2.Y - _this->Appearance->LabelMarginBottom ));
    ViewsText_OnSetAlignment( _this->textView, ViewsTextAlignmentAlignHorzCenter 
    | ViewsTextAlignmentAlignVertCenter );
    ViewsText_OnSetWrapText( _this->textView, 1 );
    ViewsText_OnSetEllipsis( _this->textView, 1 );
    ViewsText_OnSetFont( _this->textView, _this->Appearance->LabelFont );
    ViewsText_OnSetString( _this->textView, _this->Label );
    ViewsText_OnSetColor( _this->textView, clr );
    CoreView_OnSetStackingPriority((CoreView)_this->textView, 76 );
  }

  if ( !EwIsRectNull( thumbArea ))
  {
    XRect r = thumbArea;

    if ( _this->shadowView != 0 )
      r = EwUnionRect( r, CoreView__GetClipping( _this->shadowView ));

    if ( _this->frameView != 0 )
      r = EwUnionRect( r, CoreView__GetExtent( _this->frameView ));

    CoreGroup_ExtendClipping((CoreGroup)_this, EwGetInt32Max( 2, -r.Point1.X, 0 ), 
    EwGetInt32Max( 2, r.Point2.X - area.Point2.X, 0 ), EwGetInt32Max( 2, -r.Point1.Y, 
    0 ), EwGetInt32Max( 2, r.Point2.Y - area.Point2.Y, 0 ));
  }
  else
    CoreGroup_ExtendClipping((CoreGroup)_this, 0, 0, 0, 0 );
}

/* 'C' function for method : 'WidgetSet::PushButton.onAnimate()' */
void WidgetSetPushButton_onAnimate( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.onConfigChanged()' */
void WidgetSetPushButton_onConfigChanged( WidgetSetPushButton _this, XObject sender )
{
  XEnum oldKeyCode;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  oldKeyCode = _this->KeyHandler.Filter;
  _this->KeyHandler.Filter = CoreKeyCodeEnter;

  if (( oldKeyCode == CoreKeyCodeNoKey ) && ( _this->KeyHandler.Filter != CoreKeyCodeNoKey ))
    CoreView__ChangeViewState( _this, CoreViewStateFocusable, 0 );

  if (( oldKeyCode != CoreKeyCodeNoKey ) && ( _this->KeyHandler.Filter == CoreKeyCodeNoKey ))
    CoreView__ChangeViewState( _this, 0, CoreViewStateFocusable );

  if ( _this->Appearance != 0 )
    CoreRectView__OnSetBounds( _this, _this->Super2.Bounds );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.onFlashTimer()' */
void WidgetSetPushButton_onFlashTimer( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.onReleaseKey()' */
void WidgetSetPushButton_onReleaseKey( WidgetSetPushButton _this, XObject sender )
{
  XInt32 pressFeedbackDuration;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  pressFeedbackDuration = 0;

  if ( _this->Appearance != 0 )
    pressFeedbackDuration = _this->Appearance->PressedFeedbackDuration;

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 1 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ( !((XInt32)( _this->KeyHandler.Time - _this->onPressKeyTime ) >= pressFeedbackDuration ))
  {
    CoreTimer_OnSetBegin( &_this->FlashTimer, pressFeedbackDuration - (XInt32)( 
    _this->KeyHandler.Time - _this->onPressKeyTime ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
  }
}

/* 'C' function for method : 'WidgetSet::PushButton.onPressKey()' */
void WidgetSetPushButton_onPressKey( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 0 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ( _this->FlashTimer.Enabled )
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );

  _this->onPressKeyTime = _this->KeyHandler.Time;
  EwPostSignal( _this->OnPress, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButton.onLeaveTouch()' */
void WidgetSetPushButton_onLeaveTouch( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.onEnterTouch()' */
void WidgetSetPushButton_onEnterTouch( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.onReleaseTouch()' */
void WidgetSetPushButton_onReleaseTouch( WidgetSetPushButton _this, XObject sender )
{
  XInt32 pressFeedbackDuration;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  pressFeedbackDuration = 0;

  if ( _this->Appearance != 0 )
    pressFeedbackDuration = _this->Appearance->PressedFeedbackDuration;

  _this->KeyHandler.Enabled = 1;

  if ( !_this->TouchHandler.Inside )
    return;

  if ( _this->TouchHandler.AutoDeflected )
    return;

  if ( !( _this->TouchHandler.HoldPeriod >= pressFeedbackDuration ))
  {
    CoreTimer_OnSetBegin( &_this->FlashTimer, pressFeedbackDuration - _this->TouchHandler.HoldPeriod );
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
  }
}

/* 'C' function for method : 'WidgetSet::PushButton.onPressTouch()' */
void WidgetSetPushButton_onPressTouch( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->KeyHandler.Enabled = 0;

  if ( _this->FlashTimer.Enabled )
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );

  EwPostSignal( _this->OnPress, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButton.OnSetIcon()' */
void WidgetSetPushButton_OnSetIcon( WidgetSetPushButton _this, ResourcesBitmap value )
{
  if ( _this->Icon == value )
    return;

  _this->Icon = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.OnSetLabel()' */
void WidgetSetPushButton_OnSetLabel( WidgetSetPushButton _this, XString value )
{
  if ( !EwCompString( _this->Label, value ))
    return;

  _this->Label = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.OnSetAppearance()' */
void WidgetSetPushButton_OnSetAppearance( WidgetSetPushButton _this, WidgetSetPushButtonConfig 
  value )
{
  if ( _this->Appearance == value )
    return;

  if ( _this->Appearance != 0 )
    EwDetachObjObserver( EwNewSlot( _this, WidgetSetPushButton_onConfigChanged ), 
      (XObject)_this->Appearance, 0 );

  _this->Appearance = value;

  if ( value != 0 )
    EwAttachObjObserver( EwNewSlot( _this, WidgetSetPushButton_onConfigChanged ), 
      (XObject)value, 0 );

  EwPostSignal( EwNewSlot( _this, WidgetSetPushButton_onConfigChanged ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::PushButton' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetPushButton )
EW_END_OF_CLASS_VARIANTS( WidgetSetPushButton )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::PushButton' */
EW_DEFINE_CLASS( WidgetSetPushButton, CoreGroup, FlashTimer, animation, OnPress, 
                 Label, Label, onPressKeyTime, "WidgetSet::PushButton" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  WidgetSetPushButton_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  WidgetSetPushButton_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( WidgetSetPushButton )

/* This autoobject provides the default customization for the 'push button' widget 
   (WidgetSet::PushButton) in its medium size variant. */
EW_DEFINE_AUTOOBJECT( WidgetSetPushButton_Mono_Medium, WidgetSetPushButtonConfig )

/* Initializer for the auto object 'WidgetSet::PushButton_Mono_Medium' */
void WidgetSetPushButton_Mono_Medium__Init( WidgetSetPushButtonConfig _this )
{
  WidgetSetPushButtonConfig_OnSetStateTransitionDuration( _this, 50 );
  WidgetSetPushButtonConfig_OnSetPressedFeedbackDuration( _this, 100 );
  WidgetSetPushButtonConfig_OnSetThumbShadowColorFocused( _this, _Const001C );
  WidgetSetPushButtonConfig_OnSetThumbShadowColorDefault( _this, _Const001D );
  WidgetSetPushButtonConfig_OnSetThumbShadowBlurRadiusFocused( _this, 4 );
  WidgetSetPushButtonConfig_OnSetThumbShadowBlurRadiusDefault( _this, 3 );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorActive( _this, _Const001E );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorFocused( _this, _Const001F );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorDisabled( _this, _Const001E );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorDefault( _this, _Const001E );
  WidgetSetPushButtonConfig_OnSetThumbBorderWidthActive( _this, 1 );
  WidgetSetPushButtonConfig_OnSetThumbBorderWidthFocused( _this, 1 );
  WidgetSetPushButtonConfig_OnSetThumbBorderWidthDisabled( _this, 1 );
  WidgetSetPushButtonConfig_OnSetThumbBorderWidthDefault( _this, 1 );
  WidgetSetPushButtonConfig_OnSetThumbColorActive( _this, _Const0004 );
  WidgetSetPushButtonConfig_OnSetThumbColorFocused( _this, _Const0004 );
  WidgetSetPushButtonConfig_OnSetThumbColorDisabled( _this, _Const0004 );
  WidgetSetPushButtonConfig_OnSetThumbColorDefault( _this, _Const0004 );
  WidgetSetPushButtonConfig_OnSetThumbCornerRadiusActive( _this, 8 );
  WidgetSetPushButtonConfig_OnSetThumbCornerRadiusFocused( _this, 8 );
  WidgetSetPushButtonConfig_OnSetThumbCornerRadiusDisabled( _this, 8 );
  WidgetSetPushButtonConfig_OnSetThumbCornerRadiusDefault( _this, 8 );
  WidgetSetPushButtonConfig_OnSetLabelColorActive( _this, _Const0020 );
  WidgetSetPushButtonConfig_OnSetLabelColorFocused( _this, _Const0020 );
  WidgetSetPushButtonConfig_OnSetLabelColorDisabled( _this, _Const0021 );
  WidgetSetPushButtonConfig_OnSetLabelColorDefault( _this, _Const0020 );
  WidgetSetPushButtonConfig_OnSetLabelMarginBottom( _this, 6 );
  WidgetSetPushButtonConfig_OnSetLabelMarginTop( _this, 6 );
  WidgetSetPushButtonConfig_OnSetLabelMarginRight( _this, 6 );
  WidgetSetPushButtonConfig_OnSetLabelMarginLeft( _this, 6 );
  WidgetSetPushButtonConfig_OnSetIconTintActive( _this, _Const0020 );
  WidgetSetPushButtonConfig_OnSetIconTintFocused( _this, _Const0020 );
  WidgetSetPushButtonConfig_OnSetIconTintDisabled( _this, _Const0021 );
  WidgetSetPushButtonConfig_OnSetIconTintDefault( _this, _Const0020 );
  WidgetSetPushButtonConfig_OnSetIconMarginBottom( _this, 6 );
  WidgetSetPushButtonConfig_OnSetIconMarginTop( _this, 6 );
  WidgetSetPushButtonConfig_OnSetIconMarginRight( _this, 6 );
  WidgetSetPushButtonConfig_OnSetIconMarginLeft( _this, 6 );
  WidgetSetPushButtonConfig_OnSetLabelFont( _this, EwLoadResource( &ResourcesFontMedium, 
  ResourcesFont ));
  WidgetSetPushButtonConfig_OnSetWidgetMinSize( _this, _Const0022 );
}

/* Re-Initializer for the auto object 'WidgetSet::PushButton_Mono_Medium' */
void WidgetSetPushButton_Mono_Medium__ReInit( WidgetSetPushButtonConfig _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'WidgetSet::PushButton_Mono_Medium' */
EW_DEFINE_AUTOOBJECT_VARIANTS( WidgetSetPushButton_Mono_Medium )
EW_END_OF_AUTOOBJECT_VARIANTS( WidgetSetPushButton_Mono_Medium )

/* This autoobject provides one of the default customizations for the 'toggle' widget 
   (WidgetSet::ToggleButton) in its medium size variant. With this customization 
   the toggle button appears as a 'switch'. */
EW_DEFINE_AUTOOBJECT( WidgetSetSwitch_Mono_Medium, WidgetSetToggleButtonConfig )

/* Initializer for the auto object 'WidgetSet::Switch_Mono_Medium' */
void WidgetSetSwitch_Mono_Medium__Init( WidgetSetToggleButtonConfig _this )
{
  WidgetSetToggleButtonConfig_OnSetStateTransitionDuration( _this, 50 );
  WidgetSetToggleButtonConfig_OnSetPressedFeedbackDuration( _this, 100 );
  WidgetSetToggleButtonConfig_OnSetLimitTouchArea( _this, 1 );
  WidgetSetToggleButtonConfig_OnSetAccentOnColorActive( _this, _Const0023 );
  WidgetSetToggleButtonConfig_OnSetAccentOnColorFocused( _this, _Const0023 );
  WidgetSetToggleButtonConfig_OnSetAccentOnCornerRadiusActive( _this, 30 );
  WidgetSetToggleButtonConfig_OnSetAccentOnCornerRadiusFocused( _this, 30 );
  WidgetSetToggleButtonConfig_OnSetAccentOnCornerRadiusDisabled( _this, 30 );
  WidgetSetToggleButtonConfig_OnSetAccentOnCornerRadiusDefault( _this, 30 );
  WidgetSetToggleButtonConfig_OnSetAccentOnOffsetActive( _this, _Const0024 );
  WidgetSetToggleButtonConfig_OnSetAccentOnOffsetFocused( _this, _Const0024 );
  WidgetSetToggleButtonConfig_OnSetAccentOnOffsetDisabled( _this, _Const0024 );
  WidgetSetToggleButtonConfig_OnSetAccentOnOffsetDefault( _this, _Const0024 );
  WidgetSetToggleButtonConfig_OnSetAccentOnSizeActive( _this, _Const0025 );
  WidgetSetToggleButtonConfig_OnSetAccentOnSizeFocused( _this, _Const0026 );
  WidgetSetToggleButtonConfig_OnSetAccentOnSizeDisabled( _this, _Const0026 );
  WidgetSetToggleButtonConfig_OnSetAccentOnSizeDefault( _this, _Const0026 );
  WidgetSetToggleButtonConfig_OnSetAccentOffColorActive( _this, _Const0023 );
  WidgetSetToggleButtonConfig_OnSetAccentOffColorFocused( _this, _Const0023 );
  WidgetSetToggleButtonConfig_OnSetAccentOffCornerRadiusActive( _this, 30 );
  WidgetSetToggleButtonConfig_OnSetAccentOffCornerRadiusFocused( _this, 30 );
  WidgetSetToggleButtonConfig_OnSetAccentOffCornerRadiusDisabled( _this, 30 );
  WidgetSetToggleButtonConfig_OnSetAccentOffCornerRadiusDefault( _this, 30 );
  WidgetSetToggleButtonConfig_OnSetAccentOffOffsetActive( _this, _Const0027 );
  WidgetSetToggleButtonConfig_OnSetAccentOffOffsetFocused( _this, _Const0028 );
  WidgetSetToggleButtonConfig_OnSetAccentOffOffsetDisabled( _this, _Const0028 );
  WidgetSetToggleButtonConfig_OnSetAccentOffOffsetDefault( _this, _Const0028 );
  WidgetSetToggleButtonConfig_OnSetAccentOffSizeActive( _this, _Const0025 );
  WidgetSetToggleButtonConfig_OnSetAccentOffSizeFocused( _this, _Const0026 );
  WidgetSetToggleButtonConfig_OnSetAccentOffSizeDisabled( _this, _Const0026 );
  WidgetSetToggleButtonConfig_OnSetAccentOffSizeDefault( _this, _Const0026 );
  WidgetSetToggleButtonConfig_OnSetAccentLayout( _this, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop );
  WidgetSetToggleButtonConfig_OnSetThumbOnBorderColorActive( _this, _Const0023 );
  WidgetSetToggleButtonConfig_OnSetThumbOnBorderColorFocused( _this, _Const0023 );
  WidgetSetToggleButtonConfig_OnSetThumbOnBorderColorDisabled( _this, _Const0023 );
  WidgetSetToggleButtonConfig_OnSetThumbOnBorderColorDefault( _this, _Const0023 );
  WidgetSetToggleButtonConfig_OnSetThumbOnBorderWidthActive( _this, 1 );
  WidgetSetToggleButtonConfig_OnSetThumbOnBorderWidthFocused( _this, 1 );
  WidgetSetToggleButtonConfig_OnSetThumbOnBorderWidthDisabled( _this, 1 );
  WidgetSetToggleButtonConfig_OnSetThumbOnBorderWidthDefault( _this, 1 );
  WidgetSetToggleButtonConfig_OnSetThumbOnColorActive( _this, _Const0029 );
  WidgetSetToggleButtonConfig_OnSetThumbOnColorFocused( _this, _Const0029 );
  WidgetSetToggleButtonConfig_OnSetThumbOnColorDisabled( _this, _Const002A );
  WidgetSetToggleButtonConfig_OnSetThumbOnColorDefault( _this, _Const0029 );
  WidgetSetToggleButtonConfig_OnSetThumbOnCornerRadiusActive( _this, 15 );
  WidgetSetToggleButtonConfig_OnSetThumbOnCornerRadiusFocused( _this, 15 );
  WidgetSetToggleButtonConfig_OnSetThumbOnCornerRadiusDisabled( _this, 15 );
  WidgetSetToggleButtonConfig_OnSetThumbOnCornerRadiusDefault( _this, 15 );
  WidgetSetToggleButtonConfig_OnSetThumbOnOffsetActive( _this, _Const002B );
  WidgetSetToggleButtonConfig_OnSetThumbOnOffsetFocused( _this, _Const002B );
  WidgetSetToggleButtonConfig_OnSetThumbOnOffsetDisabled( _this, _Const002B );
  WidgetSetToggleButtonConfig_OnSetThumbOnOffsetDefault( _this, _Const002B );
  WidgetSetToggleButtonConfig_OnSetThumbOnSizeActive( _this, _Const002C );
  WidgetSetToggleButtonConfig_OnSetThumbOnSizeFocused( _this, _Const002D );
  WidgetSetToggleButtonConfig_OnSetThumbOnSizeDisabled( _this, _Const002D );
  WidgetSetToggleButtonConfig_OnSetThumbOnSizeDefault( _this, _Const002D );
  WidgetSetToggleButtonConfig_OnSetThumbOffBorderColorActive( _this, _Const0023 );
  WidgetSetToggleButtonConfig_OnSetThumbOffBorderColorFocused( _this, _Const0023 );
  WidgetSetToggleButtonConfig_OnSetThumbOffBorderColorDisabled( _this, _Const0023 );
  WidgetSetToggleButtonConfig_OnSetThumbOffBorderColorDefault( _this, _Const0023 );
  WidgetSetToggleButtonConfig_OnSetThumbOffBorderWidthActive( _this, 1 );
  WidgetSetToggleButtonConfig_OnSetThumbOffBorderWidthFocused( _this, 1 );
  WidgetSetToggleButtonConfig_OnSetThumbOffBorderWidthDisabled( _this, 1 );
  WidgetSetToggleButtonConfig_OnSetThumbOffBorderWidthDefault( _this, 1 );
  WidgetSetToggleButtonConfig_OnSetThumbOffColorActive( _this, _Const0029 );
  WidgetSetToggleButtonConfig_OnSetThumbOffColorFocused( _this, _Const0029 );
  WidgetSetToggleButtonConfig_OnSetThumbOffColorDisabled( _this, _Const002A );
  WidgetSetToggleButtonConfig_OnSetThumbOffColorDefault( _this, _Const0029 );
  WidgetSetToggleButtonConfig_OnSetThumbOffCornerRadiusActive( _this, 15 );
  WidgetSetToggleButtonConfig_OnSetThumbOffCornerRadiusFocused( _this, 15 );
  WidgetSetToggleButtonConfig_OnSetThumbOffCornerRadiusDisabled( _this, 15 );
  WidgetSetToggleButtonConfig_OnSetThumbOffCornerRadiusDefault( _this, 15 );
  WidgetSetToggleButtonConfig_OnSetThumbOffOffsetActive( _this, _Const002E );
  WidgetSetToggleButtonConfig_OnSetThumbOffOffsetFocused( _this, _Const002F );
  WidgetSetToggleButtonConfig_OnSetThumbOffOffsetDisabled( _this, _Const002F );
  WidgetSetToggleButtonConfig_OnSetThumbOffOffsetDefault( _this, _Const002F );
  WidgetSetToggleButtonConfig_OnSetThumbOffSizeActive( _this, _Const002C );
  WidgetSetToggleButtonConfig_OnSetThumbOffSizeFocused( _this, _Const002D );
  WidgetSetToggleButtonConfig_OnSetThumbOffSizeDisabled( _this, _Const002D );
  WidgetSetToggleButtonConfig_OnSetThumbOffSizeDefault( _this, _Const002D );
  WidgetSetToggleButtonConfig_OnSetThumbLayout( _this, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToRight | CoreLayoutAlignToTop );
  WidgetSetToggleButtonConfig_OnSetTrackOnBorderColorActive( _this, _Const001F );
  WidgetSetToggleButtonConfig_OnSetTrackOnBorderColorFocused( _this, _Const001F );
  WidgetSetToggleButtonConfig_OnSetTrackOnBorderColorDisabled( _this, _Const001E );
  WidgetSetToggleButtonConfig_OnSetTrackOnBorderColorDefault( _this, _Const001F );
  WidgetSetToggleButtonConfig_OnSetTrackOnBorderWidthActive( _this, 2 );
  WidgetSetToggleButtonConfig_OnSetTrackOnBorderWidthFocused( _this, 2 );
  WidgetSetToggleButtonConfig_OnSetTrackOnBorderWidthDisabled( _this, 2 );
  WidgetSetToggleButtonConfig_OnSetTrackOnBorderWidthDefault( _this, 2 );
  WidgetSetToggleButtonConfig_OnSetTrackOnColorActive( _this, _Const0004 );
  WidgetSetToggleButtonConfig_OnSetTrackOnColorFocused( _this, _Const0004 );
  WidgetSetToggleButtonConfig_OnSetTrackOnColorDisabled( _this, _Const0004 );
  WidgetSetToggleButtonConfig_OnSetTrackOnColorDefault( _this, _Const0004 );
  WidgetSetToggleButtonConfig_OnSetTrackOffBorderColorActive( _this, _Const001F );
  WidgetSetToggleButtonConfig_OnSetTrackOffBorderColorFocused( _this, _Const001F );
  WidgetSetToggleButtonConfig_OnSetTrackOffBorderColorDisabled( _this, _Const001E );
  WidgetSetToggleButtonConfig_OnSetTrackOffBorderColorDefault( _this, _Const001F );
  WidgetSetToggleButtonConfig_OnSetTrackOffBorderWidthActive( _this, 2 );
  WidgetSetToggleButtonConfig_OnSetTrackOffBorderWidthFocused( _this, 2 );
  WidgetSetToggleButtonConfig_OnSetTrackOffBorderWidthDisabled( _this, 2 );
  WidgetSetToggleButtonConfig_OnSetTrackOffBorderWidthDefault( _this, 2 );
  WidgetSetToggleButtonConfig_OnSetTrackOffColorActive( _this, _Const0004 );
  WidgetSetToggleButtonConfig_OnSetTrackOffColorFocused( _this, _Const0004 );
  WidgetSetToggleButtonConfig_OnSetTrackOffColorDisabled( _this, _Const0004 );
  WidgetSetToggleButtonConfig_OnSetTrackOffColorDefault( _this, _Const0004 );
  WidgetSetToggleButtonConfig_OnSetTrackCornerRadius( _this, 18 );
  WidgetSetToggleButtonConfig_OnSetTrackSize( _this, _Const0030 );
  WidgetSetToggleButtonConfig_OnSetTrackLayout( _this, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToRight | CoreLayoutAlignToTop );
  WidgetSetToggleButtonConfig_OnSetLabelOnColorActive( _this, _Const0020 );
  WidgetSetToggleButtonConfig_OnSetLabelOnColorFocused( _this, _Const0020 );
  WidgetSetToggleButtonConfig_OnSetLabelOnColorDisabled( _this, _Const0021 );
  WidgetSetToggleButtonConfig_OnSetLabelOnColorDefault( _this, _Const0020 );
  WidgetSetToggleButtonConfig_OnSetLabelOffColorActive( _this, _Const0020 );
  WidgetSetToggleButtonConfig_OnSetLabelOffColorFocused( _this, _Const0020 );
  WidgetSetToggleButtonConfig_OnSetLabelOffColorDisabled( _this, _Const0021 );
  WidgetSetToggleButtonConfig_OnSetLabelOffColorDefault( _this, _Const0020 );
  WidgetSetToggleButtonConfig_OnSetLabelMarginRight( _this, 75 );
  WidgetSetToggleButtonConfig_OnSetIconOnTintActive( _this, _Const0020 );
  WidgetSetToggleButtonConfig_OnSetIconOnTintFocused( _this, _Const0020 );
  WidgetSetToggleButtonConfig_OnSetIconOnTintDisabled( _this, _Const0021 );
  WidgetSetToggleButtonConfig_OnSetIconOnTintDefault( _this, _Const0020 );
  WidgetSetToggleButtonConfig_OnSetIconOffTintActive( _this, _Const0020 );
  WidgetSetToggleButtonConfig_OnSetIconOffTintFocused( _this, _Const0020 );
  WidgetSetToggleButtonConfig_OnSetIconOffTintDisabled( _this, _Const0021 );
  WidgetSetToggleButtonConfig_OnSetIconOffTintDefault( _this, _Const0020 );
  WidgetSetToggleButtonConfig_OnSetIconMarginRight( _this, 75 );
  WidgetSetToggleButtonConfig_OnSetLabelAlignment( _this, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  WidgetSetToggleButtonConfig_OnSetLabelOnFont( _this, EwLoadResource( &ResourcesFontMedium, 
  ResourcesFont ));
  WidgetSetToggleButtonConfig_OnSetLabelOffFont( _this, EwLoadResource( &ResourcesFontMedium, 
  ResourcesFont ));
  WidgetSetToggleButtonConfig_OnSetIconAlignment( _this, ViewsImageAlignmentAlignHorzLeft 
  | ViewsImageAlignmentAlignVertCenter );
  WidgetSetToggleButtonConfig_OnSetWidgetMinSize( _this, _Const0031 );
}

/* Re-Initializer for the auto object 'WidgetSet::Switch_Mono_Medium' */
void WidgetSetSwitch_Mono_Medium__ReInit( WidgetSetToggleButtonConfig _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'WidgetSet::Switch_Mono_Medium' */
EW_DEFINE_AUTOOBJECT_VARIANTS( WidgetSetSwitch_Mono_Medium )
EW_END_OF_AUTOOBJECT_VARIANTS( WidgetSetSwitch_Mono_Medium )

/* This autoobject provides the default customization for the 'horizontal slider' 
   widget (WidgetSet::HorizontalSlider) in its medium size variant. */
EW_DEFINE_AUTOOBJECT( WidgetSetHorizontalSlider_Mono_Medium, WidgetSetHorizontalSliderConfig )

/* Initializer for the auto object 'WidgetSet::HorizontalSlider_Mono_Medium' */
void WidgetSetHorizontalSlider_Mono_Medium__Init( WidgetSetHorizontalSliderConfig _this )
{
  WidgetSetHorizontalSliderConfig_OnSetStateTransitionDuration( _this, 50 );
  WidgetSetHorizontalSliderConfig_OnSetKeyRepeatPeriod( _this, 30 );
  WidgetSetHorizontalSliderConfig_OnSetKeyRepeatDelay( _this, 500 );
  WidgetSetHorizontalSliderConfig_OnSetAccentColorActive( _this, _Const0023 );
  WidgetSetHorizontalSliderConfig_OnSetAccentColorFocused( _this, _Const0023 );
  WidgetSetHorizontalSliderConfig_OnSetAccentCornerRadiusActive( _this, 28 );
  WidgetSetHorizontalSliderConfig_OnSetAccentCornerRadiusFocused( _this, 25 );
  WidgetSetHorizontalSliderConfig_OnSetAccentCornerRadiusDisabled( _this, 25 );
  WidgetSetHorizontalSliderConfig_OnSetAccentCornerRadiusDefault( _this, 25 );
  WidgetSetHorizontalSliderConfig_OnSetAccentSizeActive( _this, _Const0032 );
  WidgetSetHorizontalSliderConfig_OnSetAccentSizeFocused( _this, _Const0033 );
  WidgetSetHorizontalSliderConfig_OnSetAccentSizeDisabled( _this, _Const0033 );
  WidgetSetHorizontalSliderConfig_OnSetAccentSizeDefault( _this, _Const0033 );
  WidgetSetHorizontalSliderConfig_OnSetThumbBorderColorActive( _this, _Const001F );
  WidgetSetHorizontalSliderConfig_OnSetThumbBorderColorFocused( _this, _Const001F );
  WidgetSetHorizontalSliderConfig_OnSetThumbBorderColorDisabled( _this, _Const001E );
  WidgetSetHorizontalSliderConfig_OnSetThumbBorderColorDefault( _this, _Const001F );
  WidgetSetHorizontalSliderConfig_OnSetThumbBorderWidthActive( _this, 1 );
  WidgetSetHorizontalSliderConfig_OnSetThumbBorderWidthFocused( _this, 1 );
  WidgetSetHorizontalSliderConfig_OnSetThumbBorderWidthDisabled( _this, 1 );
  WidgetSetHorizontalSliderConfig_OnSetThumbBorderWidthDefault( _this, 1 );
  WidgetSetHorizontalSliderConfig_OnSetThumbColorActive( _this, _Const0004 );
  WidgetSetHorizontalSliderConfig_OnSetThumbColorFocused( _this, _Const0004 );
  WidgetSetHorizontalSliderConfig_OnSetThumbColorDisabled( _this, _Const0004 );
  WidgetSetHorizontalSliderConfig_OnSetThumbColorDefault( _this, _Const0004 );
  WidgetSetHorizontalSliderConfig_OnSetThumbCornerRadiusActive( _this, 16 );
  WidgetSetHorizontalSliderConfig_OnSetThumbCornerRadiusFocused( _this, 16 );
  WidgetSetHorizontalSliderConfig_OnSetThumbCornerRadiusDisabled( _this, 16 );
  WidgetSetHorizontalSliderConfig_OnSetThumbCornerRadiusDefault( _this, 16 );
  WidgetSetHorizontalSliderConfig_OnSetThumbSizeActive( _this, _Const0034 );
  WidgetSetHorizontalSliderConfig_OnSetThumbSizeFocused( _this, _Const0034 );
  WidgetSetHorizontalSliderConfig_OnSetThumbSizeDisabled( _this, _Const0034 );
  WidgetSetHorizontalSliderConfig_OnSetThumbSizeDefault( _this, _Const0034 );
  WidgetSetHorizontalSliderConfig_OnSetThumbMarginRight( _this, 16 );
  WidgetSetHorizontalSliderConfig_OnSetThumbMarginLeft( _this, 16 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightBorderColorActive( _this, _Const0023 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightBorderColorFocused( _this, _Const0023 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightBorderColorDisabled( _this, _Const001E );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightBorderColorDefault( _this, _Const0023 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightBorderWidthActive( _this, 1 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightBorderWidthFocused( _this, 1 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightBorderWidthDisabled( _this, 1 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightBorderWidthDefault( _this, 1 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightColorActive( _this, _Const002A );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightColorFocused( _this, _Const002A );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightColorDefault( _this, _Const002A );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightCornerRadiusActive( _this, 3 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightCornerRadiusFocused( _this, 3 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightCornerRadiusDisabled( _this, 3 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightCornerRadiusDefault( _this, 3 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightThicknessActive( _this, 6 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightThicknessFocused( _this, 6 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightThicknessDisabled( _this, 6 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightThicknessDefault( _this, 6 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightFlattened( _this, 1 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftColorActive( _this, _Const0035 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftColorFocused( _this, _Const0035 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftColorDisabled( _this, _Const0029 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftColorDefault( _this, _Const0035 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftCornerRadiusActive( _this, 3 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftCornerRadiusFocused( _this, 3 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftCornerRadiusDisabled( _this, 3 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftCornerRadiusDefault( _this, 3 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftThicknessActive( _this, 6 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftThicknessFocused( _this, 6 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftThicknessDisabled( _this, 6 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftThicknessDefault( _this, 6 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftFlattened( _this, 1 );
  WidgetSetHorizontalSliderConfig_OnSetWidgetMinSize( _this, _Const0022 );
}

/* Re-Initializer for the auto object 'WidgetSet::HorizontalSlider_Mono_Medium' */
void WidgetSetHorizontalSlider_Mono_Medium__ReInit( WidgetSetHorizontalSliderConfig _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'WidgetSet::HorizontalSlider_Mono_Medium' */
EW_DEFINE_AUTOOBJECT_VARIANTS( WidgetSetHorizontalSlider_Mono_Medium )
EW_END_OF_AUTOOBJECT_VARIANTS( WidgetSetHorizontalSlider_Mono_Medium )

/* This autoobject provides the default customization for the 'horizontal scrollbar' 
   widget (WidgetSet::HorizontalScrollbar) in its medium size variant. Scrollbars 
   using this configuration do react to user touch interactions. */
EW_DEFINE_AUTOOBJECT( WidgetSetHorizontalScrollbar_Mono_Medium, WidgetSetHorizontalScrollbarConfig )

/* Initializer for the auto object 'WidgetSet::HorizontalScrollbar_Mono_Medium' */
void WidgetSetHorizontalScrollbar_Mono_Medium__Init( WidgetSetHorizontalScrollbarConfig _this )
{
  WidgetSetHorizontalScrollbarConfig_OnSetThumbColorActive( _this, _Const0035 );
  WidgetSetHorizontalScrollbarConfig_OnSetThumbColorDisabled( _this, _Const0035 );
  WidgetSetHorizontalScrollbarConfig_OnSetThumbColorDefault( _this, _Const0035 );
  WidgetSetHorizontalScrollbarConfig_OnSetThumbCornerRadiusActive( _this, 8 );
  WidgetSetHorizontalScrollbarConfig_OnSetThumbCornerRadiusDisabled( _this, 8 );
  WidgetSetHorizontalScrollbarConfig_OnSetThumbCornerRadiusDefault( _this, 8 );
  WidgetSetHorizontalScrollbarConfig_OnSetThumbMinWidthActive( _this, 16 );
  WidgetSetHorizontalScrollbarConfig_OnSetThumbMinWidthDisabled( _this, 16 );
  WidgetSetHorizontalScrollbarConfig_OnSetThumbMinWidthDefault( _this, 16 );
  WidgetSetHorizontalScrollbarConfig_OnSetThumbThicknessActive( _this, 16 );
  WidgetSetHorizontalScrollbarConfig_OnSetThumbThicknessDisabled( _this, 16 );
  WidgetSetHorizontalScrollbarConfig_OnSetThumbThicknessDefault( _this, 16 );
  WidgetSetHorizontalScrollbarConfig_OnSetTrackBorderColorActive( _this, _Const0023 );
  WidgetSetHorizontalScrollbarConfig_OnSetTrackBorderColorDisabled( _this, _Const0023 );
  WidgetSetHorizontalScrollbarConfig_OnSetTrackBorderColorDefault( _this, _Const0023 );
  WidgetSetHorizontalScrollbarConfig_OnSetTrackBorderWidthActive( _this, 1 );
  WidgetSetHorizontalScrollbarConfig_OnSetTrackBorderWidthDisabled( _this, 1 );
  WidgetSetHorizontalScrollbarConfig_OnSetTrackBorderWidthDefault( _this, 1 );
  WidgetSetHorizontalScrollbarConfig_OnSetTrackCornerRadiusActive( _this, 8 );
  WidgetSetHorizontalScrollbarConfig_OnSetTrackCornerRadiusDisabled( _this, 8 );
  WidgetSetHorizontalScrollbarConfig_OnSetTrackCornerRadiusDefault( _this, 8 );
  WidgetSetHorizontalScrollbarConfig_OnSetTrackThicknessActive( _this, 16 );
  WidgetSetHorizontalScrollbarConfig_OnSetTrackThicknessDisabled( _this, 16 );
  WidgetSetHorizontalScrollbarConfig_OnSetTrackThicknessDefault( _this, 16 );
  WidgetSetHorizontalScrollbarConfig_OnSetWidgetMinSize( _this, _Const0036 );
}

/* Re-Initializer for the auto object 'WidgetSet::HorizontalScrollbar_Mono_Medium' */
void WidgetSetHorizontalScrollbar_Mono_Medium__ReInit( WidgetSetHorizontalScrollbarConfig _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'WidgetSet::HorizontalScrollbar_Mono_Medium' */
EW_DEFINE_AUTOOBJECT_VARIANTS( WidgetSetHorizontalScrollbar_Mono_Medium )
EW_END_OF_AUTOOBJECT_VARIANTS( WidgetSetHorizontalScrollbar_Mono_Medium )

/* This autoobject provides the default customization for the 'analog gauge' widget 
   (WidgetSet::Gauge) in its medium size variant. */
EW_DEFINE_AUTOOBJECT( WidgetSetGauge_Mono_Medium, WidgetSetGaugeConfig )

/* Initializer for the auto object 'WidgetSet::Gauge_Mono_Medium' */
void WidgetSetGauge_Mono_Medium__Init( WidgetSetGaugeConfig _this )
{
  WidgetSetGaugeConfig_OnSetSwingElastic( _this, 0 );
  WidgetSetGaugeConfig_OnSetSwingDuration( _this, 250 );
  WidgetSetGaugeConfig_OnSetTrackRightBorderColor( _this, _Const0023 );
  WidgetSetGaugeConfig_OnSetTrackRightBorderWidth( _this, 1.0f );
  WidgetSetGaugeConfig_OnSetTrackRightColor( _this, _Const002A );
  WidgetSetGaugeConfig_OnSetTrackRightThickness( _this, 18.0f );
  WidgetSetGaugeConfig_OnSetTrackRightRadius( _this, 70.0f );
  WidgetSetGaugeConfig_OnSetTrackRightRoundedEnd( _this, 1 );
  WidgetSetGaugeConfig_OnSetTrackLeftColor( _this, _Const0035 );
  WidgetSetGaugeConfig_OnSetTrackLeftThickness( _this, 18.0f );
  WidgetSetGaugeConfig_OnSetTrackLeftRadius( _this, 70.0f );
  WidgetSetGaugeConfig_OnSetTrackLeftRoundedEnd( _this, 1 );
  WidgetSetGaugeConfig_OnSetTrackLeftRoundedStart( _this, 1 );
  WidgetSetGaugeConfig_OnSetTrackLeftMarginStart( _this, -1.0f );
  WidgetSetGaugeConfig_OnSetNeedleMaxAngle( _this, -45.0f );
  WidgetSetGaugeConfig_OnSetNeedleMinAngle( _this, 224.0f );
  WidgetSetGaugeConfig_OnSetCenterOffset( _this, _Const0037 );
  WidgetSetGaugeConfig_OnSetWidgetMinSize( _this, _Const0038 );
}

/* Re-Initializer for the auto object 'WidgetSet::Gauge_Mono_Medium' */
void WidgetSetGauge_Mono_Medium__ReInit( WidgetSetGaugeConfig _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'WidgetSet::Gauge_Mono_Medium' */
EW_DEFINE_AUTOOBJECT_VARIANTS( WidgetSetGauge_Mono_Medium )
EW_END_OF_AUTOOBJECT_VARIANTS( WidgetSetGauge_Mono_Medium )

/* This autoobject provides the default customization for the 'vertical value bar' 
   widget (WidgetSet::VerticalValueBar) in its medium size variant. */
EW_DEFINE_AUTOOBJECT( WidgetSetVerticalValueBar_Mono_Medium, WidgetSetVerticalValueBarConfig )

/* Initializer for the auto object 'WidgetSet::VerticalValueBar_Mono_Medium' */
void WidgetSetVerticalValueBar_Mono_Medium__Init( WidgetSetVerticalValueBarConfig _this )
{
  WidgetSetVerticalValueBarConfig_OnSetSwingElastic( _this, 0 );
  WidgetSetVerticalValueBarConfig_OnSetSwingDuration( _this, 250 );
  WidgetSetVerticalValueBarConfig_OnSetTrackAboveBorderColor( _this, _Const0023 );
  WidgetSetVerticalValueBarConfig_OnSetTrackAboveBorderWidth( _this, 1 );
  WidgetSetVerticalValueBarConfig_OnSetTrackAboveColor( _this, _Const002A );
  WidgetSetVerticalValueBarConfig_OnSetTrackAboveFlattened( _this, 1 );
  WidgetSetVerticalValueBarConfig_OnSetTrackAboveCornerRadius( _this, 9 );
  WidgetSetVerticalValueBarConfig_OnSetTrackAboveThickness( _this, 18 );
  WidgetSetVerticalValueBarConfig_OnSetTrackBelowColor( _this, _Const0035 );
  WidgetSetVerticalValueBarConfig_OnSetTrackBelowFlattened( _this, 1 );
  WidgetSetVerticalValueBarConfig_OnSetTrackBelowCornerRadius( _this, 9 );
  WidgetSetVerticalValueBarConfig_OnSetTrackBelowThickness( _this, 18 );
  WidgetSetVerticalValueBarConfig_OnSetWidgetMinSize( _this, _Const0039 );
}

/* Re-Initializer for the auto object 'WidgetSet::VerticalValueBar_Mono_Medium' */
void WidgetSetVerticalValueBar_Mono_Medium__ReInit( WidgetSetVerticalValueBarConfig _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'WidgetSet::VerticalValueBar_Mono_Medium' */
EW_DEFINE_AUTOOBJECT_VARIANTS( WidgetSetVerticalValueBar_Mono_Medium )
EW_END_OF_AUTOOBJECT_VARIANTS( WidgetSetVerticalValueBar_Mono_Medium )

/* This autoobject provides the default customization for the 'push button' widget 
   (WidgetSet::PushButton) in its medium size variant. */
EW_DEFINE_AUTOOBJECT( WidgetSetPushButton_Mono_Small, WidgetSetPushButtonConfig )

/* Initializer for the auto object 'WidgetSet::PushButton_Mono_Small' */
void WidgetSetPushButton_Mono_Small__Init( WidgetSetPushButtonConfig _this )
{
  WidgetSetPushButtonConfig_OnSetStateTransitionDuration( _this, 50 );
  WidgetSetPushButtonConfig_OnSetPressedFeedbackDuration( _this, 100 );
  WidgetSetPushButtonConfig_OnSetThumbShadowColorFocused( _this, _Const001C );
  WidgetSetPushButtonConfig_OnSetThumbShadowColorDefault( _this, _Const001D );
  WidgetSetPushButtonConfig_OnSetThumbShadowBlurRadiusFocused( _this, 2 );
  WidgetSetPushButtonConfig_OnSetThumbShadowBlurRadiusDefault( _this, 1 );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorActive( _this, _Const001E );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorFocused( _this, _Const001F );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorDisabled( _this, _Const001E );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorDefault( _this, _Const001E );
  WidgetSetPushButtonConfig_OnSetThumbBorderWidthActive( _this, 1 );
  WidgetSetPushButtonConfig_OnSetThumbBorderWidthFocused( _this, 1 );
  WidgetSetPushButtonConfig_OnSetThumbBorderWidthDisabled( _this, 1 );
  WidgetSetPushButtonConfig_OnSetThumbBorderWidthDefault( _this, 1 );
  WidgetSetPushButtonConfig_OnSetThumbColorActive( _this, _Const0004 );
  WidgetSetPushButtonConfig_OnSetThumbColorFocused( _this, _Const0004 );
  WidgetSetPushButtonConfig_OnSetThumbColorDisabled( _this, _Const0004 );
  WidgetSetPushButtonConfig_OnSetThumbColorDefault( _this, _Const0004 );
  WidgetSetPushButtonConfig_OnSetThumbCornerRadiusActive( _this, 4 );
  WidgetSetPushButtonConfig_OnSetThumbCornerRadiusFocused( _this, 4 );
  WidgetSetPushButtonConfig_OnSetThumbCornerRadiusDisabled( _this, 4 );
  WidgetSetPushButtonConfig_OnSetThumbCornerRadiusDefault( _this, 4 );
  WidgetSetPushButtonConfig_OnSetLabelColorActive( _this, _Const0020 );
  WidgetSetPushButtonConfig_OnSetLabelColorFocused( _this, _Const0020 );
  WidgetSetPushButtonConfig_OnSetLabelColorDisabled( _this, _Const0021 );
  WidgetSetPushButtonConfig_OnSetLabelColorDefault( _this, _Const0020 );
  WidgetSetPushButtonConfig_OnSetLabelMarginBottom( _this, 4 );
  WidgetSetPushButtonConfig_OnSetLabelMarginTop( _this, 4 );
  WidgetSetPushButtonConfig_OnSetLabelMarginRight( _this, 4 );
  WidgetSetPushButtonConfig_OnSetLabelMarginLeft( _this, 4 );
  WidgetSetPushButtonConfig_OnSetIconTintActive( _this, _Const0020 );
  WidgetSetPushButtonConfig_OnSetIconTintFocused( _this, _Const0020 );
  WidgetSetPushButtonConfig_OnSetIconTintDisabled( _this, _Const0021 );
  WidgetSetPushButtonConfig_OnSetIconTintDefault( _this, _Const0020 );
  WidgetSetPushButtonConfig_OnSetIconMarginBottom( _this, 4 );
  WidgetSetPushButtonConfig_OnSetIconMarginTop( _this, 4 );
  WidgetSetPushButtonConfig_OnSetIconMarginRight( _this, 4 );
  WidgetSetPushButtonConfig_OnSetIconMarginLeft( _this, 4 );
  WidgetSetPushButtonConfig_OnSetLabelFont( _this, EwLoadResource( &ResourcesFontSmall, 
  ResourcesFont ));
  WidgetSetPushButtonConfig_OnSetWidgetMinSize( _this, _Const003A );
}

/* Re-Initializer for the auto object 'WidgetSet::PushButton_Mono_Small' */
void WidgetSetPushButton_Mono_Small__ReInit( WidgetSetPushButtonConfig _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'WidgetSet::PushButton_Mono_Small' */
EW_DEFINE_AUTOOBJECT_VARIANTS( WidgetSetPushButton_Mono_Small )
EW_END_OF_AUTOOBJECT_VARIANTS( WidgetSetPushButton_Mono_Small )

/* Embedded Wizard */

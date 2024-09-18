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
#include "_ApplicationApplication.h"
#include "_ApplicationBaseScreen.h"
#include "_ApplicationBootScreen.h"
#include "_ApplicationCottonScreen.h"
#include "_ApplicationHomeScreen.h"
#include "_ApplicationNavScreen.h"
#include "_ApplicationSensorScreen.h"
#include "_ApplicationSettingScreen.h"
#include "_ApplicationWeedScreen.h"
#include "_CoreGroup.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreView.h"
#include "_EffectsInt32Effect.h"
#include "_EffectsScaleTransition.h"
#include "_EffectsSlideTransition.h"
#include "_EffectsTransition.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsImage.h"
#include "_ViewsRectangle.h"
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
#include "Application.h"
#include "Core.h"
#include "Effects.h"
#include "Resource.h"
#include "WidgetSet.h"

/* Compressed strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned int _StringsDefault0[] =
{
  0x00000350, /* ratio 55.19 % */
  0xB8001B00, 0x80090452, 0x00DA0037, 0x0A600328, 0xE4003180, 0x06E89C2C, 0x030CC580,
  0xF0010C8B, 0x8F150004, 0x0138011C, 0xC1800200, 0x00A40020, 0x48A002B0, 0x44499043,
  0x12423802, 0x44909340, 0xC0045A5A, 0x954A2320, 0x843A4B37, 0x4E65D3A2, 0xAA093D8B,
  0x05B322AC, 0x753A9B4C, 0x119024EC, 0x1907CEC6, 0x034C5663, 0xAE000E80, 0x244EBA61,
  0xD945C003, 0x641716B3, 0x2115E874, 0x196F001C, 0xF3B10D92, 0x6239C640, 0x7044EEDD,
  0x89586C57, 0xC8522D5E, 0x8028A578, 0xBA55259C, 0x2591D9BC, 0x1935264A, 0xD169D61F,
  0x239D5AC1, 0x5954761D, 0x8FCA2732, 0x25DA2D28, 0x8BC00678, 0xEC660084, 0x26F04B54,
  0xBD78AE42, 0xB13889D6, 0x0C8FC672, 0x1DA5C615, 0x866D3656, 0x0CAA33A2, 0xC5A2B5CB,
  0x00551902, 0xA09C18D8, 0x5D378EC1, 0xF190545A, 0x3A95CA64, 0x88B47E1D, 0x97616095,
  0x862A6B46, 0xE3C018DA, 0x7E5D97D5, 0x247318FC, 0xD3D3874D, 0x1D7CD4CB, 0x0481003E,
  0xEFDC1C85, 0x894421D5, 0x1C64310C, 0xC469DD00, 0x54005E5F, 0x146FDFE4, 0x115F84ED,
  0x00080585, 0xD8020B59, 0x5C1045A0, 0x5E5790C6, 0x69400715, 0xE0244E15, 0x08261A55,
  0x49085E00, 0x0384A214, 0x46D04752, 0xE1D5BD61, 0x45F2037E, 0xC9BB4390, 0x455253B5,
  0x429124A0, 0xE225C142, 0xF6117584, 0x1C660015, 0xFA465489, 0x6CC001B1, 0x9087EE1B,
  0x94EC6857, 0x71904640, 0x5E955A55, 0x83D165E1, 0xC7658523, 0x76F5A591, 0xF2034224,
  0x63002618, 0x002178AE, 0x4006B657, 0x16CD1558, 0xF5CD9396, 0x5F8224F8, 0x4A123466,
  0xD344C52C, 0xD4C40067, 0xED3B48D1, 0x00001014, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 480, 272 }};
static const XRect _Const0001 = {{ 108, 29 }, { 373, 169 }};
static const XStringRes _Const0002 = { _StringsDefault0, 0x0002 };
static const XRect _Const0003 = {{ 52, 28 }, { 440, 58 }};
static const XStringRes _Const0004 = { _StringsDefault0, 0x000F };
static const XColor _Const0005 = { 0x00, 0x00, 0x0F, 0xFF };
static const XRect _Const0006 = {{ 78, 78 }, { 172, 177 }};
static const XRect _Const0007 = {{ 240, 78 }, { 453, 108 }};
static const XStringRes _Const0008 = { _StringsDefault0, 0x0028 };
static const XRect _Const0009 = {{ 42, 202 }, { 153, 232 }};
static const XStringRes _Const000A = { _StringsDefault0, 0x0034 };
static const XRect _Const000B = {{ 144, 202 }, { 208, 232 }};
static const XStringRes _Const000C = { _StringsDefault0, 0x0040 };
static const XPoint _Const000D = { 0, 0 };
static const XPoint _Const000E = { 52, 0 };
static const XPoint _Const000F = { 52, 78 };
static const XPoint _Const0010 = { 0, 78 };
static const XRect _Const0011 = {{ 246, 112 }, { 446, 142 }};
static const XRect _Const0012 = {{ 236, 151 }, { 449, 253 }};
static const XRect _Const0013 = {{ 236, 177 }, { 286, 227 }};
static const XPoint _Const0014 = { 72, 77 };
static const XPoint _Const0015 = { 172, 77 };
static const XPoint _Const0016 = { 172, 177 };
static const XPoint _Const0017 = { 72, 177 };
static const XRect _Const0018 = {{ 286, 162 }, { 397, 192 }};
static const XStringRes _Const0019 = { _StringsDefault0, 0x0044 };
static const XColor _Const001A = { 0x08, 0x08, 0x08, 0xFF };
static const XRect _Const001B = {{ 286, 192 }, { 386, 222 }};
static const XStringRes _Const001C = { _StringsDefault0, 0x0053 };
static const XStringRes _Const001D = { _StringsDefault0, 0x005E };
static const XStringRes _Const001E = { _StringsDefault0, 0x0065 };
static const XStringRes _Const001F = { _StringsDefault0, 0x006D };
static const XRect _Const0020 = {{ 52, 22 }, { 440, 52 }};
static const XStringRes _Const0021 = { _StringsDefault0, 0x0081 };
static const XRect _Const0022 = {{ 33, 72 }, { 193, 212 }};
static const XRect _Const0023 = {{ 280, 72 }, { 440, 212 }};
static const XRect _Const0024 = {{ 67, 164 }, { 159, 196 }};
static const XStringRes _Const0025 = { _StringsDefault0, 0x008F };
static const XRect _Const0026 = {{ 221, 72 }, { 271, 232 }};
static const XRect _Const0027 = {{ 46, 222 }, { 180, 252 }};
static const XStringRes _Const0028 = { _StringsDefault0, 0x0096 };
static const XRect _Const0029 = {{ 293, 222 }, { 427, 252 }};
static const XStringRes _Const002A = { _StringsDefault0, 0x00A1 };
static const XRect _Const002B = {{ 180, 232 }, { 314, 262 }};
static const XStringRes _Const002C = { _StringsDefault0, 0x00AF };
static const XRect _Const002D = {{ 321, 164 }, { 399, 196 }};
static const XStringRes _Const002E = { _StringsDefault0, 0x00B6 };
static const XColor _Const002F = { 0xE0, 0xE0, 0xE0, 0xFF };
static const XColor _Const0030 = { 0xE9, 0xE9, 0xE9, 0xFF };
static const XPoint _Const0031 = { 52, 66 };
static const XPoint _Const0032 = { 0, 66 };
static const XRect _Const0033 = {{ 301, 56 }, { 379, 130 }};
static const XRect _Const0034 = {{ 301, 161 }, { 379, 235 }};
static const XRect _Const0035 = {{ 98, 54 }, { 176, 128 }};
static const XRect _Const0036 = {{ 98, 161 }, { 176, 235 }};
static const XRect _Const0037 = {{ 107, 61 }, { 168, 122 }};
static const XRect _Const0038 = {{ 301, 164 }, { 380, 233 }};
static const XRect _Const0039 = {{ 105, 168 }, { 170, 229 }};
static const XRect _Const003A = {{ 310, 62 }, { 371, 123 }};
static const XRect _Const003B = {{ 140, 28 }, { 340, 58 }};
static const XStringRes _Const003C = { _StringsDefault0, 0x00BB };
static const XRect _Const003D = {{ 90, 128 }, { 190, 158 }};
static const XStringRes _Const003E = { _StringsDefault0, 0x00C2 };
static const XRect _Const003F = {{ 50, 227 }, { 230, 272 }};
static const XStringRes _Const0040 = { _StringsDefault0, 0x00CC };
static const XRect _Const0041 = {{ 290, 128 }, { 390, 158 }};
static const XStringRes _Const0042 = { _StringsDefault0, 0x00DB };
static const XRect _Const0043 = {{ 290, 235 }, { 390, 265 }};
static const XStringRes _Const0044 = { _StringsDefault0, 0x00E6 };
static const XStringRes _Const0045 = { _StringsDefault0, 0x00F0 };
static const XStringRes _Const0046 = { _StringsDefault0, 0x00FD };
static const XStringRes _Const0047 = { _StringsDefault0, 0x010C };
static const XStringRes _Const0048 = { _StringsDefault0, 0x0119 };
static const XStringRes _Const0049 = { _StringsDefault0, 0x0129 };
static const XRect _Const004A = {{ 266, 79 }, { 326, 119 }};
static const XStringRes _Const004B = { _StringsDefault0, 0x0138 };
static const XRect _Const004C = {{ 240, 197 }, { 440, 247 }};
static const XRect _Const004D = {{ 240, 126 }, { 440, 176 }};
static const XRect _Const004E = {{ 23, 136 }, { 83, 176 }};
static const XRect _Const004F = {{ 23, 84 }, { 83, 124 }};
static const XRect _Const0050 = {{ 273, 232 }, { 407, 262 }};
static const XStringRes _Const0051 = { _StringsDefault0, 0x0142 };
static const XRect _Const0052 = {{ 273, 168 }, { 407, 198 }};
static const XStringRes _Const0053 = { _StringsDefault0, 0x014A };
static const XRect _Const0054 = {{ 326, 84 }, { 393, 114 }};
static const XStringRes _Const0055 = { _StringsDefault0, 0x0156 };
static const XRect _Const0056 = {{ 83, 141 }, { 188, 171 }};
static const XStringRes _Const0057 = { _StringsDefault0, 0x015D };
static const XRect _Const0058 = {{ 83, 89 }, { 175, 119 }};
static const XStringRes _Const0059 = { _StringsDefault0, 0x0169 };
static const XRect _Const005A = {{ 25, 186 }, { 111, 247 }};
static const XRect _Const005B = {{ 111, 202 }, { 217, 232 }};
static const XStringRes _Const005C = { _StringsDefault0, 0x0172 };
static const XColor _Const005D = { 0xF8, 0xF8, 0xF8, 0xFF };
static const XStringRes _Const005E = { _StringsDefault0, 0x017F };
static const XRect _Const005F = {{ 84, 203 }, { 144, 243 }};
static const XRect _Const0060 = {{ 25, 103 }, { 225, 153 }};
static const XRect _Const0061 = {{ 58, 139 }, { 192, 169 }};
static const XRect _Const0062 = {{ 144, 208 }, { 225, 238 }};
static const XStringRes _Const0063 = { _StringsDefault0, 0x018B };
static const XRect _Const0064 = {{ 21, 208 }, { 85, 238 }};
static const XStringRes _Const0065 = { _StringsDefault0, 0x0194 };
static const XStringRes _Const0066 = { _StringsDefault0, 0x019B };
static const XRect _Const0067 = {{ 320, 118 }, { 380, 178 }};
static const XRect _Const0068 = {{ 260, 178 }, { 320, 238 }};
static const XRect _Const0069 = {{ 320, 178 }, { 380, 238 }};
static const XRect _Const006A = {{ 380, 178 }, { 440, 238 }};

/* Initializer for the class 'Application::Application' */
void ApplicationApplication__Init( ApplicationApplication _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRoot__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationApplication );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationApplication );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );

  /* Call the user defined constructor */
  ApplicationApplication_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::Application' */
void ApplicationApplication__ReInit( ApplicationApplication _this )
{
  /* At first re-initialize the super class ... */
  CoreRoot__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Application::Application' */
void ApplicationApplication__Done( ApplicationApplication _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreRoot );

  /* Don't forget to deinitialize the super class ... */
  CoreRoot__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationApplication_Init( ApplicationApplication _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  CoreGroup_PresentDialog((CoreGroup)_this, ((CoreGroup)EwNewObject( ApplicationBootScreen, 
  0 )), 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* Variants derived from the class : 'Application::Application' */
EW_DEFINE_CLASS_VARIANTS( ApplicationApplication )
EW_END_OF_CLASS_VARIANTS( ApplicationApplication )

/* Virtual Method Table (VMT) for the class : 'Application::Application' */
EW_DEFINE_CLASS( ApplicationApplication, CoreRoot, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 _.VMT, "Application::Application" )
  CoreRectView_initLayoutContext,
  CoreRoot_GetRoot,
  CoreRoot_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreRoot_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreRoot_OnSetFocus,
  CoreRoot_OnSetBuffered,
  CoreRoot_OnSetOpacity,
  CoreRoot_DispatchEvent,
  CoreRoot_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreRoot_InvalidateArea,
EW_END_OF_CLASS( ApplicationApplication )

/* Initializer for the class 'Application::BaseScreen' */
void ApplicationBaseScreen__Init( ApplicationBaseScreen _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationBaseScreen );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationBaseScreen );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
}

/* Re-Initializer for the class 'Application::BaseScreen' */
void ApplicationBaseScreen__ReInit( ApplicationBaseScreen _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Application::BaseScreen' */
void ApplicationBaseScreen__Done( ApplicationBaseScreen _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* Variants derived from the class : 'Application::BaseScreen' */
EW_DEFINE_CLASS_VARIANTS( ApplicationBaseScreen )
EW_END_OF_CLASS_VARIANTS( ApplicationBaseScreen )

/* Virtual Method Table (VMT) for the class : 'Application::BaseScreen' */
EW_DEFINE_CLASS( ApplicationBaseScreen, CoreGroup, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 _.VMT, "Application::BaseScreen" )
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
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( ApplicationBaseScreen )

/* Initializer for the class 'Application::BootScreen' */
void ApplicationBootScreen__Init( ApplicationBootScreen _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ApplicationBaseScreen__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationBootScreen );

  /* ... then construct all embedded objects */
  ViewsImage__Init( &_this->Image, &_this->_.XObject, 0 );
  WidgetSetGauge__Init( &_this->Gauge, &_this->_.XObject, 0 );
  EffectsInt32Effect__Init( &_this->Int32Effect, &_this->_.XObject, 0 );
  EffectsFadeInOutTransition__Init( &_this->FadeInOutTransition, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationBootScreen );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( &_this->Image, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Gauge, _Const0001 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->Gauge, 1 );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->Int32Effect, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->Int32Effect, 1500 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->Int32Effect, 1 );
  _this->Int32Effect.Value2 = 100;
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Image ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Gauge ), 0 );
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &Resourcewallpaper1, ResourcesBitmap ));
  WidgetSetGauge_OnSetAppearance( &_this->Gauge, EwGetAutoObject( &WidgetSetGauge_Mono_Medium, 
  WidgetSetGaugeConfig ));
  _this->Int32Effect.Super1.OnFinished = EwNewSlot( _this, ApplicationBootScreen_GoToHome );
  _this->Int32Effect.Outlet = EwNewRef( &_this->Gauge, WidgetSetGauge_OnGetCurrentValue, 
  WidgetSetGauge_OnSetCurrentValue );

  /* Call the user defined constructor */
  ApplicationBootScreen_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::BootScreen' */
void ApplicationBootScreen__ReInit( ApplicationBootScreen _this )
{
  /* At first re-initialize the super class ... */
  ApplicationBaseScreen__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsImage__ReInit( &_this->Image );
  WidgetSetGauge__ReInit( &_this->Gauge );
  EffectsInt32Effect__ReInit( &_this->Int32Effect );
  EffectsFadeInOutTransition__ReInit( &_this->FadeInOutTransition );
}

/* Finalizer method for the class 'Application::BootScreen' */
void ApplicationBootScreen__Done( ApplicationBootScreen _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ApplicationBaseScreen );

  /* Finalize all embedded objects */
  ViewsImage__Done( &_this->Image );
  WidgetSetGauge__Done( &_this->Gauge );
  EffectsInt32Effect__Done( &_this->Int32Effect );
  EffectsFadeInOutTransition__Done( &_this->FadeInOutTransition );

  /* Don't forget to deinitialize the super class ... */
  ApplicationBaseScreen__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationBootScreen_Init( ApplicationBootScreen _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aArg );
}

/* 'C' function for method : 'Application::BootScreen.GoToHome()' */
void ApplicationBootScreen_GoToHome( ApplicationBootScreen _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_SwitchToDialog( _this->Super4.Owner, ((CoreGroup)EwNewObject( ApplicationHomeScreen, 
  0 )), ((EffectsTransition)&_this->FadeInOutTransition ), 0, 0, 0, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
  EwTrace( "%s", EwLoadString( &_Const0002 ));
}

/* Variants derived from the class : 'Application::BootScreen' */
EW_DEFINE_CLASS_VARIANTS( ApplicationBootScreen )
EW_END_OF_CLASS_VARIANTS( ApplicationBootScreen )

/* Virtual Method Table (VMT) for the class : 'Application::BootScreen' */
EW_DEFINE_CLASS( ApplicationBootScreen, ApplicationBaseScreen, Image, _.VMT, _.VMT, 
                 _.VMT, _.VMT, _.VMT, "Application::BootScreen" )
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
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( ApplicationBootScreen )

/* Initializer for the class 'Application::CottonScreen' */
void ApplicationCottonScreen__Init( ApplicationCottonScreen _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ApplicationBaseScreen__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationCottonScreen );

  /* ... then construct all embedded objects */
  ViewsImage__Init( &_this->Image, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->start, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text2, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text3, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler1, &_this->_.XObject, 0 );
  WidgetSetHorizontalScrollbar__Init( &_this->HorizontalScrollbar, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image1, &_this->_.XObject, 0 );
  EffectsFadeInOutTransition__Init( &_this->FadeInOutTransition, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->stop, &_this->_.XObject, 0 );
  EffectsInt32Effect__Init( &_this->Int32Effect, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text4, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text5, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationCottonScreen );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( &_this->Image, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Text, _Const0003 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0004 ));
  ViewsText_OnSetColor( &_this->Text, _Const0005 );
  CoreRectView__OnSetBounds( &_this->start, _Const0006 );
  CoreRectView__OnSetBounds( &_this->Text1, _Const0007 );
  ViewsText_OnSetString( &_this->Text1, EwLoadString( &_Const0008 ));
  CoreRectView__OnSetBounds( &_this->Text2, _Const0009 );
  ViewsText_OnSetString( &_this->Text2, EwLoadString( &_Const000A ));
  CoreRectView__OnSetBounds( &_this->Text3, _Const000B );
  ViewsText_OnSetString( &_this->Text3, EwLoadString( &_Const000C ));
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler1, _Const000D );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler1, _Const000E );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler1, _Const000F );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler1, _Const0010 );
  CoreRectView__OnSetBounds( &_this->HorizontalScrollbar, _Const0011 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0012 );
  CoreRectView__OnSetBounds( &_this->Image1, _Const0013 );
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler, _Const0014 );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler, _Const0015 );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler, _Const0016 );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler, _Const0017 );
  CoreRectView__OnSetBounds( &_this->stop, _Const0006 );
  ViewsImage_OnSetVisible( &_this->stop, 0 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->Int32Effect, 50000 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->Int32Effect, 0 );
  _this->Int32Effect.Value2 = 60;
  CoreRectView__OnSetBounds( &_this->Text4, _Const0018 );
  ViewsText_OnSetString( &_this->Text4, EwLoadString( &_Const0019 ));
  ViewsText_OnSetColor( &_this->Text4, _Const001A );
  ViewsText_OnSetVisible( &_this->Text4, 0 );
  CoreRectView__OnSetBounds( &_this->Text5, _Const001B );
  ViewsText_OnSetString( &_this->Text5, EwLoadString( &_Const001C ));
  ViewsText_OnSetColor( &_this->Text5, _Const001A );
  ViewsText_OnSetVisible( &_this->Text5, 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Image ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->start ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text1 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text2 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text3 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->SimpleTouchHandler1 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->HorizontalScrollbar ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Image1 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->SimpleTouchHandler ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->stop ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text4 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text5 ), 0 );
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ResourceBmp_2, ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResourceFont1, ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->start, EwLoadResource( &Resourcestart_button1, 
  ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->Text1, EwLoadResource( &ResourceFont, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text2, EwLoadResource( &ResourceFont, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text3, EwLoadResource( &ResourceFont, ResourcesFont ));
  _this->SimpleTouchHandler1.OnPress = EwNewSlot( _this, ApplicationCottonScreen_GoToHome );
  WidgetSetHorizontalScrollbar_OnSetAppearance( &_this->HorizontalScrollbar, EwGetAutoObject( 
  &WidgetSetHorizontalScrollbar_Mono_Medium, WidgetSetHorizontalScrollbarConfig ));
  ViewsImage_OnSetBitmap( &_this->Image1, EwLoadResource( &Resourcelogs1, ResourcesBitmap ));
  _this->SimpleTouchHandler.OnPress = EwNewSlot( _this, ApplicationCottonScreen_StartPress );
  ViewsImage_OnSetBitmap( &_this->stop, EwLoadResource( &Resourcestop1, ResourcesBitmap ));
  _this->Int32Effect.Outlet = EwNewRef( _this, ApplicationCottonScreen_OnGetProperty, 
  ApplicationCottonScreen_OnSetProperty );
  ViewsText_OnSetFont( &_this->Text4, EwLoadResource( &ResourceFont, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text5, EwLoadResource( &ResourceFont, ResourcesFont ));

  /* Call the user defined constructor */
  ApplicationCottonScreen_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::CottonScreen' */
void ApplicationCottonScreen__ReInit( ApplicationCottonScreen _this )
{
  /* At first re-initialize the super class ... */
  ApplicationBaseScreen__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsImage__ReInit( &_this->Image );
  ViewsText__ReInit( &_this->Text );
  ViewsImage__ReInit( &_this->start );
  ViewsText__ReInit( &_this->Text1 );
  ViewsText__ReInit( &_this->Text2 );
  ViewsText__ReInit( &_this->Text3 );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler1 );
  WidgetSetHorizontalScrollbar__ReInit( &_this->HorizontalScrollbar );
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsImage__ReInit( &_this->Image1 );
  EffectsFadeInOutTransition__ReInit( &_this->FadeInOutTransition );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler );
  ViewsImage__ReInit( &_this->stop );
  EffectsInt32Effect__ReInit( &_this->Int32Effect );
  ViewsText__ReInit( &_this->Text4 );
  ViewsText__ReInit( &_this->Text5 );
}

/* Finalizer method for the class 'Application::CottonScreen' */
void ApplicationCottonScreen__Done( ApplicationCottonScreen _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ApplicationBaseScreen );

  /* Finalize all embedded objects */
  ViewsImage__Done( &_this->Image );
  ViewsText__Done( &_this->Text );
  ViewsImage__Done( &_this->start );
  ViewsText__Done( &_this->Text1 );
  ViewsText__Done( &_this->Text2 );
  ViewsText__Done( &_this->Text3 );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler1 );
  WidgetSetHorizontalScrollbar__Done( &_this->HorizontalScrollbar );
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsImage__Done( &_this->Image1 );
  EffectsFadeInOutTransition__Done( &_this->FadeInOutTransition );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler );
  ViewsImage__Done( &_this->stop );
  EffectsInt32Effect__Done( &_this->Int32Effect );
  ViewsText__Done( &_this->Text4 );
  ViewsText__Done( &_this->Text5 );

  /* Don't forget to deinitialize the super class ... */
  ApplicationBaseScreen__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationCottonScreen_Init( ApplicationCottonScreen _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aArg );
}

/* 'C' function for method : 'Application::CottonScreen.GoToHome()' */
void ApplicationCottonScreen_GoToHome( ApplicationCottonScreen _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_SwitchToDialog( _this->Super4.Owner, ((CoreGroup)EwNewObject( ApplicationHomeScreen, 
  0 )), ((EffectsTransition)&_this->FadeInOutTransition ), 0, 0, 0, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
  EwTrace( "%s", EwLoadString( &_Const0002 ));
}

/* 'C' function for method : 'Application::CottonScreen.StartPress()' */
void ApplicationCottonScreen_StartPress( ApplicationCottonScreen _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( ViewsImage_OnGetVisible( &_this->stop ))
  {
    ViewsImage_OnSetVisible( &_this->stop, 0 );
    ViewsImage_OnSetVisible( &_this->start, 1 );
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->Int32Effect, 0 );
    EwTrace( "%s", EwLoadString( &_Const001D ));
    ViewsText_OnSetVisible( &_this->Text5, 1 );
    return;
  }
  else
    if ( ViewsImage_OnGetVisible( &_this->start ))
    {
      ViewsImage_OnSetVisible( &_this->start, 0 );
      ViewsImage_OnSetVisible( &_this->stop, 1 );
      EffectsEffect_OnSetEnabled((EffectsEffect)&_this->Int32Effect, 1 );
      EwTrace( "%s", EwLoadString( &_Const001E ));
      ViewsText_OnSetVisible( &_this->Text4, 1 );
      return;
    }
}

/* 'C' function for method : 'Application::CottonScreen.OnSetProperty()' */
void ApplicationCottonScreen_OnSetProperty( ApplicationCottonScreen _this, XInt32 
  value )
{
  if ( _this->Property == value )
    return;

  _this->Property = value;
  ViewsText_OnSetString( &_this->Text3, EwNewStringInt( value, 0, 10 ));
}

/* Default onget method for the property 'Property' */
XInt32 ApplicationCottonScreen_OnGetProperty( ApplicationCottonScreen _this )
{
  return _this->Property;
}

/* Variants derived from the class : 'Application::CottonScreen' */
EW_DEFINE_CLASS_VARIANTS( ApplicationCottonScreen )
EW_END_OF_CLASS_VARIANTS( ApplicationCottonScreen )

/* Virtual Method Table (VMT) for the class : 'Application::CottonScreen' */
EW_DEFINE_CLASS( ApplicationCottonScreen, ApplicationBaseScreen, Image, Property, 
                 Property, Property, Property, Property, "Application::CottonScreen" )
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
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( ApplicationCottonScreen )

/* Initializer for the class 'Application::WeedScreen' */
void ApplicationWeedScreen__Init( ApplicationWeedScreen _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ApplicationBaseScreen__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationWeedScreen );

  /* ... then construct all embedded objects */
  ViewsImage__Init( &_this->Image, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text2, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text3, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text1, &_this->_.XObject, 0 );
  WidgetSetHorizontalScrollbar__Init( &_this->HorizontalScrollbar, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image1, &_this->_.XObject, 0 );
  EffectsFadeInOutTransition__Init( &_this->FadeInOutTransition, &_this->_.XObject, 0 );
  EffectsInt32Effect__Init( &_this->Int32Effect, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->start, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->stop, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text4, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text5, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationWeedScreen );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( &_this->Image, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Text, _Const0003 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const001F ));
  ViewsText_OnSetColor( &_this->Text, _Const0005 );
  CoreRectView__OnSetBounds( &_this->Text2, _Const0009 );
  ViewsText_OnSetString( &_this->Text2, EwLoadString( &_Const000A ));
  CoreRectView__OnSetBounds( &_this->Text3, _Const000B );
  ViewsText_OnSetString( &_this->Text3, EwLoadString( &_Const000C ));
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler1, _Const000D );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler1, _Const000E );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler1, _Const000F );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler1, _Const0010 );
  CoreRectView__OnSetBounds( &_this->Text1, _Const0007 );
  ViewsText_OnSetString( &_this->Text1, EwLoadString( &_Const0008 ));
  CoreRectView__OnSetBounds( &_this->HorizontalScrollbar, _Const0011 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0012 );
  CoreRectView__OnSetBounds( &_this->Image1, _Const0013 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->Int32Effect, 50000 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->Int32Effect, 0 );
  _this->Int32Effect.Value2 = 60;
  CoreRectView__OnSetBounds( &_this->start, _Const0006 );
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler, _Const0014 );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler, _Const0015 );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler, _Const0016 );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler, _Const0017 );
  CoreRectView__OnSetBounds( &_this->stop, _Const0006 );
  ViewsImage_OnSetVisible( &_this->stop, 0 );
  CoreRectView__OnSetBounds( &_this->Text4, _Const0018 );
  ViewsText_OnSetString( &_this->Text4, EwLoadString( &_Const0019 ));
  ViewsText_OnSetColor( &_this->Text4, _Const001A );
  ViewsText_OnSetVisible( &_this->Text4, 0 );
  CoreRectView__OnSetBounds( &_this->Text5, _Const001B );
  ViewsText_OnSetString( &_this->Text5, EwLoadString( &_Const001C ));
  ViewsText_OnSetColor( &_this->Text5, _Const001A );
  ViewsText_OnSetVisible( &_this->Text5, 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Image ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text2 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text3 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->SimpleTouchHandler1 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text1 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->HorizontalScrollbar ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Image1 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->start ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->SimpleTouchHandler ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->stop ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text4 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text5 ), 0 );
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ResourceBmp_2, ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResourceFont1, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text2, EwLoadResource( &ResourceFont, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text3, EwLoadResource( &ResourceFont, ResourcesFont ));
  _this->SimpleTouchHandler1.OnPress = EwNewSlot( _this, ApplicationWeedScreen_GoToHome );
  ViewsText_OnSetFont( &_this->Text1, EwLoadResource( &ResourceFont, ResourcesFont ));
  WidgetSetHorizontalScrollbar_OnSetAppearance( &_this->HorizontalScrollbar, EwGetAutoObject( 
  &WidgetSetHorizontalScrollbar_Mono_Medium, WidgetSetHorizontalScrollbarConfig ));
  ViewsImage_OnSetBitmap( &_this->Image1, EwLoadResource( &Resourcelogs1, ResourcesBitmap ));
  _this->Int32Effect.Outlet = EwNewRef( _this, ApplicationWeedScreen_OnGetProperty1, 
  ApplicationWeedScreen_OnSetProperty1 );
  ViewsImage_OnSetBitmap( &_this->start, EwLoadResource( &Resourcestart_button1, 
  ResourcesBitmap ));
  _this->SimpleTouchHandler.OnPress = EwNewSlot( _this, ApplicationWeedScreen_StartPress );
  ViewsImage_OnSetBitmap( &_this->stop, EwLoadResource( &Resourcestop1, ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->Text4, EwLoadResource( &ResourceFont, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text5, EwLoadResource( &ResourceFont, ResourcesFont ));

  /* Call the user defined constructor */
  ApplicationWeedScreen_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::WeedScreen' */
void ApplicationWeedScreen__ReInit( ApplicationWeedScreen _this )
{
  /* At first re-initialize the super class ... */
  ApplicationBaseScreen__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsImage__ReInit( &_this->Image );
  ViewsText__ReInit( &_this->Text );
  ViewsText__ReInit( &_this->Text2 );
  ViewsText__ReInit( &_this->Text3 );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler1 );
  ViewsText__ReInit( &_this->Text1 );
  WidgetSetHorizontalScrollbar__ReInit( &_this->HorizontalScrollbar );
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsImage__ReInit( &_this->Image1 );
  EffectsFadeInOutTransition__ReInit( &_this->FadeInOutTransition );
  EffectsInt32Effect__ReInit( &_this->Int32Effect );
  ViewsImage__ReInit( &_this->start );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler );
  ViewsImage__ReInit( &_this->stop );
  ViewsText__ReInit( &_this->Text4 );
  ViewsText__ReInit( &_this->Text5 );
}

/* Finalizer method for the class 'Application::WeedScreen' */
void ApplicationWeedScreen__Done( ApplicationWeedScreen _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ApplicationBaseScreen );

  /* Finalize all embedded objects */
  ViewsImage__Done( &_this->Image );
  ViewsText__Done( &_this->Text );
  ViewsText__Done( &_this->Text2 );
  ViewsText__Done( &_this->Text3 );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler1 );
  ViewsText__Done( &_this->Text1 );
  WidgetSetHorizontalScrollbar__Done( &_this->HorizontalScrollbar );
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsImage__Done( &_this->Image1 );
  EffectsFadeInOutTransition__Done( &_this->FadeInOutTransition );
  EffectsInt32Effect__Done( &_this->Int32Effect );
  ViewsImage__Done( &_this->start );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler );
  ViewsImage__Done( &_this->stop );
  ViewsText__Done( &_this->Text4 );
  ViewsText__Done( &_this->Text5 );

  /* Don't forget to deinitialize the super class ... */
  ApplicationBaseScreen__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationWeedScreen_Init( ApplicationWeedScreen _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aArg );
}

/* 'C' function for method : 'Application::WeedScreen.GoToHome()' */
void ApplicationWeedScreen_GoToHome( ApplicationWeedScreen _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_SwitchToDialog( _this->Super4.Owner, ((CoreGroup)EwNewObject( ApplicationHomeScreen, 
  0 )), ((EffectsTransition)&_this->FadeInOutTransition ), 0, 0, 0, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
  EwTrace( "%s", EwLoadString( &_Const0002 ));
}

/* 'C' function for method : 'Application::WeedScreen.StartPress()' */
void ApplicationWeedScreen_StartPress( ApplicationWeedScreen _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( ViewsImage_OnGetVisible( &_this->stop ))
  {
    ViewsImage_OnSetVisible( &_this->stop, 0 );
    ViewsImage_OnSetVisible( &_this->start, 1 );
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->Int32Effect, 0 );
    EwTrace( "%s", EwLoadString( &_Const001D ));
    ViewsText_OnSetVisible( &_this->Text5, 1 );
    return;
  }
  else
    if ( ViewsImage_OnGetVisible( &_this->start ))
    {
      ViewsImage_OnSetVisible( &_this->start, 0 );
      ViewsImage_OnSetVisible( &_this->stop, 1 );
      EffectsEffect_OnSetEnabled((EffectsEffect)&_this->Int32Effect, 1 );
      EwTrace( "%s", EwLoadString( &_Const001E ));
      ViewsText_OnSetVisible( &_this->Text4, 1 );
      return;
    }
}

/* 'C' function for method : 'Application::WeedScreen.OnSetProperty1()' */
void ApplicationWeedScreen_OnSetProperty1( ApplicationWeedScreen _this, XInt32 value )
{
  if ( _this->Property1 == value )
    return;

  _this->Property1 = value;
  ViewsText_OnSetString( &_this->Text3, EwNewStringInt( value, 0, 10 ));
}

/* Default onget method for the property 'Property1' */
XInt32 ApplicationWeedScreen_OnGetProperty1( ApplicationWeedScreen _this )
{
  return _this->Property1;
}

/* Variants derived from the class : 'Application::WeedScreen' */
EW_DEFINE_CLASS_VARIANTS( ApplicationWeedScreen )
EW_END_OF_CLASS_VARIANTS( ApplicationWeedScreen )

/* Virtual Method Table (VMT) for the class : 'Application::WeedScreen' */
EW_DEFINE_CLASS( ApplicationWeedScreen, ApplicationBaseScreen, Image, Property1, 
                 Property1, Property1, Property1, Property1, "Application::WeedScreen" )
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
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( ApplicationWeedScreen )

/* Initializer for the class 'Application::SensorScreen' */
void ApplicationSensorScreen__Init( ApplicationSensorScreen _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ApplicationBaseScreen__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationSensorScreen );

  /* ... then construct all embedded objects */
  ViewsImage__Init( &_this->Image, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  WidgetSetGauge__Init( &_this->Gauge, &_this->_.XObject, 0 );
  WidgetSetGauge__Init( &_this->Gauge1, &_this->_.XObject, 0 );
  WidgetSetValueDisplay__Init( &_this->ValueDisplay, &_this->_.XObject, 0 );
  WidgetSetVerticalValueBar__Init( &_this->VerticalValueBar, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text2, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text3, &_this->_.XObject, 0 );
  WidgetSetValueDisplay__Init( &_this->ValueDisplay1, &_this->_.XObject, 0 );
  EffectsFadeInOutTransition__Init( &_this->FadeInOutTransition, &_this->_.XObject, 0 );
  EffectsInt32Effect__Init( &_this->Int32Effect, &_this->_.XObject, 0 );
  WidgetSetValueDisplayConfig__Init( &_this->ValueDisplayConfig, &_this->_.XObject, 0 );
  EffectsInt32Effect__Init( &_this->Int33Effect, &_this->_.XObject, 0 );
  EffectsInt32Effect__Init( &_this->Int34Effect, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationSensorScreen );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( &_this->Image, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Text, _Const0020 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0021 ));
  ViewsText_OnSetColor( &_this->Text, _Const0005 );
  CoreRectView__OnSetBounds( &_this->Gauge, _Const0022 );
  CoreRectView__OnSetBounds( &_this->Gauge1, _Const0023 );
  CoreRectView__OnSetBounds( &_this->ValueDisplay, _Const0024 );
  WidgetSetValueDisplay_OnSetUnit( &_this->ValueDisplay, EwLoadString( &_Const0025 ));
  WidgetSetValueDisplay_OnSetPrecision( &_this->ValueDisplay, 1 );
  CoreRectView__OnSetBounds( &_this->VerticalValueBar, _Const0026 );
  WidgetSetVerticalValueBar_OnSetCurrentValue( &_this->VerticalValueBar, 0 );
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler1, _Const000D );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler1, _Const000E );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler1, _Const000F );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler1, _Const0010 );
  CoreRectView__OnSetBounds( &_this->Text1, _Const0027 );
  ViewsText_OnSetString( &_this->Text1, EwLoadString( &_Const0028 ));
  CoreRectView__OnSetBounds( &_this->Text2, _Const0029 );
  ViewsText_OnSetString( &_this->Text2, EwLoadString( &_Const002A ));
  CoreRectView__OnSetBounds( &_this->Text3, _Const002B );
  ViewsText_OnSetString( &_this->Text3, EwLoadString( &_Const002C ));
  CoreRectView__OnSetBounds( &_this->ValueDisplay1, _Const002D );
  WidgetSetValueDisplay_OnSetUnit( &_this->ValueDisplay1, EwLoadString( &_Const002E ));
  WidgetSetValueDisplay_OnSetPrecision( &_this->ValueDisplay1, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->Int32Effect, 10000 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->Int32Effect, 1 );
  _this->Int32Effect.Value2 = 57;
  _this->Int32Effect.Value1 = 54;
  WidgetSetValueDisplayConfig_OnSetValueColorNegative( &_this->ValueDisplayConfig, 
  _Const002F );
  WidgetSetValueDisplayConfig_OnSetValueColorPositive( &_this->ValueDisplayConfig, 
  _Const0030 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->Int33Effect, 1000 );
  EffectsEffect_OnSetInitialDelay((EffectsEffect)&_this->Int33Effect, 2000 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->Int33Effect, 1 );
  _this->Int33Effect.Value2 = 30;
  _this->Int33Effect.Value1 = 27;
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->Int34Effect, 1000 );
  EffectsEffect_OnSetInitialDelay((EffectsEffect)&_this->Int34Effect, 3000 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->Int34Effect, 1 );
  _this->Int34Effect.Value2 = 6;
  _this->Int34Effect.Value1 = 3;
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Image ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Gauge ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Gauge1 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->ValueDisplay ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->VerticalValueBar ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->SimpleTouchHandler1 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text1 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text2 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text3 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->ValueDisplay1 ), 0 );
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ResourceBmp_2, ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResourceFont1, ResourcesFont ));
  _this->Gauge.OnUpdate = EwNewSlot( _this, ApplicationSensorScreen_Slot );
  WidgetSetGauge_OnSetAppearance( &_this->Gauge, EwGetAutoObject( &WidgetSetGauge_Mono_Medium, 
  WidgetSetGaugeConfig ));
  _this->Gauge1.OnUpdate = EwNewSlot( _this, ApplicationSensorScreen_Slot1 );
  WidgetSetGauge_OnSetAppearance( &_this->Gauge1, EwGetAutoObject( &WidgetSetGauge_Mono_Medium, 
  WidgetSetGaugeConfig ));
  WidgetSetValueDisplay_OnSetOutlet( &_this->ValueDisplay, EwNewRef( &_this->Gauge, 
  WidgetSetGauge_OnGetCurrentValue, WidgetSetGauge_OnSetCurrentValue ));
  WidgetSetValueDisplay_OnSetAppearance( &_this->ValueDisplay, EwGetAutoObject( 
  &WidgetSetValueDisplay_Mono_Small, WidgetSetValueDisplayConfig ));
  WidgetSetVerticalValueBar_OnSetAppearance( &_this->VerticalValueBar, EwGetAutoObject( 
  &WidgetSetVerticalValueBar_Mono_Medium, WidgetSetVerticalValueBarConfig ));
  _this->SimpleTouchHandler1.OnPress = EwNewSlot( _this, ApplicationSensorScreen_GoToHome );
  ViewsText_OnSetFont( &_this->Text1, EwLoadResource( &ResourceFont, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text2, EwLoadResource( &ResourceFont, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text3, EwLoadResource( &ResourceFont, ResourcesFont ));
  WidgetSetValueDisplay_OnSetOutlet( &_this->ValueDisplay1, EwNewRef( &_this->Gauge1, 
  WidgetSetGauge_OnGetCurrentValue, WidgetSetGauge_OnSetCurrentValue ));
  WidgetSetValueDisplay_OnSetAppearance( &_this->ValueDisplay1, EwGetAutoObject( 
  &WidgetSetValueDisplay_Mono_Small, WidgetSetValueDisplayConfig ));
  _this->Int32Effect.Outlet = EwNewRef( &_this->Gauge, WidgetSetGauge_OnGetCurrentValue, 
  WidgetSetGauge_OnSetCurrentValue );
  _this->Int33Effect.Outlet = EwNewRef( &_this->Gauge1, WidgetSetGauge_OnGetCurrentValue, 
  WidgetSetGauge_OnSetCurrentValue );
  _this->Int34Effect.Outlet = EwNewRef( &_this->VerticalValueBar, WidgetSetVerticalValueBar_OnGetCurrentValue, 
  WidgetSetVerticalValueBar_OnSetCurrentValue );

  /* Call the user defined constructor */
  ApplicationSensorScreen_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::SensorScreen' */
void ApplicationSensorScreen__ReInit( ApplicationSensorScreen _this )
{
  /* At first re-initialize the super class ... */
  ApplicationBaseScreen__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsImage__ReInit( &_this->Image );
  ViewsText__ReInit( &_this->Text );
  WidgetSetGauge__ReInit( &_this->Gauge );
  WidgetSetGauge__ReInit( &_this->Gauge1 );
  WidgetSetValueDisplay__ReInit( &_this->ValueDisplay );
  WidgetSetVerticalValueBar__ReInit( &_this->VerticalValueBar );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler1 );
  ViewsText__ReInit( &_this->Text1 );
  ViewsText__ReInit( &_this->Text2 );
  ViewsText__ReInit( &_this->Text3 );
  WidgetSetValueDisplay__ReInit( &_this->ValueDisplay1 );
  EffectsFadeInOutTransition__ReInit( &_this->FadeInOutTransition );
  EffectsInt32Effect__ReInit( &_this->Int32Effect );
  WidgetSetValueDisplayConfig__ReInit( &_this->ValueDisplayConfig );
  EffectsInt32Effect__ReInit( &_this->Int33Effect );
  EffectsInt32Effect__ReInit( &_this->Int34Effect );
}

/* Finalizer method for the class 'Application::SensorScreen' */
void ApplicationSensorScreen__Done( ApplicationSensorScreen _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ApplicationBaseScreen );

  /* Finalize all embedded objects */
  ViewsImage__Done( &_this->Image );
  ViewsText__Done( &_this->Text );
  WidgetSetGauge__Done( &_this->Gauge );
  WidgetSetGauge__Done( &_this->Gauge1 );
  WidgetSetValueDisplay__Done( &_this->ValueDisplay );
  WidgetSetVerticalValueBar__Done( &_this->VerticalValueBar );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler1 );
  ViewsText__Done( &_this->Text1 );
  ViewsText__Done( &_this->Text2 );
  ViewsText__Done( &_this->Text3 );
  WidgetSetValueDisplay__Done( &_this->ValueDisplay1 );
  EffectsFadeInOutTransition__Done( &_this->FadeInOutTransition );
  EffectsInt32Effect__Done( &_this->Int32Effect );
  WidgetSetValueDisplayConfig__Done( &_this->ValueDisplayConfig );
  EffectsInt32Effect__Done( &_this->Int33Effect );
  EffectsInt32Effect__Done( &_this->Int34Effect );

  /* Don't forget to deinitialize the super class ... */
  ApplicationBaseScreen__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationSensorScreen_Init( ApplicationSensorScreen _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aArg );
}

/* 'C' function for method : 'Application::SensorScreen.GoToHome()' */
void ApplicationSensorScreen_GoToHome( ApplicationSensorScreen _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_SwitchToDialog( _this->Super4.Owner, ((CoreGroup)EwNewObject( ApplicationHomeScreen, 
  0 )), ((EffectsTransition)&_this->FadeInOutTransition ), 0, 0, 0, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
  EwTrace( "%s", EwLoadString( &_Const0002 ));
}

/* 'C' function for method : 'Application::SensorScreen.Slot()' */
void ApplicationSensorScreen_Slot( ApplicationSensorScreen _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  WidgetSetValueDisplay_OnSetCurrentValue( &_this->ValueDisplay1, WidgetSetGauge_OnGetCurrentValue( 
  &_this->Gauge1 ));
}

/* 'C' function for method : 'Application::SensorScreen.Slot1()' */
void ApplicationSensorScreen_Slot1( ApplicationSensorScreen _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  WidgetSetValueDisplay_OnSetCurrentValue( &_this->ValueDisplay, WidgetSetGauge_OnGetCurrentValue( 
  &_this->Gauge ));
}

/* Variants derived from the class : 'Application::SensorScreen' */
EW_DEFINE_CLASS_VARIANTS( ApplicationSensorScreen )
EW_END_OF_CLASS_VARIANTS( ApplicationSensorScreen )

/* Virtual Method Table (VMT) for the class : 'Application::SensorScreen' */
EW_DEFINE_CLASS( ApplicationSensorScreen, ApplicationBaseScreen, Image, _.VMT, _.VMT, 
                 _.VMT, _.VMT, _.VMT, "Application::SensorScreen" )
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
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( ApplicationSensorScreen )

/* Initializer for the class 'Application::HomeScreen' */
void ApplicationHomeScreen__Init( ApplicationHomeScreen _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ApplicationBaseScreen__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationHomeScreen );

  /* ... then construct all embedded objects */
  ViewsImage__Init( &_this->Image, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->SettingsButton, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->SensorButton, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->CottonButton, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->WeedButton, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image3, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image1, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image4, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image5, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text2, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text3, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text4, &_this->_.XObject, 0 );
  EffectsScaleTransition__Init( &_this->ScaleTransition, &_this->_.XObject, 0 );
  EffectsFadeInOutTransition__Init( &_this->FadeInOutTransition, &_this->_.XObject, 0 );
  EffectsSlideTransition__Init( &_this->SlideTransition, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationHomeScreen );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( &_this->Image, _Const0000 );
  ViewsImage_OnSetOpacity( &_this->Image, 255 );
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler, _Const000D );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler, _Const000E );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler, _Const0031 );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler, _Const0032 );
  CoreRectView__OnSetBounds( &_this->SettingsButton, _Const0033 );
  WidgetSetPushButton_OnSetLabel( &_this->SettingsButton, 0 );
  CoreRectView__OnSetBounds( &_this->SensorButton, _Const0034 );
  WidgetSetPushButton_OnSetLabel( &_this->SensorButton, 0 );
  CoreRectView__OnSetBounds( &_this->CottonButton, _Const0035 );
  WidgetSetPushButton_OnSetLabel( &_this->CottonButton, 0 );
  CoreRectView__OnSetBounds( &_this->WeedButton, _Const0036 );
  WidgetSetPushButton_OnSetLabel( &_this->WeedButton, 0 );
  CoreRectView__OnSetBounds( &_this->Image3, _Const0037 );
  CoreRectView__OnSetBounds( &_this->Image1, _Const0038 );
  CoreRectView__OnSetBounds( &_this->Image4, _Const0039 );
  CoreRectView__OnSetBounds( &_this->Image5, _Const003A );
  CoreRectView__OnSetBounds( &_this->Text, _Const003B );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const003C ));
  ViewsText_OnSetColor( &_this->Text, _Const0005 );
  CoreRectView__OnSetBounds( &_this->Text1, _Const003D );
  ViewsText_OnSetString( &_this->Text1, EwLoadString( &_Const003E ));
  ViewsText_OnSetColor( &_this->Text1, _Const0005 );
  CoreRectView__OnSetBounds( &_this->Text2, _Const003F );
  ViewsText_OnSetString( &_this->Text2, EwLoadString( &_Const0040 ));
  ViewsText_OnSetColor( &_this->Text2, _Const0005 );
  CoreRectView__OnSetBounds( &_this->Text3, _Const0041 );
  ViewsText_OnSetString( &_this->Text3, EwLoadString( &_Const0042 ));
  ViewsText_OnSetColor( &_this->Text3, _Const0005 );
  CoreRectView__OnSetBounds( &_this->Text4, _Const0043 );
  ViewsText_OnSetString( &_this->Text4, EwLoadString( &_Const0044 ));
  ViewsText_OnSetColor( &_this->Text4, _Const0005 );
  _this->ScaleTransition.Alignment = EffectsDialogAlignmentAlignHorzCenter | EffectsDialogAlignmentAlignHorzLeft 
  | EffectsDialogAlignmentAlignVertCenter;
  _this->SlideTransition.Direction = CoreDirectionBottomRight;
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Image ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->SimpleTouchHandler ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->SettingsButton ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->SensorButton ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->CottonButton ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->WeedButton ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Image3 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Image1 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Image4 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Image5 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text1 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text2 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text3 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text4 ), 0 );
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ResourceBmp_2, ResourcesBitmap ));
  _this->SimpleTouchHandler.OnPress = EwNewSlot( _this, ApplicationHomeScreen_GoToBoot );
  _this->SettingsButton.OnPress = EwNewSlot( _this, ApplicationHomeScreen_GoToSet );
  WidgetSetPushButton_OnSetAppearance( &_this->SettingsButton, EwGetAutoObject( 
  &WidgetSetPushButton_Mono_Medium, WidgetSetPushButtonConfig ));
  _this->SensorButton.OnPress = EwNewSlot( _this, ApplicationHomeScreen_GoToSensor );
  WidgetSetPushButton_OnSetAppearance( &_this->SensorButton, EwGetAutoObject( &WidgetSetPushButton_Mono_Medium, 
  WidgetSetPushButtonConfig ));
  _this->CottonButton.OnPress = EwNewSlot( _this, ApplicationHomeScreen_GoToCot );
  WidgetSetPushButton_OnSetAppearance( &_this->CottonButton, EwGetAutoObject( &WidgetSetPushButton_Mono_Medium, 
  WidgetSetPushButtonConfig ));
  _this->WeedButton.OnPress = EwNewSlot( _this, ApplicationHomeScreen_GoToWeed );
  WidgetSetPushButton_OnSetAppearance( &_this->WeedButton, EwGetAutoObject( &WidgetSetPushButton_Mono_Medium, 
  WidgetSetPushButtonConfig ));
  ViewsImage_OnSetBitmap( &_this->Image3, EwLoadResource( &Resourcecotton, ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->Image1, EwLoadResource( &Resourcesecurity1, ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->Image4, EwLoadResource( &Resourcegrass1, ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->Image5, EwLoadResource( &Resourcegear1, ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResourceFont1, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text1, EwLoadResource( &ResourceFont1, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text2, EwLoadResource( &ResourceFont1, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text3, EwLoadResource( &ResourceFont1, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text4, EwLoadResource( &ResourceFont1, ResourcesFont ));

  /* Call the user defined constructor */
  ApplicationHomeScreen_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::HomeScreen' */
void ApplicationHomeScreen__ReInit( ApplicationHomeScreen _this )
{
  /* At first re-initialize the super class ... */
  ApplicationBaseScreen__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsImage__ReInit( &_this->Image );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler );
  WidgetSetPushButton__ReInit( &_this->SettingsButton );
  WidgetSetPushButton__ReInit( &_this->SensorButton );
  WidgetSetPushButton__ReInit( &_this->CottonButton );
  WidgetSetPushButton__ReInit( &_this->WeedButton );
  ViewsImage__ReInit( &_this->Image3 );
  ViewsImage__ReInit( &_this->Image1 );
  ViewsImage__ReInit( &_this->Image4 );
  ViewsImage__ReInit( &_this->Image5 );
  ViewsText__ReInit( &_this->Text );
  ViewsText__ReInit( &_this->Text1 );
  ViewsText__ReInit( &_this->Text2 );
  ViewsText__ReInit( &_this->Text3 );
  ViewsText__ReInit( &_this->Text4 );
  EffectsScaleTransition__ReInit( &_this->ScaleTransition );
  EffectsFadeInOutTransition__ReInit( &_this->FadeInOutTransition );
  EffectsSlideTransition__ReInit( &_this->SlideTransition );
}

/* Finalizer method for the class 'Application::HomeScreen' */
void ApplicationHomeScreen__Done( ApplicationHomeScreen _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ApplicationBaseScreen );

  /* Finalize all embedded objects */
  ViewsImage__Done( &_this->Image );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler );
  WidgetSetPushButton__Done( &_this->SettingsButton );
  WidgetSetPushButton__Done( &_this->SensorButton );
  WidgetSetPushButton__Done( &_this->CottonButton );
  WidgetSetPushButton__Done( &_this->WeedButton );
  ViewsImage__Done( &_this->Image3 );
  ViewsImage__Done( &_this->Image1 );
  ViewsImage__Done( &_this->Image4 );
  ViewsImage__Done( &_this->Image5 );
  ViewsText__Done( &_this->Text );
  ViewsText__Done( &_this->Text1 );
  ViewsText__Done( &_this->Text2 );
  ViewsText__Done( &_this->Text3 );
  ViewsText__Done( &_this->Text4 );
  EffectsScaleTransition__Done( &_this->ScaleTransition );
  EffectsFadeInOutTransition__Done( &_this->FadeInOutTransition );
  EffectsSlideTransition__Done( &_this->SlideTransition );

  /* Don't forget to deinitialize the super class ... */
  ApplicationBaseScreen__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationHomeScreen_Init( ApplicationHomeScreen _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aArg );
}

/* 'C' function for method : 'Application::HomeScreen.GoToBoot()' */
void ApplicationHomeScreen_GoToBoot( ApplicationHomeScreen _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_SwitchToDialog( _this->Super4.Owner, ((CoreGroup)EwNewObject( ApplicationBootScreen, 
  0 )), ((EffectsTransition)&_this->SlideTransition ), 0, 0, 0, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
  EwTrace( "%s", EwLoadString( &_Const0045 ));
}

/* 'C' function for method : 'Application::HomeScreen.GoToCot()' */
void ApplicationHomeScreen_GoToCot( ApplicationHomeScreen _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_SwitchToDialog( _this->Super4.Owner, ((CoreGroup)EwNewObject( ApplicationCottonScreen, 
  0 )), ((EffectsTransition)&_this->FadeInOutTransition ), 0, 0, 0, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
  EwTrace( "%s", EwLoadString( &_Const0046 ));
}

/* 'C' function for method : 'Application::HomeScreen.GoToWeed()' */
void ApplicationHomeScreen_GoToWeed( ApplicationHomeScreen _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_SwitchToDialog( _this->Super4.Owner, ((CoreGroup)EwNewObject( ApplicationWeedScreen, 
  0 )), ((EffectsTransition)&_this->FadeInOutTransition ), 0, 0, 0, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
  EwTrace( "%s", EwLoadString( &_Const0047 ));
}

/* 'C' function for method : 'Application::HomeScreen.GoToSet()' */
void ApplicationHomeScreen_GoToSet( ApplicationHomeScreen _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_SwitchToDialog( _this->Super4.Owner, ((CoreGroup)EwNewObject( ApplicationSettingScreen, 
  0 )), ((EffectsTransition)&_this->FadeInOutTransition ), 0, 0, 0, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
  EwTrace( "%s", EwLoadString( &_Const0048 ));
}

/* 'C' function for method : 'Application::HomeScreen.GoToSensor()' */
void ApplicationHomeScreen_GoToSensor( ApplicationHomeScreen _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_SwitchToDialog( _this->Super4.Owner, ((CoreGroup)EwNewObject( ApplicationSensorScreen, 
  0 )), ((EffectsTransition)&_this->ScaleTransition ), 0, 0, 0, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
  EwTrace( "%s", EwLoadString( &_Const0049 ));
}

/* Variants derived from the class : 'Application::HomeScreen' */
EW_DEFINE_CLASS_VARIANTS( ApplicationHomeScreen )
EW_END_OF_CLASS_VARIANTS( ApplicationHomeScreen )

/* Virtual Method Table (VMT) for the class : 'Application::HomeScreen' */
EW_DEFINE_CLASS( ApplicationHomeScreen, ApplicationBaseScreen, Image, _.VMT, _.VMT, 
                 _.VMT, _.VMT, _.VMT, "Application::HomeScreen" )
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
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( ApplicationHomeScreen )

/* Initializer for the class 'Application::SettingScreen' */
void ApplicationSettingScreen__Init( ApplicationSettingScreen _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ApplicationBaseScreen__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationSettingScreen );

  /* ... then construct all embedded objects */
  ViewsImage__Init( &_this->Image, &_this->_.XObject, 0 );
  WidgetSetToggleButton__Init( &_this->ToggleButton, &_this->_.XObject, 0 );
  WidgetSetHorizontalSlider__Init( &_this->HorizontalSlider, &_this->_.XObject, 0 );
  WidgetSetHorizontalSlider__Init( &_this->HorizontalSlider1, &_this->_.XObject, 0 );
  WidgetSetToggleButton__Init( &_this->ToggleButton1, &_this->_.XObject, 0 );
  WidgetSetToggleButton__Init( &_this->ToggleButton2, &_this->_.XObject, 0 );
  WidgetSetToggleButtonConfig__Init( &_this->ToggleButtonConfig, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text3, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text4, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Wifi, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Wifi1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Wifi2, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->PushButton, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text5, &_this->_.XObject, 0 );
  EffectsSlideTransition__Init( &_this->SlideTransition, &_this->_.XObject, 0 );
  EffectsFadeInOutTransition__Init( &_this->FadeInOutTransition, &_this->_.XObject, 0 );
  WidgetSetPushButtonConfig__Init( &_this->PushButtonConfig, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationSettingScreen );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( &_this->Image, _Const0000 );
  CoreRectView__OnSetBounds( &_this->ToggleButton, _Const004A );
  WidgetSetToggleButton_OnSetLabel( &_this->ToggleButton, EwLoadString( &_Const004B ));
  CoreRectView__OnSetBounds( &_this->HorizontalSlider, _Const004C );
  CoreRectView__OnSetBounds( &_this->HorizontalSlider1, _Const004D );
  CoreRectView__OnSetBounds( &_this->ToggleButton1, _Const004E );
  WidgetSetToggleButton_OnSetLabel( &_this->ToggleButton1, EwLoadString( &_Const004B ));
  CoreRectView__OnSetBounds( &_this->ToggleButton2, _Const004F );
  WidgetSetToggleButton_OnSetLabel( &_this->ToggleButton2, EwLoadString( &_Const004B ));
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler1, _Const000D );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler1, _Const000E );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler1, _Const000F );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler1, _Const0010 );
  CoreRectView__OnSetBounds( &_this->Text3, _Const0050 );
  ViewsText_OnSetString( &_this->Text3, EwLoadString( &_Const0051 ));
  CoreRectView__OnSetBounds( &_this->Text4, _Const0052 );
  ViewsText_OnSetString( &_this->Text4, EwLoadString( &_Const0053 ));
  CoreRectView__OnSetBounds( &_this->Wifi, _Const0054 );
  ViewsText_OnSetString( &_this->Wifi, EwLoadString( &_Const0055 ));
  CoreRectView__OnSetBounds( &_this->Wifi1, _Const0056 );
  ViewsText_OnSetString( &_this->Wifi1, EwLoadString( &_Const0057 ));
  CoreRectView__OnSetBounds( &_this->Wifi2, _Const0058 );
  ViewsText_OnSetString( &_this->Wifi2, EwLoadString( &_Const0059 ));
  CoreRectView__OnSetBounds( &_this->Text, _Const003B );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0042 ));
  ViewsText_OnSetColor( &_this->Text, _Const0005 );
  CoreRectView__OnSetBounds( &_this->PushButton, _Const005A );
  WidgetSetPushButton_OnSetLabel( &_this->PushButton, 0 );
  CoreRectView__OnSetBounds( &_this->Text5, _Const005B );
  ViewsText_OnSetString( &_this->Text5, EwLoadString( &_Const005C ));
  ViewsText_OnSetColor( &_this->Text5, _Const005D );
  _this->SlideTransition.Direction = CoreDirectionBottom;
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Image ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->ToggleButton ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->HorizontalSlider ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->HorizontalSlider1 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->ToggleButton1 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->ToggleButton2 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->SimpleTouchHandler1 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text3 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text4 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Wifi ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Wifi1 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Wifi2 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->PushButton ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text5 ), 0 );
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ResourceBmp_2, ResourcesBitmap ));
  WidgetSetToggleButton_OnSetAppearance( &_this->ToggleButton, EwGetAutoObject( 
  &WidgetSetSwitch_Mono_Medium, WidgetSetToggleButtonConfig ));
  WidgetSetHorizontalSlider_OnSetAppearance( &_this->HorizontalSlider, EwGetAutoObject( 
  &WidgetSetHorizontalSlider_Mono_Medium, WidgetSetHorizontalSliderConfig ));
  WidgetSetHorizontalSlider_OnSetAppearance( &_this->HorizontalSlider1, EwGetAutoObject( 
  &WidgetSetHorizontalSlider_Mono_Medium, WidgetSetHorizontalSliderConfig ));
  WidgetSetToggleButton_OnSetAppearance( &_this->ToggleButton1, EwGetAutoObject( 
  &WidgetSetSwitch_Mono_Medium, WidgetSetToggleButtonConfig ));
  WidgetSetToggleButton_OnSetAppearance( &_this->ToggleButton2, EwGetAutoObject( 
  &WidgetSetSwitch_Mono_Medium, WidgetSetToggleButtonConfig ));
  _this->SimpleTouchHandler1.OnPress = EwNewSlot( _this, ApplicationSettingScreen_GoToHome );
  ViewsText_OnSetFont( &_this->Text3, EwLoadResource( &ResourceFont, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text4, EwLoadResource( &ResourceFont, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Wifi, EwLoadResource( &ResourceFont, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Wifi1, EwLoadResource( &ResourceFont, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Wifi2, EwLoadResource( &ResourceFont, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResourceFont1, ResourcesFont ));
  _this->PushButton.OnPress = EwNewSlot( _this, ApplicationSettingScreen_GoToNav );
  WidgetSetPushButton_OnSetIcon( &_this->PushButton, EwLoadResource( &Resourcetractor1, 
  ResourcesBitmap ));
  WidgetSetPushButton_OnSetAppearance( &_this->PushButton, EwGetAutoObject( &WidgetSetPushButton_Mono_Small, 
  WidgetSetPushButtonConfig ));
  ViewsText_OnSetFont( &_this->Text5, EwLoadResource( &ResourceFont, ResourcesFont ));
  WidgetSetPushButtonConfig_OnSetFaceBitmapDefault( &_this->PushButtonConfig, EwLoadResource( 
  &Resourceright_arrow1, ResourcesBitmap ));

  /* Call the user defined constructor */
  ApplicationSettingScreen_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::SettingScreen' */
void ApplicationSettingScreen__ReInit( ApplicationSettingScreen _this )
{
  /* At first re-initialize the super class ... */
  ApplicationBaseScreen__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsImage__ReInit( &_this->Image );
  WidgetSetToggleButton__ReInit( &_this->ToggleButton );
  WidgetSetHorizontalSlider__ReInit( &_this->HorizontalSlider );
  WidgetSetHorizontalSlider__ReInit( &_this->HorizontalSlider1 );
  WidgetSetToggleButton__ReInit( &_this->ToggleButton1 );
  WidgetSetToggleButton__ReInit( &_this->ToggleButton2 );
  WidgetSetToggleButtonConfig__ReInit( &_this->ToggleButtonConfig );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler1 );
  ViewsText__ReInit( &_this->Text3 );
  ViewsText__ReInit( &_this->Text4 );
  ViewsText__ReInit( &_this->Wifi );
  ViewsText__ReInit( &_this->Wifi1 );
  ViewsText__ReInit( &_this->Wifi2 );
  ViewsText__ReInit( &_this->Text );
  WidgetSetPushButton__ReInit( &_this->PushButton );
  ViewsText__ReInit( &_this->Text5 );
  EffectsSlideTransition__ReInit( &_this->SlideTransition );
  EffectsFadeInOutTransition__ReInit( &_this->FadeInOutTransition );
  WidgetSetPushButtonConfig__ReInit( &_this->PushButtonConfig );
}

/* Finalizer method for the class 'Application::SettingScreen' */
void ApplicationSettingScreen__Done( ApplicationSettingScreen _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ApplicationBaseScreen );

  /* Finalize all embedded objects */
  ViewsImage__Done( &_this->Image );
  WidgetSetToggleButton__Done( &_this->ToggleButton );
  WidgetSetHorizontalSlider__Done( &_this->HorizontalSlider );
  WidgetSetHorizontalSlider__Done( &_this->HorizontalSlider1 );
  WidgetSetToggleButton__Done( &_this->ToggleButton1 );
  WidgetSetToggleButton__Done( &_this->ToggleButton2 );
  WidgetSetToggleButtonConfig__Done( &_this->ToggleButtonConfig );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler1 );
  ViewsText__Done( &_this->Text3 );
  ViewsText__Done( &_this->Text4 );
  ViewsText__Done( &_this->Wifi );
  ViewsText__Done( &_this->Wifi1 );
  ViewsText__Done( &_this->Wifi2 );
  ViewsText__Done( &_this->Text );
  WidgetSetPushButton__Done( &_this->PushButton );
  ViewsText__Done( &_this->Text5 );
  EffectsSlideTransition__Done( &_this->SlideTransition );
  EffectsFadeInOutTransition__Done( &_this->FadeInOutTransition );
  WidgetSetPushButtonConfig__Done( &_this->PushButtonConfig );

  /* Don't forget to deinitialize the super class ... */
  ApplicationBaseScreen__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationSettingScreen_Init( ApplicationSettingScreen _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aArg );
}

/* 'C' function for method : 'Application::SettingScreen.GoToHome()' */
void ApplicationSettingScreen_GoToHome( ApplicationSettingScreen _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_SwitchToDialog( _this->Super4.Owner, ((CoreGroup)EwNewObject( ApplicationHomeScreen, 
  0 )), ((EffectsTransition)&_this->FadeInOutTransition ), 0, 0, 0, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
  EwTrace( "%s", EwLoadString( &_Const0002 ));
}

/* 'C' function for method : 'Application::SettingScreen.GoToNav()' */
void ApplicationSettingScreen_GoToNav( ApplicationSettingScreen _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_SwitchToDialog( _this->Super4.Owner, ((CoreGroup)EwNewObject( ApplicationNavScreen, 
  0 )), ((EffectsTransition)&_this->SlideTransition ), 0, 0, 0, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
  EwTrace( "%s", EwLoadString( &_Const005E ));
}

/* Variants derived from the class : 'Application::SettingScreen' */
EW_DEFINE_CLASS_VARIANTS( ApplicationSettingScreen )
EW_END_OF_CLASS_VARIANTS( ApplicationSettingScreen )

/* Virtual Method Table (VMT) for the class : 'Application::SettingScreen' */
EW_DEFINE_CLASS( ApplicationSettingScreen, ApplicationBaseScreen, Image, _.VMT, 
                 _.VMT, _.VMT, _.VMT, _.VMT, "Application::SettingScreen" )
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
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( ApplicationSettingScreen )

/* Initializer for the class 'Application::NavScreen' */
void ApplicationNavScreen__Init( ApplicationNavScreen _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ApplicationBaseScreen__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationNavScreen );

  /* ... then construct all embedded objects */
  ViewsImage__Init( &_this->Image, &_this->_.XObject, 0 );
  WidgetSetToggleButton__Init( &_this->ToggleButton, &_this->_.XObject, 0 );
  WidgetSetHorizontalSlider__Init( &_this->HorizontalSlider, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text3, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Wifi1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Wifi2, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  EffectsSlideTransition__Init( &_this->SlideTransition, &_this->_.XObject, 0 );
  WidgetSetPushButtonConfig__Init( &_this->PushButtonConfig, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->PushButton1, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->PushButton2, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->PushButton3, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->PushButton4, &_this->_.XObject, 0 );
  WidgetSetPushButtonConfig__Init( &_this->PushButtonConfig1, &_this->_.XObject, 0 );
  WidgetSetPushButtonConfig__Init( &_this->PushButtonConfig2, &_this->_.XObject, 0 );
  WidgetSetPushButtonConfig__Init( &_this->PushButtonConfig3, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationNavScreen );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( &_this->Image, _Const0000 );
  CoreRectView__OnSetBounds( &_this->ToggleButton, _Const005F );
  WidgetSetToggleButton_OnSetLabel( &_this->ToggleButton, EwLoadString( &_Const004B ));
  CoreRectView__OnSetBounds( &_this->HorizontalSlider, _Const0060 );
  CoreQuadView__OnSetPoint4( &_this->SimpleTouchHandler1, _Const000D );
  CoreQuadView__OnSetPoint3( &_this->SimpleTouchHandler1, _Const000E );
  CoreQuadView__OnSetPoint2( &_this->SimpleTouchHandler1, _Const000F );
  CoreQuadView__OnSetPoint1( &_this->SimpleTouchHandler1, _Const0010 );
  CoreRectView__OnSetBounds( &_this->Text3, _Const0061 );
  ViewsText_OnSetString( &_this->Text3, EwLoadString( &_Const0051 ));
  CoreRectView__OnSetBounds( &_this->Wifi1, _Const0062 );
  ViewsText_OnSetString( &_this->Wifi1, EwLoadString( &_Const0063 ));
  CoreRectView__OnSetBounds( &_this->Wifi2, _Const0064 );
  ViewsText_OnSetString( &_this->Wifi2, EwLoadString( &_Const0065 ));
  CoreRectView__OnSetBounds( &_this->Text, _Const003B );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0066 ));
  ViewsText_OnSetColor( &_this->Text, _Const0005 );
  _this->SlideTransition.Direction = CoreDirectionTop;
  CoreRectView__OnSetBounds( &_this->PushButton1, _Const0067 );
  WidgetSetPushButton_OnSetLabel( &_this->PushButton1, EwLoadString( &_Const004B ));
  CoreRectView__OnSetBounds( &_this->PushButton2, _Const0068 );
  WidgetSetPushButton_OnSetLabel( &_this->PushButton2, EwLoadString( &_Const004B ));
  CoreRectView__OnSetBounds( &_this->PushButton3, _Const0069 );
  WidgetSetPushButton_OnSetLabel( &_this->PushButton3, EwLoadString( &_Const004B ));
  CoreRectView__OnSetBounds( &_this->PushButton4, _Const006A );
  WidgetSetPushButton_OnSetLabel( &_this->PushButton4, EwLoadString( &_Const004B ));
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Image ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->ToggleButton ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->HorizontalSlider ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->SimpleTouchHandler1 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text3 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Wifi1 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Wifi2 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Text ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->PushButton1 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->PushButton2 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->PushButton3 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->PushButton4 ), 0 );
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ResourceBmp_2, ResourcesBitmap ));
  WidgetSetToggleButton_OnSetAppearance( &_this->ToggleButton, EwGetAutoObject( 
  &WidgetSetSwitch_Mono_Medium, WidgetSetToggleButtonConfig ));
  WidgetSetHorizontalSlider_OnSetAppearance( &_this->HorizontalSlider, EwGetAutoObject( 
  &WidgetSetHorizontalSlider_Mono_Medium, WidgetSetHorizontalSliderConfig ));
  _this->SimpleTouchHandler1.OnPress = EwNewSlot( _this, ApplicationNavScreen_GoToSettings );
  ViewsText_OnSetFont( &_this->Text3, EwLoadResource( &ResourceFont, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Wifi1, EwLoadResource( &ResourceFont, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Wifi2, EwLoadResource( &ResourceFont, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResourceFont1, ResourcesFont ));
  WidgetSetPushButtonConfig_OnSetFaceBitmapDefault( &_this->PushButtonConfig, EwLoadResource( 
  &Resourceright_arrow1, ResourcesBitmap ));
  WidgetSetPushButton_OnSetAppearance( &_this->PushButton1, &_this->PushButtonConfig3 );
  WidgetSetPushButton_OnSetAppearance( &_this->PushButton2, &_this->PushButtonConfig2 );
  WidgetSetPushButton_OnSetAppearance( &_this->PushButton3, &_this->PushButtonConfig1 );
  WidgetSetPushButton_OnSetAppearance( &_this->PushButton4, &_this->PushButtonConfig );
  WidgetSetPushButtonConfig_OnSetFaceBitmapDefault( &_this->PushButtonConfig1, EwLoadResource( 
  &Resourcedown_arrow1, ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceBitmapDefault( &_this->PushButtonConfig2, EwLoadResource( 
  &Resourcel_arrow1, ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetFaceBitmapDefault( &_this->PushButtonConfig3, EwLoadResource( 
  &Resourceup_arrow1, ResourcesBitmap ));

  /* Call the user defined constructor */
  ApplicationNavScreen_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::NavScreen' */
void ApplicationNavScreen__ReInit( ApplicationNavScreen _this )
{
  /* At first re-initialize the super class ... */
  ApplicationBaseScreen__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsImage__ReInit( &_this->Image );
  WidgetSetToggleButton__ReInit( &_this->ToggleButton );
  WidgetSetHorizontalSlider__ReInit( &_this->HorizontalSlider );
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler1 );
  ViewsText__ReInit( &_this->Text3 );
  ViewsText__ReInit( &_this->Wifi1 );
  ViewsText__ReInit( &_this->Wifi2 );
  ViewsText__ReInit( &_this->Text );
  EffectsSlideTransition__ReInit( &_this->SlideTransition );
  WidgetSetPushButtonConfig__ReInit( &_this->PushButtonConfig );
  WidgetSetPushButton__ReInit( &_this->PushButton1 );
  WidgetSetPushButton__ReInit( &_this->PushButton2 );
  WidgetSetPushButton__ReInit( &_this->PushButton3 );
  WidgetSetPushButton__ReInit( &_this->PushButton4 );
  WidgetSetPushButtonConfig__ReInit( &_this->PushButtonConfig1 );
  WidgetSetPushButtonConfig__ReInit( &_this->PushButtonConfig2 );
  WidgetSetPushButtonConfig__ReInit( &_this->PushButtonConfig3 );
}

/* Finalizer method for the class 'Application::NavScreen' */
void ApplicationNavScreen__Done( ApplicationNavScreen _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ApplicationBaseScreen );

  /* Finalize all embedded objects */
  ViewsImage__Done( &_this->Image );
  WidgetSetToggleButton__Done( &_this->ToggleButton );
  WidgetSetHorizontalSlider__Done( &_this->HorizontalSlider );
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler1 );
  ViewsText__Done( &_this->Text3 );
  ViewsText__Done( &_this->Wifi1 );
  ViewsText__Done( &_this->Wifi2 );
  ViewsText__Done( &_this->Text );
  EffectsSlideTransition__Done( &_this->SlideTransition );
  WidgetSetPushButtonConfig__Done( &_this->PushButtonConfig );
  WidgetSetPushButton__Done( &_this->PushButton1 );
  WidgetSetPushButton__Done( &_this->PushButton2 );
  WidgetSetPushButton__Done( &_this->PushButton3 );
  WidgetSetPushButton__Done( &_this->PushButton4 );
  WidgetSetPushButtonConfig__Done( &_this->PushButtonConfig1 );
  WidgetSetPushButtonConfig__Done( &_this->PushButtonConfig2 );
  WidgetSetPushButtonConfig__Done( &_this->PushButtonConfig3 );

  /* Don't forget to deinitialize the super class ... */
  ApplicationBaseScreen__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationNavScreen_Init( ApplicationNavScreen _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aArg );
}

/* 'C' function for method : 'Application::NavScreen.GoToSettings()' */
void ApplicationNavScreen_GoToSettings( ApplicationNavScreen _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_SwitchToDialog( _this->Super4.Owner, ((CoreGroup)EwNewObject( ApplicationSettingScreen, 
  0 )), ((EffectsTransition)&_this->SlideTransition ), 0, 0, 0, 0, 0, 0, EwNullSlot, 
  EwNullSlot, 0 );
  EwTrace( "%s", EwLoadString( &_Const0048 ));
}

/* Variants derived from the class : 'Application::NavScreen' */
EW_DEFINE_CLASS_VARIANTS( ApplicationNavScreen )
EW_END_OF_CLASS_VARIANTS( ApplicationNavScreen )

/* Virtual Method Table (VMT) for the class : 'Application::NavScreen' */
EW_DEFINE_CLASS( ApplicationNavScreen, ApplicationBaseScreen, Image, _.VMT, _.VMT, 
                 _.VMT, _.VMT, _.VMT, "Application::NavScreen" )
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
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( ApplicationNavScreen )

/* Embedded Wizard */

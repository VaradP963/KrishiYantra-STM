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

#ifndef WidgetSet_H
#define WidgetSet_H

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

/* This autoobject provides the default customization for the 'value display' widget 
   (WidgetSet::ValueDisplay) in its small size variant. Widgets using this configuration 
   display the value and unit aligned at the right widget edge. */
EW_DECLARE_AUTOOBJECT( WidgetSetValueDisplay_Mono_Small, WidgetSetValueDisplayConfig )

/* The definition WidgetSet::ValueDisplayLayout determines the available arrangement 
   modes to apply on the views within a WidgetSet::ValueDisplay widget. Depending 
   on the mode, the views will be treated independently or one view will be arranged 
   at the left/right end of the content displayed in the other view. */
typedef XEnum WidgetSetValueDisplayLayout;

#define WidgetSetValueDisplayLayoutUnitAndValueAreIndependent 0
#define WidgetSetValueDisplayLayoutAlignUnitRightToValue    1
#define WidgetSetValueDisplayLayoutAlignUnitLeftToValue     2
#define WidgetSetValueDisplayLayoutAlignValueRightToUnit    3
#define WidgetSetValueDisplayLayoutAlignValueLeftToUnit     4

/* This autoobject provides the default customization for the 'push button' widget 
   (WidgetSet::PushButton) in its medium size variant. */
EW_DECLARE_AUTOOBJECT( WidgetSetPushButton_Mono_Medium, WidgetSetPushButtonConfig )

/* This autoobject provides one of the default customizations for the 'toggle' widget 
   (WidgetSet::ToggleButton) in its medium size variant. With this customization 
   the toggle button appears as a 'switch'. */
EW_DECLARE_AUTOOBJECT( WidgetSetSwitch_Mono_Medium, WidgetSetToggleButtonConfig )

/* This autoobject provides the default customization for the 'horizontal slider' 
   widget (WidgetSet::HorizontalSlider) in its medium size variant. */
EW_DECLARE_AUTOOBJECT( WidgetSetHorizontalSlider_Mono_Medium, WidgetSetHorizontalSliderConfig )

/* This autoobject provides the default customization for the 'horizontal scrollbar' 
   widget (WidgetSet::HorizontalScrollbar) in its medium size variant. Scrollbars 
   using this configuration do react to user touch interactions. */
EW_DECLARE_AUTOOBJECT( WidgetSetHorizontalScrollbar_Mono_Medium, WidgetSetHorizontalScrollbarConfig )

/* This autoobject provides the default customization for the 'analog gauge' widget 
   (WidgetSet::Gauge) in its medium size variant. */
EW_DECLARE_AUTOOBJECT( WidgetSetGauge_Mono_Medium, WidgetSetGaugeConfig )

/* This autoobject provides the default customization for the 'vertical value bar' 
   widget (WidgetSet::VerticalValueBar) in its medium size variant. */
EW_DECLARE_AUTOOBJECT( WidgetSetVerticalValueBar_Mono_Medium, WidgetSetVerticalValueBarConfig )

/* This autoobject provides the default customization for the 'push button' widget 
   (WidgetSet::PushButton) in its medium size variant. */
EW_DECLARE_AUTOOBJECT( WidgetSetPushButton_Mono_Small, WidgetSetPushButtonConfig )

#ifdef __cplusplus
  }
#endif

#endif /* WidgetSet_H */

/* Embedded Wizard */

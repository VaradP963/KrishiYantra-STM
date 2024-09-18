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

#ifndef _EffectsScaleTransition_H
#define _EffectsScaleTransition_H

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

#include "_EffectsTransition.h"

/* Forward declaration of the class Effects::Fader */
#ifndef _EffectsFader_
  EW_DECLARE_CLASS( EffectsFader )
#define _EffectsFader_
#endif

/* Forward declaration of the class Effects::ScaleTransition */
#ifndef _EffectsScaleTransition_
  EW_DECLARE_CLASS( EffectsScaleTransition )
#define _EffectsScaleTransition_
#endif


/* The class Effects::ScaleTransition provides functionality for the fade-in/out 
   operation affecting the size and the opacity of the given GUI component. When 
   using the transition for the fade-in operation, the GUI component is automatically 
   arranged to appear (per default centered) within the area of its owner component. 
   This transition is thus ideal wherever one GUI component should appear or disappear 
   within another component by smoothly changing its size. By using the property 
   @Scaling you determine the factor, the component should be scaled at the beginning 
   (fade-in) or at the end (fade-out) of the animation.
   Per default when the component is displayed, it is aligned in the center of its 
   owner. This can be modified by using the property @Alignment. Furthermore, with 
   the four properties @MarginLeft, @MarginRight, @MarginTop and @MarginBottom the 
   area to align the component within its owner can be limited.
   The transition animates the size and the opacity of the affected GUI component 
   simultanously. If the opacity animation is not desired, you can disable it explicitly 
   by using the properties @OpacityFadeIn and @OpacityFadeOut.
   How long the transition should take is determined in the property @Duration, 
   which is per default 500 ms. The exact timing (easing) is configured with the 
   property @Timing. The class implements an extensive set of various timing functions. 
   In its simplest case the animation can follow a straight line, or it can start 
   slow and get faster afterwards. More complex timings perform realistic spring 
   elastic and bounce animations. In its default configuration, the transition uses 
   the 'FastIn_EaseOut' timing (it starts fast and slows down until the end position 
   is reached). */
EW_DEFINE_FIELDS( EffectsScaleTransition, EffectsTransition )
  EW_PROPERTY( Alignment,       XSet )
EW_END_OF_FIELDS( EffectsScaleTransition )

/* Virtual Method Table (VMT) for the class : 'Effects::ScaleTransition' */
EW_DEFINE_METHODS( EffectsScaleTransition, EffectsTransition )
  EW_METHOD( CreatePresentFader, EffectsFader )( EffectsScaleTransition _this )
  EW_METHOD( CreateDismissFader, EffectsFader )( EffectsScaleTransition _this )
  EW_METHOD( CreateRestoreFader, EffectsFader )( EffectsScaleTransition _this )
  EW_METHOD( CreateOverlayFader, EffectsFader )( EffectsScaleTransition _this )
EW_END_OF_METHODS( EffectsScaleTransition )

/* The method CreatePresentFader() creates an object of one of the classes descending 
   from Effects::Fader and configures it with parameters according to the desired 
   fade-in (present) transition. Finally the prepared fader object is returned to 
   the caller. Typically, the created fader is used to show (to present) a GUI component 
   when the user navigates to it. The method has to be overridden and implemented 
   in derived classes. The actual implementation does nothing and returns 'null'. */
EffectsFader EffectsScaleTransition_CreatePresentFader( EffectsScaleTransition _this );

/* The method CreateDismissFader() creates an object of one of the classes descending 
   from Effects::Fader and configures it with parameters according to the desired 
   fade-out (dismiss) transition. Finally the prepared fader object is returned 
   to the caller. Typically, the created fader is used to hide (to dismiss) a GUI 
   component when the user leaves it while he/she navigates in the GUI system. The 
   method has to be overridden and implemented in derived classes. The actual implementation 
   does nothing and returns 'null'. */
EffectsFader EffectsScaleTransition_CreateDismissFader( EffectsScaleTransition _this );

/* The method CreateRestoreFader() creates an object of one of the classes descending 
   from Effects::Fader and configures it with parameters according to the desired 
   fade-in (restore) transition. Finally the prepared fader object is returned to 
   the caller. Typically, the created fader is used to show (to restore the original 
   visible state) of a GUI component, which has been obscured (overlaid) by other 
   GUI components during the user navigates in the GUI system. The method has to 
   be overridden and implemented in derived classes. The actual implementation of 
   this method redirects the operation to the method @CreatePresentFader(). */
EffectsFader EffectsScaleTransition_CreateRestoreFader( EffectsScaleTransition _this );

/* The method CreateOverlayFader() creates an object of one of the classes descending 
   from Effects::Fader and configures it with parameters according to the desired 
   fade-out (overlay) transition. Finally the prepared fader object is returned 
   to the caller. Typically, the created fader is used to temporarily hide (to overlay) 
   a GUI component when the user navigates a deeper level in the GUI system. The 
   method has to be overridden and implemented in derived classes. The actual implementation 
   of this method redirects the operation to the method @CreateDismissFader(). */
EffectsFader EffectsScaleTransition_CreateOverlayFader( EffectsScaleTransition _this );

/* 'C' function for method : 'Effects::ScaleTransition.onInitializeIn()' */
void EffectsScaleTransition_onInitializeIn( EffectsScaleTransition _this, XObject 
  sender );

/* 'C' function for method : 'Effects::ScaleTransition.onInitializeOut()' */
void EffectsScaleTransition_onInitializeOut( EffectsScaleTransition _this, XObject 
  sender );

#ifdef __cplusplus
  }
#endif

#endif /* _EffectsScaleTransition_H */

/* Embedded Wizard */

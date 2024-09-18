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

#ifndef _GraphicsWarpMatrix_H
#define _GraphicsWarpMatrix_H

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

/* Forward declaration of the class Graphics::WarpMatrix */
#ifndef _GraphicsWarpMatrix_
  EW_DECLARE_CLASS( GraphicsWarpMatrix )
#define _GraphicsWarpMatrix_
#endif


/* The class Graphics::WarpMatrix provides the core functionality for all 2D and 
   3D transformations. With its aim, Views::WarpImage and Views::WarpGroup can be 
   translated, scaled and rotated around the X, Y and Z axis. Moreover, small 3D 
   scenes consisting of several warp views can be defined. This allows you to enrich 
   GUI components with fancy 3D effects. Please note, Embedded Wizard is not a 3D 
   GUI development tool! Its lightweight 3D functionality is limited to the perspectively 
   correct projection of a source image onto a four corners polygon lying in the 
   GUI component. The matrix coefficients describe thus the transformation of the 
   rectangular area of the source image into a four corners polygon.
   To define the desired transformation the WarpMatrix class provides following 
   three methods @Translate(), @Scale() and @Rotate(). These can be combined together 
   in order to get more complex transformations. The source image can thus be rotated 
   and then e.g. translated in the 3D space. The order in which these operations 
   are executed is essential. Changing of the order may produce different results.
   The methods @Push() and @Pop() are very useful to store and restore the current 
   state of the matrix on the matrix stack. This is important when 3D scenes are 
   composed of several transformed source images. In this manner one and the same 
   matrix is used for all warp views. To perform the transformation defined in the 
   matrix, pass it to the Warp3D() method provided by the WarpImage and WarpGroup 
   views. */
EW_DEFINE_FIELDS( GraphicsWarpMatrix, XObject )
  EW_VARIABLE( M11,             XFloat )
  EW_VARIABLE( M12,             XFloat )
  EW_VARIABLE( M13,             XFloat )
  EW_VARIABLE( M14,             XFloat )
  EW_VARIABLE( M21,             XFloat )
  EW_VARIABLE( M22,             XFloat )
  EW_VARIABLE( M23,             XFloat )
  EW_VARIABLE( M24,             XFloat )
  EW_VARIABLE( M31,             XFloat )
  EW_VARIABLE( M32,             XFloat )
  EW_VARIABLE( M33,             XFloat )
  EW_VARIABLE( M34,             XFloat )
  EW_VARIABLE( M41,             XFloat )
  EW_VARIABLE( M42,             XFloat )
  EW_VARIABLE( M43,             XFloat )
  EW_VARIABLE( M44,             XFloat )
  EW_VARIABLE( Z,               XFloat )
  EW_VARIABLE( Y,               XFloat )
  EW_VARIABLE( X,               XFloat )
  EW_PROPERTY( EyeDistance,     XFloat )
  EW_VARIABLE( isIdentity,      XBool )
EW_END_OF_FIELDS( GraphicsWarpMatrix )

/* Virtual Method Table (VMT) for the class : 'Graphics::WarpMatrix' */
EW_DEFINE_METHODS( GraphicsWarpMatrix, XObject )
EW_END_OF_METHODS( GraphicsWarpMatrix )

/* 'C' function for method : 'Graphics::WarpMatrix.CalculateZ()' */
XBool GraphicsWarpMatrix_CalculateZ( GraphicsWarpMatrix _this, XFloat aX, XFloat 
  aY );

/* 'C' function for method : 'Graphics::WarpMatrix.Project()' */
XBool GraphicsWarpMatrix_Project( GraphicsWarpMatrix _this, XFloat aX, XFloat aY );

/* The method Interpolate() calculates the matrix coefficients and the value of 
   @EyeDistance as an interpolation between the given source matrices aMatrix1 and 
   aMatrix2. The resulting composition is determined by the parameter aFactor, which 
   can obtain values in the range 0.0 .. 1.0. The value 0.0 is related to the first 
   source matrix. The value 1.0 corresponds to the second source matrix. The results 
   of the interpolation replace the values stored actually in 'this' object. The 
   method returns 'this' object to the caller. */
GraphicsWarpMatrix GraphicsWarpMatrix_Interpolate( GraphicsWarpMatrix _this, GraphicsWarpMatrix 
  aMatrix1, GraphicsWarpMatrix aMatrix2, XFloat aFactor );

/* The method Scale() applies the given factors to the matrix. This corresponds 
   to the scaling of the source image by the given factors in the X-, Y- and Z-direction. 
   The method returns 'this' object to the caller. */
GraphicsWarpMatrix GraphicsWarpMatrix_Scale( GraphicsWarpMatrix _this, XFloat aScaleX, 
  XFloat aScaleY, XFloat aScaleZ );

/* The method Translate() applies the given displacement to the matrix. This corresponds 
   to the translation of the source image by the given values in the X-, Y- and 
   Z-direction. The method returns 'this' object to the caller. */
GraphicsWarpMatrix GraphicsWarpMatrix_Translate( GraphicsWarpMatrix _this, XFloat 
  aDeltaX, XFloat aDeltaY, XFloat aDeltaZ );

/* The method IsIdentity() returns 'true' if the matrix coeficients in 'this' object 
   don't describe any transformation. */
XBool GraphicsWarpMatrix_IsIdentity( GraphicsWarpMatrix _this );

/* 'C' function for method : 'Graphics::WarpMatrix.DeriveFromQuad()' */
GraphicsWarpMatrix GraphicsWarpMatrix_DeriveFromQuad( GraphicsWarpMatrix _this, 
  XFloat aX1, XFloat aY1, XFloat aX2, XFloat aY2, XFloat aX3, XFloat aY3, XFloat 
  aX4, XFloat aY4 );

/* The method Assign() copies the coefficients of the given aMatrix into the own 
   coefficients. The method returns 'this' object to the caller. */
GraphicsWarpMatrix GraphicsWarpMatrix_Assign( GraphicsWarpMatrix _this, GraphicsWarpMatrix 
  aMatrix );

/* The method LoadIdentity() resets the coefficients of the matrix. In this manner 
   the matrix is prepared for the following @Translate(), @Scale() and @Rotate() 
   invocations. The method returns 'this' object to the caller. */
GraphicsWarpMatrix GraphicsWarpMatrix_LoadIdentity( GraphicsWarpMatrix _this );

#ifdef __cplusplus
  }
#endif

#endif /* _GraphicsWarpMatrix_H */

/* Embedded Wizard */

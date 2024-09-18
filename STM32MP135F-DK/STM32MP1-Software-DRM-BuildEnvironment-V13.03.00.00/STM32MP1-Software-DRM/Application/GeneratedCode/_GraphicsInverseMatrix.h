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

#ifndef _GraphicsInverseMatrix_H
#define _GraphicsInverseMatrix_H

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

/* Forward declaration of the class Graphics::InverseMatrix */
#ifndef _GraphicsInverseMatrix_
  EW_DECLARE_CLASS( GraphicsInverseMatrix )
#define _GraphicsInverseMatrix_
#endif


/* Deklaration of class : 'Graphics::InverseMatrix' */
EW_DEFINE_FIELDS( GraphicsInverseMatrix, XObject )
  EW_VARIABLE( i11,             XFloat )
  EW_VARIABLE( i12,             XFloat )
  EW_VARIABLE( i13,             XFloat )
  EW_VARIABLE( i21,             XFloat )
  EW_VARIABLE( i22,             XFloat )
  EW_VARIABLE( i23,             XFloat )
  EW_VARIABLE( i31,             XFloat )
  EW_VARIABLE( i32,             XFloat )
  EW_VARIABLE( i33,             XFloat )
  EW_VARIABLE( Y,               XFloat )
  EW_VARIABLE( X,               XFloat )
  EW_VARIABLE( isValid,         XBool )
EW_END_OF_FIELDS( GraphicsInverseMatrix )

/* Virtual Method Table (VMT) for the class : 'Graphics::InverseMatrix' */
EW_DEFINE_METHODS( GraphicsInverseMatrix, XObject )
EW_END_OF_METHODS( GraphicsInverseMatrix )

/* 'C' function for method : 'Graphics::InverseMatrix.Project()' */
XBool GraphicsInverseMatrix_Project( GraphicsInverseMatrix _this, XPoint aPos );

/* 'C' function for method : 'Graphics::InverseMatrix.DeriveFromQuad()' */
void GraphicsInverseMatrix_DeriveFromQuad( GraphicsInverseMatrix _this, XFloat aX1, 
  XFloat aY1, XFloat aX2, XFloat aY2, XFloat aX3, XFloat aY3, XFloat aX4, XFloat 
  aY4 );

#ifdef __cplusplus
  }
#endif

#endif /* _GraphicsInverseMatrix_H */

/* Embedded Wizard */

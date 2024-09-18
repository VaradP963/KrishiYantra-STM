/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This software is delivered "as is" and shows the usage of other software
* components. It is provided as an example software which is intended to be
* modified and extended according to particular requirements.
*
* TARA Systems hereby disclaims all warranties and conditions with regard to the
* software, including all implied warranties and conditions of merchantability
* and non-infringement of any third party IPR or other rights which may result
* from the use or the inability to use the software.
*
********************************************************************************
*
* DESCRIPTION:
*   This file implements the main.c module for running Embedded Wizard
*   generated GUI applications on a dedicated target with or without the usage
*   of an operating system.
*
*   Important: Please be aware that every Embedded Wizard GUI application
*   requires the execution in a single GUI task!
*   If you are working with an operating system and your software is using
*   several threads/tasks, please take care to access your GUI application
*   only within the context of your GUI thread/task. Use operating system
*   services to exchange data or events between the GUI thread/task and other
*   worker threads/tasks.
*
*   For more information concerning the integration of an Embedded Wizard
*   generated GUI application into your main application, please see
*   https://doc.embedded-wizard.de/main-loop
*
*******************************************************************************/

#include "ewmain.h"
#include "ewrte.h"
#include "ew_bsp_console.h"
#include <stdlib.h>
#include <stdint.h>
#include <signal.h>
#include "gfx_system.h"


static char Quit = 0;


/*******************************************************************************
* FUNCTION:
*   signalHandler
*
* DESCRIPTION:
*   This signal handler is called if one of the registered system signals is
*   sent (e. g. SIGINT). It closes the application regularly.
*
* ARGUMENTS:
*   aSigNum - The signal number.
*******************************************************************************/
void signalHandler( int aSigNum )
{
  EwPrint( "System signal '%d' received - closing application ...\n", aSigNum );
  Quit = 1;
}


/*******************************************************************************
* FUNCTION:
*   main
*
* DESCRIPTION:
*   The main function for running Embedded Wizard generated GUI applications on
*   a dedicated target using the Linux operating system.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   Zero if successful.
*
*******************************************************************************/
int main( void )
{
  unsigned int stack;

  /* determine the stack area and provide it to the Runtime Environmnet */
  EwSetStackAddressArea( &stack, (void*)((intptr_t)&stack - EW_GUI_THREAD_STACK_SIZE ));

  /* initialize console interface for debug messages */
  EwBspConsoleInit();

  /* initialize the graphics subsystem */
  GfxSystemInit();

  /* initialize Embedded Wizard application */
  if ( EwInit() != 0 )
  {
    /* register signal handler to close the application on Ctrl-C */
    signal( SIGINT, signalHandler );

    EwPrintSystemInfo();

    /* process the graphics subsystem and the Embedded Wizard main loop */
    while( GfxSystemProcess() && EwProcess() && ! Quit )
      ;

    /* de-initialize Embedded Wizard application */
    EwDone();
  }

  /* de-initialize graphics subsystem */
  GfxSystemDone();

  /* restore console */
  EwBspConsoleDone();

  return 0;
}


/* msy, mli */

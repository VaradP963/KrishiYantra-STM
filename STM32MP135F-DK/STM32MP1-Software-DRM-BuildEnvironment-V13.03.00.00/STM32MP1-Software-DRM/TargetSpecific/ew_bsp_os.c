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
*   This file provides some operating system wrapper macros.
*
*******************************************************************************/

#include "ewconfig.h"
#include <malloc.h>
#include <pthread.h>
#include <semaphore.h>
#include <errno.h>
#include "ew_bsp_os.h"

#if EW_USE_OPERATING_SYSTEM == 1

  #define OPERATING_SYSTEM_STRING "Embedded Linux"

  typedef void *( *XThreadFunct_ )( void* aContext );

#else

  #define OPERATING_SYSTEM_STRING "bare-metal"

  #error "Bare-metal not supported - set EW_USE_OPERATING_SYSTEM=1 in your makefile/project"

#endif


/*******************************************************************************
* FUNCTION:
*   EwBspOsGetName
*
* DESCRIPTION:
*   The function EwBspOsGetName returns the name of the operating system.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   The name of the operating system.
*
*******************************************************************************/
const char* EwBspOsGetName( void )
{
  return OPERATING_SYSTEM_STRING;
}


/*******************************************************************************
* FUNCTION:
*   EwBspOsGetTicks
*
* DESCRIPTION:
*   The function EwBspOsGetTicks returns the system ticks in milliseconds.
*   The system tick counter wraps around every 2^32's tick.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   The system Ticks.
*
*******************************************************************************/
unsigned long EwBspOsGetTicks( void )
{
  #if EW_USE_OPERATING_SYSTEM == 1

    struct timespec ts = { 0, 0 };

    clock_gettime( CLOCK_MONOTONIC, &ts );
    return (unsigned long)(( ts.tv_sec * 1000 ) + ( ts.tv_nsec / 1000000 ));

  #else

  #endif
}


/*******************************************************************************
* FUNCTION:
*   EwBspOsDelay
*
* DESCRIPTION:
*   The function EwBspOsDelay delays the own thread by the given milliseconds
*   and allows the OS scheduler to process other threads.
*
* ARGUMENTS:
*   aDelayTime - The delay time in milliseconds.
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspOsDelay( unsigned int aDelayTime )
{
  #if EW_USE_OPERATING_SYSTEM == 1

    struct timespec sleepTime;

    sleepTime.tv_sec = 0;

    if ( aDelayTime >= 1000 )
    {
      sleepTime.tv_sec = aDelayTime / 1000;
      aDelayTime      -= sleepTime.tv_sec * 1000;
    }

    sleepTime.tv_nsec = aDelayTime * 1000000;
    nanosleep( &sleepTime, NULL );

  #else

  #endif
}


#if EW_USE_OPERATING_SYSTEM == 1

/*******************************************************************************
* FUNCTION:
*   EwBspOsThreadCreate
*
* DESCRIPTION:
*   The function EwBspOsThreadCreate creates a thread using the provided thread
*   function, priority, stack size and context.
*
* ARGUMENTS:
*   aFunct     - The thread function.
*   aPrio      - The thread priority.
*   aStackSize - The maximum stack size needed by the thread.
*   aContext   - The context that is passed to the thread function.
*
* RETURN VALUE:
*   The thread handle (XThreadHandle)
*
*******************************************************************************/
XThreadHandle EwBspOsThreadCreate( XThreadFunct aFunct, int aPrio, int aStackSize, void* aContext )
{
  pthread_t      threadHandle;
  pthread_attr_t threadAttr;

  pthread_attr_init( &threadAttr );

  pthread_attr_setdetachstate( &threadAttr, PTHREAD_CREATE_JOINABLE );
  if ( pthread_create( &threadHandle, &threadAttr, (XThreadFunct_)aFunct, aContext ) != 0)
    threadHandle = 0;
  pthread_attr_destroy( &threadAttr );

  return (XThreadHandle)threadHandle;
}


/*******************************************************************************
* FUNCTION:
*   EwBspOsThreadDestroy
*
* DESCRIPTION:
*   The function EwBspOsThreadDestroy destroys a thread and frees all related
*   resources.
*
* ARGUMENTS:
*   aHandle - The handle of the thread (XThreadHandle).
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspOsThreadDestroy( XThreadHandle aHandle )
{
}


/*******************************************************************************
* FUNCTION:
*   EwBspOsThreadGetHandle
*
* DESCRIPTION:
*   The function EwBspOsThreadGetHandle returns the own thread handle.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   The thread handle (XThreadHandle).
*
*******************************************************************************/
XThreadHandle EwBspOsThreadGetHandle( void )
{
  return (XThreadHandle)pthread_self();
}


/*******************************************************************************
* FUNCTION:
*   EwBspOsSemaphoreCreate
*
* DESCRIPTION:
*   The function EwBspOsSemaphoreCreate creates a semaphore using the provided
*   semaphore definition and initial value.
*
* ARGUMENTS:
*   aMaxCount     - The maximum count for the semaphore object.
*   aInitialValue - The initial value of the semaphore.
*
* RETURN VALUE:
*   The semaphore handle (XSemaphoreHandle).
*
*******************************************************************************/
XSemaphoreHandle EwBspOsSemaphoreCreate( int aMaxCount, int aInitialValue )
{
  sem_t *sem;

  sem = (sem_t *) malloc( sizeof( *sem ));

  if ( ! sem || sem_init( sem, 0, aInitialValue ) != 0 )
    return 0;

  return ( XSemaphoreHandle ) sem;
}


/*******************************************************************************
* FUNCTION:
*   EwBspOsSemaphoreWait
*
* DESCRIPTION:
*   The function EwBspOsSemaphoreWait waits until a semaphore token becomes
*   available. It returns at the latest after the provided timeout value
*   (aTimeout=0 means no timeout).
*
* ARGUMENTS:
*   aHandle  - The semaphore handle (XSemaphoreHandle).
*   aTimeout - The latest time in milliseconds EwBspOsSemaphoreWait returns.
*
* RETURN VALUE:
*   Returns 1, if a token is available, otherwise 0.
*
*******************************************************************************/
int EwBspOsSemaphoreWait( XSemaphoreHandle aHandle, int aTimeout )
{
  struct timespec ts;
  int    result = -1;

  if ( ! aHandle )
    return 0;

  if ( aTimeout <= 0 )
     result = sem_wait( aHandle );
  else
  {
    if ( clock_gettime( CLOCK_REALTIME, &ts ) == -1 )
    {
      /* handle error */
      return 0;
    }

    ts.tv_sec  += aTimeout / 1000;
    ts.tv_nsec += ( aTimeout % 1000 ) * 1000;

    while (( result = sem_timedwait( aHandle, &ts )) == -1 && errno == EINTR )
      continue;       /* Restart if interrupted by handler */
  }

  if ( result == -1)
    return 0;

  return 1;
}


/*******************************************************************************
* FUNCTION:
*   EwBspOsSemaphoreRelease
*
* DESCRIPTION:
*   The function EwBspOsSemaphoreRelease releases a semaphore token.
*
* ARGUMENTS:
*   aHandle  - The semaphore handle (XSemaphoreHandle).
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspOsSemaphoreRelease( XSemaphoreHandle aHandle )
{
  if ( ! aHandle )
    return;

  sem_post( aHandle );
}


/*******************************************************************************
* FUNCTION:
*   EwBspOsSemaphoreDestroy
*
* DESCRIPTION:
*   The function EwBspOsSemaphoreDestroy destroys a semaphore and frees all related
*   resources.
*
* ARGUMENTS:
*   aHandle - The handle of the semaphore to destroy (XSemaphoreHandle).
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspOsSemaphoreDestroy( XSemaphoreHandle aHandle )
{
  if ( aHandle )
  {
    sem_destroy( aHandle );
    free( aHandle );
  }
}

#endif /* EW_USE_OPERATING_SYSTEM */


/* mli */

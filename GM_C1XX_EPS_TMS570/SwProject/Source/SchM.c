/*****************************************************************************
* Copyright 2010 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : EcuStartup.c
* Module Description: AUTOSAR BSW Scheduler
* Product           : Gen II Plus - EA3.0
* Author            : Jeremy Warmbier
*****************************************************************************/
/*---------------------------------------------------------------------------
* Version Control:
* Date Created:      Thu Nov 11 16:33:22 2010
* %version:          4 %
* %derived_by:       zz4r1x %
* %date_modified:    Thu Oct  3 09:30:08 2013 % 
*---------------------------------------------------------------------------*/
/*****************************************************************************
*
* CHANGE HISTORY:
*
* Date      Rev      Author         Change Description              SCR #
*                                    (MDD Rev & Date)
* -------   -------  --------  -----------------------------------  ----------
* 07/29/13  1        LWW       Initial C1xx Synergy Version
* 09/11/13  2        BWL       Add EPSDiagSrvcs_Task() to 10ms task per A5593 and A5594
* 09/11/13  3        BWL       Moved IlTxTasks to 10ms periodic for new message.
* 10/03/13  4        BWL       Moved IlTxTasks to SrlComOutput to reduce jitter.
* 07/22/15  6        GMN       EA3#1424: NTC 0x02A sets during Crank pulse testing
******************************************************************************/

/*******************************************************************************
 * Includes
 *******************************************************************************/
#include "SchM.h"
#include "il_inc.h"
#include "desc.h"
#include "ggda.h"
#include "Interrupts.h"
#include "WdgM.h"
#include "Wdg.h"
#include "WdgM_PBcfg.h"
#include "Wdg_TMS570LS3x_Lcfg.h"
#include "FlsTst.h"
#include "Metrics.h"
#include "v_cfg.h"
#include "Os.h"
#include "can_inc.h"
#include "EcuM.h"
#include "MemIf.h"
#include "NvM.h"
#include "Dem.h"
#include "Gpt.h"
#include "EPS_DiagSrvcs_ISO.h"
#include "Cd_NvMProxy.h"
#include "NtWrap.h"

/*******************************************************************************
 * Defines
 *******************************************************************************/

/*******************************************************************************
 * Global variables
 *******************************************************************************/

/*******************************************************************************
 * Global functions
 *******************************************************************************/
extern void AppDesc_Per1(void);
extern void ApplGgdaTask(void);

/****************************************************************************
| NAME:             SchM_InitMemory
| CALLED BY:        EcuM
| PRECONDITIONS:    none
| INPUT PARAMETERS: none
| RETURN VALUES:    none
| DESCRIPTION:      Initializes global variables. This function has to be called
|                   before any other calls to the SchM API
****************************************************************************/
void SchM_InitMemory( void )
{

}

/****************************************************************************
| NAME:             SchM_Init
| CALLED BY:        EcuM
| PRECONDITIONS:    none
| INPUT PARAMETERS: none
| RETURN VALUES:    none
| DESCRIPTION:      Initialize the timers for the scheduling of the main
|                   functions of the BSW modules
****************************************************************************/
void SchM_Init( void )
{

}

/****************************************************************************
| NAME:             SchM_Task
| CALLED BY:        OS
| PRECONDITIONS:    SchM initialized, SchM_InitTask executed
| INPUT PARAMETERS: none
| RETURN VALUES:    none
| DESCRIPTION:      Task to schedule the main functions of all BSW modules
****************************************************************************/
TASK(Task_10ms_SchM9)
{
	EcuM_MainFunction();
	IlNwmTask(0);
	IlNwmTask(1);
	IlRxTask(0);
	IlRxTask(1);
	TpTxTask();
	TpRxTask();
	DescTask();
	Dem_MainFunction();
	GgdaTimerTask();
  	GgdaStateTask();
    AppDesc_Per1();
	ApplGgdaTask();
	EPSDiagSrvcs_Task();

	TerminateTask();
}

TASK(Task_100ms_SchM9)
{
	NvMProxy_MainFunction();
	NvM_MainFunction();
	TerminateTask();
}

TASK(Task_100ms_SchM0)
{
	Fee_MainFunction();
	TerminateTask();
}


TASK(Task_4ms_SchM0)
{
	WdgM_MainFunction();
	FlsTst_MainFunction();
	TerminateTask();
}


TASK(Task_Init_SchM9)
{
	GetResource(RES_SCHEDULER);
	EcuM_StartupTwo();
	NtWrapC_Wdg_TMS570LS3x_Init(&wdg_tms570ls3x_config);
	NtWrapC_WdgM_Init(&WdgMConfig_Mode0);
	Gpt_EnableNotification(SystemTime_uS);
	ReleaseResource(RES_SCHEDULER);

	ClearSysTickInterruptFlg();
	EnableSysTickInterrupt();
	TerminateTask();
}

/****************************************************************************
| NAME:             Bkgnd_Task
| CALLED BY:        OS
| PRECONDITIONS:    None
| INPUT PARAMETERS: none
| RETURN VALUES:    none
| DESCRIPTION:      Task to schedule an infinite background loop
****************************************************************************/
TASK(Task_Bkgnd)
{
  for(;;)
  {
	  T1_AppBgHandler();
  }
}


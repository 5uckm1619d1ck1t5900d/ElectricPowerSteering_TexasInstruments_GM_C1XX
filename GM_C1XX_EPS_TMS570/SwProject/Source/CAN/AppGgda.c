/*****************************************************************************
* Copyright 2012 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : EcuStartup.c
* Module Description: GGDA Application Diagnostic Service Callbacks
* Product           : Gen II Plus - EA3.0
* Author            : Lonnie Newton
*****************************************************************************/
/*---------------------------------------------------------------------------
* Version Control:
* Date Created:      Thu Nov 11 16:33:22 2010
* %version:          1 %
* %derived_by:       czgng4 %
* %date_modified:    Mon Jul 29 08:15:11 2013 %
*---------------------------------------------------------------------------*/
#include "can_inc.h"
#include "Desc.h"
#include "Ggda.h"
#include "il_inc.h"
#include "CDD_Data.h"
#include "Std_Types.h"

#if !defined(VN_AllNodes)
#error "Please adjust the VN setting for the 'ReturnToNormalMode' command"
#endif
#define VN_ReturnToNormalMode VN_AllNodes


void ApplGgdaInit(void)
{
	CDD_DisableCEBusNormComm_Cnt_lgc = FALSE;
}

void ApplGgdaTask(void)
{

}

/* Service $A5 */
vuint8 ApplGgdaMayEnterProgMode(GgdaContextIndexType context)
{
  return kDescOk;
}


void ApplGgdaOnDisableNormalComm(GgdaContextIndexType context)
{
	CDD_DisableCEBusNormComm_Cnt_lgc = TRUE;
}

void ApplGgdaOnReturnToNormalMode(GgdaContextIndexType context)
{
	CDD_DisableCEBusNormComm_Cnt_lgc = FALSE;
	IlNwmActivateVN(ggdaCanConfig[context].canChannel,VN_ReturnToNormalMode);
}

/* Actions */
void ApplGgdaForceEcuReset(void)
{
	/* Nothing to do */
}

/*****************************************************************************

CHANGE HISTORY:

 Date      Rev      Author         Change Description              SCR #
                                    (MDD Rev & Date)
-------   -------  --------  -----------------------------------  ----------
07/29/13  1        LWW       Initial C1xx Synergy Version
******************************************************************************/

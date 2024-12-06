/*****************************************************************************
* Copyright 2010 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : MtrCtrl_Irq.c
* Module Description: Motor Control Interrupt Request Service
* Product           : Gen II Plus - EA3.0
* Author            : Jeremy Warmbier
*****************************************************************************/
/* Version Control:
 * Date Created:      Wed Apr 13 12:17:00 2011
 * %version:          11 %
 * %derived_by:       zz4r1x %
 * %date_modified:    Wed Feb 12 11:38:58 2014 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author         Change Description                                                        SCR #
 * -------   -------  --------  ---------------------------------------------------------------------------  ----------
 * 07/29/13  1        LWW       Initial C1xx Synergy Version
 * 08/08/13  2        BWL       Integrate SENT components
 * 08/12/14  3,4      BWL       Add DigMSB components
 * 02/12/14  5        BWL       Fix task list order per A6149
 * 05/14/14  10       BWL       Remove DigMSBSigCorr
 * 07/31/14  11       BWL		Fix A7131 - NTCs 0x02B & 0x036 set on IVER gear causing LoA (C1xx)
 */


/*****************************************************************************
* Include files
*****************************************************************************/
#include "Std_Types.h"
#include "MtrCtrl_Irq.h"
#include "Os.h"
#include "adc_regs.h"
#include "dma_regs.h"
#include "vim_regs.h"
#include "CDD_Const.h"
#include "PwmCdd.h"
#include "ePWM.h"
#include "CDD_Func.h"
#include "T1_AppInterface.h"
#include "Ap_MtrCtrl.h"
#include "Sa_CmMtrCurr.h"
#include "Sa_DigMSB.h"
#include "Sa_MtrVel.h"
#include "PwmCdd.h"
#include "Nhet.h"
#include "IoHwAbstractionUsr.h"
#include "Dma.h"

/* TODO: Determine if this INTERRUPT pragma is required when using the  */
/*        interrupt keyword.                                            */
#pragma INTERRUPT(Isr_MtrCtrl, IRQ);
STATIC VAR(uint16, AUTOMATIC) Loop125usCounter_Cnt_M_u16;

/*****************************************************************************
* Local Functions
*****************************************************************************/
FUNC(void, MTRCTRL_CODE) MtrCtrlTaskList(void);


/*****************************************************************************
  * Name:        EnableIrq
  * Description: 
  * Inputs:      None 
  * Outputs:     None
*****************************************************************************/
MTRCTRL_COMPILER_ISR void Isr_MtrCtrl(void)
{
	T1_TraceStartNoSusp(T1_Isr_MtrCtrl_ID);

	MtrCtrlTaskList();
	
	IoHwAb_CaptureADC();
	
	/* BTC Interrupt Flag Clear */
	DMACTRLREG->BTCFLAG = (1u << 3);

	/* ADC2 Event (Group 0) EOC Interrupt Flag Clear */
	adcREG2->GxSR[1u] = 1u;


	T1_TraceStopNoSusp(T1_Isr_MtrCtrl_ID);
}

FUNC(void, MTRCTRL_CODE) MtrCtrlTaskList(void)
{
	DigMSB_Per1();
	MtrVel3_Per1();
	
	Loop125usCounter_Cnt_M_u16 = (Loop125usCounter_Cnt_M_u16 ^ 1U);
	if( Loop125usCounter_Cnt_M_u16 == 1U )
	{
		CurrDQPer1();
		TrqCogCancRefPer1();

		PICurrCntrl_Per1();
		MicroDiag_Per1();
	}

	PwmCdd_Per1();
	ePWM_Per1();
	Nhet1_Per3();
}


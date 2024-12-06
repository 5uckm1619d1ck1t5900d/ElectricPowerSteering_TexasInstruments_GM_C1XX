/*****************************************************************************
* Copyright 2010 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : Interrupts.h
* Module Description: Interrupts external definitions
* Product           : Gen II Plus - EA3.0
* Author            : Jeremy Warmbier
*****************************************************************************/
/*---------------------------------------------------------------------------
* Version Control:
* Date Created:      Tue Apr 12 14:52:50 2011
* %version:          4 %
* %derived_by:       CZ8L9T %
* %date_modified:    Mon Sep 23 12:07:25 2013 % 
*---------------------------------------------------------------------------*/
#ifndef INTERRUPTS_H
#define INTERRUPTS_H

FUNC(void, EXCEPTION_HANDLER_CODE) Isr_ESMH(void);
FUNC(void, INTERRUPT_CODE) EnableSysTickInterrupt(void);
FUNC(void, INTERRUPT_CODE) ClearSysTickInterruptFlg(void);
FUNC(void, INTERRUPT_CODE) EnableCRCInterrupt(void);
FUNC(void, INTERRUPT_CODE) EnableCanInterrupt(void);
FUNC(void, INTERRUPT_CODE) EnableCan1Interrupt(void);
FUNC(void, INTERRUPT_CODE) EnableCan2Interrupt(void);
FUNC(void, INTERRUPT_CODE) DisableCan1Interrupt(void);
FUNC(void, INTERRUPT_CODE) DisableCan2Interrupt(void);
FUNC(void, INTERRUPT_CODE) EnableMtrCtlInterrupt(void);
FUNC(void, INTERRUPT_CODE) EnableEeSpiInterrupt(void);
FUNC(void, INTERRUPT_CODE) EnableESMLInterrupt(void);
FUNC(void, INTERRUPT_CODE) DisableMtrCtlInterrupt(void);
FUNC(void, INTERRUPT_CODE) DisableSysTickInterrupt(void);
FUNC(void, INTERRUPT_CODE) EnableFIQInterrupts(void);
FUNC(void, INTERRUPT_CODE) EnableI2CInterrupts(void);
FUNC(void, INTERRUPT_CODE) DisableI2CInterrupt(void);
FUNC(void, INTERRUPT_CODE) EnableOverVoltThreshInterrupt(void);
#endif

/*****************************************************************************

CHANGE HISTORY:

 Date      Rev      Author         Change Description              SCR #
-------   -------  --------  -----------------------------------  ----------
07/29/13  1        LWW       Initial C1xx Synergy Version
09/23/13  2        LWW       Added I2C interrupt
******************************************************************************/

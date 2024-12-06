/*****************************************************************************
* Copyright 2010 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : NtWrap.h
* Module Description: Non-trusted function call wrapper definitions to allow
*						calling of SCom server functions not located in the
*						application with the Diag service handler.
* Product           : Gen II Plus - EA3.0
* Author            : Jeremy Warmbier
*****************************************************************************/
/*---------------------------------------------------------------------------
* Version Control:
* Date Created:      Tue Oct 30 14:56:37 2012
* %version:          1 %
* %derived_by:       czgng4 %
* %date_modified:    Mon Jul 29 08:45:05 2013 %
*---------------------------------------------------------------------------*/

#ifndef NTWRAP_H
#define NTWRAP_H

#include "Std_Types.h"
#include "Rte_Type.h"

extern FUNC(void, NTWRAP_CODE) NtWrapC_CanStart(void);
extern FUNC(void, NTWRAP_CODE) NtWrapC_CanStop(void);
extern FUNC(void, NTWRAP_CODE) NtWrapC_SrlComInput_SCom_ResetBus1Timers(void);
extern FUNC(void, NTWRAP_CODE) NtWrapC_SrlComInput_SCom_ResetBus2Timers(void);
extern FUNC(void, NTWRAP_CODE) NtWrapC_IlInitPowerOn(void);
extern FUNC(void, NTWRAP_CODE) NtWrapC_TpInitPowerOn(void);
extern FUNC(void, NTWRAP_CODE) NtWrapC_DescInitPowerOn(void);
extern FUNC(void, NTWRAP_CODE) NtWrapC_GgdaInitPowerOn(void);
extern FUNC(void, NTWRAP_CODE) NtWrapC_AppDesc_Init(void);
extern FUNC(void, NTWRAP_CODE) NtWrapC_XcpInit(void);

extern FUNC(uint8, NTWRAP_CODE) CanStop(uint16 channel);
extern FUNC(uint8, NTWRAP_CODE) CanStart(uint16 channel);
extern FUNC(void, NTWRAP_CODE) SrlComInput_SCom_ResetBus1Timers(void);
extern FUNC(void, NTWRAP_CODE) SrlComInput_SCom_ResetBus2Timers(void);
extern FUNC(void, NTWRAP_CODE) IlInitPowerOn(void);
extern FUNC(void, NTWRAP_CODE) TpInitPowerOn(void);
extern FUNC(void, NTWRAP_CODE) DescInitPowerOn(uint8 initParam);
extern FUNC(void, NTWRAP_CODE) GgdaInitPowerOn(void);
extern FUNC(void, NTWRAP_CODE) AppDesc_Init(void);
extern FUNC(void, NTWRAP_CODE) XcpInit(void);

#endif

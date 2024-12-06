/**********************************************************************
*
*	Header %name:	trustfct.h %
*	Instance:		sag_EPS_12
*	Description:	
*	%created_by:	czgng4 %
*	%date_created:	Fri Jul 26 16:49:59 2013 %
*
**********************************************************************/
#ifndef _TRUSTCFT_H 
#define _TRUSTCFT_H

void Call_MtrPos_SCom_SetEOLMtrCals(const MtrPosCal_DataType * os_arg_MtrCalDataPtr);
void Call_ProcessF0FF(P2VAR(uint8, AUTOMATIC, AUTOMATIC) t_SrvcData_Cnt_T_u08, VAR(uint16, AUTOMATIC) RequestDataIdx_Cnt_T_u16);

#endif

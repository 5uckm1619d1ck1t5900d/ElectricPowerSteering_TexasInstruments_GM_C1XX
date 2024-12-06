#ifndef EPS_DIAGSRVCS_ISO_INTERFACE_H
#define EPS_DIAGSRVCS_ISO_INTERFACE_H

extern void ActivePull_SCom_ReadParam(float32* PullCompCmd_HwNm_f32, float32* STComp_HwNm_f32, float32* LTComp_HwNm_f32, boolean* EnableLearn_Cnt_lgc);
extern void ActivePull_SCom_SetLTComp(float32 LTComp_HwNm_f32);

#endif
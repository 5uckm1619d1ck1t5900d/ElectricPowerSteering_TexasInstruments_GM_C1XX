typedef struct EOTLearned_DataType
{
  float32 CWEOTPosition_HwDeg_f32;
  float32 CCWEOTPosition_HwDeg_f32;
  boolean CWEOTFound_Cnt_lgc;
  boolean CCWEOTFound_Cnt_lgc;
} EOTLearned_DataType;

extern VAR(EOTLearned_DataType, RTE_VAR_NOINIT) Rte_Ap_LrnEOT_LearnedEOT;
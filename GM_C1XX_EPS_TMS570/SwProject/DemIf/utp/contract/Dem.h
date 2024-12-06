typedef uint8  Dem_EventIdType;
typedef uint8 Dem_DTCKindType;
typedef uint32 Dem_DTCType;
typedef uint8 Dem_OperationCycleIdType;
typedef uint8 Dem_EventStatusType;
typedef uint8 Dem_OperationCycleStateType;

#define DEM_DTC_KIND_ALL_DTCS                             0x01

extern FUNC(void, DEM_CODE) Dem_Init(void);
extern FUNC(Std_ReturnType, DEM_CODE) Dem_GetDTCOfEvent(Dem_EventIdType EventId, Dem_DTCKindType DTCKind, P2VAR(Dem_DTCType, AUTOMATIC, DEM_APPL_DATA) DTCOfEvent);
extern FUNC(Std_ReturnType, DEM_CODE) Dem_SetEventStatus(Dem_EventIdType EventId, Dem_EventStatusType EventStatus);
extern FUNC(Std_ReturnType, DEM_CODE) Dem_SetOperationCycleState(Dem_OperationCycleIdType OperationCycleId, Dem_OperationCycleStateType CycleState);
extern FUNC(void, DEM_CODE) Dem_Shutdown(void);
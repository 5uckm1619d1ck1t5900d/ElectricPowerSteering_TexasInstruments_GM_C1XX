#define DEM_DTC_KIND_ALL_DTCS                             0x01u
#define Dem_Warning_Indicator							  0u
#define Dem_Steering_Reduced_Assist						  1u
#define DEM_INDICATOR_CONTINUOUS                          0x01u 

typedef uint8 Dem_IndicatorIdType;
typedef uint8 Dem_IndicatorStatusType;

extern FUNC(Std_ReturnType, DEM_CODE) Dem_GetDTCOfEvent (VAR(uint8, AUTOMATIC)	EventId, 
														 VAR(uint8, AUTOMATIC)	DTCKind, 
														 P2VAR(uint32, AUTOMATIC, DEM_APPL_DATA)  DTCOfEvent);
extern FUNC(Std_ReturnType, DEM_CODE) Dem_GetEventFailed (VAR(uint8, AUTOMATIC)	EventId,
														  P2VAR(boolean, AUTOMATIC, DEM_APPL_DATA)	EventFailed);
extern FUNC(Std_ReturnType, DEM_CODE) Dem_GetEventFailed (VAR(uint8, AUTOMATIC)	EventId,
														  P2VAR(boolean, AUTOMATIC, DEM_APPL_DATA)  EventFailed);
extern FUNC(Std_ReturnType, DEM_CODE) Dem_GetEventStatus(VAR(uint8, AUTOMATIC)	EventId,
														 P2VAR(uint8, AUTOMATIC, DEM_APPL_DATA)  EventStatusExtended);
extern FUNC(Std_ReturnType, DEM_CODE) Dem_GetIndicatorStatus(	Dem_IndicatorIdType Dem_IndicatorId,
																P2VAR(Dem_IndicatorStatusType, AUTOMATIC, DEM_APPL_DATA)  Dem_IndicatorStatus);
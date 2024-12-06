
#define DEM_NVDATA_PATTERN_SIZE                         4U
#define DEM_MAX_NUMBER_EVENT_ENTRY           29U
#define DEM_MAX_EXTDATA_RECORD_SIZE          0U
#define DEM_SNAPSHOTS_PER_DTC                2U
#define DEM_MAX_SNAPSHOT_RECORD_SIZE         21U
#define DEM_NUMBER_OF_EVENTS                 58U

typedef struct Dem_ChronoPriMemTypeTag
{
  uint8 dtcInternalNumber;
  uint8 ref;
} Dem_ChronoPriMemType;


typedef struct Dem_NonVolatileDataTypeTag
{
  uint8 consistencyPattern[DEM_NVDATA_PATTERN_SIZE];
  uint8 chronoPriMemUsed;
  uint8 primaryStack[DEM_MAX_NUMBER_EVENT_ENTRY][(DEM_MAX_EXTDATA_RECORD_SIZE)+(DEM_SNAPSHOTS_PER_DTC*DEM_MAX_SNAPSHOT_RECORD_SIZE)+1];
  Dem_ChronoPriMemType chronoPriMem[DEM_MAX_NUMBER_EVENT_ENTRY];
  uint8 dtcStatusByte[DEM_NUMBER_OF_EVENTS+1];
  sint8 dtcFaultDetectionCounter[DEM_NUMBER_OF_EVENTS+1];
  uint8 dtcAgingCounter[DEM_MAX_NUMBER_EVENT_ENTRY];
  uint8 firstFailedEvent;
  uint8 firstConfirmedEvent;
  uint8 mostRecentFailedEvent;
  uint8 mostRecentConfirmedEvent;
  uint8 terminatingPattern[DEM_NVDATA_PATTERN_SIZE];
} Dem_NonVolatileDataType;

extern VAR(Dem_NonVolatileDataType, DEM_APPL_DATA) Dem_NvData;

typedef uint8 Dem_DtcChronoRefType;
typedef uint8 Dem_DtcStatusByteType;


/*
 * Generated file - DO NOT EDIT
 *
 * This is the header file for the LLRP Tool Kit (LTK)
 * C++ (aka cpp) implementation. It is generated into a .inc file
 * that is included by a platform specific .h header file.
 * That .h file takes care of prerequisites needed by this file.
 */




/*
 * Message classes - forward decls
 */


/* Custom messages */

struct LLRP_SIMPINJ_ENABLE_EXTENSIONS;
typedef struct LLRP_SIMPINJ_ENABLE_EXTENSIONS
    LLRP_tSIMPINJ_ENABLE_EXTENSIONS;

struct LLRP_SIMPINJ_ENABLE_EXTENSIONS_RESPONSE;
typedef struct LLRP_SIMPINJ_ENABLE_EXTENSIONS_RESPONSE
    LLRP_tSIMPINJ_ENABLE_EXTENSIONS_RESPONSE;

struct LLRP_SIMPINJ_SAVE_SETTINGS;
typedef struct LLRP_SIMPINJ_SAVE_SETTINGS
    LLRP_tSIMPINJ_SAVE_SETTINGS;

struct LLRP_SIMPINJ_SAVE_SETTINGS_RESPONSE;
typedef struct LLRP_SIMPINJ_SAVE_SETTINGS_RESPONSE
    LLRP_tSIMPINJ_SAVE_SETTINGS_RESPONSE;


/*
 * Parameter classes - forward decls
 */


/* Custom parameters */

struct LLRP_SImpinjRequestedData;
typedef struct LLRP_SImpinjRequestedData
    LLRP_tSImpinjRequestedData;

struct LLRP_SImpinjSubRegulatoryRegion;
typedef struct LLRP_SImpinjSubRegulatoryRegion
    LLRP_tSImpinjSubRegulatoryRegion;

struct LLRP_SImpinjInventorySearchMode;
typedef struct LLRP_SImpinjInventorySearchMode
    LLRP_tSImpinjInventorySearchMode;

struct LLRP_SImpinjFixedFrequencyList;
typedef struct LLRP_SImpinjFixedFrequencyList
    LLRP_tSImpinjFixedFrequencyList;

struct LLRP_SImpinjReducedPowerFrequencyList;
typedef struct LLRP_SImpinjReducedPowerFrequencyList
    LLRP_tSImpinjReducedPowerFrequencyList;

struct LLRP_SImpinjLowDutyCycle;
typedef struct LLRP_SImpinjLowDutyCycle
    LLRP_tSImpinjLowDutyCycle;

struct LLRP_SImpinjHubVersions;
typedef struct LLRP_SImpinjHubVersions
    LLRP_tSImpinjHubVersions;

struct LLRP_SImpinjDetailedVersion;
typedef struct LLRP_SImpinjDetailedVersion
    LLRP_tSImpinjDetailedVersion;

struct LLRP_SImpinjFrequencyCapabilities;
typedef struct LLRP_SImpinjFrequencyCapabilities
    LLRP_tSImpinjFrequencyCapabilities;

struct LLRP_SImpinjGPIDebounceConfiguration;
typedef struct LLRP_SImpinjGPIDebounceConfiguration
    LLRP_tSImpinjGPIDebounceConfiguration;

struct LLRP_SImpinjReaderTemperature;
typedef struct LLRP_SImpinjReaderTemperature
    LLRP_tSImpinjReaderTemperature;

struct LLRP_SImpinjLinkMonitorConfiguration;
typedef struct LLRP_SImpinjLinkMonitorConfiguration
    LLRP_tSImpinjLinkMonitorConfiguration;

struct LLRP_SImpinjReportBufferConfiguration;
typedef struct LLRP_SImpinjReportBufferConfiguration
    LLRP_tSImpinjReportBufferConfiguration;

struct LLRP_SImpinjAccessSpecConfiguration;
typedef struct LLRP_SImpinjAccessSpecConfiguration
    LLRP_tSImpinjAccessSpecConfiguration;

struct LLRP_SImpinjBlockWriteWordCount;
typedef struct LLRP_SImpinjBlockWriteWordCount
    LLRP_tSImpinjBlockWriteWordCount;

struct LLRP_SImpinjBlockPermalock;
typedef struct LLRP_SImpinjBlockPermalock
    LLRP_tSImpinjBlockPermalock;

struct LLRP_SImpinjBlockPermalockOpSpecResult;
typedef struct LLRP_SImpinjBlockPermalockOpSpecResult
    LLRP_tSImpinjBlockPermalockOpSpecResult;

struct LLRP_SImpinjGetBlockPermalockStatus;
typedef struct LLRP_SImpinjGetBlockPermalockStatus
    LLRP_tSImpinjGetBlockPermalockStatus;

struct LLRP_SImpinjGetBlockPermalockStatusOpSpecResult;
typedef struct LLRP_SImpinjGetBlockPermalockStatusOpSpecResult
    LLRP_tSImpinjGetBlockPermalockStatusOpSpecResult;

struct LLRP_SImpinjSetQTConfig;
typedef struct LLRP_SImpinjSetQTConfig
    LLRP_tSImpinjSetQTConfig;

struct LLRP_SImpinjSetQTConfigOpSpecResult;
typedef struct LLRP_SImpinjSetQTConfigOpSpecResult
    LLRP_tSImpinjSetQTConfigOpSpecResult;

struct LLRP_SImpinjGetQTConfig;
typedef struct LLRP_SImpinjGetQTConfig
    LLRP_tSImpinjGetQTConfig;

struct LLRP_SImpinjGetQTConfigOpSpecResult;
typedef struct LLRP_SImpinjGetQTConfigOpSpecResult
    LLRP_tSImpinjGetQTConfigOpSpecResult;

struct LLRP_SImpinjTagReportContentSelector;
typedef struct LLRP_SImpinjTagReportContentSelector
    LLRP_tSImpinjTagReportContentSelector;

struct LLRP_SImpinjEnableSerializedTID;
typedef struct LLRP_SImpinjEnableSerializedTID
    LLRP_tSImpinjEnableSerializedTID;

struct LLRP_SImpinjEnableRFPhaseAngle;
typedef struct LLRP_SImpinjEnableRFPhaseAngle
    LLRP_tSImpinjEnableRFPhaseAngle;

struct LLRP_SImpinjEnablePeakRSSI;
typedef struct LLRP_SImpinjEnablePeakRSSI
    LLRP_tSImpinjEnablePeakRSSI;

struct LLRP_SImpinjEnableGPSCoordinates;
typedef struct LLRP_SImpinjEnableGPSCoordinates
    LLRP_tSImpinjEnableGPSCoordinates;

struct LLRP_SImpinjSerializedTID;
typedef struct LLRP_SImpinjSerializedTID
    LLRP_tSImpinjSerializedTID;

struct LLRP_SImpinjRFPhaseAngle;
typedef struct LLRP_SImpinjRFPhaseAngle
    LLRP_tSImpinjRFPhaseAngle;

struct LLRP_SImpinjPeakRSSI;
typedef struct LLRP_SImpinjPeakRSSI
    LLRP_tSImpinjPeakRSSI;

struct LLRP_SImpinjGPSCoordinates;
typedef struct LLRP_SImpinjGPSCoordinates
    LLRP_tSImpinjGPSCoordinates;

struct LLRP_SImpinjLoopSpec;
typedef struct LLRP_SImpinjLoopSpec
    LLRP_tSImpinjLoopSpec;

struct LLRP_SImpinjGPSNMEASentences;
typedef struct LLRP_SImpinjGPSNMEASentences
    LLRP_tSImpinjGPSNMEASentences;

struct LLRP_SImpinjGGASentence;
typedef struct LLRP_SImpinjGGASentence
    LLRP_tSImpinjGGASentence;

struct LLRP_SImpinjRMCSentence;
typedef struct LLRP_SImpinjRMCSentence
    LLRP_tSImpinjRMCSentence;

struct LLRP_SImpinjOpSpecRetryCount;
typedef struct LLRP_SImpinjOpSpecRetryCount
    LLRP_tSImpinjOpSpecRetryCount;

struct LLRP_SImpinjAdvancedGPOConfiguration;
typedef struct LLRP_SImpinjAdvancedGPOConfiguration
    LLRP_tSImpinjAdvancedGPOConfiguration;

struct LLRP_SImpinjEnableOptimizedRead;
typedef struct LLRP_SImpinjEnableOptimizedRead
    LLRP_tSImpinjEnableOptimizedRead;

struct LLRP_SImpinjAccessSpecOrdering;
typedef struct LLRP_SImpinjAccessSpecOrdering
    LLRP_tSImpinjAccessSpecOrdering;

struct LLRP_SImpinjEnableRFDopplerFrequency;
typedef struct LLRP_SImpinjEnableRFDopplerFrequency
    LLRP_tSImpinjEnableRFDopplerFrequency;

struct LLRP_SImpinjRFDopplerFrequency;
typedef struct LLRP_SImpinjRFDopplerFrequency
    LLRP_tSImpinjRFDopplerFrequency;

struct LLRP_SImpinjInventoryConfiguration;
typedef struct LLRP_SImpinjInventoryConfiguration
    LLRP_tSImpinjInventoryConfiguration;

struct LLRP_SImpinjEnableTxPower;
typedef struct LLRP_SImpinjEnableTxPower
    LLRP_tSImpinjEnableTxPower;

struct LLRP_SImpinjTxPower;
typedef struct LLRP_SImpinjTxPower
    LLRP_tSImpinjTxPower;

struct LLRP_SImpinjEnableXPCWords;
typedef struct LLRP_SImpinjEnableXPCWords
    LLRP_tSImpinjEnableXPCWords;

struct LLRP_SImpinjXPCWords;
typedef struct LLRP_SImpinjXPCWords
    LLRP_tSImpinjXPCWords;

struct LLRP_SImpinjArrayVersion;
typedef struct LLRP_SImpinjArrayVersion
    LLRP_tSImpinjArrayVersion;

struct LLRP_SImpinjxArrayCapabilities;
typedef struct LLRP_SImpinjxArrayCapabilities
    LLRP_tSImpinjxArrayCapabilities;

struct LLRP_SImpinjTiltConfiguration;
typedef struct LLRP_SImpinjTiltConfiguration
    LLRP_tSImpinjTiltConfiguration;

struct LLRP_SImpinjBeaconConfiguration;
typedef struct LLRP_SImpinjBeaconConfiguration
    LLRP_tSImpinjBeaconConfiguration;

struct LLRP_SImpinjAntennaConfiguration;
typedef struct LLRP_SImpinjAntennaConfiguration
    LLRP_tSImpinjAntennaConfiguration;

struct LLRP_SImpinjAntennaEventHysteresis;
typedef struct LLRP_SImpinjAntennaEventHysteresis
    LLRP_tSImpinjAntennaEventHysteresis;

struct LLRP_SImpinjAntennaEventConfiguration;
typedef struct LLRP_SImpinjAntennaEventConfiguration
    LLRP_tSImpinjAntennaEventConfiguration;

struct LLRP_SImpinjAntennaAttemptEvent;
typedef struct LLRP_SImpinjAntennaAttemptEvent
    LLRP_tSImpinjAntennaAttemptEvent;

struct LLRP_SImpinjHubConfiguration;
typedef struct LLRP_SImpinjHubConfiguration
    LLRP_tSImpinjHubConfiguration;

struct LLRP_SImpinjDiagnosticReport;
typedef struct LLRP_SImpinjDiagnosticReport
    LLRP_tSImpinjDiagnosticReport;

struct LLRP_SImpinjPlacementConfiguration;
typedef struct LLRP_SImpinjPlacementConfiguration
    LLRP_tSImpinjPlacementConfiguration;

struct LLRP_SImpinjLISpec;
typedef struct LLRP_SImpinjLISpec
    LLRP_tSImpinjLISpec;

struct LLRP_SImpinjLocationConfig;
typedef struct LLRP_SImpinjLocationConfig
    LLRP_tSImpinjLocationConfig;

struct LLRP_SImpinjC1G2LocationConfig;
typedef struct LLRP_SImpinjC1G2LocationConfig
    LLRP_tSImpinjC1G2LocationConfig;

struct LLRP_SImpinjLocationReporting;
typedef struct LLRP_SImpinjLocationReporting
    LLRP_tSImpinjLocationReporting;

struct LLRP_SImpinjLocationConfidence;
typedef struct LLRP_SImpinjLocationConfidence
    LLRP_tSImpinjLocationConfidence;

struct LLRP_SImpinjLocationReportData;
typedef struct LLRP_SImpinjLocationReportData
    LLRP_tSImpinjLocationReportData;

struct LLRP_SImpinjDISpec;
typedef struct LLRP_SImpinjDISpec
    LLRP_tSImpinjDISpec;

struct LLRP_SImpinjDirectionSectors;
typedef struct LLRP_SImpinjDirectionSectors
    LLRP_tSImpinjDirectionSectors;

struct LLRP_SImpinjDirectionConfig;
typedef struct LLRP_SImpinjDirectionConfig
    LLRP_tSImpinjDirectionConfig;

struct LLRP_SImpinjDirectionUserTagPopulationLimit;
typedef struct LLRP_SImpinjDirectionUserTagPopulationLimit
    LLRP_tSImpinjDirectionUserTagPopulationLimit;

struct LLRP_SImpinjC1G2DirectionConfig;
typedef struct LLRP_SImpinjC1G2DirectionConfig
    LLRP_tSImpinjC1G2DirectionConfig;

struct LLRP_SImpinjExtendedTagInformation;
typedef struct LLRP_SImpinjExtendedTagInformation
    LLRP_tSImpinjExtendedTagInformation;

struct LLRP_SImpinjDirectionReporting;
typedef struct LLRP_SImpinjDirectionReporting
    LLRP_tSImpinjDirectionReporting;

struct LLRP_SImpinjDirectionReportData;
typedef struct LLRP_SImpinjDirectionReportData
    LLRP_tSImpinjDirectionReportData;

struct LLRP_SImpinjDirectionDiagnosticData;
typedef struct LLRP_SImpinjDirectionDiagnosticData
    LLRP_tSImpinjDirectionDiagnosticData;

struct LLRP_SImpinjxArrayDirectionCapabilities;
typedef struct LLRP_SImpinjxArrayDirectionCapabilities
    LLRP_tSImpinjxArrayDirectionCapabilities;

struct LLRP_SImpinjIntelligentAntennaManagement;
typedef struct LLRP_SImpinjIntelligentAntennaManagement
    LLRP_tSImpinjIntelligentAntennaManagement;

struct LLRP_SImpinjTransmitPower;
typedef struct LLRP_SImpinjTransmitPower
    LLRP_tSImpinjTransmitPower;

struct LLRP_SImpinjPolarizationControl;
typedef struct LLRP_SImpinjPolarizationControl
    LLRP_tSImpinjPolarizationControl;

struct LLRP_SImpinjAntennaCapabilities;
typedef struct LLRP_SImpinjAntennaCapabilities
    LLRP_tSImpinjAntennaCapabilities;

struct LLRP_SImpinjAntennaPolarizationCapability;
typedef struct LLRP_SImpinjAntennaPolarizationCapability
    LLRP_tSImpinjAntennaPolarizationCapability;

struct LLRP_SImpinjDisabledAntennas;
typedef struct LLRP_SImpinjDisabledAntennas
    LLRP_tSImpinjDisabledAntennas;

struct LLRP_SImpinjTIDParity;
typedef struct LLRP_SImpinjTIDParity
    LLRP_tSImpinjTIDParity;

struct LLRP_SImpinjMarginRead;
typedef struct LLRP_SImpinjMarginRead
    LLRP_tSImpinjMarginRead;

struct LLRP_SImpinjMarginReadOpSpecResult;
typedef struct LLRP_SImpinjMarginReadOpSpecResult
    LLRP_tSImpinjMarginReadOpSpecResult;

struct LLRP_SImpinjBLEVersion;
typedef struct LLRP_SImpinjBLEVersion
    LLRP_tSImpinjBLEVersion;

struct LLRP_SImpinjLocationAlgorithmControl;
typedef struct LLRP_SImpinjLocationAlgorithmControl
    LLRP_tSImpinjLocationAlgorithmControl;

struct LLRP_SImpinjRFPowerSweep;
typedef struct LLRP_SImpinjRFPowerSweep
    LLRP_tSImpinjRFPowerSweep;

struct LLRP_SImpinjTruncatedReplyConfiguration;
typedef struct LLRP_SImpinjTruncatedReplyConfiguration
    LLRP_tSImpinjTruncatedReplyConfiguration;

struct LLRP_SImpinjAuthenticate;
typedef struct LLRP_SImpinjAuthenticate
    LLRP_tSImpinjAuthenticate;

struct LLRP_SImpinjAuthenticateOpSpecResult;
typedef struct LLRP_SImpinjAuthenticateOpSpecResult
    LLRP_tSImpinjAuthenticateOpSpecResult;

struct LLRP_SImpinjTagFilterVerificationConfiguration;
typedef struct LLRP_SImpinjTagFilterVerificationConfiguration
    LLRP_tSImpinjTagFilterVerificationConfiguration;

struct LLRP_SImpinjEnableTagPopulationEstimationAlgorithm;
typedef struct LLRP_SImpinjEnableTagPopulationEstimationAlgorithm
    LLRP_tSImpinjEnableTagPopulationEstimationAlgorithm;


/*
 * Vendor descriptor declarations.
 */

extern const LLRP_tSVendorDescriptor
LLRP_vdescImpinj;


/*
 * Namespace descriptor declarations.
 */

extern const LLRP_tSNamespaceDescriptor
LLRP_nsdescImpinj;


/*
 * Enumeration definitions and declarations of
 * enumeration string tables.
 */


enum LLRP_EImpinjRequestedDataType
{

    LLRP_ImpinjRequestedDataType_All_Capabilities = 1000,
    LLRP_ImpinjRequestedDataType_Impinj_Detailed_Version = 1001,
    LLRP_ImpinjRequestedDataType_Impinj_Frequency_Capabilities = 1002,
    LLRP_ImpinjRequestedDataType_Impinj_xArray_Capabilities = 1003,
    LLRP_ImpinjRequestedDataType_Impinj_Antenna_Capabilities = 1004,
    LLRP_ImpinjRequestedDataType_All_Configuration = 2000,
    LLRP_ImpinjRequestedDataType_Impinj_Sub_Regulatory_Region = 2001,
    LLRP_ImpinjRequestedDataType_Impinj_GPI_Debounce_Configuration = 2003,
    LLRP_ImpinjRequestedDataType_Impinj_Reader_Temperature = 2004,
    LLRP_ImpinjRequestedDataType_Impinj_Link_Monitor_Configuration = 2005,
    LLRP_ImpinjRequestedDataType_Impinj_Report_Buffer_Configuration = 2006,
    LLRP_ImpinjRequestedDataType_Impinj_Access_Spec_Configuration = 2007,
    LLRP_ImpinjRequestedDataType_Impinj_GPS_NMEA_Sentences = 2008,
    LLRP_ImpinjRequestedDataType_Impinj_Advanced_GPO_Configuration = 2009,
    LLRP_ImpinjRequestedDataType_Impinj_Tilt_Configuration = 2010,
    LLRP_ImpinjRequestedDataType_Impinj_Beacon_Configuration = 2011,
    LLRP_ImpinjRequestedDataType_Impinj_Antenna_Configuration = 2012,
    LLRP_ImpinjRequestedDataType_Impinj_Location_Configuration = 2013,
    LLRP_ImpinjRequestedDataType_Impinj_Transition_Configuration = 2014,
    LLRP_ImpinjRequestedDataType_Impinj_Hub_Configuration = 2015,
    LLRP_ImpinjRequestedDataType_Impinj_PolarizationControl_Configuration = 2017,
    LLRP_ImpinjRequestedDataType_Impinj_Direction_Configuration = 2018,
};

typedef enum LLRP_EImpinjRequestedDataType
    LLRP_tEImpinjRequestedDataType;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjRequestedDataType[];


enum LLRP_EImpinjRegulatoryRegion
{

    LLRP_ImpinjRegulatoryRegion_FCC_Part_15_247 = 0,
    LLRP_ImpinjRegulatoryRegion_ETSI_EN_300_220 = 1,
    LLRP_ImpinjRegulatoryRegion_ETSI_EN_302_208_With_LBT = 2,
    LLRP_ImpinjRegulatoryRegion_Hong_Kong_920_925_MHz = 3,
    LLRP_ImpinjRegulatoryRegion_Taiwan_922_928_MHz = 4,
    LLRP_ImpinjRegulatoryRegion_ETSI_EN_302_208_v1_2_1 = 7,
    LLRP_ImpinjRegulatoryRegion_Korea_917_921_MHz = 8,
    LLRP_ImpinjRegulatoryRegion_Malaysia_919_923_MHz = 9,
    LLRP_ImpinjRegulatoryRegion_China_920_925_MHz = 10,
    LLRP_ImpinjRegulatoryRegion_South_Africa_915_919_MHz = 12,
    LLRP_ImpinjRegulatoryRegion_Brazil_902_907_and_915_928_MHz = 13,
    LLRP_ImpinjRegulatoryRegion_Thailand_920_925_MHz = 14,
    LLRP_ImpinjRegulatoryRegion_Singapore_920_925_MHz = 15,
    LLRP_ImpinjRegulatoryRegion_Australia_920_926_MHz = 16,
    LLRP_ImpinjRegulatoryRegion_India_865_867_MHz = 17,
    LLRP_ImpinjRegulatoryRegion_Uruguay_916_928_MHz = 18,
    LLRP_ImpinjRegulatoryRegion_Vietnam_918_923_MHz = 19,
    LLRP_ImpinjRegulatoryRegion_Israel_915_917_MHz = 20,
    LLRP_ImpinjRegulatoryRegion_Philippines_918_920_MHz = 21,
    LLRP_ImpinjRegulatoryRegion_Vietnam_920_923_MHz = 22,
    LLRP_ImpinjRegulatoryRegion_Indonesia_920_923_MHz = 23,
    LLRP_ImpinjRegulatoryRegion_New_Zealand_921p5_928_MHz = 24,
    LLRP_ImpinjRegulatoryRegion_Japan_916_921_MHz_Without_LBT = 25,
    LLRP_ImpinjRegulatoryRegion_Latin_America_902_928_MHz = 26,
    LLRP_ImpinjRegulatoryRegion_Peru_916_928_MHz = 27,
    LLRP_ImpinjRegulatoryRegion_Bangladesh_925_927_MHz = 28,
    LLRP_ImpinjRegulatoryRegion_ETSI_915_921_MHz = 29,
    LLRP_ImpinjRegulatoryRegion_Morocco_867_868_MHz = 30,
    LLRP_ImpinjRegulatoryRegion_Paraguay_918_928_MHz = 31,
    LLRP_ImpinjRegulatoryRegion_Morocco = 32,
    LLRP_ImpinjRegulatoryRegion_Chile = 33,
};

typedef enum LLRP_EImpinjRegulatoryRegion
    LLRP_tEImpinjRegulatoryRegion;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjRegulatoryRegion[];


enum LLRP_EImpinjInventorySearchType
{

    LLRP_ImpinjInventorySearchType_Reader_Selected = 0,
    LLRP_ImpinjInventorySearchType_Single_Target = 1,
    LLRP_ImpinjInventorySearchType_Dual_Target = 2,
    LLRP_ImpinjInventorySearchType_Single_Target_With_Suppression = 3,
    LLRP_ImpinjInventorySearchType_No_Target = 4,
    LLRP_ImpinjInventorySearchType_Single_Target_BtoA = 5,
    LLRP_ImpinjInventorySearchType_Dual_Target_with_BtoASelect = 6,
};

typedef enum LLRP_EImpinjInventorySearchType
    LLRP_tEImpinjInventorySearchType;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjInventorySearchType[];


enum LLRP_EImpinjFixedFrequencyMode
{

    LLRP_ImpinjFixedFrequencyMode_Disabled = 0,
    LLRP_ImpinjFixedFrequencyMode_Auto_Select = 1,
    LLRP_ImpinjFixedFrequencyMode_Channel_List = 2,
};

typedef enum LLRP_EImpinjFixedFrequencyMode
    LLRP_tEImpinjFixedFrequencyMode;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjFixedFrequencyMode[];


enum LLRP_EImpinjReducedPowerMode
{

    LLRP_ImpinjReducedPowerMode_Disabled = 0,
    LLRP_ImpinjReducedPowerMode_Enabled = 1,
};

typedef enum LLRP_EImpinjReducedPowerMode
    LLRP_tEImpinjReducedPowerMode;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjReducedPowerMode[];


enum LLRP_EImpinjLowDutyCycleMode
{

    LLRP_ImpinjLowDutyCycleMode_Disabled = 0,
    LLRP_ImpinjLowDutyCycleMode_Enabled = 1,
};

typedef enum LLRP_EImpinjLowDutyCycleMode
    LLRP_tEImpinjLowDutyCycleMode;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjLowDutyCycleMode[];


enum LLRP_EImpinjLinkMonitorMode
{

    LLRP_ImpinjLinkMonitorMode_Disabled = 0,
    LLRP_ImpinjLinkMonitorMode_Enabled = 1,
};

typedef enum LLRP_EImpinjLinkMonitorMode
    LLRP_tEImpinjLinkMonitorMode;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjLinkMonitorMode[];


enum LLRP_EImpinjReportBufferMode
{

    LLRP_ImpinjReportBufferMode_Normal = 0,
    LLRP_ImpinjReportBufferMode_Low_Latency = 1,
};

typedef enum LLRP_EImpinjReportBufferMode
    LLRP_tEImpinjReportBufferMode;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjReportBufferMode[];


enum LLRP_EImpinjBlockPermalockResultType
{

    LLRP_ImpinjBlockPermalockResultType_Success = 0,
    LLRP_ImpinjBlockPermalockResultType_Insufficient_Power = 1,
    LLRP_ImpinjBlockPermalockResultType_Nonspecific_Tag_Error = 2,
    LLRP_ImpinjBlockPermalockResultType_No_Response_From_Tag = 3,
    LLRP_ImpinjBlockPermalockResultType_Nonspecific_Reader_Error = 4,
    LLRP_ImpinjBlockPermalockResultType_Incorrect_Password_Error = 5,
    LLRP_ImpinjBlockPermalockResultType_Tag_Memory_Overrun_Error = 6,
};

typedef enum LLRP_EImpinjBlockPermalockResultType
    LLRP_tEImpinjBlockPermalockResultType;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjBlockPermalockResultType[];


enum LLRP_EImpinjGetBlockPermalockStatusResultType
{

    LLRP_ImpinjGetBlockPermalockStatusResultType_Success = 0,
    LLRP_ImpinjGetBlockPermalockStatusResultType_Nonspecific_Tag_Error = 1,
    LLRP_ImpinjGetBlockPermalockStatusResultType_No_Response_From_Tag = 2,
    LLRP_ImpinjGetBlockPermalockStatusResultType_Nonspecific_Reader_Error = 3,
    LLRP_ImpinjGetBlockPermalockStatusResultType_Incorrect_Password_Error = 4,
    LLRP_ImpinjGetBlockPermalockStatusResultType_Tag_Memory_Overrun_Error = 5,
};

typedef enum LLRP_EImpinjGetBlockPermalockStatusResultType
    LLRP_tEImpinjGetBlockPermalockStatusResultType;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjGetBlockPermalockStatusResultType[];


enum LLRP_EImpinjQTDataProfile
{

    LLRP_ImpinjQTDataProfile_Unknown = 0,
    LLRP_ImpinjQTDataProfile_Private = 1,
    LLRP_ImpinjQTDataProfile_Public = 2,
};

typedef enum LLRP_EImpinjQTDataProfile
    LLRP_tEImpinjQTDataProfile;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjQTDataProfile[];


enum LLRP_EImpinjQTAccessRange
{

    LLRP_ImpinjQTAccessRange_Unknown = 0,
    LLRP_ImpinjQTAccessRange_Normal_Range = 1,
    LLRP_ImpinjQTAccessRange_Short_Range = 2,
};

typedef enum LLRP_EImpinjQTAccessRange
    LLRP_tEImpinjQTAccessRange;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjQTAccessRange[];


enum LLRP_EImpinjQTPersistence
{

    LLRP_ImpinjQTPersistence_Unknown = 0,
    LLRP_ImpinjQTPersistence_Temporary = 1,
    LLRP_ImpinjQTPersistence_Permanent = 2,
};

typedef enum LLRP_EImpinjQTPersistence
    LLRP_tEImpinjQTPersistence;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjQTPersistence[];


enum LLRP_EImpinjSetQTConfigResultType
{

    LLRP_ImpinjSetQTConfigResultType_Success = 0,
    LLRP_ImpinjSetQTConfigResultType_Insufficient_Power = 1,
    LLRP_ImpinjSetQTConfigResultType_Nonspecific_Tag_Error = 2,
    LLRP_ImpinjSetQTConfigResultType_No_Response_From_Tag = 3,
    LLRP_ImpinjSetQTConfigResultType_Nonspecific_Reader_Error = 4,
    LLRP_ImpinjSetQTConfigResultType_Incorrect_Password_Error = 5,
};

typedef enum LLRP_EImpinjSetQTConfigResultType
    LLRP_tEImpinjSetQTConfigResultType;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjSetQTConfigResultType[];


enum LLRP_EImpinjGetQTConfigResultType
{

    LLRP_ImpinjGetQTConfigResultType_Success = 0,
    LLRP_ImpinjGetQTConfigResultType_Nonspecific_Tag_Error = 1,
    LLRP_ImpinjGetQTConfigResultType_No_Response_From_Tag = 2,
    LLRP_ImpinjGetQTConfigResultType_Nonspecific_Reader_Error = 3,
    LLRP_ImpinjGetQTConfigResultType_Incorrect_Password_Error = 4,
};

typedef enum LLRP_EImpinjGetQTConfigResultType
    LLRP_tEImpinjGetQTConfigResultType;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjGetQTConfigResultType[];


enum LLRP_EImpinjSerializedTIDMode
{

    LLRP_ImpinjSerializedTIDMode_Disabled = 0,
    LLRP_ImpinjSerializedTIDMode_Enabled = 1,
};

typedef enum LLRP_EImpinjSerializedTIDMode
    LLRP_tEImpinjSerializedTIDMode;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjSerializedTIDMode[];


enum LLRP_EImpinjRFPhaseAngleMode
{

    LLRP_ImpinjRFPhaseAngleMode_Disabled = 0,
    LLRP_ImpinjRFPhaseAngleMode_Enabled = 1,
};

typedef enum LLRP_EImpinjRFPhaseAngleMode
    LLRP_tEImpinjRFPhaseAngleMode;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjRFPhaseAngleMode[];


enum LLRP_EImpinjPeakRSSIMode
{

    LLRP_ImpinjPeakRSSIMode_Disabled = 0,
    LLRP_ImpinjPeakRSSIMode_Enabled = 1,
};

typedef enum LLRP_EImpinjPeakRSSIMode
    LLRP_tEImpinjPeakRSSIMode;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjPeakRSSIMode[];


enum LLRP_EImpinjGPSCoordinatesMode
{

    LLRP_ImpinjGPSCoordinatesMode_Disabled = 0,
    LLRP_ImpinjGPSCoordinatesMode_Enabled = 1,
};

typedef enum LLRP_EImpinjGPSCoordinatesMode
    LLRP_tEImpinjGPSCoordinatesMode;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjGPSCoordinatesMode[];


enum LLRP_EImpinjAdvancedGPOMode
{

    LLRP_ImpinjAdvancedGPOMode_Normal = 0,
    LLRP_ImpinjAdvancedGPOMode_Pulsed = 1,
    LLRP_ImpinjAdvancedGPOMode_Reader_Operational_Status = 2,
    LLRP_ImpinjAdvancedGPOMode_LLRP_Connection_Status = 3,
    LLRP_ImpinjAdvancedGPOMode_Reader_Inventory_Status = 4,
    LLRP_ImpinjAdvancedGPOMode_Network_Connection_Status = 5,
    LLRP_ImpinjAdvancedGPOMode_Reader_Inventory_Tags_Status = 6,
};

typedef enum LLRP_EImpinjAdvancedGPOMode
    LLRP_tEImpinjAdvancedGPOMode;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjAdvancedGPOMode[];


enum LLRP_EImpinjOptimizedReadMode
{

    LLRP_ImpinjOptimizedReadMode_Disabled = 0,
    LLRP_ImpinjOptimizedReadMode_Enabled = 1,
};

typedef enum LLRP_EImpinjOptimizedReadMode
    LLRP_tEImpinjOptimizedReadMode;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjOptimizedReadMode[];


enum LLRP_EImpinjAccessSpecOrderingMode
{

    LLRP_ImpinjAccessSpecOrderingMode_FIFO = 0,
    LLRP_ImpinjAccessSpecOrderingMode_Ascending = 1,
};

typedef enum LLRP_EImpinjAccessSpecOrderingMode
    LLRP_tEImpinjAccessSpecOrderingMode;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjAccessSpecOrderingMode[];


enum LLRP_EImpinjRFDopplerFrequencyMode
{

    LLRP_ImpinjRFDopplerFrequencyMode_Disabled = 0,
    LLRP_ImpinjRFDopplerFrequencyMode_Enabled = 1,
};

typedef enum LLRP_EImpinjRFDopplerFrequencyMode
    LLRP_tEImpinjRFDopplerFrequencyMode;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjRFDopplerFrequencyMode[];


enum LLRP_EImpinjTxPowerReportingModeEnum
{

    LLRP_ImpinjTxPowerReportingModeEnum_Disabled = 0,
    LLRP_ImpinjTxPowerReportingModeEnum_Enabled = 1,
};

typedef enum LLRP_EImpinjTxPowerReportingModeEnum
    LLRP_tEImpinjTxPowerReportingModeEnum;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjTxPowerReportingModeEnum[];


enum LLRP_EImpinjXPCWordsMode
{

    LLRP_ImpinjXPCWordsMode_Disabled = 0,
    LLRP_ImpinjXPCWordsMode_Enabled = 1,
};

typedef enum LLRP_EImpinjXPCWordsMode
    LLRP_tEImpinjXPCWordsMode;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjXPCWordsMode[];


enum LLRP_EImpinjHubConnectedType
{

    LLRP_ImpinjHubConnectedType_Unknown = 0,
    LLRP_ImpinjHubConnectedType_Disconnected = 1,
    LLRP_ImpinjHubConnectedType_Connected = 2,
};

typedef enum LLRP_EImpinjHubConnectedType
    LLRP_tEImpinjHubConnectedType;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjHubConnectedType[];


enum LLRP_EImpinjHubFaultType
{

    LLRP_ImpinjHubFaultType_No_Fault = 0,
    LLRP_ImpinjHubFaultType_RF_Power = 1,
    LLRP_ImpinjHubFaultType_RF_Power_On_Hub_1 = 2,
    LLRP_ImpinjHubFaultType_RF_Power_On_Hub_2 = 3,
    LLRP_ImpinjHubFaultType_RF_Power_On_Hub_3 = 4,
    LLRP_ImpinjHubFaultType_RF_Power_On_Hub_4 = 5,
    LLRP_ImpinjHubFaultType_No_Init = 6,
    LLRP_ImpinjHubFaultType_Serial_Overflow = 7,
    LLRP_ImpinjHubFaultType_Disconnected = 8,
};

typedef enum LLRP_EImpinjHubFaultType
    LLRP_tEImpinjHubFaultType;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjHubFaultType[];


enum LLRP_EImpinjLocationReportType
{

    LLRP_ImpinjLocationReportType_Entry = 0,
    LLRP_ImpinjLocationReportType_Update = 1,
    LLRP_ImpinjLocationReportType_Exit = 2,
};

typedef enum LLRP_EImpinjLocationReportType
    LLRP_tEImpinjLocationReportType;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjLocationReportType[];


enum LLRP_EImpinjDirectionFieldOfView
{

    LLRP_ImpinjDirectionFieldOfView_ReaderSelected = 0,
    LLRP_ImpinjDirectionFieldOfView_Wide = 1,
    LLRP_ImpinjDirectionFieldOfView_Narrow = 2,
};

typedef enum LLRP_EImpinjDirectionFieldOfView
    LLRP_tEImpinjDirectionFieldOfView;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjDirectionFieldOfView[];


enum LLRP_EImpinjDirectionRFMode
{

    LLRP_ImpinjDirectionRFMode_HighSensitivity = 0,
    LLRP_ImpinjDirectionRFMode_HighPerformance = 1,
};

typedef enum LLRP_EImpinjDirectionRFMode
    LLRP_tEImpinjDirectionRFMode;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjDirectionRFMode[];


enum LLRP_EImpinjDirectionDiagnosticReportLevel
{

    LLRP_ImpinjDirectionDiagnosticReportLevel_Off = 0,
    LLRP_ImpinjDirectionDiagnosticReportLevel_Basic = 1,
    LLRP_ImpinjDirectionDiagnosticReportLevel_Extended = 2,
    LLRP_ImpinjDirectionDiagnosticReportLevel_Debug = 3,
};

typedef enum LLRP_EImpinjDirectionDiagnosticReportLevel
    LLRP_tEImpinjDirectionDiagnosticReportLevel;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjDirectionDiagnosticReportLevel[];


enum LLRP_EImpinjDirectionReportType
{

    LLRP_ImpinjDirectionReportType_Entry = 0,
    LLRP_ImpinjDirectionReportType_Update = 1,
    LLRP_ImpinjDirectionReportType_Exit = 2,
};

typedef enum LLRP_EImpinjDirectionReportType
    LLRP_tEImpinjDirectionReportType;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjDirectionReportType[];


enum LLRP_EImpinjDirectionTagPopulationStatus
{

    LLRP_ImpinjDirectionTagPopulationStatus_OK = 0,
    LLRP_ImpinjDirectionTagPopulationStatus_UserOverflow = 1,
    LLRP_ImpinjDirectionTagPopulationStatus_SystemOverflow = 2,
};

typedef enum LLRP_EImpinjDirectionTagPopulationStatus
    LLRP_tEImpinjDirectionTagPopulationStatus;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjDirectionTagPopulationStatus[];


enum LLRP_EImpinjIntelligentAntennaMode
{

    LLRP_ImpinjIntelligentAntennaMode_Disabled = 0,
    LLRP_ImpinjIntelligentAntennaMode_Enabled = 1,
};

typedef enum LLRP_EImpinjIntelligentAntennaMode
    LLRP_tEImpinjIntelligentAntennaMode;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjIntelligentAntennaMode[];


enum LLRP_EImpinjAntennaPolarizationType
{

    LLRP_ImpinjAntennaPolarizationType_LinearHorizontal = 0,
    LLRP_ImpinjAntennaPolarizationType_LinearVertical = 1,
    LLRP_ImpinjAntennaPolarizationType_CircularRight = 2,
    LLRP_ImpinjAntennaPolarizationType_CircularLeft = 3,
};

typedef enum LLRP_EImpinjAntennaPolarizationType
    LLRP_tEImpinjAntennaPolarizationType;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjAntennaPolarizationType[];


enum LLRP_EImpinjMarginReadResultType
{

    LLRP_ImpinjMarginReadResultType_Success = 0,
    LLRP_ImpinjMarginReadResultType_Failure = 1,
    LLRP_ImpinjMarginReadResultType_Insufficient_Power = 2,
    LLRP_ImpinjMarginReadResultType_Nonspecific_Tag_Error = 3,
    LLRP_ImpinjMarginReadResultType_No_Response_From_Tag = 4,
    LLRP_ImpinjMarginReadResultType_Nonspecific_Reader_Error = 5,
    LLRP_ImpinjMarginReadResultType_Incorrect_Password_Error = 6,
    LLRP_ImpinjMarginReadResultType_Tag_Memory_Overrun_Error = 7,
    LLRP_ImpinjMarginReadResultType_Tag_Memory_Locked_Error = 8,
};

typedef enum LLRP_EImpinjMarginReadResultType
    LLRP_tEImpinjMarginReadResultType;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjMarginReadResultType[];


enum LLRP_EImpinjAuthenticateResultType
{

    LLRP_ImpinjAuthenticateResultType_Success = 0,
    LLRP_ImpinjAuthenticateResultType_Insufficient_Power = 1,
    LLRP_ImpinjAuthenticateResultType_Not_Supported_Error = 2,
    LLRP_ImpinjAuthenticateResultType_Nonspecific_Tag_Error = 3,
    LLRP_ImpinjAuthenticateResultType_Nonspecific_Reader_Error = 4,
    LLRP_ImpinjAuthenticateResultType_No_Response_From_Tag = 5,
};

typedef enum LLRP_EImpinjAuthenticateResultType
    LLRP_tEImpinjAuthenticateResultType;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjAuthenticateResultType[];


enum LLRP_EImpinjTagFilterVerificationMode
{

    LLRP_ImpinjTagFilterVerificationMode_Disabled = 0,
    LLRP_ImpinjTagFilterVerificationMode_Active = 1,
    LLRP_ImpinjTagFilterVerificationMode_Passive = 2,
};

typedef enum LLRP_EImpinjTagFilterVerificationMode
    LLRP_tEImpinjTagFilterVerificationMode;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjTagFilterVerificationMode[];


enum LLRP_EImpinjTagPopulationEstimationMode
{

    LLRP_ImpinjTagPopulationEstimationMode_Disabled = 0,
    LLRP_ImpinjTagPopulationEstimationMode_Enabled = 1,
};

typedef enum LLRP_EImpinjTagPopulationEstimationMode
    LLRP_tEImpinjTagPopulationEstimationMode;

extern const LLRP_tSEnumTableEntry
LLRP_estImpinjTagPopulationEstimationMode[];


  
struct LLRP_SIMPINJ_ENABLE_EXTENSIONS
{
    LLRP_tSMessage hdr;
  
  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdIMPINJ_ENABLE_EXTENSIONS;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdIMPINJ_ENABLE_EXTENSIONS[];

extern LLRP_tSIMPINJ_ENABLE_EXTENSIONS *
LLRP_IMPINJ_ENABLE_EXTENSIONS_construct (void);

extern void
LLRP_IMPINJ_ENABLE_EXTENSIONS_destruct (
 LLRP_tSIMPINJ_ENABLE_EXTENSIONS * pThis);

extern void
LLRP_IMPINJ_ENABLE_EXTENSIONS_decodeFields (
 LLRP_tSIMPINJ_ENABLE_EXTENSIONS * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_IMPINJ_ENABLE_EXTENSIONS_assimilateSubParameters (
 LLRP_tSIMPINJ_ENABLE_EXTENSIONS * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_IMPINJ_ENABLE_EXTENSIONS_encode (
  const LLRP_tSIMPINJ_ENABLE_EXTENSIONS *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  

  
  
extern LLRP_tSParameter *
LLRP_IMPINJ_ENABLE_EXTENSIONS_beginCustom (
  LLRP_tSIMPINJ_ENABLE_EXTENSIONS *pThis);

extern LLRP_tSParameter *
LLRP_IMPINJ_ENABLE_EXTENSIONS_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_IMPINJ_ENABLE_EXTENSIONS_clearCustom (
  LLRP_tSIMPINJ_ENABLE_EXTENSIONS *pThis);

extern int
LLRP_IMPINJ_ENABLE_EXTENSIONS_countCustom (
  LLRP_tSIMPINJ_ENABLE_EXTENSIONS *pThis);

extern LLRP_tResultCode
LLRP_IMPINJ_ENABLE_EXTENSIONS_addCustom (
  LLRP_tSIMPINJ_ENABLE_EXTENSIONS *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SIMPINJ_ENABLE_EXTENSIONS_RESPONSE
{
    LLRP_tSMessage hdr;
  
  
    LLRP_tSLLRPStatus * pLLRPStatus;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdIMPINJ_ENABLE_EXTENSIONS_RESPONSE;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdIMPINJ_ENABLE_EXTENSIONS_RESPONSE[];

extern LLRP_tSIMPINJ_ENABLE_EXTENSIONS_RESPONSE *
LLRP_IMPINJ_ENABLE_EXTENSIONS_RESPONSE_construct (void);

extern void
LLRP_IMPINJ_ENABLE_EXTENSIONS_RESPONSE_destruct (
 LLRP_tSIMPINJ_ENABLE_EXTENSIONS_RESPONSE * pThis);

extern void
LLRP_IMPINJ_ENABLE_EXTENSIONS_RESPONSE_decodeFields (
 LLRP_tSIMPINJ_ENABLE_EXTENSIONS_RESPONSE * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_IMPINJ_ENABLE_EXTENSIONS_RESPONSE_assimilateSubParameters (
 LLRP_tSIMPINJ_ENABLE_EXTENSIONS_RESPONSE * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_IMPINJ_ENABLE_EXTENSIONS_RESPONSE_encode (
  const LLRP_tSIMPINJ_ENABLE_EXTENSIONS_RESPONSE *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  

  
  
extern LLRP_tSLLRPStatus *
LLRP_IMPINJ_ENABLE_EXTENSIONS_RESPONSE_getLLRPStatus (
  LLRP_tSIMPINJ_ENABLE_EXTENSIONS_RESPONSE *pThis);

extern LLRP_tResultCode
LLRP_IMPINJ_ENABLE_EXTENSIONS_RESPONSE_setLLRPStatus (
  LLRP_tSIMPINJ_ENABLE_EXTENSIONS_RESPONSE *pThis,
  LLRP_tSLLRPStatus *pValue);

extern LLRP_tSParameter *
LLRP_IMPINJ_ENABLE_EXTENSIONS_RESPONSE_beginCustom (
  LLRP_tSIMPINJ_ENABLE_EXTENSIONS_RESPONSE *pThis);

extern LLRP_tSParameter *
LLRP_IMPINJ_ENABLE_EXTENSIONS_RESPONSE_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_IMPINJ_ENABLE_EXTENSIONS_RESPONSE_clearCustom (
  LLRP_tSIMPINJ_ENABLE_EXTENSIONS_RESPONSE *pThis);

extern int
LLRP_IMPINJ_ENABLE_EXTENSIONS_RESPONSE_countCustom (
  LLRP_tSIMPINJ_ENABLE_EXTENSIONS_RESPONSE *pThis);

extern LLRP_tResultCode
LLRP_IMPINJ_ENABLE_EXTENSIONS_RESPONSE_addCustom (
  LLRP_tSIMPINJ_ENABLE_EXTENSIONS_RESPONSE *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SIMPINJ_SAVE_SETTINGS
{
    LLRP_tSMessage hdr;
  
    llrp_u1_t SaveConfiguration;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdIMPINJ_SAVE_SETTINGS;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdIMPINJ_SAVE_SETTINGS[];

extern LLRP_tSIMPINJ_SAVE_SETTINGS *
LLRP_IMPINJ_SAVE_SETTINGS_construct (void);

extern void
LLRP_IMPINJ_SAVE_SETTINGS_destruct (
 LLRP_tSIMPINJ_SAVE_SETTINGS * pThis);

extern void
LLRP_IMPINJ_SAVE_SETTINGS_decodeFields (
 LLRP_tSIMPINJ_SAVE_SETTINGS * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_IMPINJ_SAVE_SETTINGS_assimilateSubParameters (
 LLRP_tSIMPINJ_SAVE_SETTINGS * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_IMPINJ_SAVE_SETTINGS_encode (
  const LLRP_tSIMPINJ_SAVE_SETTINGS *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdIMPINJ_SAVE_SETTINGS_SaveConfiguration;

extern llrp_u1_t
LLRP_IMPINJ_SAVE_SETTINGS_getSaveConfiguration (
  LLRP_tSIMPINJ_SAVE_SETTINGS *pThis);

extern LLRP_tResultCode
LLRP_IMPINJ_SAVE_SETTINGS_setSaveConfiguration (
  LLRP_tSIMPINJ_SAVE_SETTINGS *pThis,
  llrp_u1_t Value);

  
extern LLRP_tSParameter *
LLRP_IMPINJ_SAVE_SETTINGS_beginCustom (
  LLRP_tSIMPINJ_SAVE_SETTINGS *pThis);

extern LLRP_tSParameter *
LLRP_IMPINJ_SAVE_SETTINGS_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_IMPINJ_SAVE_SETTINGS_clearCustom (
  LLRP_tSIMPINJ_SAVE_SETTINGS *pThis);

extern int
LLRP_IMPINJ_SAVE_SETTINGS_countCustom (
  LLRP_tSIMPINJ_SAVE_SETTINGS *pThis);

extern LLRP_tResultCode
LLRP_IMPINJ_SAVE_SETTINGS_addCustom (
  LLRP_tSIMPINJ_SAVE_SETTINGS *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SIMPINJ_SAVE_SETTINGS_RESPONSE
{
    LLRP_tSMessage hdr;
  
  
    LLRP_tSLLRPStatus * pLLRPStatus;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdIMPINJ_SAVE_SETTINGS_RESPONSE;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdIMPINJ_SAVE_SETTINGS_RESPONSE[];

extern LLRP_tSIMPINJ_SAVE_SETTINGS_RESPONSE *
LLRP_IMPINJ_SAVE_SETTINGS_RESPONSE_construct (void);

extern void
LLRP_IMPINJ_SAVE_SETTINGS_RESPONSE_destruct (
 LLRP_tSIMPINJ_SAVE_SETTINGS_RESPONSE * pThis);

extern void
LLRP_IMPINJ_SAVE_SETTINGS_RESPONSE_decodeFields (
 LLRP_tSIMPINJ_SAVE_SETTINGS_RESPONSE * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_IMPINJ_SAVE_SETTINGS_RESPONSE_assimilateSubParameters (
 LLRP_tSIMPINJ_SAVE_SETTINGS_RESPONSE * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_IMPINJ_SAVE_SETTINGS_RESPONSE_encode (
  const LLRP_tSIMPINJ_SAVE_SETTINGS_RESPONSE *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  

  
  
extern LLRP_tSLLRPStatus *
LLRP_IMPINJ_SAVE_SETTINGS_RESPONSE_getLLRPStatus (
  LLRP_tSIMPINJ_SAVE_SETTINGS_RESPONSE *pThis);

extern LLRP_tResultCode
LLRP_IMPINJ_SAVE_SETTINGS_RESPONSE_setLLRPStatus (
  LLRP_tSIMPINJ_SAVE_SETTINGS_RESPONSE *pThis,
  LLRP_tSLLRPStatus *pValue);

extern LLRP_tSParameter *
LLRP_IMPINJ_SAVE_SETTINGS_RESPONSE_beginCustom (
  LLRP_tSIMPINJ_SAVE_SETTINGS_RESPONSE *pThis);

extern LLRP_tSParameter *
LLRP_IMPINJ_SAVE_SETTINGS_RESPONSE_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_IMPINJ_SAVE_SETTINGS_RESPONSE_clearCustom (
  LLRP_tSIMPINJ_SAVE_SETTINGS_RESPONSE *pThis);

extern int
LLRP_IMPINJ_SAVE_SETTINGS_RESPONSE_countCustom (
  LLRP_tSIMPINJ_SAVE_SETTINGS_RESPONSE *pThis);

extern LLRP_tResultCode
LLRP_IMPINJ_SAVE_SETTINGS_RESPONSE_addCustom (
  LLRP_tSIMPINJ_SAVE_SETTINGS_RESPONSE *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjRequestedData
{
    LLRP_tSParameter hdr;
  
    LLRP_tEImpinjRequestedDataType eRequestedData;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjRequestedData;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjRequestedData[];

extern LLRP_tSImpinjRequestedData *
LLRP_ImpinjRequestedData_construct (void);

extern void
LLRP_ImpinjRequestedData_destruct (
 LLRP_tSImpinjRequestedData * pThis);

extern void
LLRP_ImpinjRequestedData_decodeFields (
 LLRP_tSImpinjRequestedData * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjRequestedData_assimilateSubParameters (
 LLRP_tSImpinjRequestedData * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjRequestedData_encode (
  const LLRP_tSImpinjRequestedData *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjRequestedData_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjRequestedData_RequestedData;

extern LLRP_tEImpinjRequestedDataType
LLRP_ImpinjRequestedData_getRequestedData (
  LLRP_tSImpinjRequestedData *pThis);

extern LLRP_tResultCode
LLRP_ImpinjRequestedData_setRequestedData (
  LLRP_tSImpinjRequestedData *pThis,
  LLRP_tEImpinjRequestedDataType Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjRequestedData_beginCustom (
  LLRP_tSImpinjRequestedData *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjRequestedData_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjRequestedData_clearCustom (
  LLRP_tSImpinjRequestedData *pThis);

extern int
LLRP_ImpinjRequestedData_countCustom (
  LLRP_tSImpinjRequestedData *pThis);

extern LLRP_tResultCode
LLRP_ImpinjRequestedData_addCustom (
  LLRP_tSImpinjRequestedData *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjSubRegulatoryRegion
{
    LLRP_tSParameter hdr;
  
    LLRP_tEImpinjRegulatoryRegion eRegulatoryRegion;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjSubRegulatoryRegion;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjSubRegulatoryRegion[];

extern LLRP_tSImpinjSubRegulatoryRegion *
LLRP_ImpinjSubRegulatoryRegion_construct (void);

extern void
LLRP_ImpinjSubRegulatoryRegion_destruct (
 LLRP_tSImpinjSubRegulatoryRegion * pThis);

extern void
LLRP_ImpinjSubRegulatoryRegion_decodeFields (
 LLRP_tSImpinjSubRegulatoryRegion * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjSubRegulatoryRegion_assimilateSubParameters (
 LLRP_tSImpinjSubRegulatoryRegion * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjSubRegulatoryRegion_encode (
  const LLRP_tSImpinjSubRegulatoryRegion *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjSubRegulatoryRegion_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjSubRegulatoryRegion_RegulatoryRegion;

extern LLRP_tEImpinjRegulatoryRegion
LLRP_ImpinjSubRegulatoryRegion_getRegulatoryRegion (
  LLRP_tSImpinjSubRegulatoryRegion *pThis);

extern LLRP_tResultCode
LLRP_ImpinjSubRegulatoryRegion_setRegulatoryRegion (
  LLRP_tSImpinjSubRegulatoryRegion *pThis,
  LLRP_tEImpinjRegulatoryRegion Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjSubRegulatoryRegion_beginCustom (
  LLRP_tSImpinjSubRegulatoryRegion *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjSubRegulatoryRegion_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjSubRegulatoryRegion_clearCustom (
  LLRP_tSImpinjSubRegulatoryRegion *pThis);

extern int
LLRP_ImpinjSubRegulatoryRegion_countCustom (
  LLRP_tSImpinjSubRegulatoryRegion *pThis);

extern LLRP_tResultCode
LLRP_ImpinjSubRegulatoryRegion_addCustom (
  LLRP_tSImpinjSubRegulatoryRegion *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjInventorySearchMode
{
    LLRP_tSParameter hdr;
  
    LLRP_tEImpinjInventorySearchType eInventorySearchMode;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjInventorySearchMode;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjInventorySearchMode[];

extern LLRP_tSImpinjInventorySearchMode *
LLRP_ImpinjInventorySearchMode_construct (void);

extern void
LLRP_ImpinjInventorySearchMode_destruct (
 LLRP_tSImpinjInventorySearchMode * pThis);

extern void
LLRP_ImpinjInventorySearchMode_decodeFields (
 LLRP_tSImpinjInventorySearchMode * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjInventorySearchMode_assimilateSubParameters (
 LLRP_tSImpinjInventorySearchMode * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjInventorySearchMode_encode (
  const LLRP_tSImpinjInventorySearchMode *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjInventorySearchMode_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjInventorySearchMode_InventorySearchMode;

extern LLRP_tEImpinjInventorySearchType
LLRP_ImpinjInventorySearchMode_getInventorySearchMode (
  LLRP_tSImpinjInventorySearchMode *pThis);

extern LLRP_tResultCode
LLRP_ImpinjInventorySearchMode_setInventorySearchMode (
  LLRP_tSImpinjInventorySearchMode *pThis,
  LLRP_tEImpinjInventorySearchType Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjInventorySearchMode_beginCustom (
  LLRP_tSImpinjInventorySearchMode *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjInventorySearchMode_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjInventorySearchMode_clearCustom (
  LLRP_tSImpinjInventorySearchMode *pThis);

extern int
LLRP_ImpinjInventorySearchMode_countCustom (
  LLRP_tSImpinjInventorySearchMode *pThis);

extern LLRP_tResultCode
LLRP_ImpinjInventorySearchMode_addCustom (
  LLRP_tSImpinjInventorySearchMode *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjFixedFrequencyList
{
    LLRP_tSParameter hdr;
  
    LLRP_tEImpinjFixedFrequencyMode eFixedFrequencyMode;

    llrp_u16v_t ChannelList;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjFixedFrequencyList;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjFixedFrequencyList[];

extern LLRP_tSImpinjFixedFrequencyList *
LLRP_ImpinjFixedFrequencyList_construct (void);

extern void
LLRP_ImpinjFixedFrequencyList_destruct (
 LLRP_tSImpinjFixedFrequencyList * pThis);

extern void
LLRP_ImpinjFixedFrequencyList_decodeFields (
 LLRP_tSImpinjFixedFrequencyList * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjFixedFrequencyList_assimilateSubParameters (
 LLRP_tSImpinjFixedFrequencyList * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjFixedFrequencyList_encode (
  const LLRP_tSImpinjFixedFrequencyList *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjFixedFrequencyList_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjFixedFrequencyList_FixedFrequencyMode;

extern LLRP_tEImpinjFixedFrequencyMode
LLRP_ImpinjFixedFrequencyList_getFixedFrequencyMode (
  LLRP_tSImpinjFixedFrequencyList *pThis);

extern LLRP_tResultCode
LLRP_ImpinjFixedFrequencyList_setFixedFrequencyMode (
  LLRP_tSImpinjFixedFrequencyList *pThis,
  LLRP_tEImpinjFixedFrequencyMode Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjFixedFrequencyList_ChannelList;

extern llrp_u16v_t
LLRP_ImpinjFixedFrequencyList_getChannelList (
  LLRP_tSImpinjFixedFrequencyList *pThis);

extern LLRP_tResultCode
LLRP_ImpinjFixedFrequencyList_setChannelList (
  LLRP_tSImpinjFixedFrequencyList *pThis,
  llrp_u16v_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjFixedFrequencyList_beginCustom (
  LLRP_tSImpinjFixedFrequencyList *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjFixedFrequencyList_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjFixedFrequencyList_clearCustom (
  LLRP_tSImpinjFixedFrequencyList *pThis);

extern int
LLRP_ImpinjFixedFrequencyList_countCustom (
  LLRP_tSImpinjFixedFrequencyList *pThis);

extern LLRP_tResultCode
LLRP_ImpinjFixedFrequencyList_addCustom (
  LLRP_tSImpinjFixedFrequencyList *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjReducedPowerFrequencyList
{
    LLRP_tSParameter hdr;
  
    LLRP_tEImpinjReducedPowerMode eReducedPowerMode;

    llrp_u16v_t ChannelList;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjReducedPowerFrequencyList;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjReducedPowerFrequencyList[];

extern LLRP_tSImpinjReducedPowerFrequencyList *
LLRP_ImpinjReducedPowerFrequencyList_construct (void);

extern void
LLRP_ImpinjReducedPowerFrequencyList_destruct (
 LLRP_tSImpinjReducedPowerFrequencyList * pThis);

extern void
LLRP_ImpinjReducedPowerFrequencyList_decodeFields (
 LLRP_tSImpinjReducedPowerFrequencyList * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjReducedPowerFrequencyList_assimilateSubParameters (
 LLRP_tSImpinjReducedPowerFrequencyList * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjReducedPowerFrequencyList_encode (
  const LLRP_tSImpinjReducedPowerFrequencyList *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjReducedPowerFrequencyList_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjReducedPowerFrequencyList_ReducedPowerMode;

extern LLRP_tEImpinjReducedPowerMode
LLRP_ImpinjReducedPowerFrequencyList_getReducedPowerMode (
  LLRP_tSImpinjReducedPowerFrequencyList *pThis);

extern LLRP_tResultCode
LLRP_ImpinjReducedPowerFrequencyList_setReducedPowerMode (
  LLRP_tSImpinjReducedPowerFrequencyList *pThis,
  LLRP_tEImpinjReducedPowerMode Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjReducedPowerFrequencyList_ChannelList;

extern llrp_u16v_t
LLRP_ImpinjReducedPowerFrequencyList_getChannelList (
  LLRP_tSImpinjReducedPowerFrequencyList *pThis);

extern LLRP_tResultCode
LLRP_ImpinjReducedPowerFrequencyList_setChannelList (
  LLRP_tSImpinjReducedPowerFrequencyList *pThis,
  llrp_u16v_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjReducedPowerFrequencyList_beginCustom (
  LLRP_tSImpinjReducedPowerFrequencyList *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjReducedPowerFrequencyList_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjReducedPowerFrequencyList_clearCustom (
  LLRP_tSImpinjReducedPowerFrequencyList *pThis);

extern int
LLRP_ImpinjReducedPowerFrequencyList_countCustom (
  LLRP_tSImpinjReducedPowerFrequencyList *pThis);

extern LLRP_tResultCode
LLRP_ImpinjReducedPowerFrequencyList_addCustom (
  LLRP_tSImpinjReducedPowerFrequencyList *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjLowDutyCycle
{
    LLRP_tSParameter hdr;
  
    LLRP_tEImpinjLowDutyCycleMode eLowDutyCycleMode;

    llrp_u16_t EmptyFieldTimeout;

    llrp_u16_t FieldPingInterval;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjLowDutyCycle;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjLowDutyCycle[];

extern LLRP_tSImpinjLowDutyCycle *
LLRP_ImpinjLowDutyCycle_construct (void);

extern void
LLRP_ImpinjLowDutyCycle_destruct (
 LLRP_tSImpinjLowDutyCycle * pThis);

extern void
LLRP_ImpinjLowDutyCycle_decodeFields (
 LLRP_tSImpinjLowDutyCycle * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjLowDutyCycle_assimilateSubParameters (
 LLRP_tSImpinjLowDutyCycle * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjLowDutyCycle_encode (
  const LLRP_tSImpinjLowDutyCycle *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjLowDutyCycle_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjLowDutyCycle_LowDutyCycleMode;

extern LLRP_tEImpinjLowDutyCycleMode
LLRP_ImpinjLowDutyCycle_getLowDutyCycleMode (
  LLRP_tSImpinjLowDutyCycle *pThis);

extern LLRP_tResultCode
LLRP_ImpinjLowDutyCycle_setLowDutyCycleMode (
  LLRP_tSImpinjLowDutyCycle *pThis,
  LLRP_tEImpinjLowDutyCycleMode Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjLowDutyCycle_EmptyFieldTimeout;

extern llrp_u16_t
LLRP_ImpinjLowDutyCycle_getEmptyFieldTimeout (
  LLRP_tSImpinjLowDutyCycle *pThis);

extern LLRP_tResultCode
LLRP_ImpinjLowDutyCycle_setEmptyFieldTimeout (
  LLRP_tSImpinjLowDutyCycle *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjLowDutyCycle_FieldPingInterval;

extern llrp_u16_t
LLRP_ImpinjLowDutyCycle_getFieldPingInterval (
  LLRP_tSImpinjLowDutyCycle *pThis);

extern LLRP_tResultCode
LLRP_ImpinjLowDutyCycle_setFieldPingInterval (
  LLRP_tSImpinjLowDutyCycle *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjLowDutyCycle_beginCustom (
  LLRP_tSImpinjLowDutyCycle *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjLowDutyCycle_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjLowDutyCycle_clearCustom (
  LLRP_tSImpinjLowDutyCycle *pThis);

extern int
LLRP_ImpinjLowDutyCycle_countCustom (
  LLRP_tSImpinjLowDutyCycle *pThis);

extern LLRP_tResultCode
LLRP_ImpinjLowDutyCycle_addCustom (
  LLRP_tSImpinjLowDutyCycle *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjHubVersions
{
    LLRP_tSParameter hdr;
  
  
    LLRP_tSImpinjArrayVersion * listImpinjArrayVersion;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjHubVersions;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjHubVersions[];

extern LLRP_tSImpinjHubVersions *
LLRP_ImpinjHubVersions_construct (void);

extern void
LLRP_ImpinjHubVersions_destruct (
 LLRP_tSImpinjHubVersions * pThis);

extern void
LLRP_ImpinjHubVersions_decodeFields (
 LLRP_tSImpinjHubVersions * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjHubVersions_assimilateSubParameters (
 LLRP_tSImpinjHubVersions * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjHubVersions_encode (
  const LLRP_tSImpinjHubVersions *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjHubVersions_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
  
extern LLRP_tSImpinjArrayVersion *
LLRP_ImpinjHubVersions_beginImpinjArrayVersion (
  LLRP_tSImpinjHubVersions *pThis);

extern LLRP_tSImpinjArrayVersion *
LLRP_ImpinjHubVersions_nextImpinjArrayVersion (
  LLRP_tSImpinjArrayVersion *pCurrent);

extern void
LLRP_ImpinjHubVersions_clearImpinjArrayVersion (
  LLRP_tSImpinjHubVersions *pThis);

extern int
LLRP_ImpinjHubVersions_countImpinjArrayVersion (
  LLRP_tSImpinjHubVersions *pThis);

extern LLRP_tResultCode
LLRP_ImpinjHubVersions_addImpinjArrayVersion (
  LLRP_tSImpinjHubVersions *pThis,
  LLRP_tSImpinjArrayVersion *pValue);


extern LLRP_tSParameter *
LLRP_ImpinjHubVersions_beginCustom (
  LLRP_tSImpinjHubVersions *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjHubVersions_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjHubVersions_clearCustom (
  LLRP_tSImpinjHubVersions *pThis);

extern int
LLRP_ImpinjHubVersions_countCustom (
  LLRP_tSImpinjHubVersions *pThis);

extern LLRP_tResultCode
LLRP_ImpinjHubVersions_addCustom (
  LLRP_tSImpinjHubVersions *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjDetailedVersion
{
    LLRP_tSParameter hdr;
  
    llrp_utf8v_t ModelName;

    llrp_utf8v_t SerialNumber;

    llrp_utf8v_t SoftwareVersion;

    llrp_utf8v_t FirmwareVersion;

    llrp_utf8v_t FPGAVersion;

    llrp_utf8v_t PCBAVersion;

  
    LLRP_tSImpinjHubVersions * pImpinjHubVersions;

    LLRP_tSImpinjArrayVersion * pImpinjArrayVersion;

    LLRP_tSImpinjBLEVersion * pImpinjBLEVersion;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjDetailedVersion;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjDetailedVersion[];

extern LLRP_tSImpinjDetailedVersion *
LLRP_ImpinjDetailedVersion_construct (void);

extern void
LLRP_ImpinjDetailedVersion_destruct (
 LLRP_tSImpinjDetailedVersion * pThis);

extern void
LLRP_ImpinjDetailedVersion_decodeFields (
 LLRP_tSImpinjDetailedVersion * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjDetailedVersion_assimilateSubParameters (
 LLRP_tSImpinjDetailedVersion * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjDetailedVersion_encode (
  const LLRP_tSImpinjDetailedVersion *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjDetailedVersion_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjDetailedVersion_ModelName;

extern llrp_utf8v_t
LLRP_ImpinjDetailedVersion_getModelName (
  LLRP_tSImpinjDetailedVersion *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDetailedVersion_setModelName (
  LLRP_tSImpinjDetailedVersion *pThis,
  llrp_utf8v_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjDetailedVersion_SerialNumber;

extern llrp_utf8v_t
LLRP_ImpinjDetailedVersion_getSerialNumber (
  LLRP_tSImpinjDetailedVersion *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDetailedVersion_setSerialNumber (
  LLRP_tSImpinjDetailedVersion *pThis,
  llrp_utf8v_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjDetailedVersion_SoftwareVersion;

extern llrp_utf8v_t
LLRP_ImpinjDetailedVersion_getSoftwareVersion (
  LLRP_tSImpinjDetailedVersion *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDetailedVersion_setSoftwareVersion (
  LLRP_tSImpinjDetailedVersion *pThis,
  llrp_utf8v_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjDetailedVersion_FirmwareVersion;

extern llrp_utf8v_t
LLRP_ImpinjDetailedVersion_getFirmwareVersion (
  LLRP_tSImpinjDetailedVersion *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDetailedVersion_setFirmwareVersion (
  LLRP_tSImpinjDetailedVersion *pThis,
  llrp_utf8v_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjDetailedVersion_FPGAVersion;

extern llrp_utf8v_t
LLRP_ImpinjDetailedVersion_getFPGAVersion (
  LLRP_tSImpinjDetailedVersion *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDetailedVersion_setFPGAVersion (
  LLRP_tSImpinjDetailedVersion *pThis,
  llrp_utf8v_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjDetailedVersion_PCBAVersion;

extern llrp_utf8v_t
LLRP_ImpinjDetailedVersion_getPCBAVersion (
  LLRP_tSImpinjDetailedVersion *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDetailedVersion_setPCBAVersion (
  LLRP_tSImpinjDetailedVersion *pThis,
  llrp_utf8v_t Value);

  
extern LLRP_tSImpinjHubVersions *
LLRP_ImpinjDetailedVersion_getImpinjHubVersions (
  LLRP_tSImpinjDetailedVersion *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDetailedVersion_setImpinjHubVersions (
  LLRP_tSImpinjDetailedVersion *pThis,
  LLRP_tSImpinjHubVersions *pValue);

extern LLRP_tSImpinjArrayVersion *
LLRP_ImpinjDetailedVersion_getImpinjArrayVersion (
  LLRP_tSImpinjDetailedVersion *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDetailedVersion_setImpinjArrayVersion (
  LLRP_tSImpinjDetailedVersion *pThis,
  LLRP_tSImpinjArrayVersion *pValue);

extern LLRP_tSImpinjBLEVersion *
LLRP_ImpinjDetailedVersion_getImpinjBLEVersion (
  LLRP_tSImpinjDetailedVersion *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDetailedVersion_setImpinjBLEVersion (
  LLRP_tSImpinjDetailedVersion *pThis,
  LLRP_tSImpinjBLEVersion *pValue);

extern LLRP_tSParameter *
LLRP_ImpinjDetailedVersion_beginCustom (
  LLRP_tSImpinjDetailedVersion *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjDetailedVersion_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjDetailedVersion_clearCustom (
  LLRP_tSImpinjDetailedVersion *pThis);

extern int
LLRP_ImpinjDetailedVersion_countCustom (
  LLRP_tSImpinjDetailedVersion *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDetailedVersion_addCustom (
  LLRP_tSImpinjDetailedVersion *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjFrequencyCapabilities
{
    LLRP_tSParameter hdr;
  
    llrp_u32v_t FrequencyList;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjFrequencyCapabilities;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjFrequencyCapabilities[];

extern LLRP_tSImpinjFrequencyCapabilities *
LLRP_ImpinjFrequencyCapabilities_construct (void);

extern void
LLRP_ImpinjFrequencyCapabilities_destruct (
 LLRP_tSImpinjFrequencyCapabilities * pThis);

extern void
LLRP_ImpinjFrequencyCapabilities_decodeFields (
 LLRP_tSImpinjFrequencyCapabilities * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjFrequencyCapabilities_assimilateSubParameters (
 LLRP_tSImpinjFrequencyCapabilities * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjFrequencyCapabilities_encode (
  const LLRP_tSImpinjFrequencyCapabilities *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjFrequencyCapabilities_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjFrequencyCapabilities_FrequencyList;

extern llrp_u32v_t
LLRP_ImpinjFrequencyCapabilities_getFrequencyList (
  LLRP_tSImpinjFrequencyCapabilities *pThis);

extern LLRP_tResultCode
LLRP_ImpinjFrequencyCapabilities_setFrequencyList (
  LLRP_tSImpinjFrequencyCapabilities *pThis,
  llrp_u32v_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjFrequencyCapabilities_beginCustom (
  LLRP_tSImpinjFrequencyCapabilities *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjFrequencyCapabilities_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjFrequencyCapabilities_clearCustom (
  LLRP_tSImpinjFrequencyCapabilities *pThis);

extern int
LLRP_ImpinjFrequencyCapabilities_countCustom (
  LLRP_tSImpinjFrequencyCapabilities *pThis);

extern LLRP_tResultCode
LLRP_ImpinjFrequencyCapabilities_addCustom (
  LLRP_tSImpinjFrequencyCapabilities *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjGPIDebounceConfiguration
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t GPIPortNum;

    llrp_u32_t GPIDebounceTimerMSec;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjGPIDebounceConfiguration;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjGPIDebounceConfiguration[];

extern LLRP_tSImpinjGPIDebounceConfiguration *
LLRP_ImpinjGPIDebounceConfiguration_construct (void);

extern void
LLRP_ImpinjGPIDebounceConfiguration_destruct (
 LLRP_tSImpinjGPIDebounceConfiguration * pThis);

extern void
LLRP_ImpinjGPIDebounceConfiguration_decodeFields (
 LLRP_tSImpinjGPIDebounceConfiguration * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjGPIDebounceConfiguration_assimilateSubParameters (
 LLRP_tSImpinjGPIDebounceConfiguration * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjGPIDebounceConfiguration_encode (
  const LLRP_tSImpinjGPIDebounceConfiguration *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjGPIDebounceConfiguration_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjGPIDebounceConfiguration_GPIPortNum;

extern llrp_u16_t
LLRP_ImpinjGPIDebounceConfiguration_getGPIPortNum (
  LLRP_tSImpinjGPIDebounceConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjGPIDebounceConfiguration_setGPIPortNum (
  LLRP_tSImpinjGPIDebounceConfiguration *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjGPIDebounceConfiguration_GPIDebounceTimerMSec;

extern llrp_u32_t
LLRP_ImpinjGPIDebounceConfiguration_getGPIDebounceTimerMSec (
  LLRP_tSImpinjGPIDebounceConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjGPIDebounceConfiguration_setGPIDebounceTimerMSec (
  LLRP_tSImpinjGPIDebounceConfiguration *pThis,
  llrp_u32_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjGPIDebounceConfiguration_beginCustom (
  LLRP_tSImpinjGPIDebounceConfiguration *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjGPIDebounceConfiguration_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjGPIDebounceConfiguration_clearCustom (
  LLRP_tSImpinjGPIDebounceConfiguration *pThis);

extern int
LLRP_ImpinjGPIDebounceConfiguration_countCustom (
  LLRP_tSImpinjGPIDebounceConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjGPIDebounceConfiguration_addCustom (
  LLRP_tSImpinjGPIDebounceConfiguration *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjReaderTemperature
{
    LLRP_tSParameter hdr;
  
    llrp_s16_t Temperature;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjReaderTemperature;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjReaderTemperature[];

extern LLRP_tSImpinjReaderTemperature *
LLRP_ImpinjReaderTemperature_construct (void);

extern void
LLRP_ImpinjReaderTemperature_destruct (
 LLRP_tSImpinjReaderTemperature * pThis);

extern void
LLRP_ImpinjReaderTemperature_decodeFields (
 LLRP_tSImpinjReaderTemperature * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjReaderTemperature_assimilateSubParameters (
 LLRP_tSImpinjReaderTemperature * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjReaderTemperature_encode (
  const LLRP_tSImpinjReaderTemperature *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjReaderTemperature_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjReaderTemperature_Temperature;

extern llrp_s16_t
LLRP_ImpinjReaderTemperature_getTemperature (
  LLRP_tSImpinjReaderTemperature *pThis);

extern LLRP_tResultCode
LLRP_ImpinjReaderTemperature_setTemperature (
  LLRP_tSImpinjReaderTemperature *pThis,
  llrp_s16_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjReaderTemperature_beginCustom (
  LLRP_tSImpinjReaderTemperature *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjReaderTemperature_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjReaderTemperature_clearCustom (
  LLRP_tSImpinjReaderTemperature *pThis);

extern int
LLRP_ImpinjReaderTemperature_countCustom (
  LLRP_tSImpinjReaderTemperature *pThis);

extern LLRP_tResultCode
LLRP_ImpinjReaderTemperature_addCustom (
  LLRP_tSImpinjReaderTemperature *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjLinkMonitorConfiguration
{
    LLRP_tSParameter hdr;
  
    LLRP_tEImpinjLinkMonitorMode eLinkMonitorMode;

    llrp_u16_t LinkDownThreshold;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjLinkMonitorConfiguration;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjLinkMonitorConfiguration[];

extern LLRP_tSImpinjLinkMonitorConfiguration *
LLRP_ImpinjLinkMonitorConfiguration_construct (void);

extern void
LLRP_ImpinjLinkMonitorConfiguration_destruct (
 LLRP_tSImpinjLinkMonitorConfiguration * pThis);

extern void
LLRP_ImpinjLinkMonitorConfiguration_decodeFields (
 LLRP_tSImpinjLinkMonitorConfiguration * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjLinkMonitorConfiguration_assimilateSubParameters (
 LLRP_tSImpinjLinkMonitorConfiguration * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjLinkMonitorConfiguration_encode (
  const LLRP_tSImpinjLinkMonitorConfiguration *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjLinkMonitorConfiguration_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjLinkMonitorConfiguration_LinkMonitorMode;

extern LLRP_tEImpinjLinkMonitorMode
LLRP_ImpinjLinkMonitorConfiguration_getLinkMonitorMode (
  LLRP_tSImpinjLinkMonitorConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjLinkMonitorConfiguration_setLinkMonitorMode (
  LLRP_tSImpinjLinkMonitorConfiguration *pThis,
  LLRP_tEImpinjLinkMonitorMode Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjLinkMonitorConfiguration_LinkDownThreshold;

extern llrp_u16_t
LLRP_ImpinjLinkMonitorConfiguration_getLinkDownThreshold (
  LLRP_tSImpinjLinkMonitorConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjLinkMonitorConfiguration_setLinkDownThreshold (
  LLRP_tSImpinjLinkMonitorConfiguration *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjLinkMonitorConfiguration_beginCustom (
  LLRP_tSImpinjLinkMonitorConfiguration *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjLinkMonitorConfiguration_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjLinkMonitorConfiguration_clearCustom (
  LLRP_tSImpinjLinkMonitorConfiguration *pThis);

extern int
LLRP_ImpinjLinkMonitorConfiguration_countCustom (
  LLRP_tSImpinjLinkMonitorConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjLinkMonitorConfiguration_addCustom (
  LLRP_tSImpinjLinkMonitorConfiguration *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjReportBufferConfiguration
{
    LLRP_tSParameter hdr;
  
    LLRP_tEImpinjReportBufferMode eReportBufferMode;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjReportBufferConfiguration;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjReportBufferConfiguration[];

extern LLRP_tSImpinjReportBufferConfiguration *
LLRP_ImpinjReportBufferConfiguration_construct (void);

extern void
LLRP_ImpinjReportBufferConfiguration_destruct (
 LLRP_tSImpinjReportBufferConfiguration * pThis);

extern void
LLRP_ImpinjReportBufferConfiguration_decodeFields (
 LLRP_tSImpinjReportBufferConfiguration * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjReportBufferConfiguration_assimilateSubParameters (
 LLRP_tSImpinjReportBufferConfiguration * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjReportBufferConfiguration_encode (
  const LLRP_tSImpinjReportBufferConfiguration *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjReportBufferConfiguration_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjReportBufferConfiguration_ReportBufferMode;

extern LLRP_tEImpinjReportBufferMode
LLRP_ImpinjReportBufferConfiguration_getReportBufferMode (
  LLRP_tSImpinjReportBufferConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjReportBufferConfiguration_setReportBufferMode (
  LLRP_tSImpinjReportBufferConfiguration *pThis,
  LLRP_tEImpinjReportBufferMode Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjReportBufferConfiguration_beginCustom (
  LLRP_tSImpinjReportBufferConfiguration *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjReportBufferConfiguration_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjReportBufferConfiguration_clearCustom (
  LLRP_tSImpinjReportBufferConfiguration *pThis);

extern int
LLRP_ImpinjReportBufferConfiguration_countCustom (
  LLRP_tSImpinjReportBufferConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjReportBufferConfiguration_addCustom (
  LLRP_tSImpinjReportBufferConfiguration *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjAccessSpecConfiguration
{
    LLRP_tSParameter hdr;
  
  
    LLRP_tSImpinjBlockWriteWordCount * pImpinjBlockWriteWordCount;

    LLRP_tSImpinjOpSpecRetryCount * pImpinjOpSpecRetryCount;

    LLRP_tSImpinjAccessSpecOrdering * pImpinjAccessSpecOrdering;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjAccessSpecConfiguration;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjAccessSpecConfiguration[];

extern LLRP_tSImpinjAccessSpecConfiguration *
LLRP_ImpinjAccessSpecConfiguration_construct (void);

extern void
LLRP_ImpinjAccessSpecConfiguration_destruct (
 LLRP_tSImpinjAccessSpecConfiguration * pThis);

extern void
LLRP_ImpinjAccessSpecConfiguration_decodeFields (
 LLRP_tSImpinjAccessSpecConfiguration * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjAccessSpecConfiguration_assimilateSubParameters (
 LLRP_tSImpinjAccessSpecConfiguration * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjAccessSpecConfiguration_encode (
  const LLRP_tSImpinjAccessSpecConfiguration *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjAccessSpecConfiguration_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
  
extern LLRP_tSImpinjBlockWriteWordCount *
LLRP_ImpinjAccessSpecConfiguration_getImpinjBlockWriteWordCount (
  LLRP_tSImpinjAccessSpecConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjAccessSpecConfiguration_setImpinjBlockWriteWordCount (
  LLRP_tSImpinjAccessSpecConfiguration *pThis,
  LLRP_tSImpinjBlockWriteWordCount *pValue);

extern LLRP_tSImpinjOpSpecRetryCount *
LLRP_ImpinjAccessSpecConfiguration_getImpinjOpSpecRetryCount (
  LLRP_tSImpinjAccessSpecConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjAccessSpecConfiguration_setImpinjOpSpecRetryCount (
  LLRP_tSImpinjAccessSpecConfiguration *pThis,
  LLRP_tSImpinjOpSpecRetryCount *pValue);

extern LLRP_tSImpinjAccessSpecOrdering *
LLRP_ImpinjAccessSpecConfiguration_getImpinjAccessSpecOrdering (
  LLRP_tSImpinjAccessSpecConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjAccessSpecConfiguration_setImpinjAccessSpecOrdering (
  LLRP_tSImpinjAccessSpecConfiguration *pThis,
  LLRP_tSImpinjAccessSpecOrdering *pValue);

extern LLRP_tSParameter *
LLRP_ImpinjAccessSpecConfiguration_beginCustom (
  LLRP_tSImpinjAccessSpecConfiguration *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjAccessSpecConfiguration_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjAccessSpecConfiguration_clearCustom (
  LLRP_tSImpinjAccessSpecConfiguration *pThis);

extern int
LLRP_ImpinjAccessSpecConfiguration_countCustom (
  LLRP_tSImpinjAccessSpecConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjAccessSpecConfiguration_addCustom (
  LLRP_tSImpinjAccessSpecConfiguration *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjBlockWriteWordCount
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t WordCount;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjBlockWriteWordCount;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjBlockWriteWordCount[];

extern LLRP_tSImpinjBlockWriteWordCount *
LLRP_ImpinjBlockWriteWordCount_construct (void);

extern void
LLRP_ImpinjBlockWriteWordCount_destruct (
 LLRP_tSImpinjBlockWriteWordCount * pThis);

extern void
LLRP_ImpinjBlockWriteWordCount_decodeFields (
 LLRP_tSImpinjBlockWriteWordCount * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjBlockWriteWordCount_assimilateSubParameters (
 LLRP_tSImpinjBlockWriteWordCount * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjBlockWriteWordCount_encode (
  const LLRP_tSImpinjBlockWriteWordCount *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjBlockWriteWordCount_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjBlockWriteWordCount_WordCount;

extern llrp_u16_t
LLRP_ImpinjBlockWriteWordCount_getWordCount (
  LLRP_tSImpinjBlockWriteWordCount *pThis);

extern LLRP_tResultCode
LLRP_ImpinjBlockWriteWordCount_setWordCount (
  LLRP_tSImpinjBlockWriteWordCount *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjBlockWriteWordCount_beginCustom (
  LLRP_tSImpinjBlockWriteWordCount *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjBlockWriteWordCount_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjBlockWriteWordCount_clearCustom (
  LLRP_tSImpinjBlockWriteWordCount *pThis);

extern int
LLRP_ImpinjBlockWriteWordCount_countCustom (
  LLRP_tSImpinjBlockWriteWordCount *pThis);

extern LLRP_tResultCode
LLRP_ImpinjBlockWriteWordCount_addCustom (
  LLRP_tSImpinjBlockWriteWordCount *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjBlockPermalock
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t OpSpecID;

    llrp_u32_t AccessPassword;

    llrp_u2_t MB;

    llrp_u16_t BlockPointer;

    llrp_u16v_t BlockMask;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjBlockPermalock;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjBlockPermalock[];

extern LLRP_tSImpinjBlockPermalock *
LLRP_ImpinjBlockPermalock_construct (void);

extern void
LLRP_ImpinjBlockPermalock_destruct (
 LLRP_tSImpinjBlockPermalock * pThis);

extern void
LLRP_ImpinjBlockPermalock_decodeFields (
 LLRP_tSImpinjBlockPermalock * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjBlockPermalock_assimilateSubParameters (
 LLRP_tSImpinjBlockPermalock * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjBlockPermalock_encode (
  const LLRP_tSImpinjBlockPermalock *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjBlockPermalock_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjBlockPermalock_OpSpecID;

extern llrp_u16_t
LLRP_ImpinjBlockPermalock_getOpSpecID (
  LLRP_tSImpinjBlockPermalock *pThis);

extern LLRP_tResultCode
LLRP_ImpinjBlockPermalock_setOpSpecID (
  LLRP_tSImpinjBlockPermalock *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjBlockPermalock_AccessPassword;

extern llrp_u32_t
LLRP_ImpinjBlockPermalock_getAccessPassword (
  LLRP_tSImpinjBlockPermalock *pThis);

extern LLRP_tResultCode
LLRP_ImpinjBlockPermalock_setAccessPassword (
  LLRP_tSImpinjBlockPermalock *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjBlockPermalock_MB;

extern llrp_u2_t
LLRP_ImpinjBlockPermalock_getMB (
  LLRP_tSImpinjBlockPermalock *pThis);

extern LLRP_tResultCode
LLRP_ImpinjBlockPermalock_setMB (
  LLRP_tSImpinjBlockPermalock *pThis,
  llrp_u2_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjBlockPermalock_BlockPointer;

extern llrp_u16_t
LLRP_ImpinjBlockPermalock_getBlockPointer (
  LLRP_tSImpinjBlockPermalock *pThis);

extern LLRP_tResultCode
LLRP_ImpinjBlockPermalock_setBlockPointer (
  LLRP_tSImpinjBlockPermalock *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjBlockPermalock_BlockMask;

extern llrp_u16v_t
LLRP_ImpinjBlockPermalock_getBlockMask (
  LLRP_tSImpinjBlockPermalock *pThis);

extern LLRP_tResultCode
LLRP_ImpinjBlockPermalock_setBlockMask (
  LLRP_tSImpinjBlockPermalock *pThis,
  llrp_u16v_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjBlockPermalock_beginCustom (
  LLRP_tSImpinjBlockPermalock *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjBlockPermalock_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjBlockPermalock_clearCustom (
  LLRP_tSImpinjBlockPermalock *pThis);

extern int
LLRP_ImpinjBlockPermalock_countCustom (
  LLRP_tSImpinjBlockPermalock *pThis);

extern LLRP_tResultCode
LLRP_ImpinjBlockPermalock_addCustom (
  LLRP_tSImpinjBlockPermalock *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjBlockPermalockOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEImpinjBlockPermalockResultType eResult;

    llrp_u16_t OpSpecID;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjBlockPermalockOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjBlockPermalockOpSpecResult[];

extern LLRP_tSImpinjBlockPermalockOpSpecResult *
LLRP_ImpinjBlockPermalockOpSpecResult_construct (void);

extern void
LLRP_ImpinjBlockPermalockOpSpecResult_destruct (
 LLRP_tSImpinjBlockPermalockOpSpecResult * pThis);

extern void
LLRP_ImpinjBlockPermalockOpSpecResult_decodeFields (
 LLRP_tSImpinjBlockPermalockOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjBlockPermalockOpSpecResult_assimilateSubParameters (
 LLRP_tSImpinjBlockPermalockOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjBlockPermalockOpSpecResult_encode (
  const LLRP_tSImpinjBlockPermalockOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjBlockPermalockOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjBlockPermalockOpSpecResult_Result;

extern LLRP_tEImpinjBlockPermalockResultType
LLRP_ImpinjBlockPermalockOpSpecResult_getResult (
  LLRP_tSImpinjBlockPermalockOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ImpinjBlockPermalockOpSpecResult_setResult (
  LLRP_tSImpinjBlockPermalockOpSpecResult *pThis,
  LLRP_tEImpinjBlockPermalockResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjBlockPermalockOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ImpinjBlockPermalockOpSpecResult_getOpSpecID (
  LLRP_tSImpinjBlockPermalockOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ImpinjBlockPermalockOpSpecResult_setOpSpecID (
  LLRP_tSImpinjBlockPermalockOpSpecResult *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjBlockPermalockOpSpecResult_beginCustom (
  LLRP_tSImpinjBlockPermalockOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjBlockPermalockOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjBlockPermalockOpSpecResult_clearCustom (
  LLRP_tSImpinjBlockPermalockOpSpecResult *pThis);

extern int
LLRP_ImpinjBlockPermalockOpSpecResult_countCustom (
  LLRP_tSImpinjBlockPermalockOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ImpinjBlockPermalockOpSpecResult_addCustom (
  LLRP_tSImpinjBlockPermalockOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjGetBlockPermalockStatus
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t OpSpecID;

    llrp_u32_t AccessPassword;

    llrp_u2_t MB;

    llrp_u16_t BlockPointer;

    llrp_u16_t BlockRange;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjGetBlockPermalockStatus;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjGetBlockPermalockStatus[];

extern LLRP_tSImpinjGetBlockPermalockStatus *
LLRP_ImpinjGetBlockPermalockStatus_construct (void);

extern void
LLRP_ImpinjGetBlockPermalockStatus_destruct (
 LLRP_tSImpinjGetBlockPermalockStatus * pThis);

extern void
LLRP_ImpinjGetBlockPermalockStatus_decodeFields (
 LLRP_tSImpinjGetBlockPermalockStatus * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjGetBlockPermalockStatus_assimilateSubParameters (
 LLRP_tSImpinjGetBlockPermalockStatus * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjGetBlockPermalockStatus_encode (
  const LLRP_tSImpinjGetBlockPermalockStatus *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjGetBlockPermalockStatus_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjGetBlockPermalockStatus_OpSpecID;

extern llrp_u16_t
LLRP_ImpinjGetBlockPermalockStatus_getOpSpecID (
  LLRP_tSImpinjGetBlockPermalockStatus *pThis);

extern LLRP_tResultCode
LLRP_ImpinjGetBlockPermalockStatus_setOpSpecID (
  LLRP_tSImpinjGetBlockPermalockStatus *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjGetBlockPermalockStatus_AccessPassword;

extern llrp_u32_t
LLRP_ImpinjGetBlockPermalockStatus_getAccessPassword (
  LLRP_tSImpinjGetBlockPermalockStatus *pThis);

extern LLRP_tResultCode
LLRP_ImpinjGetBlockPermalockStatus_setAccessPassword (
  LLRP_tSImpinjGetBlockPermalockStatus *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjGetBlockPermalockStatus_MB;

extern llrp_u2_t
LLRP_ImpinjGetBlockPermalockStatus_getMB (
  LLRP_tSImpinjGetBlockPermalockStatus *pThis);

extern LLRP_tResultCode
LLRP_ImpinjGetBlockPermalockStatus_setMB (
  LLRP_tSImpinjGetBlockPermalockStatus *pThis,
  llrp_u2_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjGetBlockPermalockStatus_BlockPointer;

extern llrp_u16_t
LLRP_ImpinjGetBlockPermalockStatus_getBlockPointer (
  LLRP_tSImpinjGetBlockPermalockStatus *pThis);

extern LLRP_tResultCode
LLRP_ImpinjGetBlockPermalockStatus_setBlockPointer (
  LLRP_tSImpinjGetBlockPermalockStatus *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjGetBlockPermalockStatus_BlockRange;

extern llrp_u16_t
LLRP_ImpinjGetBlockPermalockStatus_getBlockRange (
  LLRP_tSImpinjGetBlockPermalockStatus *pThis);

extern LLRP_tResultCode
LLRP_ImpinjGetBlockPermalockStatus_setBlockRange (
  LLRP_tSImpinjGetBlockPermalockStatus *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjGetBlockPermalockStatus_beginCustom (
  LLRP_tSImpinjGetBlockPermalockStatus *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjGetBlockPermalockStatus_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjGetBlockPermalockStatus_clearCustom (
  LLRP_tSImpinjGetBlockPermalockStatus *pThis);

extern int
LLRP_ImpinjGetBlockPermalockStatus_countCustom (
  LLRP_tSImpinjGetBlockPermalockStatus *pThis);

extern LLRP_tResultCode
LLRP_ImpinjGetBlockPermalockStatus_addCustom (
  LLRP_tSImpinjGetBlockPermalockStatus *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjGetBlockPermalockStatusOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEImpinjGetBlockPermalockStatusResultType eResult;

    llrp_u16_t OpSpecID;

    llrp_u16v_t PermalockStatus;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjGetBlockPermalockStatusOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjGetBlockPermalockStatusOpSpecResult[];

extern LLRP_tSImpinjGetBlockPermalockStatusOpSpecResult *
LLRP_ImpinjGetBlockPermalockStatusOpSpecResult_construct (void);

extern void
LLRP_ImpinjGetBlockPermalockStatusOpSpecResult_destruct (
 LLRP_tSImpinjGetBlockPermalockStatusOpSpecResult * pThis);

extern void
LLRP_ImpinjGetBlockPermalockStatusOpSpecResult_decodeFields (
 LLRP_tSImpinjGetBlockPermalockStatusOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjGetBlockPermalockStatusOpSpecResult_assimilateSubParameters (
 LLRP_tSImpinjGetBlockPermalockStatusOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjGetBlockPermalockStatusOpSpecResult_encode (
  const LLRP_tSImpinjGetBlockPermalockStatusOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjGetBlockPermalockStatusOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjGetBlockPermalockStatusOpSpecResult_Result;

extern LLRP_tEImpinjGetBlockPermalockStatusResultType
LLRP_ImpinjGetBlockPermalockStatusOpSpecResult_getResult (
  LLRP_tSImpinjGetBlockPermalockStatusOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ImpinjGetBlockPermalockStatusOpSpecResult_setResult (
  LLRP_tSImpinjGetBlockPermalockStatusOpSpecResult *pThis,
  LLRP_tEImpinjGetBlockPermalockStatusResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjGetBlockPermalockStatusOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ImpinjGetBlockPermalockStatusOpSpecResult_getOpSpecID (
  LLRP_tSImpinjGetBlockPermalockStatusOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ImpinjGetBlockPermalockStatusOpSpecResult_setOpSpecID (
  LLRP_tSImpinjGetBlockPermalockStatusOpSpecResult *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjGetBlockPermalockStatusOpSpecResult_PermalockStatus;

extern llrp_u16v_t
LLRP_ImpinjGetBlockPermalockStatusOpSpecResult_getPermalockStatus (
  LLRP_tSImpinjGetBlockPermalockStatusOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ImpinjGetBlockPermalockStatusOpSpecResult_setPermalockStatus (
  LLRP_tSImpinjGetBlockPermalockStatusOpSpecResult *pThis,
  llrp_u16v_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjGetBlockPermalockStatusOpSpecResult_beginCustom (
  LLRP_tSImpinjGetBlockPermalockStatusOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjGetBlockPermalockStatusOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjGetBlockPermalockStatusOpSpecResult_clearCustom (
  LLRP_tSImpinjGetBlockPermalockStatusOpSpecResult *pThis);

extern int
LLRP_ImpinjGetBlockPermalockStatusOpSpecResult_countCustom (
  LLRP_tSImpinjGetBlockPermalockStatusOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ImpinjGetBlockPermalockStatusOpSpecResult_addCustom (
  LLRP_tSImpinjGetBlockPermalockStatusOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjSetQTConfig
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t OpSpecID;

    llrp_u32_t AccessPassword;

    LLRP_tEImpinjQTDataProfile eDataProfile;

    LLRP_tEImpinjQTAccessRange eAccessRange;

    LLRP_tEImpinjQTPersistence ePersistence;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjSetQTConfig;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjSetQTConfig[];

extern LLRP_tSImpinjSetQTConfig *
LLRP_ImpinjSetQTConfig_construct (void);

extern void
LLRP_ImpinjSetQTConfig_destruct (
 LLRP_tSImpinjSetQTConfig * pThis);

extern void
LLRP_ImpinjSetQTConfig_decodeFields (
 LLRP_tSImpinjSetQTConfig * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjSetQTConfig_assimilateSubParameters (
 LLRP_tSImpinjSetQTConfig * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjSetQTConfig_encode (
  const LLRP_tSImpinjSetQTConfig *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjSetQTConfig_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjSetQTConfig_OpSpecID;

extern llrp_u16_t
LLRP_ImpinjSetQTConfig_getOpSpecID (
  LLRP_tSImpinjSetQTConfig *pThis);

extern LLRP_tResultCode
LLRP_ImpinjSetQTConfig_setOpSpecID (
  LLRP_tSImpinjSetQTConfig *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjSetQTConfig_AccessPassword;

extern llrp_u32_t
LLRP_ImpinjSetQTConfig_getAccessPassword (
  LLRP_tSImpinjSetQTConfig *pThis);

extern LLRP_tResultCode
LLRP_ImpinjSetQTConfig_setAccessPassword (
  LLRP_tSImpinjSetQTConfig *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjSetQTConfig_DataProfile;

extern LLRP_tEImpinjQTDataProfile
LLRP_ImpinjSetQTConfig_getDataProfile (
  LLRP_tSImpinjSetQTConfig *pThis);

extern LLRP_tResultCode
LLRP_ImpinjSetQTConfig_setDataProfile (
  LLRP_tSImpinjSetQTConfig *pThis,
  LLRP_tEImpinjQTDataProfile Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjSetQTConfig_AccessRange;

extern LLRP_tEImpinjQTAccessRange
LLRP_ImpinjSetQTConfig_getAccessRange (
  LLRP_tSImpinjSetQTConfig *pThis);

extern LLRP_tResultCode
LLRP_ImpinjSetQTConfig_setAccessRange (
  LLRP_tSImpinjSetQTConfig *pThis,
  LLRP_tEImpinjQTAccessRange Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjSetQTConfig_Persistence;

extern LLRP_tEImpinjQTPersistence
LLRP_ImpinjSetQTConfig_getPersistence (
  LLRP_tSImpinjSetQTConfig *pThis);

extern LLRP_tResultCode
LLRP_ImpinjSetQTConfig_setPersistence (
  LLRP_tSImpinjSetQTConfig *pThis,
  LLRP_tEImpinjQTPersistence Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjSetQTConfig_beginCustom (
  LLRP_tSImpinjSetQTConfig *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjSetQTConfig_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjSetQTConfig_clearCustom (
  LLRP_tSImpinjSetQTConfig *pThis);

extern int
LLRP_ImpinjSetQTConfig_countCustom (
  LLRP_tSImpinjSetQTConfig *pThis);

extern LLRP_tResultCode
LLRP_ImpinjSetQTConfig_addCustom (
  LLRP_tSImpinjSetQTConfig *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjSetQTConfigOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEImpinjSetQTConfigResultType eResult;

    llrp_u16_t OpSpecID;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjSetQTConfigOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjSetQTConfigOpSpecResult[];

extern LLRP_tSImpinjSetQTConfigOpSpecResult *
LLRP_ImpinjSetQTConfigOpSpecResult_construct (void);

extern void
LLRP_ImpinjSetQTConfigOpSpecResult_destruct (
 LLRP_tSImpinjSetQTConfigOpSpecResult * pThis);

extern void
LLRP_ImpinjSetQTConfigOpSpecResult_decodeFields (
 LLRP_tSImpinjSetQTConfigOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjSetQTConfigOpSpecResult_assimilateSubParameters (
 LLRP_tSImpinjSetQTConfigOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjSetQTConfigOpSpecResult_encode (
  const LLRP_tSImpinjSetQTConfigOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjSetQTConfigOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjSetQTConfigOpSpecResult_Result;

extern LLRP_tEImpinjSetQTConfigResultType
LLRP_ImpinjSetQTConfigOpSpecResult_getResult (
  LLRP_tSImpinjSetQTConfigOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ImpinjSetQTConfigOpSpecResult_setResult (
  LLRP_tSImpinjSetQTConfigOpSpecResult *pThis,
  LLRP_tEImpinjSetQTConfigResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjSetQTConfigOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ImpinjSetQTConfigOpSpecResult_getOpSpecID (
  LLRP_tSImpinjSetQTConfigOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ImpinjSetQTConfigOpSpecResult_setOpSpecID (
  LLRP_tSImpinjSetQTConfigOpSpecResult *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjSetQTConfigOpSpecResult_beginCustom (
  LLRP_tSImpinjSetQTConfigOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjSetQTConfigOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjSetQTConfigOpSpecResult_clearCustom (
  LLRP_tSImpinjSetQTConfigOpSpecResult *pThis);

extern int
LLRP_ImpinjSetQTConfigOpSpecResult_countCustom (
  LLRP_tSImpinjSetQTConfigOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ImpinjSetQTConfigOpSpecResult_addCustom (
  LLRP_tSImpinjSetQTConfigOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjGetQTConfig
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t OpSpecID;

    llrp_u32_t AccessPassword;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjGetQTConfig;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjGetQTConfig[];

extern LLRP_tSImpinjGetQTConfig *
LLRP_ImpinjGetQTConfig_construct (void);

extern void
LLRP_ImpinjGetQTConfig_destruct (
 LLRP_tSImpinjGetQTConfig * pThis);

extern void
LLRP_ImpinjGetQTConfig_decodeFields (
 LLRP_tSImpinjGetQTConfig * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjGetQTConfig_assimilateSubParameters (
 LLRP_tSImpinjGetQTConfig * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjGetQTConfig_encode (
  const LLRP_tSImpinjGetQTConfig *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjGetQTConfig_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjGetQTConfig_OpSpecID;

extern llrp_u16_t
LLRP_ImpinjGetQTConfig_getOpSpecID (
  LLRP_tSImpinjGetQTConfig *pThis);

extern LLRP_tResultCode
LLRP_ImpinjGetQTConfig_setOpSpecID (
  LLRP_tSImpinjGetQTConfig *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjGetQTConfig_AccessPassword;

extern llrp_u32_t
LLRP_ImpinjGetQTConfig_getAccessPassword (
  LLRP_tSImpinjGetQTConfig *pThis);

extern LLRP_tResultCode
LLRP_ImpinjGetQTConfig_setAccessPassword (
  LLRP_tSImpinjGetQTConfig *pThis,
  llrp_u32_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjGetQTConfig_beginCustom (
  LLRP_tSImpinjGetQTConfig *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjGetQTConfig_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjGetQTConfig_clearCustom (
  LLRP_tSImpinjGetQTConfig *pThis);

extern int
LLRP_ImpinjGetQTConfig_countCustom (
  LLRP_tSImpinjGetQTConfig *pThis);

extern LLRP_tResultCode
LLRP_ImpinjGetQTConfig_addCustom (
  LLRP_tSImpinjGetQTConfig *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjGetQTConfigOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEImpinjGetQTConfigResultType eResult;

    llrp_u16_t OpSpecID;

    LLRP_tEImpinjQTDataProfile eDataProfile;

    LLRP_tEImpinjQTAccessRange eAccessRange;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjGetQTConfigOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjGetQTConfigOpSpecResult[];

extern LLRP_tSImpinjGetQTConfigOpSpecResult *
LLRP_ImpinjGetQTConfigOpSpecResult_construct (void);

extern void
LLRP_ImpinjGetQTConfigOpSpecResult_destruct (
 LLRP_tSImpinjGetQTConfigOpSpecResult * pThis);

extern void
LLRP_ImpinjGetQTConfigOpSpecResult_decodeFields (
 LLRP_tSImpinjGetQTConfigOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjGetQTConfigOpSpecResult_assimilateSubParameters (
 LLRP_tSImpinjGetQTConfigOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjGetQTConfigOpSpecResult_encode (
  const LLRP_tSImpinjGetQTConfigOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjGetQTConfigOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjGetQTConfigOpSpecResult_Result;

extern LLRP_tEImpinjGetQTConfigResultType
LLRP_ImpinjGetQTConfigOpSpecResult_getResult (
  LLRP_tSImpinjGetQTConfigOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ImpinjGetQTConfigOpSpecResult_setResult (
  LLRP_tSImpinjGetQTConfigOpSpecResult *pThis,
  LLRP_tEImpinjGetQTConfigResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjGetQTConfigOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ImpinjGetQTConfigOpSpecResult_getOpSpecID (
  LLRP_tSImpinjGetQTConfigOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ImpinjGetQTConfigOpSpecResult_setOpSpecID (
  LLRP_tSImpinjGetQTConfigOpSpecResult *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjGetQTConfigOpSpecResult_DataProfile;

extern LLRP_tEImpinjQTDataProfile
LLRP_ImpinjGetQTConfigOpSpecResult_getDataProfile (
  LLRP_tSImpinjGetQTConfigOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ImpinjGetQTConfigOpSpecResult_setDataProfile (
  LLRP_tSImpinjGetQTConfigOpSpecResult *pThis,
  LLRP_tEImpinjQTDataProfile Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjGetQTConfigOpSpecResult_AccessRange;

extern LLRP_tEImpinjQTAccessRange
LLRP_ImpinjGetQTConfigOpSpecResult_getAccessRange (
  LLRP_tSImpinjGetQTConfigOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ImpinjGetQTConfigOpSpecResult_setAccessRange (
  LLRP_tSImpinjGetQTConfigOpSpecResult *pThis,
  LLRP_tEImpinjQTAccessRange Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjGetQTConfigOpSpecResult_beginCustom (
  LLRP_tSImpinjGetQTConfigOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjGetQTConfigOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjGetQTConfigOpSpecResult_clearCustom (
  LLRP_tSImpinjGetQTConfigOpSpecResult *pThis);

extern int
LLRP_ImpinjGetQTConfigOpSpecResult_countCustom (
  LLRP_tSImpinjGetQTConfigOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ImpinjGetQTConfigOpSpecResult_addCustom (
  LLRP_tSImpinjGetQTConfigOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjTagReportContentSelector
{
    LLRP_tSParameter hdr;
  
  
    LLRP_tSImpinjEnableSerializedTID * pImpinjEnableSerializedTID;

    LLRP_tSImpinjEnableRFPhaseAngle * pImpinjEnableRFPhaseAngle;

    LLRP_tSImpinjEnablePeakRSSI * pImpinjEnablePeakRSSI;

    LLRP_tSImpinjEnableGPSCoordinates * pImpinjEnableGPSCoordinates;

    LLRP_tSImpinjEnableOptimizedRead * pImpinjEnableOptimizedRead;

    LLRP_tSImpinjEnableRFDopplerFrequency * pImpinjEnableRFDopplerFrequency;

    LLRP_tSImpinjEnableTxPower * pImpinjEnableTxPower;

    LLRP_tSImpinjEnableXPCWords * pImpinjEnableXPCWords;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjTagReportContentSelector;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjTagReportContentSelector[];

extern LLRP_tSImpinjTagReportContentSelector *
LLRP_ImpinjTagReportContentSelector_construct (void);

extern void
LLRP_ImpinjTagReportContentSelector_destruct (
 LLRP_tSImpinjTagReportContentSelector * pThis);

extern void
LLRP_ImpinjTagReportContentSelector_decodeFields (
 LLRP_tSImpinjTagReportContentSelector * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjTagReportContentSelector_assimilateSubParameters (
 LLRP_tSImpinjTagReportContentSelector * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjTagReportContentSelector_encode (
  const LLRP_tSImpinjTagReportContentSelector *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjTagReportContentSelector_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
  
extern LLRP_tSImpinjEnableSerializedTID *
LLRP_ImpinjTagReportContentSelector_getImpinjEnableSerializedTID (
  LLRP_tSImpinjTagReportContentSelector *pThis);

extern LLRP_tResultCode
LLRP_ImpinjTagReportContentSelector_setImpinjEnableSerializedTID (
  LLRP_tSImpinjTagReportContentSelector *pThis,
  LLRP_tSImpinjEnableSerializedTID *pValue);

extern LLRP_tSImpinjEnableRFPhaseAngle *
LLRP_ImpinjTagReportContentSelector_getImpinjEnableRFPhaseAngle (
  LLRP_tSImpinjTagReportContentSelector *pThis);

extern LLRP_tResultCode
LLRP_ImpinjTagReportContentSelector_setImpinjEnableRFPhaseAngle (
  LLRP_tSImpinjTagReportContentSelector *pThis,
  LLRP_tSImpinjEnableRFPhaseAngle *pValue);

extern LLRP_tSImpinjEnablePeakRSSI *
LLRP_ImpinjTagReportContentSelector_getImpinjEnablePeakRSSI (
  LLRP_tSImpinjTagReportContentSelector *pThis);

extern LLRP_tResultCode
LLRP_ImpinjTagReportContentSelector_setImpinjEnablePeakRSSI (
  LLRP_tSImpinjTagReportContentSelector *pThis,
  LLRP_tSImpinjEnablePeakRSSI *pValue);

extern LLRP_tSImpinjEnableGPSCoordinates *
LLRP_ImpinjTagReportContentSelector_getImpinjEnableGPSCoordinates (
  LLRP_tSImpinjTagReportContentSelector *pThis);

extern LLRP_tResultCode
LLRP_ImpinjTagReportContentSelector_setImpinjEnableGPSCoordinates (
  LLRP_tSImpinjTagReportContentSelector *pThis,
  LLRP_tSImpinjEnableGPSCoordinates *pValue);

extern LLRP_tSImpinjEnableOptimizedRead *
LLRP_ImpinjTagReportContentSelector_getImpinjEnableOptimizedRead (
  LLRP_tSImpinjTagReportContentSelector *pThis);

extern LLRP_tResultCode
LLRP_ImpinjTagReportContentSelector_setImpinjEnableOptimizedRead (
  LLRP_tSImpinjTagReportContentSelector *pThis,
  LLRP_tSImpinjEnableOptimizedRead *pValue);

extern LLRP_tSImpinjEnableRFDopplerFrequency *
LLRP_ImpinjTagReportContentSelector_getImpinjEnableRFDopplerFrequency (
  LLRP_tSImpinjTagReportContentSelector *pThis);

extern LLRP_tResultCode
LLRP_ImpinjTagReportContentSelector_setImpinjEnableRFDopplerFrequency (
  LLRP_tSImpinjTagReportContentSelector *pThis,
  LLRP_tSImpinjEnableRFDopplerFrequency *pValue);

extern LLRP_tSImpinjEnableTxPower *
LLRP_ImpinjTagReportContentSelector_getImpinjEnableTxPower (
  LLRP_tSImpinjTagReportContentSelector *pThis);

extern LLRP_tResultCode
LLRP_ImpinjTagReportContentSelector_setImpinjEnableTxPower (
  LLRP_tSImpinjTagReportContentSelector *pThis,
  LLRP_tSImpinjEnableTxPower *pValue);

extern LLRP_tSImpinjEnableXPCWords *
LLRP_ImpinjTagReportContentSelector_getImpinjEnableXPCWords (
  LLRP_tSImpinjTagReportContentSelector *pThis);

extern LLRP_tResultCode
LLRP_ImpinjTagReportContentSelector_setImpinjEnableXPCWords (
  LLRP_tSImpinjTagReportContentSelector *pThis,
  LLRP_tSImpinjEnableXPCWords *pValue);

extern LLRP_tSParameter *
LLRP_ImpinjTagReportContentSelector_beginCustom (
  LLRP_tSImpinjTagReportContentSelector *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjTagReportContentSelector_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjTagReportContentSelector_clearCustom (
  LLRP_tSImpinjTagReportContentSelector *pThis);

extern int
LLRP_ImpinjTagReportContentSelector_countCustom (
  LLRP_tSImpinjTagReportContentSelector *pThis);

extern LLRP_tResultCode
LLRP_ImpinjTagReportContentSelector_addCustom (
  LLRP_tSImpinjTagReportContentSelector *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjEnableSerializedTID
{
    LLRP_tSParameter hdr;
  
    LLRP_tEImpinjSerializedTIDMode eSerializedTIDMode;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjEnableSerializedTID;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjEnableSerializedTID[];

extern LLRP_tSImpinjEnableSerializedTID *
LLRP_ImpinjEnableSerializedTID_construct (void);

extern void
LLRP_ImpinjEnableSerializedTID_destruct (
 LLRP_tSImpinjEnableSerializedTID * pThis);

extern void
LLRP_ImpinjEnableSerializedTID_decodeFields (
 LLRP_tSImpinjEnableSerializedTID * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjEnableSerializedTID_assimilateSubParameters (
 LLRP_tSImpinjEnableSerializedTID * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjEnableSerializedTID_encode (
  const LLRP_tSImpinjEnableSerializedTID *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjEnableSerializedTID_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjEnableSerializedTID_SerializedTIDMode;

extern LLRP_tEImpinjSerializedTIDMode
LLRP_ImpinjEnableSerializedTID_getSerializedTIDMode (
  LLRP_tSImpinjEnableSerializedTID *pThis);

extern LLRP_tResultCode
LLRP_ImpinjEnableSerializedTID_setSerializedTIDMode (
  LLRP_tSImpinjEnableSerializedTID *pThis,
  LLRP_tEImpinjSerializedTIDMode Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjEnableSerializedTID_beginCustom (
  LLRP_tSImpinjEnableSerializedTID *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjEnableSerializedTID_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjEnableSerializedTID_clearCustom (
  LLRP_tSImpinjEnableSerializedTID *pThis);

extern int
LLRP_ImpinjEnableSerializedTID_countCustom (
  LLRP_tSImpinjEnableSerializedTID *pThis);

extern LLRP_tResultCode
LLRP_ImpinjEnableSerializedTID_addCustom (
  LLRP_tSImpinjEnableSerializedTID *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjEnableRFPhaseAngle
{
    LLRP_tSParameter hdr;
  
    LLRP_tEImpinjRFPhaseAngleMode eRFPhaseAngleMode;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjEnableRFPhaseAngle;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjEnableRFPhaseAngle[];

extern LLRP_tSImpinjEnableRFPhaseAngle *
LLRP_ImpinjEnableRFPhaseAngle_construct (void);

extern void
LLRP_ImpinjEnableRFPhaseAngle_destruct (
 LLRP_tSImpinjEnableRFPhaseAngle * pThis);

extern void
LLRP_ImpinjEnableRFPhaseAngle_decodeFields (
 LLRP_tSImpinjEnableRFPhaseAngle * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjEnableRFPhaseAngle_assimilateSubParameters (
 LLRP_tSImpinjEnableRFPhaseAngle * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjEnableRFPhaseAngle_encode (
  const LLRP_tSImpinjEnableRFPhaseAngle *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjEnableRFPhaseAngle_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjEnableRFPhaseAngle_RFPhaseAngleMode;

extern LLRP_tEImpinjRFPhaseAngleMode
LLRP_ImpinjEnableRFPhaseAngle_getRFPhaseAngleMode (
  LLRP_tSImpinjEnableRFPhaseAngle *pThis);

extern LLRP_tResultCode
LLRP_ImpinjEnableRFPhaseAngle_setRFPhaseAngleMode (
  LLRP_tSImpinjEnableRFPhaseAngle *pThis,
  LLRP_tEImpinjRFPhaseAngleMode Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjEnableRFPhaseAngle_beginCustom (
  LLRP_tSImpinjEnableRFPhaseAngle *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjEnableRFPhaseAngle_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjEnableRFPhaseAngle_clearCustom (
  LLRP_tSImpinjEnableRFPhaseAngle *pThis);

extern int
LLRP_ImpinjEnableRFPhaseAngle_countCustom (
  LLRP_tSImpinjEnableRFPhaseAngle *pThis);

extern LLRP_tResultCode
LLRP_ImpinjEnableRFPhaseAngle_addCustom (
  LLRP_tSImpinjEnableRFPhaseAngle *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjEnablePeakRSSI
{
    LLRP_tSParameter hdr;
  
    LLRP_tEImpinjPeakRSSIMode ePeakRSSIMode;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjEnablePeakRSSI;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjEnablePeakRSSI[];

extern LLRP_tSImpinjEnablePeakRSSI *
LLRP_ImpinjEnablePeakRSSI_construct (void);

extern void
LLRP_ImpinjEnablePeakRSSI_destruct (
 LLRP_tSImpinjEnablePeakRSSI * pThis);

extern void
LLRP_ImpinjEnablePeakRSSI_decodeFields (
 LLRP_tSImpinjEnablePeakRSSI * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjEnablePeakRSSI_assimilateSubParameters (
 LLRP_tSImpinjEnablePeakRSSI * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjEnablePeakRSSI_encode (
  const LLRP_tSImpinjEnablePeakRSSI *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjEnablePeakRSSI_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjEnablePeakRSSI_PeakRSSIMode;

extern LLRP_tEImpinjPeakRSSIMode
LLRP_ImpinjEnablePeakRSSI_getPeakRSSIMode (
  LLRP_tSImpinjEnablePeakRSSI *pThis);

extern LLRP_tResultCode
LLRP_ImpinjEnablePeakRSSI_setPeakRSSIMode (
  LLRP_tSImpinjEnablePeakRSSI *pThis,
  LLRP_tEImpinjPeakRSSIMode Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjEnablePeakRSSI_beginCustom (
  LLRP_tSImpinjEnablePeakRSSI *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjEnablePeakRSSI_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjEnablePeakRSSI_clearCustom (
  LLRP_tSImpinjEnablePeakRSSI *pThis);

extern int
LLRP_ImpinjEnablePeakRSSI_countCustom (
  LLRP_tSImpinjEnablePeakRSSI *pThis);

extern LLRP_tResultCode
LLRP_ImpinjEnablePeakRSSI_addCustom (
  LLRP_tSImpinjEnablePeakRSSI *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjEnableGPSCoordinates
{
    LLRP_tSParameter hdr;
  
    LLRP_tEImpinjGPSCoordinatesMode eGPSCoordinatesMode;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjEnableGPSCoordinates;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjEnableGPSCoordinates[];

extern LLRP_tSImpinjEnableGPSCoordinates *
LLRP_ImpinjEnableGPSCoordinates_construct (void);

extern void
LLRP_ImpinjEnableGPSCoordinates_destruct (
 LLRP_tSImpinjEnableGPSCoordinates * pThis);

extern void
LLRP_ImpinjEnableGPSCoordinates_decodeFields (
 LLRP_tSImpinjEnableGPSCoordinates * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjEnableGPSCoordinates_assimilateSubParameters (
 LLRP_tSImpinjEnableGPSCoordinates * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjEnableGPSCoordinates_encode (
  const LLRP_tSImpinjEnableGPSCoordinates *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjEnableGPSCoordinates_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjEnableGPSCoordinates_GPSCoordinatesMode;

extern LLRP_tEImpinjGPSCoordinatesMode
LLRP_ImpinjEnableGPSCoordinates_getGPSCoordinatesMode (
  LLRP_tSImpinjEnableGPSCoordinates *pThis);

extern LLRP_tResultCode
LLRP_ImpinjEnableGPSCoordinates_setGPSCoordinatesMode (
  LLRP_tSImpinjEnableGPSCoordinates *pThis,
  LLRP_tEImpinjGPSCoordinatesMode Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjEnableGPSCoordinates_beginCustom (
  LLRP_tSImpinjEnableGPSCoordinates *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjEnableGPSCoordinates_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjEnableGPSCoordinates_clearCustom (
  LLRP_tSImpinjEnableGPSCoordinates *pThis);

extern int
LLRP_ImpinjEnableGPSCoordinates_countCustom (
  LLRP_tSImpinjEnableGPSCoordinates *pThis);

extern LLRP_tResultCode
LLRP_ImpinjEnableGPSCoordinates_addCustom (
  LLRP_tSImpinjEnableGPSCoordinates *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjSerializedTID
{
    LLRP_tSParameter hdr;
  
    llrp_u16v_t TID;

  
    LLRP_tSImpinjTIDParity * pImpinjTIDParity;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjSerializedTID;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjSerializedTID[];

extern LLRP_tSImpinjSerializedTID *
LLRP_ImpinjSerializedTID_construct (void);

extern void
LLRP_ImpinjSerializedTID_destruct (
 LLRP_tSImpinjSerializedTID * pThis);

extern void
LLRP_ImpinjSerializedTID_decodeFields (
 LLRP_tSImpinjSerializedTID * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjSerializedTID_assimilateSubParameters (
 LLRP_tSImpinjSerializedTID * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjSerializedTID_encode (
  const LLRP_tSImpinjSerializedTID *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjSerializedTID_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjSerializedTID_TID;

extern llrp_u16v_t
LLRP_ImpinjSerializedTID_getTID (
  LLRP_tSImpinjSerializedTID *pThis);

extern LLRP_tResultCode
LLRP_ImpinjSerializedTID_setTID (
  LLRP_tSImpinjSerializedTID *pThis,
  llrp_u16v_t Value);

  
extern LLRP_tSImpinjTIDParity *
LLRP_ImpinjSerializedTID_getImpinjTIDParity (
  LLRP_tSImpinjSerializedTID *pThis);

extern LLRP_tResultCode
LLRP_ImpinjSerializedTID_setImpinjTIDParity (
  LLRP_tSImpinjSerializedTID *pThis,
  LLRP_tSImpinjTIDParity *pValue);

extern LLRP_tSParameter *
LLRP_ImpinjSerializedTID_beginCustom (
  LLRP_tSImpinjSerializedTID *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjSerializedTID_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjSerializedTID_clearCustom (
  LLRP_tSImpinjSerializedTID *pThis);

extern int
LLRP_ImpinjSerializedTID_countCustom (
  LLRP_tSImpinjSerializedTID *pThis);

extern LLRP_tResultCode
LLRP_ImpinjSerializedTID_addCustom (
  LLRP_tSImpinjSerializedTID *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjRFPhaseAngle
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t PhaseAngle;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjRFPhaseAngle;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjRFPhaseAngle[];

extern LLRP_tSImpinjRFPhaseAngle *
LLRP_ImpinjRFPhaseAngle_construct (void);

extern void
LLRP_ImpinjRFPhaseAngle_destruct (
 LLRP_tSImpinjRFPhaseAngle * pThis);

extern void
LLRP_ImpinjRFPhaseAngle_decodeFields (
 LLRP_tSImpinjRFPhaseAngle * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjRFPhaseAngle_assimilateSubParameters (
 LLRP_tSImpinjRFPhaseAngle * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjRFPhaseAngle_encode (
  const LLRP_tSImpinjRFPhaseAngle *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjRFPhaseAngle_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjRFPhaseAngle_PhaseAngle;

extern llrp_u16_t
LLRP_ImpinjRFPhaseAngle_getPhaseAngle (
  LLRP_tSImpinjRFPhaseAngle *pThis);

extern LLRP_tResultCode
LLRP_ImpinjRFPhaseAngle_setPhaseAngle (
  LLRP_tSImpinjRFPhaseAngle *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjRFPhaseAngle_beginCustom (
  LLRP_tSImpinjRFPhaseAngle *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjRFPhaseAngle_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjRFPhaseAngle_clearCustom (
  LLRP_tSImpinjRFPhaseAngle *pThis);

extern int
LLRP_ImpinjRFPhaseAngle_countCustom (
  LLRP_tSImpinjRFPhaseAngle *pThis);

extern LLRP_tResultCode
LLRP_ImpinjRFPhaseAngle_addCustom (
  LLRP_tSImpinjRFPhaseAngle *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjPeakRSSI
{
    LLRP_tSParameter hdr;
  
    llrp_s16_t RSSI;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjPeakRSSI;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjPeakRSSI[];

extern LLRP_tSImpinjPeakRSSI *
LLRP_ImpinjPeakRSSI_construct (void);

extern void
LLRP_ImpinjPeakRSSI_destruct (
 LLRP_tSImpinjPeakRSSI * pThis);

extern void
LLRP_ImpinjPeakRSSI_decodeFields (
 LLRP_tSImpinjPeakRSSI * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjPeakRSSI_assimilateSubParameters (
 LLRP_tSImpinjPeakRSSI * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjPeakRSSI_encode (
  const LLRP_tSImpinjPeakRSSI *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjPeakRSSI_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjPeakRSSI_RSSI;

extern llrp_s16_t
LLRP_ImpinjPeakRSSI_getRSSI (
  LLRP_tSImpinjPeakRSSI *pThis);

extern LLRP_tResultCode
LLRP_ImpinjPeakRSSI_setRSSI (
  LLRP_tSImpinjPeakRSSI *pThis,
  llrp_s16_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjPeakRSSI_beginCustom (
  LLRP_tSImpinjPeakRSSI *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjPeakRSSI_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjPeakRSSI_clearCustom (
  LLRP_tSImpinjPeakRSSI *pThis);

extern int
LLRP_ImpinjPeakRSSI_countCustom (
  LLRP_tSImpinjPeakRSSI *pThis);

extern LLRP_tResultCode
LLRP_ImpinjPeakRSSI_addCustom (
  LLRP_tSImpinjPeakRSSI *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjGPSCoordinates
{
    LLRP_tSParameter hdr;
  
    llrp_s32_t Latitude;

    llrp_s32_t Longitude;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjGPSCoordinates;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjGPSCoordinates[];

extern LLRP_tSImpinjGPSCoordinates *
LLRP_ImpinjGPSCoordinates_construct (void);

extern void
LLRP_ImpinjGPSCoordinates_destruct (
 LLRP_tSImpinjGPSCoordinates * pThis);

extern void
LLRP_ImpinjGPSCoordinates_decodeFields (
 LLRP_tSImpinjGPSCoordinates * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjGPSCoordinates_assimilateSubParameters (
 LLRP_tSImpinjGPSCoordinates * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjGPSCoordinates_encode (
  const LLRP_tSImpinjGPSCoordinates *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjGPSCoordinates_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjGPSCoordinates_Latitude;

extern llrp_s32_t
LLRP_ImpinjGPSCoordinates_getLatitude (
  LLRP_tSImpinjGPSCoordinates *pThis);

extern LLRP_tResultCode
LLRP_ImpinjGPSCoordinates_setLatitude (
  LLRP_tSImpinjGPSCoordinates *pThis,
  llrp_s32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjGPSCoordinates_Longitude;

extern llrp_s32_t
LLRP_ImpinjGPSCoordinates_getLongitude (
  LLRP_tSImpinjGPSCoordinates *pThis);

extern LLRP_tResultCode
LLRP_ImpinjGPSCoordinates_setLongitude (
  LLRP_tSImpinjGPSCoordinates *pThis,
  llrp_s32_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjGPSCoordinates_beginCustom (
  LLRP_tSImpinjGPSCoordinates *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjGPSCoordinates_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjGPSCoordinates_clearCustom (
  LLRP_tSImpinjGPSCoordinates *pThis);

extern int
LLRP_ImpinjGPSCoordinates_countCustom (
  LLRP_tSImpinjGPSCoordinates *pThis);

extern LLRP_tResultCode
LLRP_ImpinjGPSCoordinates_addCustom (
  LLRP_tSImpinjGPSCoordinates *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjLoopSpec
{
    LLRP_tSParameter hdr;
  
    llrp_u32_t LoopCount;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjLoopSpec;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjLoopSpec[];

extern LLRP_tSImpinjLoopSpec *
LLRP_ImpinjLoopSpec_construct (void);

extern void
LLRP_ImpinjLoopSpec_destruct (
 LLRP_tSImpinjLoopSpec * pThis);

extern void
LLRP_ImpinjLoopSpec_decodeFields (
 LLRP_tSImpinjLoopSpec * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjLoopSpec_assimilateSubParameters (
 LLRP_tSImpinjLoopSpec * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjLoopSpec_encode (
  const LLRP_tSImpinjLoopSpec *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjLoopSpec_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjLoopSpec_LoopCount;

extern llrp_u32_t
LLRP_ImpinjLoopSpec_getLoopCount (
  LLRP_tSImpinjLoopSpec *pThis);

extern LLRP_tResultCode
LLRP_ImpinjLoopSpec_setLoopCount (
  LLRP_tSImpinjLoopSpec *pThis,
  llrp_u32_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjLoopSpec_beginCustom (
  LLRP_tSImpinjLoopSpec *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjLoopSpec_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjLoopSpec_clearCustom (
  LLRP_tSImpinjLoopSpec *pThis);

extern int
LLRP_ImpinjLoopSpec_countCustom (
  LLRP_tSImpinjLoopSpec *pThis);

extern LLRP_tResultCode
LLRP_ImpinjLoopSpec_addCustom (
  LLRP_tSImpinjLoopSpec *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjGPSNMEASentences
{
    LLRP_tSParameter hdr;
  
  
    LLRP_tSImpinjGGASentence * pImpinjGGASentence;

    LLRP_tSImpinjRMCSentence * pImpinjRMCSentence;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjGPSNMEASentences;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjGPSNMEASentences[];

extern LLRP_tSImpinjGPSNMEASentences *
LLRP_ImpinjGPSNMEASentences_construct (void);

extern void
LLRP_ImpinjGPSNMEASentences_destruct (
 LLRP_tSImpinjGPSNMEASentences * pThis);

extern void
LLRP_ImpinjGPSNMEASentences_decodeFields (
 LLRP_tSImpinjGPSNMEASentences * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjGPSNMEASentences_assimilateSubParameters (
 LLRP_tSImpinjGPSNMEASentences * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjGPSNMEASentences_encode (
  const LLRP_tSImpinjGPSNMEASentences *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjGPSNMEASentences_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
  
extern LLRP_tSImpinjGGASentence *
LLRP_ImpinjGPSNMEASentences_getImpinjGGASentence (
  LLRP_tSImpinjGPSNMEASentences *pThis);

extern LLRP_tResultCode
LLRP_ImpinjGPSNMEASentences_setImpinjGGASentence (
  LLRP_tSImpinjGPSNMEASentences *pThis,
  LLRP_tSImpinjGGASentence *pValue);

extern LLRP_tSImpinjRMCSentence *
LLRP_ImpinjGPSNMEASentences_getImpinjRMCSentence (
  LLRP_tSImpinjGPSNMEASentences *pThis);

extern LLRP_tResultCode
LLRP_ImpinjGPSNMEASentences_setImpinjRMCSentence (
  LLRP_tSImpinjGPSNMEASentences *pThis,
  LLRP_tSImpinjRMCSentence *pValue);

extern LLRP_tSParameter *
LLRP_ImpinjGPSNMEASentences_beginCustom (
  LLRP_tSImpinjGPSNMEASentences *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjGPSNMEASentences_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjGPSNMEASentences_clearCustom (
  LLRP_tSImpinjGPSNMEASentences *pThis);

extern int
LLRP_ImpinjGPSNMEASentences_countCustom (
  LLRP_tSImpinjGPSNMEASentences *pThis);

extern LLRP_tResultCode
LLRP_ImpinjGPSNMEASentences_addCustom (
  LLRP_tSImpinjGPSNMEASentences *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjGGASentence
{
    LLRP_tSParameter hdr;
  
    llrp_utf8v_t GGASentence;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjGGASentence;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjGGASentence[];

extern LLRP_tSImpinjGGASentence *
LLRP_ImpinjGGASentence_construct (void);

extern void
LLRP_ImpinjGGASentence_destruct (
 LLRP_tSImpinjGGASentence * pThis);

extern void
LLRP_ImpinjGGASentence_decodeFields (
 LLRP_tSImpinjGGASentence * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjGGASentence_assimilateSubParameters (
 LLRP_tSImpinjGGASentence * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjGGASentence_encode (
  const LLRP_tSImpinjGGASentence *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjGGASentence_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjGGASentence_GGASentence;

extern llrp_utf8v_t
LLRP_ImpinjGGASentence_getGGASentence (
  LLRP_tSImpinjGGASentence *pThis);

extern LLRP_tResultCode
LLRP_ImpinjGGASentence_setGGASentence (
  LLRP_tSImpinjGGASentence *pThis,
  llrp_utf8v_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjGGASentence_beginCustom (
  LLRP_tSImpinjGGASentence *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjGGASentence_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjGGASentence_clearCustom (
  LLRP_tSImpinjGGASentence *pThis);

extern int
LLRP_ImpinjGGASentence_countCustom (
  LLRP_tSImpinjGGASentence *pThis);

extern LLRP_tResultCode
LLRP_ImpinjGGASentence_addCustom (
  LLRP_tSImpinjGGASentence *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjRMCSentence
{
    LLRP_tSParameter hdr;
  
    llrp_utf8v_t RMCSentence;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjRMCSentence;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjRMCSentence[];

extern LLRP_tSImpinjRMCSentence *
LLRP_ImpinjRMCSentence_construct (void);

extern void
LLRP_ImpinjRMCSentence_destruct (
 LLRP_tSImpinjRMCSentence * pThis);

extern void
LLRP_ImpinjRMCSentence_decodeFields (
 LLRP_tSImpinjRMCSentence * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjRMCSentence_assimilateSubParameters (
 LLRP_tSImpinjRMCSentence * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjRMCSentence_encode (
  const LLRP_tSImpinjRMCSentence *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjRMCSentence_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjRMCSentence_RMCSentence;

extern llrp_utf8v_t
LLRP_ImpinjRMCSentence_getRMCSentence (
  LLRP_tSImpinjRMCSentence *pThis);

extern LLRP_tResultCode
LLRP_ImpinjRMCSentence_setRMCSentence (
  LLRP_tSImpinjRMCSentence *pThis,
  llrp_utf8v_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjRMCSentence_beginCustom (
  LLRP_tSImpinjRMCSentence *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjRMCSentence_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjRMCSentence_clearCustom (
  LLRP_tSImpinjRMCSentence *pThis);

extern int
LLRP_ImpinjRMCSentence_countCustom (
  LLRP_tSImpinjRMCSentence *pThis);

extern LLRP_tResultCode
LLRP_ImpinjRMCSentence_addCustom (
  LLRP_tSImpinjRMCSentence *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjOpSpecRetryCount
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t RetryCount;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjOpSpecRetryCount;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjOpSpecRetryCount[];

extern LLRP_tSImpinjOpSpecRetryCount *
LLRP_ImpinjOpSpecRetryCount_construct (void);

extern void
LLRP_ImpinjOpSpecRetryCount_destruct (
 LLRP_tSImpinjOpSpecRetryCount * pThis);

extern void
LLRP_ImpinjOpSpecRetryCount_decodeFields (
 LLRP_tSImpinjOpSpecRetryCount * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjOpSpecRetryCount_assimilateSubParameters (
 LLRP_tSImpinjOpSpecRetryCount * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjOpSpecRetryCount_encode (
  const LLRP_tSImpinjOpSpecRetryCount *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjOpSpecRetryCount_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjOpSpecRetryCount_RetryCount;

extern llrp_u16_t
LLRP_ImpinjOpSpecRetryCount_getRetryCount (
  LLRP_tSImpinjOpSpecRetryCount *pThis);

extern LLRP_tResultCode
LLRP_ImpinjOpSpecRetryCount_setRetryCount (
  LLRP_tSImpinjOpSpecRetryCount *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjOpSpecRetryCount_beginCustom (
  LLRP_tSImpinjOpSpecRetryCount *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjOpSpecRetryCount_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjOpSpecRetryCount_clearCustom (
  LLRP_tSImpinjOpSpecRetryCount *pThis);

extern int
LLRP_ImpinjOpSpecRetryCount_countCustom (
  LLRP_tSImpinjOpSpecRetryCount *pThis);

extern LLRP_tResultCode
LLRP_ImpinjOpSpecRetryCount_addCustom (
  LLRP_tSImpinjOpSpecRetryCount *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjAdvancedGPOConfiguration
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t GPOPortNum;

    LLRP_tEImpinjAdvancedGPOMode eGPOMode;

    llrp_u32_t GPOPulseDurationMSec;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjAdvancedGPOConfiguration;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjAdvancedGPOConfiguration[];

extern LLRP_tSImpinjAdvancedGPOConfiguration *
LLRP_ImpinjAdvancedGPOConfiguration_construct (void);

extern void
LLRP_ImpinjAdvancedGPOConfiguration_destruct (
 LLRP_tSImpinjAdvancedGPOConfiguration * pThis);

extern void
LLRP_ImpinjAdvancedGPOConfiguration_decodeFields (
 LLRP_tSImpinjAdvancedGPOConfiguration * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjAdvancedGPOConfiguration_assimilateSubParameters (
 LLRP_tSImpinjAdvancedGPOConfiguration * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjAdvancedGPOConfiguration_encode (
  const LLRP_tSImpinjAdvancedGPOConfiguration *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjAdvancedGPOConfiguration_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjAdvancedGPOConfiguration_GPOPortNum;

extern llrp_u16_t
LLRP_ImpinjAdvancedGPOConfiguration_getGPOPortNum (
  LLRP_tSImpinjAdvancedGPOConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjAdvancedGPOConfiguration_setGPOPortNum (
  LLRP_tSImpinjAdvancedGPOConfiguration *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjAdvancedGPOConfiguration_GPOMode;

extern LLRP_tEImpinjAdvancedGPOMode
LLRP_ImpinjAdvancedGPOConfiguration_getGPOMode (
  LLRP_tSImpinjAdvancedGPOConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjAdvancedGPOConfiguration_setGPOMode (
  LLRP_tSImpinjAdvancedGPOConfiguration *pThis,
  LLRP_tEImpinjAdvancedGPOMode Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjAdvancedGPOConfiguration_GPOPulseDurationMSec;

extern llrp_u32_t
LLRP_ImpinjAdvancedGPOConfiguration_getGPOPulseDurationMSec (
  LLRP_tSImpinjAdvancedGPOConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjAdvancedGPOConfiguration_setGPOPulseDurationMSec (
  LLRP_tSImpinjAdvancedGPOConfiguration *pThis,
  llrp_u32_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjAdvancedGPOConfiguration_beginCustom (
  LLRP_tSImpinjAdvancedGPOConfiguration *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjAdvancedGPOConfiguration_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjAdvancedGPOConfiguration_clearCustom (
  LLRP_tSImpinjAdvancedGPOConfiguration *pThis);

extern int
LLRP_ImpinjAdvancedGPOConfiguration_countCustom (
  LLRP_tSImpinjAdvancedGPOConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjAdvancedGPOConfiguration_addCustom (
  LLRP_tSImpinjAdvancedGPOConfiguration *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjEnableOptimizedRead
{
    LLRP_tSParameter hdr;
  
    LLRP_tEImpinjOptimizedReadMode eOptimizedReadMode;

  
    LLRP_tSC1G2Read * listC1G2Read;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjEnableOptimizedRead;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjEnableOptimizedRead[];

extern LLRP_tSImpinjEnableOptimizedRead *
LLRP_ImpinjEnableOptimizedRead_construct (void);

extern void
LLRP_ImpinjEnableOptimizedRead_destruct (
 LLRP_tSImpinjEnableOptimizedRead * pThis);

extern void
LLRP_ImpinjEnableOptimizedRead_decodeFields (
 LLRP_tSImpinjEnableOptimizedRead * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjEnableOptimizedRead_assimilateSubParameters (
 LLRP_tSImpinjEnableOptimizedRead * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjEnableOptimizedRead_encode (
  const LLRP_tSImpinjEnableOptimizedRead *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjEnableOptimizedRead_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjEnableOptimizedRead_OptimizedReadMode;

extern LLRP_tEImpinjOptimizedReadMode
LLRP_ImpinjEnableOptimizedRead_getOptimizedReadMode (
  LLRP_tSImpinjEnableOptimizedRead *pThis);

extern LLRP_tResultCode
LLRP_ImpinjEnableOptimizedRead_setOptimizedReadMode (
  LLRP_tSImpinjEnableOptimizedRead *pThis,
  LLRP_tEImpinjOptimizedReadMode Value);

  
extern LLRP_tSC1G2Read *
LLRP_ImpinjEnableOptimizedRead_beginC1G2Read (
  LLRP_tSImpinjEnableOptimizedRead *pThis);

extern LLRP_tSC1G2Read *
LLRP_ImpinjEnableOptimizedRead_nextC1G2Read (
  LLRP_tSC1G2Read *pCurrent);

extern void
LLRP_ImpinjEnableOptimizedRead_clearC1G2Read (
  LLRP_tSImpinjEnableOptimizedRead *pThis);

extern int
LLRP_ImpinjEnableOptimizedRead_countC1G2Read (
  LLRP_tSImpinjEnableOptimizedRead *pThis);

extern LLRP_tResultCode
LLRP_ImpinjEnableOptimizedRead_addC1G2Read (
  LLRP_tSImpinjEnableOptimizedRead *pThis,
  LLRP_tSC1G2Read *pValue);


extern LLRP_tSParameter *
LLRP_ImpinjEnableOptimizedRead_beginCustom (
  LLRP_tSImpinjEnableOptimizedRead *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjEnableOptimizedRead_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjEnableOptimizedRead_clearCustom (
  LLRP_tSImpinjEnableOptimizedRead *pThis);

extern int
LLRP_ImpinjEnableOptimizedRead_countCustom (
  LLRP_tSImpinjEnableOptimizedRead *pThis);

extern LLRP_tResultCode
LLRP_ImpinjEnableOptimizedRead_addCustom (
  LLRP_tSImpinjEnableOptimizedRead *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjAccessSpecOrdering
{
    LLRP_tSParameter hdr;
  
    LLRP_tEImpinjAccessSpecOrderingMode eOrderingMode;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjAccessSpecOrdering;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjAccessSpecOrdering[];

extern LLRP_tSImpinjAccessSpecOrdering *
LLRP_ImpinjAccessSpecOrdering_construct (void);

extern void
LLRP_ImpinjAccessSpecOrdering_destruct (
 LLRP_tSImpinjAccessSpecOrdering * pThis);

extern void
LLRP_ImpinjAccessSpecOrdering_decodeFields (
 LLRP_tSImpinjAccessSpecOrdering * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjAccessSpecOrdering_assimilateSubParameters (
 LLRP_tSImpinjAccessSpecOrdering * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjAccessSpecOrdering_encode (
  const LLRP_tSImpinjAccessSpecOrdering *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjAccessSpecOrdering_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjAccessSpecOrdering_OrderingMode;

extern LLRP_tEImpinjAccessSpecOrderingMode
LLRP_ImpinjAccessSpecOrdering_getOrderingMode (
  LLRP_tSImpinjAccessSpecOrdering *pThis);

extern LLRP_tResultCode
LLRP_ImpinjAccessSpecOrdering_setOrderingMode (
  LLRP_tSImpinjAccessSpecOrdering *pThis,
  LLRP_tEImpinjAccessSpecOrderingMode Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjAccessSpecOrdering_beginCustom (
  LLRP_tSImpinjAccessSpecOrdering *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjAccessSpecOrdering_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjAccessSpecOrdering_clearCustom (
  LLRP_tSImpinjAccessSpecOrdering *pThis);

extern int
LLRP_ImpinjAccessSpecOrdering_countCustom (
  LLRP_tSImpinjAccessSpecOrdering *pThis);

extern LLRP_tResultCode
LLRP_ImpinjAccessSpecOrdering_addCustom (
  LLRP_tSImpinjAccessSpecOrdering *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjEnableRFDopplerFrequency
{
    LLRP_tSParameter hdr;
  
    LLRP_tEImpinjRFDopplerFrequencyMode eRFDopplerFrequencyMode;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjEnableRFDopplerFrequency;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjEnableRFDopplerFrequency[];

extern LLRP_tSImpinjEnableRFDopplerFrequency *
LLRP_ImpinjEnableRFDopplerFrequency_construct (void);

extern void
LLRP_ImpinjEnableRFDopplerFrequency_destruct (
 LLRP_tSImpinjEnableRFDopplerFrequency * pThis);

extern void
LLRP_ImpinjEnableRFDopplerFrequency_decodeFields (
 LLRP_tSImpinjEnableRFDopplerFrequency * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjEnableRFDopplerFrequency_assimilateSubParameters (
 LLRP_tSImpinjEnableRFDopplerFrequency * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjEnableRFDopplerFrequency_encode (
  const LLRP_tSImpinjEnableRFDopplerFrequency *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjEnableRFDopplerFrequency_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjEnableRFDopplerFrequency_RFDopplerFrequencyMode;

extern LLRP_tEImpinjRFDopplerFrequencyMode
LLRP_ImpinjEnableRFDopplerFrequency_getRFDopplerFrequencyMode (
  LLRP_tSImpinjEnableRFDopplerFrequency *pThis);

extern LLRP_tResultCode
LLRP_ImpinjEnableRFDopplerFrequency_setRFDopplerFrequencyMode (
  LLRP_tSImpinjEnableRFDopplerFrequency *pThis,
  LLRP_tEImpinjRFDopplerFrequencyMode Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjEnableRFDopplerFrequency_beginCustom (
  LLRP_tSImpinjEnableRFDopplerFrequency *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjEnableRFDopplerFrequency_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjEnableRFDopplerFrequency_clearCustom (
  LLRP_tSImpinjEnableRFDopplerFrequency *pThis);

extern int
LLRP_ImpinjEnableRFDopplerFrequency_countCustom (
  LLRP_tSImpinjEnableRFDopplerFrequency *pThis);

extern LLRP_tResultCode
LLRP_ImpinjEnableRFDopplerFrequency_addCustom (
  LLRP_tSImpinjEnableRFDopplerFrequency *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjRFDopplerFrequency
{
    LLRP_tSParameter hdr;
  
    llrp_s16_t DopplerFrequency;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjRFDopplerFrequency;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjRFDopplerFrequency[];

extern LLRP_tSImpinjRFDopplerFrequency *
LLRP_ImpinjRFDopplerFrequency_construct (void);

extern void
LLRP_ImpinjRFDopplerFrequency_destruct (
 LLRP_tSImpinjRFDopplerFrequency * pThis);

extern void
LLRP_ImpinjRFDopplerFrequency_decodeFields (
 LLRP_tSImpinjRFDopplerFrequency * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjRFDopplerFrequency_assimilateSubParameters (
 LLRP_tSImpinjRFDopplerFrequency * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjRFDopplerFrequency_encode (
  const LLRP_tSImpinjRFDopplerFrequency *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjRFDopplerFrequency_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjRFDopplerFrequency_DopplerFrequency;

extern llrp_s16_t
LLRP_ImpinjRFDopplerFrequency_getDopplerFrequency (
  LLRP_tSImpinjRFDopplerFrequency *pThis);

extern LLRP_tResultCode
LLRP_ImpinjRFDopplerFrequency_setDopplerFrequency (
  LLRP_tSImpinjRFDopplerFrequency *pThis,
  llrp_s16_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjRFDopplerFrequency_beginCustom (
  LLRP_tSImpinjRFDopplerFrequency *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjRFDopplerFrequency_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjRFDopplerFrequency_clearCustom (
  LLRP_tSImpinjRFDopplerFrequency *pThis);

extern int
LLRP_ImpinjRFDopplerFrequency_countCustom (
  LLRP_tSImpinjRFDopplerFrequency *pThis);

extern LLRP_tResultCode
LLRP_ImpinjRFDopplerFrequency_addCustom (
  LLRP_tSImpinjRFDopplerFrequency *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjInventoryConfiguration
{
    LLRP_tSParameter hdr;
  
    llrp_u1_t EnableAntDwellTimeLimit;

    llrp_u1_t EnableSelectGapClose;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjInventoryConfiguration;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjInventoryConfiguration[];

extern LLRP_tSImpinjInventoryConfiguration *
LLRP_ImpinjInventoryConfiguration_construct (void);

extern void
LLRP_ImpinjInventoryConfiguration_destruct (
 LLRP_tSImpinjInventoryConfiguration * pThis);

extern void
LLRP_ImpinjInventoryConfiguration_decodeFields (
 LLRP_tSImpinjInventoryConfiguration * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjInventoryConfiguration_assimilateSubParameters (
 LLRP_tSImpinjInventoryConfiguration * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjInventoryConfiguration_encode (
  const LLRP_tSImpinjInventoryConfiguration *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjInventoryConfiguration_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjInventoryConfiguration_EnableAntDwellTimeLimit;

extern llrp_u1_t
LLRP_ImpinjInventoryConfiguration_getEnableAntDwellTimeLimit (
  LLRP_tSImpinjInventoryConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjInventoryConfiguration_setEnableAntDwellTimeLimit (
  LLRP_tSImpinjInventoryConfiguration *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjInventoryConfiguration_EnableSelectGapClose;

extern llrp_u1_t
LLRP_ImpinjInventoryConfiguration_getEnableSelectGapClose (
  LLRP_tSImpinjInventoryConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjInventoryConfiguration_setEnableSelectGapClose (
  LLRP_tSImpinjInventoryConfiguration *pThis,
  llrp_u1_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjInventoryConfiguration_beginCustom (
  LLRP_tSImpinjInventoryConfiguration *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjInventoryConfiguration_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjInventoryConfiguration_clearCustom (
  LLRP_tSImpinjInventoryConfiguration *pThis);

extern int
LLRP_ImpinjInventoryConfiguration_countCustom (
  LLRP_tSImpinjInventoryConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjInventoryConfiguration_addCustom (
  LLRP_tSImpinjInventoryConfiguration *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjEnableTxPower
{
    LLRP_tSParameter hdr;
  
    LLRP_tEImpinjTxPowerReportingModeEnum eTxPowerReportingMode;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjEnableTxPower;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjEnableTxPower[];

extern LLRP_tSImpinjEnableTxPower *
LLRP_ImpinjEnableTxPower_construct (void);

extern void
LLRP_ImpinjEnableTxPower_destruct (
 LLRP_tSImpinjEnableTxPower * pThis);

extern void
LLRP_ImpinjEnableTxPower_decodeFields (
 LLRP_tSImpinjEnableTxPower * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjEnableTxPower_assimilateSubParameters (
 LLRP_tSImpinjEnableTxPower * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjEnableTxPower_encode (
  const LLRP_tSImpinjEnableTxPower *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjEnableTxPower_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjEnableTxPower_TxPowerReportingMode;

extern LLRP_tEImpinjTxPowerReportingModeEnum
LLRP_ImpinjEnableTxPower_getTxPowerReportingMode (
  LLRP_tSImpinjEnableTxPower *pThis);

extern LLRP_tResultCode
LLRP_ImpinjEnableTxPower_setTxPowerReportingMode (
  LLRP_tSImpinjEnableTxPower *pThis,
  LLRP_tEImpinjTxPowerReportingModeEnum Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjEnableTxPower_beginCustom (
  LLRP_tSImpinjEnableTxPower *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjEnableTxPower_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjEnableTxPower_clearCustom (
  LLRP_tSImpinjEnableTxPower *pThis);

extern int
LLRP_ImpinjEnableTxPower_countCustom (
  LLRP_tSImpinjEnableTxPower *pThis);

extern LLRP_tResultCode
LLRP_ImpinjEnableTxPower_addCustom (
  LLRP_tSImpinjEnableTxPower *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjTxPower
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t TxPower;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjTxPower;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjTxPower[];

extern LLRP_tSImpinjTxPower *
LLRP_ImpinjTxPower_construct (void);

extern void
LLRP_ImpinjTxPower_destruct (
 LLRP_tSImpinjTxPower * pThis);

extern void
LLRP_ImpinjTxPower_decodeFields (
 LLRP_tSImpinjTxPower * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjTxPower_assimilateSubParameters (
 LLRP_tSImpinjTxPower * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjTxPower_encode (
  const LLRP_tSImpinjTxPower *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjTxPower_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjTxPower_TxPower;

extern llrp_u16_t
LLRP_ImpinjTxPower_getTxPower (
  LLRP_tSImpinjTxPower *pThis);

extern LLRP_tResultCode
LLRP_ImpinjTxPower_setTxPower (
  LLRP_tSImpinjTxPower *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjTxPower_beginCustom (
  LLRP_tSImpinjTxPower *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjTxPower_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjTxPower_clearCustom (
  LLRP_tSImpinjTxPower *pThis);

extern int
LLRP_ImpinjTxPower_countCustom (
  LLRP_tSImpinjTxPower *pThis);

extern LLRP_tResultCode
LLRP_ImpinjTxPower_addCustom (
  LLRP_tSImpinjTxPower *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjEnableXPCWords
{
    LLRP_tSParameter hdr;
  
    LLRP_tEImpinjXPCWordsMode eXPCWordsMode;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjEnableXPCWords;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjEnableXPCWords[];

extern LLRP_tSImpinjEnableXPCWords *
LLRP_ImpinjEnableXPCWords_construct (void);

extern void
LLRP_ImpinjEnableXPCWords_destruct (
 LLRP_tSImpinjEnableXPCWords * pThis);

extern void
LLRP_ImpinjEnableXPCWords_decodeFields (
 LLRP_tSImpinjEnableXPCWords * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjEnableXPCWords_assimilateSubParameters (
 LLRP_tSImpinjEnableXPCWords * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjEnableXPCWords_encode (
  const LLRP_tSImpinjEnableXPCWords *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjEnableXPCWords_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjEnableXPCWords_XPCWordsMode;

extern LLRP_tEImpinjXPCWordsMode
LLRP_ImpinjEnableXPCWords_getXPCWordsMode (
  LLRP_tSImpinjEnableXPCWords *pThis);

extern LLRP_tResultCode
LLRP_ImpinjEnableXPCWords_setXPCWordsMode (
  LLRP_tSImpinjEnableXPCWords *pThis,
  LLRP_tEImpinjXPCWordsMode Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjEnableXPCWords_beginCustom (
  LLRP_tSImpinjEnableXPCWords *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjEnableXPCWords_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjEnableXPCWords_clearCustom (
  LLRP_tSImpinjEnableXPCWords *pThis);

extern int
LLRP_ImpinjEnableXPCWords_countCustom (
  LLRP_tSImpinjEnableXPCWords *pThis);

extern LLRP_tResultCode
LLRP_ImpinjEnableXPCWords_addCustom (
  LLRP_tSImpinjEnableXPCWords *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjXPCWords
{
    LLRP_tSParameter hdr;
  
    llrp_u16v_t XPCWords;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjXPCWords;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjXPCWords[];

extern LLRP_tSImpinjXPCWords *
LLRP_ImpinjXPCWords_construct (void);

extern void
LLRP_ImpinjXPCWords_destruct (
 LLRP_tSImpinjXPCWords * pThis);

extern void
LLRP_ImpinjXPCWords_decodeFields (
 LLRP_tSImpinjXPCWords * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjXPCWords_assimilateSubParameters (
 LLRP_tSImpinjXPCWords * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjXPCWords_encode (
  const LLRP_tSImpinjXPCWords *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjXPCWords_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjXPCWords_XPCWords;

extern llrp_u16v_t
LLRP_ImpinjXPCWords_getXPCWords (
  LLRP_tSImpinjXPCWords *pThis);

extern LLRP_tResultCode
LLRP_ImpinjXPCWords_setXPCWords (
  LLRP_tSImpinjXPCWords *pThis,
  llrp_u16v_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjXPCWords_beginCustom (
  LLRP_tSImpinjXPCWords *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjXPCWords_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjXPCWords_clearCustom (
  LLRP_tSImpinjXPCWords *pThis);

extern int
LLRP_ImpinjXPCWords_countCustom (
  LLRP_tSImpinjXPCWords *pThis);

extern LLRP_tResultCode
LLRP_ImpinjXPCWords_addCustom (
  LLRP_tSImpinjXPCWords *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjArrayVersion
{
    LLRP_tSParameter hdr;
  
    llrp_utf8v_t SerialNumber;

    llrp_utf8v_t FirmwareVersion;

    llrp_utf8v_t PCBAVersion;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjArrayVersion;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjArrayVersion[];

extern LLRP_tSImpinjArrayVersion *
LLRP_ImpinjArrayVersion_construct (void);

extern void
LLRP_ImpinjArrayVersion_destruct (
 LLRP_tSImpinjArrayVersion * pThis);

extern void
LLRP_ImpinjArrayVersion_decodeFields (
 LLRP_tSImpinjArrayVersion * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjArrayVersion_assimilateSubParameters (
 LLRP_tSImpinjArrayVersion * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjArrayVersion_encode (
  const LLRP_tSImpinjArrayVersion *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjArrayVersion_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjArrayVersion_SerialNumber;

extern llrp_utf8v_t
LLRP_ImpinjArrayVersion_getSerialNumber (
  LLRP_tSImpinjArrayVersion *pThis);

extern LLRP_tResultCode
LLRP_ImpinjArrayVersion_setSerialNumber (
  LLRP_tSImpinjArrayVersion *pThis,
  llrp_utf8v_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjArrayVersion_FirmwareVersion;

extern llrp_utf8v_t
LLRP_ImpinjArrayVersion_getFirmwareVersion (
  LLRP_tSImpinjArrayVersion *pThis);

extern LLRP_tResultCode
LLRP_ImpinjArrayVersion_setFirmwareVersion (
  LLRP_tSImpinjArrayVersion *pThis,
  llrp_utf8v_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjArrayVersion_PCBAVersion;

extern llrp_utf8v_t
LLRP_ImpinjArrayVersion_getPCBAVersion (
  LLRP_tSImpinjArrayVersion *pThis);

extern LLRP_tResultCode
LLRP_ImpinjArrayVersion_setPCBAVersion (
  LLRP_tSImpinjArrayVersion *pThis,
  llrp_utf8v_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjArrayVersion_beginCustom (
  LLRP_tSImpinjArrayVersion *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjArrayVersion_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjArrayVersion_clearCustom (
  LLRP_tSImpinjArrayVersion *pThis);

extern int
LLRP_ImpinjArrayVersion_countCustom (
  LLRP_tSImpinjArrayVersion *pThis);

extern LLRP_tResultCode
LLRP_ImpinjArrayVersion_addCustom (
  LLRP_tSImpinjArrayVersion *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjxArrayCapabilities
{
    LLRP_tSParameter hdr;
  
    llrp_u32_t MaxNumSectors;

    llrp_u1_t SupportsLISpecs;

    llrp_u1_t SupportsTISpecs;

    llrp_u1_t SupportsTSISpecs;

    llrp_u1_t SupportsDISpecs;

    llrp_u1_t SupportsESSpecs;

  
    LLRP_tSImpinjxArrayDirectionCapabilities * pImpinjxArrayDirectionCapabilities;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjxArrayCapabilities;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjxArrayCapabilities[];

extern LLRP_tSImpinjxArrayCapabilities *
LLRP_ImpinjxArrayCapabilities_construct (void);

extern void
LLRP_ImpinjxArrayCapabilities_destruct (
 LLRP_tSImpinjxArrayCapabilities * pThis);

extern void
LLRP_ImpinjxArrayCapabilities_decodeFields (
 LLRP_tSImpinjxArrayCapabilities * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjxArrayCapabilities_assimilateSubParameters (
 LLRP_tSImpinjxArrayCapabilities * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjxArrayCapabilities_encode (
  const LLRP_tSImpinjxArrayCapabilities *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjxArrayCapabilities_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjxArrayCapabilities_MaxNumSectors;

extern llrp_u32_t
LLRP_ImpinjxArrayCapabilities_getMaxNumSectors (
  LLRP_tSImpinjxArrayCapabilities *pThis);

extern LLRP_tResultCode
LLRP_ImpinjxArrayCapabilities_setMaxNumSectors (
  LLRP_tSImpinjxArrayCapabilities *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjxArrayCapabilities_SupportsLISpecs;

extern llrp_u1_t
LLRP_ImpinjxArrayCapabilities_getSupportsLISpecs (
  LLRP_tSImpinjxArrayCapabilities *pThis);

extern LLRP_tResultCode
LLRP_ImpinjxArrayCapabilities_setSupportsLISpecs (
  LLRP_tSImpinjxArrayCapabilities *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjxArrayCapabilities_SupportsTISpecs;

extern llrp_u1_t
LLRP_ImpinjxArrayCapabilities_getSupportsTISpecs (
  LLRP_tSImpinjxArrayCapabilities *pThis);

extern LLRP_tResultCode
LLRP_ImpinjxArrayCapabilities_setSupportsTISpecs (
  LLRP_tSImpinjxArrayCapabilities *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjxArrayCapabilities_SupportsTSISpecs;

extern llrp_u1_t
LLRP_ImpinjxArrayCapabilities_getSupportsTSISpecs (
  LLRP_tSImpinjxArrayCapabilities *pThis);

extern LLRP_tResultCode
LLRP_ImpinjxArrayCapabilities_setSupportsTSISpecs (
  LLRP_tSImpinjxArrayCapabilities *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjxArrayCapabilities_SupportsDISpecs;

extern llrp_u1_t
LLRP_ImpinjxArrayCapabilities_getSupportsDISpecs (
  LLRP_tSImpinjxArrayCapabilities *pThis);

extern LLRP_tResultCode
LLRP_ImpinjxArrayCapabilities_setSupportsDISpecs (
  LLRP_tSImpinjxArrayCapabilities *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjxArrayCapabilities_SupportsESSpecs;

extern llrp_u1_t
LLRP_ImpinjxArrayCapabilities_getSupportsESSpecs (
  LLRP_tSImpinjxArrayCapabilities *pThis);

extern LLRP_tResultCode
LLRP_ImpinjxArrayCapabilities_setSupportsESSpecs (
  LLRP_tSImpinjxArrayCapabilities *pThis,
  llrp_u1_t Value);

  
extern LLRP_tSImpinjxArrayDirectionCapabilities *
LLRP_ImpinjxArrayCapabilities_getImpinjxArrayDirectionCapabilities (
  LLRP_tSImpinjxArrayCapabilities *pThis);

extern LLRP_tResultCode
LLRP_ImpinjxArrayCapabilities_setImpinjxArrayDirectionCapabilities (
  LLRP_tSImpinjxArrayCapabilities *pThis,
  LLRP_tSImpinjxArrayDirectionCapabilities *pValue);

extern LLRP_tSParameter *
LLRP_ImpinjxArrayCapabilities_beginCustom (
  LLRP_tSImpinjxArrayCapabilities *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjxArrayCapabilities_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjxArrayCapabilities_clearCustom (
  LLRP_tSImpinjxArrayCapabilities *pThis);

extern int
LLRP_ImpinjxArrayCapabilities_countCustom (
  LLRP_tSImpinjxArrayCapabilities *pThis);

extern LLRP_tResultCode
LLRP_ImpinjxArrayCapabilities_addCustom (
  LLRP_tSImpinjxArrayCapabilities *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjTiltConfiguration
{
    LLRP_tSParameter hdr;
  
    llrp_s32_t XAxis;

    llrp_s32_t YAxis;

    llrp_s32_t ZAxis;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjTiltConfiguration;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjTiltConfiguration[];

extern LLRP_tSImpinjTiltConfiguration *
LLRP_ImpinjTiltConfiguration_construct (void);

extern void
LLRP_ImpinjTiltConfiguration_destruct (
 LLRP_tSImpinjTiltConfiguration * pThis);

extern void
LLRP_ImpinjTiltConfiguration_decodeFields (
 LLRP_tSImpinjTiltConfiguration * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjTiltConfiguration_assimilateSubParameters (
 LLRP_tSImpinjTiltConfiguration * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjTiltConfiguration_encode (
  const LLRP_tSImpinjTiltConfiguration *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjTiltConfiguration_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjTiltConfiguration_XAxis;

extern llrp_s32_t
LLRP_ImpinjTiltConfiguration_getXAxis (
  LLRP_tSImpinjTiltConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjTiltConfiguration_setXAxis (
  LLRP_tSImpinjTiltConfiguration *pThis,
  llrp_s32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjTiltConfiguration_YAxis;

extern llrp_s32_t
LLRP_ImpinjTiltConfiguration_getYAxis (
  LLRP_tSImpinjTiltConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjTiltConfiguration_setYAxis (
  LLRP_tSImpinjTiltConfiguration *pThis,
  llrp_s32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjTiltConfiguration_ZAxis;

extern llrp_s32_t
LLRP_ImpinjTiltConfiguration_getZAxis (
  LLRP_tSImpinjTiltConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjTiltConfiguration_setZAxis (
  LLRP_tSImpinjTiltConfiguration *pThis,
  llrp_s32_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjTiltConfiguration_beginCustom (
  LLRP_tSImpinjTiltConfiguration *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjTiltConfiguration_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjTiltConfiguration_clearCustom (
  LLRP_tSImpinjTiltConfiguration *pThis);

extern int
LLRP_ImpinjTiltConfiguration_countCustom (
  LLRP_tSImpinjTiltConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjTiltConfiguration_addCustom (
  LLRP_tSImpinjTiltConfiguration *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjBeaconConfiguration
{
    LLRP_tSParameter hdr;
  
    llrp_u1_t BeaconState;

    llrp_u64_t BeaconDurationSeconds;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjBeaconConfiguration;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjBeaconConfiguration[];

extern LLRP_tSImpinjBeaconConfiguration *
LLRP_ImpinjBeaconConfiguration_construct (void);

extern void
LLRP_ImpinjBeaconConfiguration_destruct (
 LLRP_tSImpinjBeaconConfiguration * pThis);

extern void
LLRP_ImpinjBeaconConfiguration_decodeFields (
 LLRP_tSImpinjBeaconConfiguration * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjBeaconConfiguration_assimilateSubParameters (
 LLRP_tSImpinjBeaconConfiguration * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjBeaconConfiguration_encode (
  const LLRP_tSImpinjBeaconConfiguration *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjBeaconConfiguration_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjBeaconConfiguration_BeaconState;

extern llrp_u1_t
LLRP_ImpinjBeaconConfiguration_getBeaconState (
  LLRP_tSImpinjBeaconConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjBeaconConfiguration_setBeaconState (
  LLRP_tSImpinjBeaconConfiguration *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjBeaconConfiguration_BeaconDurationSeconds;

extern llrp_u64_t
LLRP_ImpinjBeaconConfiguration_getBeaconDurationSeconds (
  LLRP_tSImpinjBeaconConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjBeaconConfiguration_setBeaconDurationSeconds (
  LLRP_tSImpinjBeaconConfiguration *pThis,
  llrp_u64_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjBeaconConfiguration_beginCustom (
  LLRP_tSImpinjBeaconConfiguration *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjBeaconConfiguration_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjBeaconConfiguration_clearCustom (
  LLRP_tSImpinjBeaconConfiguration *pThis);

extern int
LLRP_ImpinjBeaconConfiguration_countCustom (
  LLRP_tSImpinjBeaconConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjBeaconConfiguration_addCustom (
  LLRP_tSImpinjBeaconConfiguration *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjAntennaConfiguration
{
    LLRP_tSParameter hdr;
  
  
    LLRP_tSImpinjAntennaEventHysteresis * pImpinjAntennaEventHysteresis;

    LLRP_tSImpinjAntennaEventConfiguration * pImpinjAntennaEventConfiguration;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjAntennaConfiguration;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjAntennaConfiguration[];

extern LLRP_tSImpinjAntennaConfiguration *
LLRP_ImpinjAntennaConfiguration_construct (void);

extern void
LLRP_ImpinjAntennaConfiguration_destruct (
 LLRP_tSImpinjAntennaConfiguration * pThis);

extern void
LLRP_ImpinjAntennaConfiguration_decodeFields (
 LLRP_tSImpinjAntennaConfiguration * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjAntennaConfiguration_assimilateSubParameters (
 LLRP_tSImpinjAntennaConfiguration * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjAntennaConfiguration_encode (
  const LLRP_tSImpinjAntennaConfiguration *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjAntennaConfiguration_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
  
extern LLRP_tSImpinjAntennaEventHysteresis *
LLRP_ImpinjAntennaConfiguration_getImpinjAntennaEventHysteresis (
  LLRP_tSImpinjAntennaConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjAntennaConfiguration_setImpinjAntennaEventHysteresis (
  LLRP_tSImpinjAntennaConfiguration *pThis,
  LLRP_tSImpinjAntennaEventHysteresis *pValue);

extern LLRP_tSImpinjAntennaEventConfiguration *
LLRP_ImpinjAntennaConfiguration_getImpinjAntennaEventConfiguration (
  LLRP_tSImpinjAntennaConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjAntennaConfiguration_setImpinjAntennaEventConfiguration (
  LLRP_tSImpinjAntennaConfiguration *pThis,
  LLRP_tSImpinjAntennaEventConfiguration *pValue);

extern LLRP_tSParameter *
LLRP_ImpinjAntennaConfiguration_beginCustom (
  LLRP_tSImpinjAntennaConfiguration *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjAntennaConfiguration_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjAntennaConfiguration_clearCustom (
  LLRP_tSImpinjAntennaConfiguration *pThis);

extern int
LLRP_ImpinjAntennaConfiguration_countCustom (
  LLRP_tSImpinjAntennaConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjAntennaConfiguration_addCustom (
  LLRP_tSImpinjAntennaConfiguration *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjAntennaEventHysteresis
{
    LLRP_tSParameter hdr;
  
    llrp_u64_t AntennaEventConnected;

    llrp_u64_t AntennaEventDisconnected;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjAntennaEventHysteresis;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjAntennaEventHysteresis[];

extern LLRP_tSImpinjAntennaEventHysteresis *
LLRP_ImpinjAntennaEventHysteresis_construct (void);

extern void
LLRP_ImpinjAntennaEventHysteresis_destruct (
 LLRP_tSImpinjAntennaEventHysteresis * pThis);

extern void
LLRP_ImpinjAntennaEventHysteresis_decodeFields (
 LLRP_tSImpinjAntennaEventHysteresis * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjAntennaEventHysteresis_assimilateSubParameters (
 LLRP_tSImpinjAntennaEventHysteresis * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjAntennaEventHysteresis_encode (
  const LLRP_tSImpinjAntennaEventHysteresis *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjAntennaEventHysteresis_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjAntennaEventHysteresis_AntennaEventConnected;

extern llrp_u64_t
LLRP_ImpinjAntennaEventHysteresis_getAntennaEventConnected (
  LLRP_tSImpinjAntennaEventHysteresis *pThis);

extern LLRP_tResultCode
LLRP_ImpinjAntennaEventHysteresis_setAntennaEventConnected (
  LLRP_tSImpinjAntennaEventHysteresis *pThis,
  llrp_u64_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjAntennaEventHysteresis_AntennaEventDisconnected;

extern llrp_u64_t
LLRP_ImpinjAntennaEventHysteresis_getAntennaEventDisconnected (
  LLRP_tSImpinjAntennaEventHysteresis *pThis);

extern LLRP_tResultCode
LLRP_ImpinjAntennaEventHysteresis_setAntennaEventDisconnected (
  LLRP_tSImpinjAntennaEventHysteresis *pThis,
  llrp_u64_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjAntennaEventHysteresis_beginCustom (
  LLRP_tSImpinjAntennaEventHysteresis *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjAntennaEventHysteresis_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjAntennaEventHysteresis_clearCustom (
  LLRP_tSImpinjAntennaEventHysteresis *pThis);

extern int
LLRP_ImpinjAntennaEventHysteresis_countCustom (
  LLRP_tSImpinjAntennaEventHysteresis *pThis);

extern LLRP_tResultCode
LLRP_ImpinjAntennaEventHysteresis_addCustom (
  LLRP_tSImpinjAntennaEventHysteresis *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjAntennaEventConfiguration
{
    LLRP_tSParameter hdr;
  
    llrp_u1_t EnableAntennaAttemptNotification;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjAntennaEventConfiguration;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjAntennaEventConfiguration[];

extern LLRP_tSImpinjAntennaEventConfiguration *
LLRP_ImpinjAntennaEventConfiguration_construct (void);

extern void
LLRP_ImpinjAntennaEventConfiguration_destruct (
 LLRP_tSImpinjAntennaEventConfiguration * pThis);

extern void
LLRP_ImpinjAntennaEventConfiguration_decodeFields (
 LLRP_tSImpinjAntennaEventConfiguration * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjAntennaEventConfiguration_assimilateSubParameters (
 LLRP_tSImpinjAntennaEventConfiguration * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjAntennaEventConfiguration_encode (
  const LLRP_tSImpinjAntennaEventConfiguration *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjAntennaEventConfiguration_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjAntennaEventConfiguration_EnableAntennaAttemptNotification;

extern llrp_u1_t
LLRP_ImpinjAntennaEventConfiguration_getEnableAntennaAttemptNotification (
  LLRP_tSImpinjAntennaEventConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjAntennaEventConfiguration_setEnableAntennaAttemptNotification (
  LLRP_tSImpinjAntennaEventConfiguration *pThis,
  llrp_u1_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjAntennaEventConfiguration_beginCustom (
  LLRP_tSImpinjAntennaEventConfiguration *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjAntennaEventConfiguration_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjAntennaEventConfiguration_clearCustom (
  LLRP_tSImpinjAntennaEventConfiguration *pThis);

extern int
LLRP_ImpinjAntennaEventConfiguration_countCustom (
  LLRP_tSImpinjAntennaEventConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjAntennaEventConfiguration_addCustom (
  LLRP_tSImpinjAntennaEventConfiguration *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjAntennaAttemptEvent
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t AntennaID;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjAntennaAttemptEvent;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjAntennaAttemptEvent[];

extern LLRP_tSImpinjAntennaAttemptEvent *
LLRP_ImpinjAntennaAttemptEvent_construct (void);

extern void
LLRP_ImpinjAntennaAttemptEvent_destruct (
 LLRP_tSImpinjAntennaAttemptEvent * pThis);

extern void
LLRP_ImpinjAntennaAttemptEvent_decodeFields (
 LLRP_tSImpinjAntennaAttemptEvent * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjAntennaAttemptEvent_assimilateSubParameters (
 LLRP_tSImpinjAntennaAttemptEvent * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjAntennaAttemptEvent_encode (
  const LLRP_tSImpinjAntennaAttemptEvent *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjAntennaAttemptEvent_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjAntennaAttemptEvent_AntennaID;

extern llrp_u16_t
LLRP_ImpinjAntennaAttemptEvent_getAntennaID (
  LLRP_tSImpinjAntennaAttemptEvent *pThis);

extern LLRP_tResultCode
LLRP_ImpinjAntennaAttemptEvent_setAntennaID (
  LLRP_tSImpinjAntennaAttemptEvent *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjAntennaAttemptEvent_beginCustom (
  LLRP_tSImpinjAntennaAttemptEvent *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjAntennaAttemptEvent_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjAntennaAttemptEvent_clearCustom (
  LLRP_tSImpinjAntennaAttemptEvent *pThis);

extern int
LLRP_ImpinjAntennaAttemptEvent_countCustom (
  LLRP_tSImpinjAntennaAttemptEvent *pThis);

extern LLRP_tResultCode
LLRP_ImpinjAntennaAttemptEvent_addCustom (
  LLRP_tSImpinjAntennaAttemptEvent *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjHubConfiguration
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t HubID;

    LLRP_tEImpinjHubConnectedType eConnected;

    LLRP_tEImpinjHubFaultType eFault;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjHubConfiguration;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjHubConfiguration[];

extern LLRP_tSImpinjHubConfiguration *
LLRP_ImpinjHubConfiguration_construct (void);

extern void
LLRP_ImpinjHubConfiguration_destruct (
 LLRP_tSImpinjHubConfiguration * pThis);

extern void
LLRP_ImpinjHubConfiguration_decodeFields (
 LLRP_tSImpinjHubConfiguration * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjHubConfiguration_assimilateSubParameters (
 LLRP_tSImpinjHubConfiguration * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjHubConfiguration_encode (
  const LLRP_tSImpinjHubConfiguration *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjHubConfiguration_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjHubConfiguration_HubID;

extern llrp_u16_t
LLRP_ImpinjHubConfiguration_getHubID (
  LLRP_tSImpinjHubConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjHubConfiguration_setHubID (
  LLRP_tSImpinjHubConfiguration *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjHubConfiguration_Connected;

extern LLRP_tEImpinjHubConnectedType
LLRP_ImpinjHubConfiguration_getConnected (
  LLRP_tSImpinjHubConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjHubConfiguration_setConnected (
  LLRP_tSImpinjHubConfiguration *pThis,
  LLRP_tEImpinjHubConnectedType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjHubConfiguration_Fault;

extern LLRP_tEImpinjHubFaultType
LLRP_ImpinjHubConfiguration_getFault (
  LLRP_tSImpinjHubConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjHubConfiguration_setFault (
  LLRP_tSImpinjHubConfiguration *pThis,
  LLRP_tEImpinjHubFaultType Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjHubConfiguration_beginCustom (
  LLRP_tSImpinjHubConfiguration *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjHubConfiguration_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjHubConfiguration_clearCustom (
  LLRP_tSImpinjHubConfiguration *pThis);

extern int
LLRP_ImpinjHubConfiguration_countCustom (
  LLRP_tSImpinjHubConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjHubConfiguration_addCustom (
  LLRP_tSImpinjHubConfiguration *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjDiagnosticReport
{
    LLRP_tSParameter hdr;
  
    llrp_u32v_t Metric;

  
};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjDiagnosticReport;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjDiagnosticReport[];

extern LLRP_tSImpinjDiagnosticReport *
LLRP_ImpinjDiagnosticReport_construct (void);

extern void
LLRP_ImpinjDiagnosticReport_destruct (
 LLRP_tSImpinjDiagnosticReport * pThis);

extern void
LLRP_ImpinjDiagnosticReport_decodeFields (
 LLRP_tSImpinjDiagnosticReport * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjDiagnosticReport_assimilateSubParameters (
 LLRP_tSImpinjDiagnosticReport * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjDiagnosticReport_encode (
  const LLRP_tSImpinjDiagnosticReport *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjDiagnosticReport_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjDiagnosticReport_Metric;

extern llrp_u32v_t
LLRP_ImpinjDiagnosticReport_getMetric (
  LLRP_tSImpinjDiagnosticReport *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDiagnosticReport_setMetric (
  LLRP_tSImpinjDiagnosticReport *pThis,
  llrp_u32v_t Value);

  


  
struct LLRP_SImpinjPlacementConfiguration
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t HeightCm;

    llrp_s32_t FacilityXLocationCm;

    llrp_s32_t FacilityYLocationCm;

    llrp_s16_t OrientationDegrees;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjPlacementConfiguration;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjPlacementConfiguration[];

extern LLRP_tSImpinjPlacementConfiguration *
LLRP_ImpinjPlacementConfiguration_construct (void);

extern void
LLRP_ImpinjPlacementConfiguration_destruct (
 LLRP_tSImpinjPlacementConfiguration * pThis);

extern void
LLRP_ImpinjPlacementConfiguration_decodeFields (
 LLRP_tSImpinjPlacementConfiguration * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjPlacementConfiguration_assimilateSubParameters (
 LLRP_tSImpinjPlacementConfiguration * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjPlacementConfiguration_encode (
  const LLRP_tSImpinjPlacementConfiguration *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjPlacementConfiguration_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjPlacementConfiguration_HeightCm;

extern llrp_u16_t
LLRP_ImpinjPlacementConfiguration_getHeightCm (
  LLRP_tSImpinjPlacementConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjPlacementConfiguration_setHeightCm (
  LLRP_tSImpinjPlacementConfiguration *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjPlacementConfiguration_FacilityXLocationCm;

extern llrp_s32_t
LLRP_ImpinjPlacementConfiguration_getFacilityXLocationCm (
  LLRP_tSImpinjPlacementConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjPlacementConfiguration_setFacilityXLocationCm (
  LLRP_tSImpinjPlacementConfiguration *pThis,
  llrp_s32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjPlacementConfiguration_FacilityYLocationCm;

extern llrp_s32_t
LLRP_ImpinjPlacementConfiguration_getFacilityYLocationCm (
  LLRP_tSImpinjPlacementConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjPlacementConfiguration_setFacilityYLocationCm (
  LLRP_tSImpinjPlacementConfiguration *pThis,
  llrp_s32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjPlacementConfiguration_OrientationDegrees;

extern llrp_s16_t
LLRP_ImpinjPlacementConfiguration_getOrientationDegrees (
  LLRP_tSImpinjPlacementConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjPlacementConfiguration_setOrientationDegrees (
  LLRP_tSImpinjPlacementConfiguration *pThis,
  llrp_s16_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjPlacementConfiguration_beginCustom (
  LLRP_tSImpinjPlacementConfiguration *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjPlacementConfiguration_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjPlacementConfiguration_clearCustom (
  LLRP_tSImpinjPlacementConfiguration *pThis);

extern int
LLRP_ImpinjPlacementConfiguration_countCustom (
  LLRP_tSImpinjPlacementConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjPlacementConfiguration_addCustom (
  LLRP_tSImpinjPlacementConfiguration *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjLISpec
{
    LLRP_tSParameter hdr;
  
  
    LLRP_tSImpinjLocationConfig * pImpinjLocationConfig;

    LLRP_tSImpinjC1G2LocationConfig * pImpinjC1G2LocationConfig;

    LLRP_tSImpinjLocationReporting * pImpinjLocationReporting;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjLISpec;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjLISpec[];

extern LLRP_tSImpinjLISpec *
LLRP_ImpinjLISpec_construct (void);

extern void
LLRP_ImpinjLISpec_destruct (
 LLRP_tSImpinjLISpec * pThis);

extern void
LLRP_ImpinjLISpec_decodeFields (
 LLRP_tSImpinjLISpec * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjLISpec_assimilateSubParameters (
 LLRP_tSImpinjLISpec * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjLISpec_encode (
  const LLRP_tSImpinjLISpec *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjLISpec_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
  
extern LLRP_tSImpinjLocationConfig *
LLRP_ImpinjLISpec_getImpinjLocationConfig (
  LLRP_tSImpinjLISpec *pThis);

extern LLRP_tResultCode
LLRP_ImpinjLISpec_setImpinjLocationConfig (
  LLRP_tSImpinjLISpec *pThis,
  LLRP_tSImpinjLocationConfig *pValue);

extern LLRP_tSImpinjC1G2LocationConfig *
LLRP_ImpinjLISpec_getImpinjC1G2LocationConfig (
  LLRP_tSImpinjLISpec *pThis);

extern LLRP_tResultCode
LLRP_ImpinjLISpec_setImpinjC1G2LocationConfig (
  LLRP_tSImpinjLISpec *pThis,
  LLRP_tSImpinjC1G2LocationConfig *pValue);

extern LLRP_tSImpinjLocationReporting *
LLRP_ImpinjLISpec_getImpinjLocationReporting (
  LLRP_tSImpinjLISpec *pThis);

extern LLRP_tResultCode
LLRP_ImpinjLISpec_setImpinjLocationReporting (
  LLRP_tSImpinjLISpec *pThis,
  LLRP_tSImpinjLocationReporting *pValue);

extern LLRP_tSParameter *
LLRP_ImpinjLISpec_beginCustom (
  LLRP_tSImpinjLISpec *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjLISpec_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjLISpec_clearCustom (
  LLRP_tSImpinjLISpec *pThis);

extern int
LLRP_ImpinjLISpec_countCustom (
  LLRP_tSImpinjLISpec *pThis);

extern LLRP_tResultCode
LLRP_ImpinjLISpec_addCustom (
  LLRP_tSImpinjLISpec *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjLocationConfig
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t ComputeWindowSeconds;

    llrp_u16_t TagAgeIntervalSeconds;

    llrp_u16_t UpdateIntervalSeconds;

  
    LLRP_tSImpinjDisabledAntennas * pImpinjDisabledAntennas;

    LLRP_tSImpinjLocationAlgorithmControl * pImpinjLocationAlgorithmControl;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjLocationConfig;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjLocationConfig[];

extern LLRP_tSImpinjLocationConfig *
LLRP_ImpinjLocationConfig_construct (void);

extern void
LLRP_ImpinjLocationConfig_destruct (
 LLRP_tSImpinjLocationConfig * pThis);

extern void
LLRP_ImpinjLocationConfig_decodeFields (
 LLRP_tSImpinjLocationConfig * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjLocationConfig_assimilateSubParameters (
 LLRP_tSImpinjLocationConfig * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjLocationConfig_encode (
  const LLRP_tSImpinjLocationConfig *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjLocationConfig_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjLocationConfig_ComputeWindowSeconds;

extern llrp_u16_t
LLRP_ImpinjLocationConfig_getComputeWindowSeconds (
  LLRP_tSImpinjLocationConfig *pThis);

extern LLRP_tResultCode
LLRP_ImpinjLocationConfig_setComputeWindowSeconds (
  LLRP_tSImpinjLocationConfig *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjLocationConfig_TagAgeIntervalSeconds;

extern llrp_u16_t
LLRP_ImpinjLocationConfig_getTagAgeIntervalSeconds (
  LLRP_tSImpinjLocationConfig *pThis);

extern LLRP_tResultCode
LLRP_ImpinjLocationConfig_setTagAgeIntervalSeconds (
  LLRP_tSImpinjLocationConfig *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjLocationConfig_UpdateIntervalSeconds;

extern llrp_u16_t
LLRP_ImpinjLocationConfig_getUpdateIntervalSeconds (
  LLRP_tSImpinjLocationConfig *pThis);

extern LLRP_tResultCode
LLRP_ImpinjLocationConfig_setUpdateIntervalSeconds (
  LLRP_tSImpinjLocationConfig *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSImpinjDisabledAntennas *
LLRP_ImpinjLocationConfig_getImpinjDisabledAntennas (
  LLRP_tSImpinjLocationConfig *pThis);

extern LLRP_tResultCode
LLRP_ImpinjLocationConfig_setImpinjDisabledAntennas (
  LLRP_tSImpinjLocationConfig *pThis,
  LLRP_tSImpinjDisabledAntennas *pValue);

extern LLRP_tSImpinjLocationAlgorithmControl *
LLRP_ImpinjLocationConfig_getImpinjLocationAlgorithmControl (
  LLRP_tSImpinjLocationConfig *pThis);

extern LLRP_tResultCode
LLRP_ImpinjLocationConfig_setImpinjLocationAlgorithmControl (
  LLRP_tSImpinjLocationConfig *pThis,
  LLRP_tSImpinjLocationAlgorithmControl *pValue);

extern LLRP_tSParameter *
LLRP_ImpinjLocationConfig_beginCustom (
  LLRP_tSImpinjLocationConfig *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjLocationConfig_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjLocationConfig_clearCustom (
  LLRP_tSImpinjLocationConfig *pThis);

extern int
LLRP_ImpinjLocationConfig_countCustom (
  LLRP_tSImpinjLocationConfig *pThis);

extern LLRP_tResultCode
LLRP_ImpinjLocationConfig_addCustom (
  LLRP_tSImpinjLocationConfig *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjC1G2LocationConfig
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t ModeIndex;

    llrp_u2_t Session;

  
    LLRP_tSC1G2Filter * listC1G2Filter;

    LLRP_tSImpinjTransmitPower * pImpinjTransmitPower;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjC1G2LocationConfig;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjC1G2LocationConfig[];

extern LLRP_tSImpinjC1G2LocationConfig *
LLRP_ImpinjC1G2LocationConfig_construct (void);

extern void
LLRP_ImpinjC1G2LocationConfig_destruct (
 LLRP_tSImpinjC1G2LocationConfig * pThis);

extern void
LLRP_ImpinjC1G2LocationConfig_decodeFields (
 LLRP_tSImpinjC1G2LocationConfig * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjC1G2LocationConfig_assimilateSubParameters (
 LLRP_tSImpinjC1G2LocationConfig * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjC1G2LocationConfig_encode (
  const LLRP_tSImpinjC1G2LocationConfig *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjC1G2LocationConfig_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjC1G2LocationConfig_ModeIndex;

extern llrp_u16_t
LLRP_ImpinjC1G2LocationConfig_getModeIndex (
  LLRP_tSImpinjC1G2LocationConfig *pThis);

extern LLRP_tResultCode
LLRP_ImpinjC1G2LocationConfig_setModeIndex (
  LLRP_tSImpinjC1G2LocationConfig *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjC1G2LocationConfig_Session;

extern llrp_u2_t
LLRP_ImpinjC1G2LocationConfig_getSession (
  LLRP_tSImpinjC1G2LocationConfig *pThis);

extern LLRP_tResultCode
LLRP_ImpinjC1G2LocationConfig_setSession (
  LLRP_tSImpinjC1G2LocationConfig *pThis,
  llrp_u2_t Value);

  
extern LLRP_tSC1G2Filter *
LLRP_ImpinjC1G2LocationConfig_beginC1G2Filter (
  LLRP_tSImpinjC1G2LocationConfig *pThis);

extern LLRP_tSC1G2Filter *
LLRP_ImpinjC1G2LocationConfig_nextC1G2Filter (
  LLRP_tSC1G2Filter *pCurrent);

extern void
LLRP_ImpinjC1G2LocationConfig_clearC1G2Filter (
  LLRP_tSImpinjC1G2LocationConfig *pThis);

extern int
LLRP_ImpinjC1G2LocationConfig_countC1G2Filter (
  LLRP_tSImpinjC1G2LocationConfig *pThis);

extern LLRP_tResultCode
LLRP_ImpinjC1G2LocationConfig_addC1G2Filter (
  LLRP_tSImpinjC1G2LocationConfig *pThis,
  LLRP_tSC1G2Filter *pValue);


extern LLRP_tSImpinjTransmitPower *
LLRP_ImpinjC1G2LocationConfig_getImpinjTransmitPower (
  LLRP_tSImpinjC1G2LocationConfig *pThis);

extern LLRP_tResultCode
LLRP_ImpinjC1G2LocationConfig_setImpinjTransmitPower (
  LLRP_tSImpinjC1G2LocationConfig *pThis,
  LLRP_tSImpinjTransmitPower *pValue);

extern LLRP_tSParameter *
LLRP_ImpinjC1G2LocationConfig_beginCustom (
  LLRP_tSImpinjC1G2LocationConfig *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjC1G2LocationConfig_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjC1G2LocationConfig_clearCustom (
  LLRP_tSImpinjC1G2LocationConfig *pThis);

extern int
LLRP_ImpinjC1G2LocationConfig_countCustom (
  LLRP_tSImpinjC1G2LocationConfig *pThis);

extern LLRP_tResultCode
LLRP_ImpinjC1G2LocationConfig_addCustom (
  LLRP_tSImpinjC1G2LocationConfig *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjLocationReporting
{
    LLRP_tSParameter hdr;
  
    llrp_u1_t EnableUpdateReport;

    llrp_u1_t EnableEntryReport;

    llrp_u1_t EnableExitReport;

    llrp_u1_t EnableDiagnosticReport;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjLocationReporting;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjLocationReporting[];

extern LLRP_tSImpinjLocationReporting *
LLRP_ImpinjLocationReporting_construct (void);

extern void
LLRP_ImpinjLocationReporting_destruct (
 LLRP_tSImpinjLocationReporting * pThis);

extern void
LLRP_ImpinjLocationReporting_decodeFields (
 LLRP_tSImpinjLocationReporting * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjLocationReporting_assimilateSubParameters (
 LLRP_tSImpinjLocationReporting * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjLocationReporting_encode (
  const LLRP_tSImpinjLocationReporting *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjLocationReporting_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjLocationReporting_EnableUpdateReport;

extern llrp_u1_t
LLRP_ImpinjLocationReporting_getEnableUpdateReport (
  LLRP_tSImpinjLocationReporting *pThis);

extern LLRP_tResultCode
LLRP_ImpinjLocationReporting_setEnableUpdateReport (
  LLRP_tSImpinjLocationReporting *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjLocationReporting_EnableEntryReport;

extern llrp_u1_t
LLRP_ImpinjLocationReporting_getEnableEntryReport (
  LLRP_tSImpinjLocationReporting *pThis);

extern LLRP_tResultCode
LLRP_ImpinjLocationReporting_setEnableEntryReport (
  LLRP_tSImpinjLocationReporting *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjLocationReporting_EnableExitReport;

extern llrp_u1_t
LLRP_ImpinjLocationReporting_getEnableExitReport (
  LLRP_tSImpinjLocationReporting *pThis);

extern LLRP_tResultCode
LLRP_ImpinjLocationReporting_setEnableExitReport (
  LLRP_tSImpinjLocationReporting *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjLocationReporting_EnableDiagnosticReport;

extern llrp_u1_t
LLRP_ImpinjLocationReporting_getEnableDiagnosticReport (
  LLRP_tSImpinjLocationReporting *pThis);

extern LLRP_tResultCode
LLRP_ImpinjLocationReporting_setEnableDiagnosticReport (
  LLRP_tSImpinjLocationReporting *pThis,
  llrp_u1_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjLocationReporting_beginCustom (
  LLRP_tSImpinjLocationReporting *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjLocationReporting_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjLocationReporting_clearCustom (
  LLRP_tSImpinjLocationReporting *pThis);

extern int
LLRP_ImpinjLocationReporting_countCustom (
  LLRP_tSImpinjLocationReporting *pThis);

extern LLRP_tResultCode
LLRP_ImpinjLocationReporting_addCustom (
  LLRP_tSImpinjLocationReporting *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjLocationConfidence
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t ReadCount;

    llrp_u32v_t ConfidenceData;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjLocationConfidence;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjLocationConfidence[];

extern LLRP_tSImpinjLocationConfidence *
LLRP_ImpinjLocationConfidence_construct (void);

extern void
LLRP_ImpinjLocationConfidence_destruct (
 LLRP_tSImpinjLocationConfidence * pThis);

extern void
LLRP_ImpinjLocationConfidence_decodeFields (
 LLRP_tSImpinjLocationConfidence * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjLocationConfidence_assimilateSubParameters (
 LLRP_tSImpinjLocationConfidence * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjLocationConfidence_encode (
  const LLRP_tSImpinjLocationConfidence *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjLocationConfidence_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjLocationConfidence_ReadCount;

extern llrp_u16_t
LLRP_ImpinjLocationConfidence_getReadCount (
  LLRP_tSImpinjLocationConfidence *pThis);

extern LLRP_tResultCode
LLRP_ImpinjLocationConfidence_setReadCount (
  LLRP_tSImpinjLocationConfidence *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjLocationConfidence_ConfidenceData;

extern llrp_u32v_t
LLRP_ImpinjLocationConfidence_getConfidenceData (
  LLRP_tSImpinjLocationConfidence *pThis);

extern LLRP_tResultCode
LLRP_ImpinjLocationConfidence_setConfidenceData (
  LLRP_tSImpinjLocationConfidence *pThis,
  llrp_u32v_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjLocationConfidence_beginCustom (
  LLRP_tSImpinjLocationConfidence *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjLocationConfidence_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjLocationConfidence_clearCustom (
  LLRP_tSImpinjLocationConfidence *pThis);

extern int
LLRP_ImpinjLocationConfidence_countCustom (
  LLRP_tSImpinjLocationConfidence *pThis);

extern LLRP_tResultCode
LLRP_ImpinjLocationConfidence_addCustom (
  LLRP_tSImpinjLocationConfidence *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjLocationReportData
{
    LLRP_tSParameter hdr;
  
    llrp_u64_t LastSeenTimestampUTC;

    llrp_s32_t LocXCentimeters;

    llrp_s32_t LocYCentimeters;

    LLRP_tEImpinjLocationReportType eType;

  
    LLRP_tSImpinjLocationConfidence * pImpinjLocationConfidence;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjLocationReportData;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjLocationReportData[];

extern LLRP_tSImpinjLocationReportData *
LLRP_ImpinjLocationReportData_construct (void);

extern void
LLRP_ImpinjLocationReportData_destruct (
 LLRP_tSImpinjLocationReportData * pThis);

extern void
LLRP_ImpinjLocationReportData_decodeFields (
 LLRP_tSImpinjLocationReportData * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjLocationReportData_assimilateSubParameters (
 LLRP_tSImpinjLocationReportData * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjLocationReportData_encode (
  const LLRP_tSImpinjLocationReportData *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjLocationReportData_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjLocationReportData_LastSeenTimestampUTC;

extern llrp_u64_t
LLRP_ImpinjLocationReportData_getLastSeenTimestampUTC (
  LLRP_tSImpinjLocationReportData *pThis);

extern LLRP_tResultCode
LLRP_ImpinjLocationReportData_setLastSeenTimestampUTC (
  LLRP_tSImpinjLocationReportData *pThis,
  llrp_u64_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjLocationReportData_LocXCentimeters;

extern llrp_s32_t
LLRP_ImpinjLocationReportData_getLocXCentimeters (
  LLRP_tSImpinjLocationReportData *pThis);

extern LLRP_tResultCode
LLRP_ImpinjLocationReportData_setLocXCentimeters (
  LLRP_tSImpinjLocationReportData *pThis,
  llrp_s32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjLocationReportData_LocYCentimeters;

extern llrp_s32_t
LLRP_ImpinjLocationReportData_getLocYCentimeters (
  LLRP_tSImpinjLocationReportData *pThis);

extern LLRP_tResultCode
LLRP_ImpinjLocationReportData_setLocYCentimeters (
  LLRP_tSImpinjLocationReportData *pThis,
  llrp_s32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjLocationReportData_Type;

extern LLRP_tEImpinjLocationReportType
LLRP_ImpinjLocationReportData_getType (
  LLRP_tSImpinjLocationReportData *pThis);

extern LLRP_tResultCode
LLRP_ImpinjLocationReportData_setType (
  LLRP_tSImpinjLocationReportData *pThis,
  LLRP_tEImpinjLocationReportType Value);

  
extern LLRP_tSImpinjLocationConfidence *
LLRP_ImpinjLocationReportData_getImpinjLocationConfidence (
  LLRP_tSImpinjLocationReportData *pThis);

extern LLRP_tResultCode
LLRP_ImpinjLocationReportData_setImpinjLocationConfidence (
  LLRP_tSImpinjLocationReportData *pThis,
  LLRP_tSImpinjLocationConfidence *pValue);

extern LLRP_tSParameter *
LLRP_ImpinjLocationReportData_beginCustom (
  LLRP_tSImpinjLocationReportData *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjLocationReportData_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjLocationReportData_clearCustom (
  LLRP_tSImpinjLocationReportData *pThis);

extern int
LLRP_ImpinjLocationReportData_countCustom (
  LLRP_tSImpinjLocationReportData *pThis);

extern LLRP_tResultCode
LLRP_ImpinjLocationReportData_addCustom (
  LLRP_tSImpinjLocationReportData *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjDISpec
{
    LLRP_tSParameter hdr;
  
  
    LLRP_tSImpinjDirectionSectors * pImpinjDirectionSectors;

    LLRP_tSImpinjDirectionConfig * pImpinjDirectionConfig;

    LLRP_tSImpinjC1G2DirectionConfig * pImpinjC1G2DirectionConfig;

    LLRP_tSImpinjDirectionReporting * pImpinjDirectionReporting;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjDISpec;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjDISpec[];

extern LLRP_tSImpinjDISpec *
LLRP_ImpinjDISpec_construct (void);

extern void
LLRP_ImpinjDISpec_destruct (
 LLRP_tSImpinjDISpec * pThis);

extern void
LLRP_ImpinjDISpec_decodeFields (
 LLRP_tSImpinjDISpec * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjDISpec_assimilateSubParameters (
 LLRP_tSImpinjDISpec * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjDISpec_encode (
  const LLRP_tSImpinjDISpec *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjDISpec_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
  
extern LLRP_tSImpinjDirectionSectors *
LLRP_ImpinjDISpec_getImpinjDirectionSectors (
  LLRP_tSImpinjDISpec *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDISpec_setImpinjDirectionSectors (
  LLRP_tSImpinjDISpec *pThis,
  LLRP_tSImpinjDirectionSectors *pValue);

extern LLRP_tSImpinjDirectionConfig *
LLRP_ImpinjDISpec_getImpinjDirectionConfig (
  LLRP_tSImpinjDISpec *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDISpec_setImpinjDirectionConfig (
  LLRP_tSImpinjDISpec *pThis,
  LLRP_tSImpinjDirectionConfig *pValue);

extern LLRP_tSImpinjC1G2DirectionConfig *
LLRP_ImpinjDISpec_getImpinjC1G2DirectionConfig (
  LLRP_tSImpinjDISpec *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDISpec_setImpinjC1G2DirectionConfig (
  LLRP_tSImpinjDISpec *pThis,
  LLRP_tSImpinjC1G2DirectionConfig *pValue);

extern LLRP_tSImpinjDirectionReporting *
LLRP_ImpinjDISpec_getImpinjDirectionReporting (
  LLRP_tSImpinjDISpec *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDISpec_setImpinjDirectionReporting (
  LLRP_tSImpinjDISpec *pThis,
  LLRP_tSImpinjDirectionReporting *pValue);

extern LLRP_tSParameter *
LLRP_ImpinjDISpec_beginCustom (
  LLRP_tSImpinjDISpec *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjDISpec_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjDISpec_clearCustom (
  LLRP_tSImpinjDISpec *pThis);

extern int
LLRP_ImpinjDISpec_countCustom (
  LLRP_tSImpinjDISpec *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDISpec_addCustom (
  LLRP_tSImpinjDISpec *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjDirectionSectors
{
    LLRP_tSParameter hdr;
  
    llrp_u16v_t EnabledSectorIDs;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjDirectionSectors;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjDirectionSectors[];

extern LLRP_tSImpinjDirectionSectors *
LLRP_ImpinjDirectionSectors_construct (void);

extern void
LLRP_ImpinjDirectionSectors_destruct (
 LLRP_tSImpinjDirectionSectors * pThis);

extern void
LLRP_ImpinjDirectionSectors_decodeFields (
 LLRP_tSImpinjDirectionSectors * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjDirectionSectors_assimilateSubParameters (
 LLRP_tSImpinjDirectionSectors * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjDirectionSectors_encode (
  const LLRP_tSImpinjDirectionSectors *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjDirectionSectors_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjDirectionSectors_EnabledSectorIDs;

extern llrp_u16v_t
LLRP_ImpinjDirectionSectors_getEnabledSectorIDs (
  LLRP_tSImpinjDirectionSectors *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDirectionSectors_setEnabledSectorIDs (
  LLRP_tSImpinjDirectionSectors *pThis,
  llrp_u16v_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjDirectionSectors_beginCustom (
  LLRP_tSImpinjDirectionSectors *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjDirectionSectors_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjDirectionSectors_clearCustom (
  LLRP_tSImpinjDirectionSectors *pThis);

extern int
LLRP_ImpinjDirectionSectors_countCustom (
  LLRP_tSImpinjDirectionSectors *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDirectionSectors_addCustom (
  LLRP_tSImpinjDirectionSectors *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjDirectionConfig
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t TagAgeIntervalSeconds;

    llrp_u16_t UpdateIntervalSeconds;

    LLRP_tEImpinjDirectionFieldOfView eFieldOfView;

  
    LLRP_tSImpinjDirectionUserTagPopulationLimit * pImpinjDirectionUserTagPopulationLimit;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjDirectionConfig;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjDirectionConfig[];

extern LLRP_tSImpinjDirectionConfig *
LLRP_ImpinjDirectionConfig_construct (void);

extern void
LLRP_ImpinjDirectionConfig_destruct (
 LLRP_tSImpinjDirectionConfig * pThis);

extern void
LLRP_ImpinjDirectionConfig_decodeFields (
 LLRP_tSImpinjDirectionConfig * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjDirectionConfig_assimilateSubParameters (
 LLRP_tSImpinjDirectionConfig * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjDirectionConfig_encode (
  const LLRP_tSImpinjDirectionConfig *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjDirectionConfig_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjDirectionConfig_TagAgeIntervalSeconds;

extern llrp_u16_t
LLRP_ImpinjDirectionConfig_getTagAgeIntervalSeconds (
  LLRP_tSImpinjDirectionConfig *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDirectionConfig_setTagAgeIntervalSeconds (
  LLRP_tSImpinjDirectionConfig *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjDirectionConfig_UpdateIntervalSeconds;

extern llrp_u16_t
LLRP_ImpinjDirectionConfig_getUpdateIntervalSeconds (
  LLRP_tSImpinjDirectionConfig *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDirectionConfig_setUpdateIntervalSeconds (
  LLRP_tSImpinjDirectionConfig *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjDirectionConfig_FieldOfView;

extern LLRP_tEImpinjDirectionFieldOfView
LLRP_ImpinjDirectionConfig_getFieldOfView (
  LLRP_tSImpinjDirectionConfig *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDirectionConfig_setFieldOfView (
  LLRP_tSImpinjDirectionConfig *pThis,
  LLRP_tEImpinjDirectionFieldOfView Value);

  
extern LLRP_tSImpinjDirectionUserTagPopulationLimit *
LLRP_ImpinjDirectionConfig_getImpinjDirectionUserTagPopulationLimit (
  LLRP_tSImpinjDirectionConfig *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDirectionConfig_setImpinjDirectionUserTagPopulationLimit (
  LLRP_tSImpinjDirectionConfig *pThis,
  LLRP_tSImpinjDirectionUserTagPopulationLimit *pValue);

extern LLRP_tSParameter *
LLRP_ImpinjDirectionConfig_beginCustom (
  LLRP_tSImpinjDirectionConfig *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjDirectionConfig_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjDirectionConfig_clearCustom (
  LLRP_tSImpinjDirectionConfig *pThis);

extern int
LLRP_ImpinjDirectionConfig_countCustom (
  LLRP_tSImpinjDirectionConfig *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDirectionConfig_addCustom (
  LLRP_tSImpinjDirectionConfig *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjDirectionUserTagPopulationLimit
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t UserTagPopulationLimit;

  
};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjDirectionUserTagPopulationLimit;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjDirectionUserTagPopulationLimit[];

extern LLRP_tSImpinjDirectionUserTagPopulationLimit *
LLRP_ImpinjDirectionUserTagPopulationLimit_construct (void);

extern void
LLRP_ImpinjDirectionUserTagPopulationLimit_destruct (
 LLRP_tSImpinjDirectionUserTagPopulationLimit * pThis);

extern void
LLRP_ImpinjDirectionUserTagPopulationLimit_decodeFields (
 LLRP_tSImpinjDirectionUserTagPopulationLimit * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjDirectionUserTagPopulationLimit_assimilateSubParameters (
 LLRP_tSImpinjDirectionUserTagPopulationLimit * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjDirectionUserTagPopulationLimit_encode (
  const LLRP_tSImpinjDirectionUserTagPopulationLimit *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjDirectionUserTagPopulationLimit_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjDirectionUserTagPopulationLimit_UserTagPopulationLimit;

extern llrp_u16_t
LLRP_ImpinjDirectionUserTagPopulationLimit_getUserTagPopulationLimit (
  LLRP_tSImpinjDirectionUserTagPopulationLimit *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDirectionUserTagPopulationLimit_setUserTagPopulationLimit (
  LLRP_tSImpinjDirectionUserTagPopulationLimit *pThis,
  llrp_u16_t Value);

  


  
struct LLRP_SImpinjC1G2DirectionConfig
{
    LLRP_tSParameter hdr;
  
    LLRP_tEImpinjDirectionRFMode eRFMode;

  
    LLRP_tSImpinjTransmitPower * pImpinjTransmitPower;

    LLRP_tSC1G2Filter * listC1G2Filter;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjC1G2DirectionConfig;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjC1G2DirectionConfig[];

extern LLRP_tSImpinjC1G2DirectionConfig *
LLRP_ImpinjC1G2DirectionConfig_construct (void);

extern void
LLRP_ImpinjC1G2DirectionConfig_destruct (
 LLRP_tSImpinjC1G2DirectionConfig * pThis);

extern void
LLRP_ImpinjC1G2DirectionConfig_decodeFields (
 LLRP_tSImpinjC1G2DirectionConfig * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjC1G2DirectionConfig_assimilateSubParameters (
 LLRP_tSImpinjC1G2DirectionConfig * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjC1G2DirectionConfig_encode (
  const LLRP_tSImpinjC1G2DirectionConfig *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjC1G2DirectionConfig_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjC1G2DirectionConfig_RFMode;

extern LLRP_tEImpinjDirectionRFMode
LLRP_ImpinjC1G2DirectionConfig_getRFMode (
  LLRP_tSImpinjC1G2DirectionConfig *pThis);

extern LLRP_tResultCode
LLRP_ImpinjC1G2DirectionConfig_setRFMode (
  LLRP_tSImpinjC1G2DirectionConfig *pThis,
  LLRP_tEImpinjDirectionRFMode Value);

  
extern LLRP_tSImpinjTransmitPower *
LLRP_ImpinjC1G2DirectionConfig_getImpinjTransmitPower (
  LLRP_tSImpinjC1G2DirectionConfig *pThis);

extern LLRP_tResultCode
LLRP_ImpinjC1G2DirectionConfig_setImpinjTransmitPower (
  LLRP_tSImpinjC1G2DirectionConfig *pThis,
  LLRP_tSImpinjTransmitPower *pValue);

extern LLRP_tSC1G2Filter *
LLRP_ImpinjC1G2DirectionConfig_beginC1G2Filter (
  LLRP_tSImpinjC1G2DirectionConfig *pThis);

extern LLRP_tSC1G2Filter *
LLRP_ImpinjC1G2DirectionConfig_nextC1G2Filter (
  LLRP_tSC1G2Filter *pCurrent);

extern void
LLRP_ImpinjC1G2DirectionConfig_clearC1G2Filter (
  LLRP_tSImpinjC1G2DirectionConfig *pThis);

extern int
LLRP_ImpinjC1G2DirectionConfig_countC1G2Filter (
  LLRP_tSImpinjC1G2DirectionConfig *pThis);

extern LLRP_tResultCode
LLRP_ImpinjC1G2DirectionConfig_addC1G2Filter (
  LLRP_tSImpinjC1G2DirectionConfig *pThis,
  LLRP_tSC1G2Filter *pValue);


extern LLRP_tSParameter *
LLRP_ImpinjC1G2DirectionConfig_beginCustom (
  LLRP_tSImpinjC1G2DirectionConfig *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjC1G2DirectionConfig_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjC1G2DirectionConfig_clearCustom (
  LLRP_tSImpinjC1G2DirectionConfig *pThis);

extern int
LLRP_ImpinjC1G2DirectionConfig_countCustom (
  LLRP_tSImpinjC1G2DirectionConfig *pThis);

extern LLRP_tResultCode
LLRP_ImpinjC1G2DirectionConfig_addCustom (
  LLRP_tSImpinjC1G2DirectionConfig *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjExtendedTagInformation
{
    LLRP_tSParameter hdr;
  
  
    LLRP_tSEPCData * listEPCData;

    LLRP_tSImpinjLocationReportData * pImpinjLocationReportData;

    LLRP_tSImpinjDirectionReportData * pImpinjDirectionReportData;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjExtendedTagInformation;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjExtendedTagInformation[];

extern LLRP_tSImpinjExtendedTagInformation *
LLRP_ImpinjExtendedTagInformation_construct (void);

extern void
LLRP_ImpinjExtendedTagInformation_destruct (
 LLRP_tSImpinjExtendedTagInformation * pThis);

extern void
LLRP_ImpinjExtendedTagInformation_decodeFields (
 LLRP_tSImpinjExtendedTagInformation * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjExtendedTagInformation_assimilateSubParameters (
 LLRP_tSImpinjExtendedTagInformation * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjExtendedTagInformation_encode (
  const LLRP_tSImpinjExtendedTagInformation *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjExtendedTagInformation_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
  
extern LLRP_tSEPCData *
LLRP_ImpinjExtendedTagInformation_beginEPCData (
  LLRP_tSImpinjExtendedTagInformation *pThis);

extern LLRP_tSEPCData *
LLRP_ImpinjExtendedTagInformation_nextEPCData (
  LLRP_tSEPCData *pCurrent);

extern void
LLRP_ImpinjExtendedTagInformation_clearEPCData (
  LLRP_tSImpinjExtendedTagInformation *pThis);

extern int
LLRP_ImpinjExtendedTagInformation_countEPCData (
  LLRP_tSImpinjExtendedTagInformation *pThis);

extern LLRP_tResultCode
LLRP_ImpinjExtendedTagInformation_addEPCData (
  LLRP_tSImpinjExtendedTagInformation *pThis,
  LLRP_tSEPCData *pValue);


extern LLRP_tSImpinjLocationReportData *
LLRP_ImpinjExtendedTagInformation_getImpinjLocationReportData (
  LLRP_tSImpinjExtendedTagInformation *pThis);

extern LLRP_tResultCode
LLRP_ImpinjExtendedTagInformation_setImpinjLocationReportData (
  LLRP_tSImpinjExtendedTagInformation *pThis,
  LLRP_tSImpinjLocationReportData *pValue);

extern LLRP_tSImpinjDirectionReportData *
LLRP_ImpinjExtendedTagInformation_getImpinjDirectionReportData (
  LLRP_tSImpinjExtendedTagInformation *pThis);

extern LLRP_tResultCode
LLRP_ImpinjExtendedTagInformation_setImpinjDirectionReportData (
  LLRP_tSImpinjExtendedTagInformation *pThis,
  LLRP_tSImpinjDirectionReportData *pValue);

extern LLRP_tSParameter *
LLRP_ImpinjExtendedTagInformation_beginCustom (
  LLRP_tSImpinjExtendedTagInformation *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjExtendedTagInformation_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjExtendedTagInformation_clearCustom (
  LLRP_tSImpinjExtendedTagInformation *pThis);

extern int
LLRP_ImpinjExtendedTagInformation_countCustom (
  LLRP_tSImpinjExtendedTagInformation *pThis);

extern LLRP_tResultCode
LLRP_ImpinjExtendedTagInformation_addCustom (
  LLRP_tSImpinjExtendedTagInformation *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjDirectionReporting
{
    LLRP_tSParameter hdr;
  
    llrp_u1_t EnableUpdateReport;

    llrp_u1_t EnableEntryReport;

    llrp_u1_t EnableExitReport;

    llrp_u1_t EnableDiagnosticReport;

    LLRP_tEImpinjDirectionDiagnosticReportLevel eDiagnosticReportLevel;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjDirectionReporting;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjDirectionReporting[];

extern LLRP_tSImpinjDirectionReporting *
LLRP_ImpinjDirectionReporting_construct (void);

extern void
LLRP_ImpinjDirectionReporting_destruct (
 LLRP_tSImpinjDirectionReporting * pThis);

extern void
LLRP_ImpinjDirectionReporting_decodeFields (
 LLRP_tSImpinjDirectionReporting * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjDirectionReporting_assimilateSubParameters (
 LLRP_tSImpinjDirectionReporting * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjDirectionReporting_encode (
  const LLRP_tSImpinjDirectionReporting *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjDirectionReporting_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjDirectionReporting_EnableUpdateReport;

extern llrp_u1_t
LLRP_ImpinjDirectionReporting_getEnableUpdateReport (
  LLRP_tSImpinjDirectionReporting *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDirectionReporting_setEnableUpdateReport (
  LLRP_tSImpinjDirectionReporting *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjDirectionReporting_EnableEntryReport;

extern llrp_u1_t
LLRP_ImpinjDirectionReporting_getEnableEntryReport (
  LLRP_tSImpinjDirectionReporting *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDirectionReporting_setEnableEntryReport (
  LLRP_tSImpinjDirectionReporting *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjDirectionReporting_EnableExitReport;

extern llrp_u1_t
LLRP_ImpinjDirectionReporting_getEnableExitReport (
  LLRP_tSImpinjDirectionReporting *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDirectionReporting_setEnableExitReport (
  LLRP_tSImpinjDirectionReporting *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjDirectionReporting_EnableDiagnosticReport;

extern llrp_u1_t
LLRP_ImpinjDirectionReporting_getEnableDiagnosticReport (
  LLRP_tSImpinjDirectionReporting *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDirectionReporting_setEnableDiagnosticReport (
  LLRP_tSImpinjDirectionReporting *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjDirectionReporting_DiagnosticReportLevel;

extern LLRP_tEImpinjDirectionDiagnosticReportLevel
LLRP_ImpinjDirectionReporting_getDiagnosticReportLevel (
  LLRP_tSImpinjDirectionReporting *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDirectionReporting_setDiagnosticReportLevel (
  LLRP_tSImpinjDirectionReporting *pThis,
  LLRP_tEImpinjDirectionDiagnosticReportLevel Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjDirectionReporting_beginCustom (
  LLRP_tSImpinjDirectionReporting *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjDirectionReporting_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjDirectionReporting_clearCustom (
  LLRP_tSImpinjDirectionReporting *pThis);

extern int
LLRP_ImpinjDirectionReporting_countCustom (
  LLRP_tSImpinjDirectionReporting *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDirectionReporting_addCustom (
  LLRP_tSImpinjDirectionReporting *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjDirectionReportData
{
    LLRP_tSParameter hdr;
  
    LLRP_tEImpinjDirectionReportType eType;

    LLRP_tEImpinjDirectionTagPopulationStatus eTagPopulationStatus;

    llrp_u8_t FirstSeenSectorID;

    llrp_u64_t FirstSeenTimestampUTC;

    llrp_u8_t LastSeenSectorID;

    llrp_u64_t LastSeenTimestampUTC;

  
    LLRP_tSImpinjDirectionDiagnosticData * pImpinjDirectionDiagnosticData;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjDirectionReportData;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjDirectionReportData[];

extern LLRP_tSImpinjDirectionReportData *
LLRP_ImpinjDirectionReportData_construct (void);

extern void
LLRP_ImpinjDirectionReportData_destruct (
 LLRP_tSImpinjDirectionReportData * pThis);

extern void
LLRP_ImpinjDirectionReportData_decodeFields (
 LLRP_tSImpinjDirectionReportData * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjDirectionReportData_assimilateSubParameters (
 LLRP_tSImpinjDirectionReportData * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjDirectionReportData_encode (
  const LLRP_tSImpinjDirectionReportData *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjDirectionReportData_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjDirectionReportData_Type;

extern LLRP_tEImpinjDirectionReportType
LLRP_ImpinjDirectionReportData_getType (
  LLRP_tSImpinjDirectionReportData *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDirectionReportData_setType (
  LLRP_tSImpinjDirectionReportData *pThis,
  LLRP_tEImpinjDirectionReportType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjDirectionReportData_TagPopulationStatus;

extern LLRP_tEImpinjDirectionTagPopulationStatus
LLRP_ImpinjDirectionReportData_getTagPopulationStatus (
  LLRP_tSImpinjDirectionReportData *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDirectionReportData_setTagPopulationStatus (
  LLRP_tSImpinjDirectionReportData *pThis,
  LLRP_tEImpinjDirectionTagPopulationStatus Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjDirectionReportData_FirstSeenSectorID;

extern llrp_u8_t
LLRP_ImpinjDirectionReportData_getFirstSeenSectorID (
  LLRP_tSImpinjDirectionReportData *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDirectionReportData_setFirstSeenSectorID (
  LLRP_tSImpinjDirectionReportData *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjDirectionReportData_FirstSeenTimestampUTC;

extern llrp_u64_t
LLRP_ImpinjDirectionReportData_getFirstSeenTimestampUTC (
  LLRP_tSImpinjDirectionReportData *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDirectionReportData_setFirstSeenTimestampUTC (
  LLRP_tSImpinjDirectionReportData *pThis,
  llrp_u64_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjDirectionReportData_LastSeenSectorID;

extern llrp_u8_t
LLRP_ImpinjDirectionReportData_getLastSeenSectorID (
  LLRP_tSImpinjDirectionReportData *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDirectionReportData_setLastSeenSectorID (
  LLRP_tSImpinjDirectionReportData *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjDirectionReportData_LastSeenTimestampUTC;

extern llrp_u64_t
LLRP_ImpinjDirectionReportData_getLastSeenTimestampUTC (
  LLRP_tSImpinjDirectionReportData *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDirectionReportData_setLastSeenTimestampUTC (
  LLRP_tSImpinjDirectionReportData *pThis,
  llrp_u64_t Value);

  
extern LLRP_tSImpinjDirectionDiagnosticData *
LLRP_ImpinjDirectionReportData_getImpinjDirectionDiagnosticData (
  LLRP_tSImpinjDirectionReportData *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDirectionReportData_setImpinjDirectionDiagnosticData (
  LLRP_tSImpinjDirectionReportData *pThis,
  LLRP_tSImpinjDirectionDiagnosticData *pValue);

extern LLRP_tSParameter *
LLRP_ImpinjDirectionReportData_beginCustom (
  LLRP_tSImpinjDirectionReportData *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjDirectionReportData_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjDirectionReportData_clearCustom (
  LLRP_tSImpinjDirectionReportData *pThis);

extern int
LLRP_ImpinjDirectionReportData_countCustom (
  LLRP_tSImpinjDirectionReportData *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDirectionReportData_addCustom (
  LLRP_tSImpinjDirectionReportData *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjDirectionDiagnosticData
{
    LLRP_tSParameter hdr;
  
    llrp_u32v_t Metric;

  
};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjDirectionDiagnosticData;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjDirectionDiagnosticData[];

extern LLRP_tSImpinjDirectionDiagnosticData *
LLRP_ImpinjDirectionDiagnosticData_construct (void);

extern void
LLRP_ImpinjDirectionDiagnosticData_destruct (
 LLRP_tSImpinjDirectionDiagnosticData * pThis);

extern void
LLRP_ImpinjDirectionDiagnosticData_decodeFields (
 LLRP_tSImpinjDirectionDiagnosticData * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjDirectionDiagnosticData_assimilateSubParameters (
 LLRP_tSImpinjDirectionDiagnosticData * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjDirectionDiagnosticData_encode (
  const LLRP_tSImpinjDirectionDiagnosticData *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjDirectionDiagnosticData_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjDirectionDiagnosticData_Metric;

extern llrp_u32v_t
LLRP_ImpinjDirectionDiagnosticData_getMetric (
  LLRP_tSImpinjDirectionDiagnosticData *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDirectionDiagnosticData_setMetric (
  LLRP_tSImpinjDirectionDiagnosticData *pThis,
  llrp_u32v_t Value);

  


  
struct LLRP_SImpinjxArrayDirectionCapabilities
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t SystemTagPopulationLimitHighSensitivity;

    llrp_u16_t SystemTagPopulationLimitHighPerformance;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjxArrayDirectionCapabilities;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjxArrayDirectionCapabilities[];

extern LLRP_tSImpinjxArrayDirectionCapabilities *
LLRP_ImpinjxArrayDirectionCapabilities_construct (void);

extern void
LLRP_ImpinjxArrayDirectionCapabilities_destruct (
 LLRP_tSImpinjxArrayDirectionCapabilities * pThis);

extern void
LLRP_ImpinjxArrayDirectionCapabilities_decodeFields (
 LLRP_tSImpinjxArrayDirectionCapabilities * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjxArrayDirectionCapabilities_assimilateSubParameters (
 LLRP_tSImpinjxArrayDirectionCapabilities * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjxArrayDirectionCapabilities_encode (
  const LLRP_tSImpinjxArrayDirectionCapabilities *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjxArrayDirectionCapabilities_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjxArrayDirectionCapabilities_SystemTagPopulationLimitHighSensitivity;

extern llrp_u16_t
LLRP_ImpinjxArrayDirectionCapabilities_getSystemTagPopulationLimitHighSensitivity (
  LLRP_tSImpinjxArrayDirectionCapabilities *pThis);

extern LLRP_tResultCode
LLRP_ImpinjxArrayDirectionCapabilities_setSystemTagPopulationLimitHighSensitivity (
  LLRP_tSImpinjxArrayDirectionCapabilities *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjxArrayDirectionCapabilities_SystemTagPopulationLimitHighPerformance;

extern llrp_u16_t
LLRP_ImpinjxArrayDirectionCapabilities_getSystemTagPopulationLimitHighPerformance (
  LLRP_tSImpinjxArrayDirectionCapabilities *pThis);

extern LLRP_tResultCode
LLRP_ImpinjxArrayDirectionCapabilities_setSystemTagPopulationLimitHighPerformance (
  LLRP_tSImpinjxArrayDirectionCapabilities *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjxArrayDirectionCapabilities_beginCustom (
  LLRP_tSImpinjxArrayDirectionCapabilities *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjxArrayDirectionCapabilities_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjxArrayDirectionCapabilities_clearCustom (
  LLRP_tSImpinjxArrayDirectionCapabilities *pThis);

extern int
LLRP_ImpinjxArrayDirectionCapabilities_countCustom (
  LLRP_tSImpinjxArrayDirectionCapabilities *pThis);

extern LLRP_tResultCode
LLRP_ImpinjxArrayDirectionCapabilities_addCustom (
  LLRP_tSImpinjxArrayDirectionCapabilities *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjIntelligentAntennaManagement
{
    LLRP_tSParameter hdr;
  
    LLRP_tEImpinjIntelligentAntennaMode eManagementEnabled;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjIntelligentAntennaManagement;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjIntelligentAntennaManagement[];

extern LLRP_tSImpinjIntelligentAntennaManagement *
LLRP_ImpinjIntelligentAntennaManagement_construct (void);

extern void
LLRP_ImpinjIntelligentAntennaManagement_destruct (
 LLRP_tSImpinjIntelligentAntennaManagement * pThis);

extern void
LLRP_ImpinjIntelligentAntennaManagement_decodeFields (
 LLRP_tSImpinjIntelligentAntennaManagement * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjIntelligentAntennaManagement_assimilateSubParameters (
 LLRP_tSImpinjIntelligentAntennaManagement * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjIntelligentAntennaManagement_encode (
  const LLRP_tSImpinjIntelligentAntennaManagement *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjIntelligentAntennaManagement_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjIntelligentAntennaManagement_ManagementEnabled;

extern LLRP_tEImpinjIntelligentAntennaMode
LLRP_ImpinjIntelligentAntennaManagement_getManagementEnabled (
  LLRP_tSImpinjIntelligentAntennaManagement *pThis);

extern LLRP_tResultCode
LLRP_ImpinjIntelligentAntennaManagement_setManagementEnabled (
  LLRP_tSImpinjIntelligentAntennaManagement *pThis,
  LLRP_tEImpinjIntelligentAntennaMode Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjIntelligentAntennaManagement_beginCustom (
  LLRP_tSImpinjIntelligentAntennaManagement *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjIntelligentAntennaManagement_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjIntelligentAntennaManagement_clearCustom (
  LLRP_tSImpinjIntelligentAntennaManagement *pThis);

extern int
LLRP_ImpinjIntelligentAntennaManagement_countCustom (
  LLRP_tSImpinjIntelligentAntennaManagement *pThis);

extern LLRP_tResultCode
LLRP_ImpinjIntelligentAntennaManagement_addCustom (
  LLRP_tSImpinjIntelligentAntennaManagement *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjTransmitPower
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t TransmitPower;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjTransmitPower;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjTransmitPower[];

extern LLRP_tSImpinjTransmitPower *
LLRP_ImpinjTransmitPower_construct (void);

extern void
LLRP_ImpinjTransmitPower_destruct (
 LLRP_tSImpinjTransmitPower * pThis);

extern void
LLRP_ImpinjTransmitPower_decodeFields (
 LLRP_tSImpinjTransmitPower * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjTransmitPower_assimilateSubParameters (
 LLRP_tSImpinjTransmitPower * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjTransmitPower_encode (
  const LLRP_tSImpinjTransmitPower *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjTransmitPower_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjTransmitPower_TransmitPower;

extern llrp_u16_t
LLRP_ImpinjTransmitPower_getTransmitPower (
  LLRP_tSImpinjTransmitPower *pThis);

extern LLRP_tResultCode
LLRP_ImpinjTransmitPower_setTransmitPower (
  LLRP_tSImpinjTransmitPower *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjTransmitPower_beginCustom (
  LLRP_tSImpinjTransmitPower *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjTransmitPower_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjTransmitPower_clearCustom (
  LLRP_tSImpinjTransmitPower *pThis);

extern int
LLRP_ImpinjTransmitPower_countCustom (
  LLRP_tSImpinjTransmitPower *pThis);

extern LLRP_tResultCode
LLRP_ImpinjTransmitPower_addCustom (
  LLRP_tSImpinjTransmitPower *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjPolarizationControl
{
    LLRP_tSParameter hdr;
  
    llrp_u1_t PolarizationControlEnabled;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjPolarizationControl;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjPolarizationControl[];

extern LLRP_tSImpinjPolarizationControl *
LLRP_ImpinjPolarizationControl_construct (void);

extern void
LLRP_ImpinjPolarizationControl_destruct (
 LLRP_tSImpinjPolarizationControl * pThis);

extern void
LLRP_ImpinjPolarizationControl_decodeFields (
 LLRP_tSImpinjPolarizationControl * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjPolarizationControl_assimilateSubParameters (
 LLRP_tSImpinjPolarizationControl * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjPolarizationControl_encode (
  const LLRP_tSImpinjPolarizationControl *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjPolarizationControl_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjPolarizationControl_PolarizationControlEnabled;

extern llrp_u1_t
LLRP_ImpinjPolarizationControl_getPolarizationControlEnabled (
  LLRP_tSImpinjPolarizationControl *pThis);

extern LLRP_tResultCode
LLRP_ImpinjPolarizationControl_setPolarizationControlEnabled (
  LLRP_tSImpinjPolarizationControl *pThis,
  llrp_u1_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjPolarizationControl_beginCustom (
  LLRP_tSImpinjPolarizationControl *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjPolarizationControl_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjPolarizationControl_clearCustom (
  LLRP_tSImpinjPolarizationControl *pThis);

extern int
LLRP_ImpinjPolarizationControl_countCustom (
  LLRP_tSImpinjPolarizationControl *pThis);

extern LLRP_tResultCode
LLRP_ImpinjPolarizationControl_addCustom (
  LLRP_tSImpinjPolarizationControl *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjAntennaCapabilities
{
    LLRP_tSParameter hdr;
  
  
    LLRP_tSImpinjAntennaPolarizationCapability * listImpinjAntennaPolarizationCapability;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjAntennaCapabilities;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjAntennaCapabilities[];

extern LLRP_tSImpinjAntennaCapabilities *
LLRP_ImpinjAntennaCapabilities_construct (void);

extern void
LLRP_ImpinjAntennaCapabilities_destruct (
 LLRP_tSImpinjAntennaCapabilities * pThis);

extern void
LLRP_ImpinjAntennaCapabilities_decodeFields (
 LLRP_tSImpinjAntennaCapabilities * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjAntennaCapabilities_assimilateSubParameters (
 LLRP_tSImpinjAntennaCapabilities * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjAntennaCapabilities_encode (
  const LLRP_tSImpinjAntennaCapabilities *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjAntennaCapabilities_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
  
extern LLRP_tSImpinjAntennaPolarizationCapability *
LLRP_ImpinjAntennaCapabilities_beginImpinjAntennaPolarizationCapability (
  LLRP_tSImpinjAntennaCapabilities *pThis);

extern LLRP_tSImpinjAntennaPolarizationCapability *
LLRP_ImpinjAntennaCapabilities_nextImpinjAntennaPolarizationCapability (
  LLRP_tSImpinjAntennaPolarizationCapability *pCurrent);

extern void
LLRP_ImpinjAntennaCapabilities_clearImpinjAntennaPolarizationCapability (
  LLRP_tSImpinjAntennaCapabilities *pThis);

extern int
LLRP_ImpinjAntennaCapabilities_countImpinjAntennaPolarizationCapability (
  LLRP_tSImpinjAntennaCapabilities *pThis);

extern LLRP_tResultCode
LLRP_ImpinjAntennaCapabilities_addImpinjAntennaPolarizationCapability (
  LLRP_tSImpinjAntennaCapabilities *pThis,
  LLRP_tSImpinjAntennaPolarizationCapability *pValue);


extern LLRP_tSParameter *
LLRP_ImpinjAntennaCapabilities_beginCustom (
  LLRP_tSImpinjAntennaCapabilities *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjAntennaCapabilities_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjAntennaCapabilities_clearCustom (
  LLRP_tSImpinjAntennaCapabilities *pThis);

extern int
LLRP_ImpinjAntennaCapabilities_countCustom (
  LLRP_tSImpinjAntennaCapabilities *pThis);

extern LLRP_tResultCode
LLRP_ImpinjAntennaCapabilities_addCustom (
  LLRP_tSImpinjAntennaCapabilities *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjAntennaPolarizationCapability
{
    LLRP_tSParameter hdr;
  
    LLRP_tEImpinjAntennaPolarizationType eType;

    llrp_u16_t AntennaIDOffset;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjAntennaPolarizationCapability;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjAntennaPolarizationCapability[];

extern LLRP_tSImpinjAntennaPolarizationCapability *
LLRP_ImpinjAntennaPolarizationCapability_construct (void);

extern void
LLRP_ImpinjAntennaPolarizationCapability_destruct (
 LLRP_tSImpinjAntennaPolarizationCapability * pThis);

extern void
LLRP_ImpinjAntennaPolarizationCapability_decodeFields (
 LLRP_tSImpinjAntennaPolarizationCapability * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjAntennaPolarizationCapability_assimilateSubParameters (
 LLRP_tSImpinjAntennaPolarizationCapability * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjAntennaPolarizationCapability_encode (
  const LLRP_tSImpinjAntennaPolarizationCapability *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjAntennaPolarizationCapability_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjAntennaPolarizationCapability_Type;

extern LLRP_tEImpinjAntennaPolarizationType
LLRP_ImpinjAntennaPolarizationCapability_getType (
  LLRP_tSImpinjAntennaPolarizationCapability *pThis);

extern LLRP_tResultCode
LLRP_ImpinjAntennaPolarizationCapability_setType (
  LLRP_tSImpinjAntennaPolarizationCapability *pThis,
  LLRP_tEImpinjAntennaPolarizationType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjAntennaPolarizationCapability_AntennaIDOffset;

extern llrp_u16_t
LLRP_ImpinjAntennaPolarizationCapability_getAntennaIDOffset (
  LLRP_tSImpinjAntennaPolarizationCapability *pThis);

extern LLRP_tResultCode
LLRP_ImpinjAntennaPolarizationCapability_setAntennaIDOffset (
  LLRP_tSImpinjAntennaPolarizationCapability *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjAntennaPolarizationCapability_beginCustom (
  LLRP_tSImpinjAntennaPolarizationCapability *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjAntennaPolarizationCapability_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjAntennaPolarizationCapability_clearCustom (
  LLRP_tSImpinjAntennaPolarizationCapability *pThis);

extern int
LLRP_ImpinjAntennaPolarizationCapability_countCustom (
  LLRP_tSImpinjAntennaPolarizationCapability *pThis);

extern LLRP_tResultCode
LLRP_ImpinjAntennaPolarizationCapability_addCustom (
  LLRP_tSImpinjAntennaPolarizationCapability *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjDisabledAntennas
{
    LLRP_tSParameter hdr;
  
    llrp_u16v_t AntennaIDs;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjDisabledAntennas;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjDisabledAntennas[];

extern LLRP_tSImpinjDisabledAntennas *
LLRP_ImpinjDisabledAntennas_construct (void);

extern void
LLRP_ImpinjDisabledAntennas_destruct (
 LLRP_tSImpinjDisabledAntennas * pThis);

extern void
LLRP_ImpinjDisabledAntennas_decodeFields (
 LLRP_tSImpinjDisabledAntennas * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjDisabledAntennas_assimilateSubParameters (
 LLRP_tSImpinjDisabledAntennas * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjDisabledAntennas_encode (
  const LLRP_tSImpinjDisabledAntennas *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjDisabledAntennas_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjDisabledAntennas_AntennaIDs;

extern llrp_u16v_t
LLRP_ImpinjDisabledAntennas_getAntennaIDs (
  LLRP_tSImpinjDisabledAntennas *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDisabledAntennas_setAntennaIDs (
  LLRP_tSImpinjDisabledAntennas *pThis,
  llrp_u16v_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjDisabledAntennas_beginCustom (
  LLRP_tSImpinjDisabledAntennas *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjDisabledAntennas_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjDisabledAntennas_clearCustom (
  LLRP_tSImpinjDisabledAntennas *pThis);

extern int
LLRP_ImpinjDisabledAntennas_countCustom (
  LLRP_tSImpinjDisabledAntennas *pThis);

extern LLRP_tResultCode
LLRP_ImpinjDisabledAntennas_addCustom (
  LLRP_tSImpinjDisabledAntennas *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjTIDParity
{
    LLRP_tSParameter hdr;
  
    llrp_u1_t ParityError;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjTIDParity;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjTIDParity[];

extern LLRP_tSImpinjTIDParity *
LLRP_ImpinjTIDParity_construct (void);

extern void
LLRP_ImpinjTIDParity_destruct (
 LLRP_tSImpinjTIDParity * pThis);

extern void
LLRP_ImpinjTIDParity_decodeFields (
 LLRP_tSImpinjTIDParity * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjTIDParity_assimilateSubParameters (
 LLRP_tSImpinjTIDParity * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjTIDParity_encode (
  const LLRP_tSImpinjTIDParity *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjTIDParity_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjTIDParity_ParityError;

extern llrp_u1_t
LLRP_ImpinjTIDParity_getParityError (
  LLRP_tSImpinjTIDParity *pThis);

extern LLRP_tResultCode
LLRP_ImpinjTIDParity_setParityError (
  LLRP_tSImpinjTIDParity *pThis,
  llrp_u1_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjTIDParity_beginCustom (
  LLRP_tSImpinjTIDParity *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjTIDParity_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjTIDParity_clearCustom (
  LLRP_tSImpinjTIDParity *pThis);

extern int
LLRP_ImpinjTIDParity_countCustom (
  LLRP_tSImpinjTIDParity *pThis);

extern LLRP_tResultCode
LLRP_ImpinjTIDParity_addCustom (
  LLRP_tSImpinjTIDParity *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjMarginRead
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t OpSpecID;

    llrp_u32_t AccessPassword;

    llrp_u2_t MB;

    llrp_u16_t BitPointer;

    llrp_u8_t BitLength;

    llrp_u16v_t Mask;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjMarginRead;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjMarginRead[];

extern LLRP_tSImpinjMarginRead *
LLRP_ImpinjMarginRead_construct (void);

extern void
LLRP_ImpinjMarginRead_destruct (
 LLRP_tSImpinjMarginRead * pThis);

extern void
LLRP_ImpinjMarginRead_decodeFields (
 LLRP_tSImpinjMarginRead * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjMarginRead_assimilateSubParameters (
 LLRP_tSImpinjMarginRead * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjMarginRead_encode (
  const LLRP_tSImpinjMarginRead *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjMarginRead_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjMarginRead_OpSpecID;

extern llrp_u16_t
LLRP_ImpinjMarginRead_getOpSpecID (
  LLRP_tSImpinjMarginRead *pThis);

extern LLRP_tResultCode
LLRP_ImpinjMarginRead_setOpSpecID (
  LLRP_tSImpinjMarginRead *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjMarginRead_AccessPassword;

extern llrp_u32_t
LLRP_ImpinjMarginRead_getAccessPassword (
  LLRP_tSImpinjMarginRead *pThis);

extern LLRP_tResultCode
LLRP_ImpinjMarginRead_setAccessPassword (
  LLRP_tSImpinjMarginRead *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjMarginRead_MB;

extern llrp_u2_t
LLRP_ImpinjMarginRead_getMB (
  LLRP_tSImpinjMarginRead *pThis);

extern LLRP_tResultCode
LLRP_ImpinjMarginRead_setMB (
  LLRP_tSImpinjMarginRead *pThis,
  llrp_u2_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjMarginRead_BitPointer;

extern llrp_u16_t
LLRP_ImpinjMarginRead_getBitPointer (
  LLRP_tSImpinjMarginRead *pThis);

extern LLRP_tResultCode
LLRP_ImpinjMarginRead_setBitPointer (
  LLRP_tSImpinjMarginRead *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjMarginRead_BitLength;

extern llrp_u8_t
LLRP_ImpinjMarginRead_getBitLength (
  LLRP_tSImpinjMarginRead *pThis);

extern LLRP_tResultCode
LLRP_ImpinjMarginRead_setBitLength (
  LLRP_tSImpinjMarginRead *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjMarginRead_Mask;

extern llrp_u16v_t
LLRP_ImpinjMarginRead_getMask (
  LLRP_tSImpinjMarginRead *pThis);

extern LLRP_tResultCode
LLRP_ImpinjMarginRead_setMask (
  LLRP_tSImpinjMarginRead *pThis,
  llrp_u16v_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjMarginRead_beginCustom (
  LLRP_tSImpinjMarginRead *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjMarginRead_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjMarginRead_clearCustom (
  LLRP_tSImpinjMarginRead *pThis);

extern int
LLRP_ImpinjMarginRead_countCustom (
  LLRP_tSImpinjMarginRead *pThis);

extern LLRP_tResultCode
LLRP_ImpinjMarginRead_addCustom (
  LLRP_tSImpinjMarginRead *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjMarginReadOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEImpinjMarginReadResultType eResult;

    llrp_u16_t OpSpecID;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjMarginReadOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjMarginReadOpSpecResult[];

extern LLRP_tSImpinjMarginReadOpSpecResult *
LLRP_ImpinjMarginReadOpSpecResult_construct (void);

extern void
LLRP_ImpinjMarginReadOpSpecResult_destruct (
 LLRP_tSImpinjMarginReadOpSpecResult * pThis);

extern void
LLRP_ImpinjMarginReadOpSpecResult_decodeFields (
 LLRP_tSImpinjMarginReadOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjMarginReadOpSpecResult_assimilateSubParameters (
 LLRP_tSImpinjMarginReadOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjMarginReadOpSpecResult_encode (
  const LLRP_tSImpinjMarginReadOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjMarginReadOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjMarginReadOpSpecResult_Result;

extern LLRP_tEImpinjMarginReadResultType
LLRP_ImpinjMarginReadOpSpecResult_getResult (
  LLRP_tSImpinjMarginReadOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ImpinjMarginReadOpSpecResult_setResult (
  LLRP_tSImpinjMarginReadOpSpecResult *pThis,
  LLRP_tEImpinjMarginReadResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjMarginReadOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ImpinjMarginReadOpSpecResult_getOpSpecID (
  LLRP_tSImpinjMarginReadOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ImpinjMarginReadOpSpecResult_setOpSpecID (
  LLRP_tSImpinjMarginReadOpSpecResult *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjMarginReadOpSpecResult_beginCustom (
  LLRP_tSImpinjMarginReadOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjMarginReadOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjMarginReadOpSpecResult_clearCustom (
  LLRP_tSImpinjMarginReadOpSpecResult *pThis);

extern int
LLRP_ImpinjMarginReadOpSpecResult_countCustom (
  LLRP_tSImpinjMarginReadOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ImpinjMarginReadOpSpecResult_addCustom (
  LLRP_tSImpinjMarginReadOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjBLEVersion
{
    LLRP_tSParameter hdr;
  
    llrp_utf8v_t FirmwareVersion;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjBLEVersion;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjBLEVersion[];

extern LLRP_tSImpinjBLEVersion *
LLRP_ImpinjBLEVersion_construct (void);

extern void
LLRP_ImpinjBLEVersion_destruct (
 LLRP_tSImpinjBLEVersion * pThis);

extern void
LLRP_ImpinjBLEVersion_decodeFields (
 LLRP_tSImpinjBLEVersion * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjBLEVersion_assimilateSubParameters (
 LLRP_tSImpinjBLEVersion * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjBLEVersion_encode (
  const LLRP_tSImpinjBLEVersion *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjBLEVersion_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjBLEVersion_FirmwareVersion;

extern llrp_utf8v_t
LLRP_ImpinjBLEVersion_getFirmwareVersion (
  LLRP_tSImpinjBLEVersion *pThis);

extern LLRP_tResultCode
LLRP_ImpinjBLEVersion_setFirmwareVersion (
  LLRP_tSImpinjBLEVersion *pThis,
  llrp_utf8v_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjBLEVersion_beginCustom (
  LLRP_tSImpinjBLEVersion *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjBLEVersion_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjBLEVersion_clearCustom (
  LLRP_tSImpinjBLEVersion *pThis);

extern int
LLRP_ImpinjBLEVersion_countCustom (
  LLRP_tSImpinjBLEVersion *pThis);

extern LLRP_tResultCode
LLRP_ImpinjBLEVersion_addCustom (
  LLRP_tSImpinjBLEVersion *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjLocationAlgorithmControl
{
    LLRP_tSParameter hdr;
  
    llrp_u32v_t ControlData;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjLocationAlgorithmControl;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjLocationAlgorithmControl[];

extern LLRP_tSImpinjLocationAlgorithmControl *
LLRP_ImpinjLocationAlgorithmControl_construct (void);

extern void
LLRP_ImpinjLocationAlgorithmControl_destruct (
 LLRP_tSImpinjLocationAlgorithmControl * pThis);

extern void
LLRP_ImpinjLocationAlgorithmControl_decodeFields (
 LLRP_tSImpinjLocationAlgorithmControl * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjLocationAlgorithmControl_assimilateSubParameters (
 LLRP_tSImpinjLocationAlgorithmControl * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjLocationAlgorithmControl_encode (
  const LLRP_tSImpinjLocationAlgorithmControl *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjLocationAlgorithmControl_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjLocationAlgorithmControl_ControlData;

extern llrp_u32v_t
LLRP_ImpinjLocationAlgorithmControl_getControlData (
  LLRP_tSImpinjLocationAlgorithmControl *pThis);

extern LLRP_tResultCode
LLRP_ImpinjLocationAlgorithmControl_setControlData (
  LLRP_tSImpinjLocationAlgorithmControl *pThis,
  llrp_u32v_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjLocationAlgorithmControl_beginCustom (
  LLRP_tSImpinjLocationAlgorithmControl *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjLocationAlgorithmControl_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjLocationAlgorithmControl_clearCustom (
  LLRP_tSImpinjLocationAlgorithmControl *pThis);

extern int
LLRP_ImpinjLocationAlgorithmControl_countCustom (
  LLRP_tSImpinjLocationAlgorithmControl *pThis);

extern LLRP_tResultCode
LLRP_ImpinjLocationAlgorithmControl_addCustom (
  LLRP_tSImpinjLocationAlgorithmControl *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjRFPowerSweep
{
    LLRP_tSParameter hdr;
  
    llrp_u1_t EnableRFPowerSweep;

    llrp_u16_t MinimumPowerLevel;

    llrp_u16_t PowerLevelStepSize;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjRFPowerSweep;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjRFPowerSweep[];

extern LLRP_tSImpinjRFPowerSweep *
LLRP_ImpinjRFPowerSweep_construct (void);

extern void
LLRP_ImpinjRFPowerSweep_destruct (
 LLRP_tSImpinjRFPowerSweep * pThis);

extern void
LLRP_ImpinjRFPowerSweep_decodeFields (
 LLRP_tSImpinjRFPowerSweep * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjRFPowerSweep_assimilateSubParameters (
 LLRP_tSImpinjRFPowerSweep * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjRFPowerSweep_encode (
  const LLRP_tSImpinjRFPowerSweep *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjRFPowerSweep_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjRFPowerSweep_EnableRFPowerSweep;

extern llrp_u1_t
LLRP_ImpinjRFPowerSweep_getEnableRFPowerSweep (
  LLRP_tSImpinjRFPowerSweep *pThis);

extern LLRP_tResultCode
LLRP_ImpinjRFPowerSweep_setEnableRFPowerSweep (
  LLRP_tSImpinjRFPowerSweep *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjRFPowerSweep_MinimumPowerLevel;

extern llrp_u16_t
LLRP_ImpinjRFPowerSweep_getMinimumPowerLevel (
  LLRP_tSImpinjRFPowerSweep *pThis);

extern LLRP_tResultCode
LLRP_ImpinjRFPowerSweep_setMinimumPowerLevel (
  LLRP_tSImpinjRFPowerSweep *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjRFPowerSweep_PowerLevelStepSize;

extern llrp_u16_t
LLRP_ImpinjRFPowerSweep_getPowerLevelStepSize (
  LLRP_tSImpinjRFPowerSweep *pThis);

extern LLRP_tResultCode
LLRP_ImpinjRFPowerSweep_setPowerLevelStepSize (
  LLRP_tSImpinjRFPowerSweep *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjRFPowerSweep_beginCustom (
  LLRP_tSImpinjRFPowerSweep *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjRFPowerSweep_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjRFPowerSweep_clearCustom (
  LLRP_tSImpinjRFPowerSweep *pThis);

extern int
LLRP_ImpinjRFPowerSweep_countCustom (
  LLRP_tSImpinjRFPowerSweep *pThis);

extern LLRP_tResultCode
LLRP_ImpinjRFPowerSweep_addCustom (
  LLRP_tSImpinjRFPowerSweep *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjTruncatedReplyConfiguration
{
    LLRP_tSParameter hdr;
  
    llrp_u1_t Gen2v2TagsOnly;

    llrp_u8_t EPCLength;

    llrp_u16_t Pointer;

    llrp_u1v_t TagMask;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjTruncatedReplyConfiguration;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjTruncatedReplyConfiguration[];

extern LLRP_tSImpinjTruncatedReplyConfiguration *
LLRP_ImpinjTruncatedReplyConfiguration_construct (void);

extern void
LLRP_ImpinjTruncatedReplyConfiguration_destruct (
 LLRP_tSImpinjTruncatedReplyConfiguration * pThis);

extern void
LLRP_ImpinjTruncatedReplyConfiguration_decodeFields (
 LLRP_tSImpinjTruncatedReplyConfiguration * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjTruncatedReplyConfiguration_assimilateSubParameters (
 LLRP_tSImpinjTruncatedReplyConfiguration * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjTruncatedReplyConfiguration_encode (
  const LLRP_tSImpinjTruncatedReplyConfiguration *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjTruncatedReplyConfiguration_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjTruncatedReplyConfiguration_Gen2v2TagsOnly;

extern llrp_u1_t
LLRP_ImpinjTruncatedReplyConfiguration_getGen2v2TagsOnly (
  LLRP_tSImpinjTruncatedReplyConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjTruncatedReplyConfiguration_setGen2v2TagsOnly (
  LLRP_tSImpinjTruncatedReplyConfiguration *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjTruncatedReplyConfiguration_EPCLength;

extern llrp_u8_t
LLRP_ImpinjTruncatedReplyConfiguration_getEPCLength (
  LLRP_tSImpinjTruncatedReplyConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjTruncatedReplyConfiguration_setEPCLength (
  LLRP_tSImpinjTruncatedReplyConfiguration *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjTruncatedReplyConfiguration_Pointer;

extern llrp_u16_t
LLRP_ImpinjTruncatedReplyConfiguration_getPointer (
  LLRP_tSImpinjTruncatedReplyConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjTruncatedReplyConfiguration_setPointer (
  LLRP_tSImpinjTruncatedReplyConfiguration *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjTruncatedReplyConfiguration_TagMask;

extern llrp_u1v_t
LLRP_ImpinjTruncatedReplyConfiguration_getTagMask (
  LLRP_tSImpinjTruncatedReplyConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjTruncatedReplyConfiguration_setTagMask (
  LLRP_tSImpinjTruncatedReplyConfiguration *pThis,
  llrp_u1v_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjTruncatedReplyConfiguration_beginCustom (
  LLRP_tSImpinjTruncatedReplyConfiguration *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjTruncatedReplyConfiguration_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjTruncatedReplyConfiguration_clearCustom (
  LLRP_tSImpinjTruncatedReplyConfiguration *pThis);

extern int
LLRP_ImpinjTruncatedReplyConfiguration_countCustom (
  LLRP_tSImpinjTruncatedReplyConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjTruncatedReplyConfiguration_addCustom (
  LLRP_tSImpinjTruncatedReplyConfiguration *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjAuthenticate
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t OpSpecID;

    llrp_u32_t AccessPassword;

    llrp_u1_t SendRep;

    llrp_u1_t IncRepLen;

    llrp_u8_t CSI;

    llrp_u1v_t Message;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjAuthenticate;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjAuthenticate[];

extern LLRP_tSImpinjAuthenticate *
LLRP_ImpinjAuthenticate_construct (void);

extern void
LLRP_ImpinjAuthenticate_destruct (
 LLRP_tSImpinjAuthenticate * pThis);

extern void
LLRP_ImpinjAuthenticate_decodeFields (
 LLRP_tSImpinjAuthenticate * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjAuthenticate_assimilateSubParameters (
 LLRP_tSImpinjAuthenticate * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjAuthenticate_encode (
  const LLRP_tSImpinjAuthenticate *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjAuthenticate_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjAuthenticate_OpSpecID;

extern llrp_u16_t
LLRP_ImpinjAuthenticate_getOpSpecID (
  LLRP_tSImpinjAuthenticate *pThis);

extern LLRP_tResultCode
LLRP_ImpinjAuthenticate_setOpSpecID (
  LLRP_tSImpinjAuthenticate *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjAuthenticate_AccessPassword;

extern llrp_u32_t
LLRP_ImpinjAuthenticate_getAccessPassword (
  LLRP_tSImpinjAuthenticate *pThis);

extern LLRP_tResultCode
LLRP_ImpinjAuthenticate_setAccessPassword (
  LLRP_tSImpinjAuthenticate *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjAuthenticate_SendRep;

extern llrp_u1_t
LLRP_ImpinjAuthenticate_getSendRep (
  LLRP_tSImpinjAuthenticate *pThis);

extern LLRP_tResultCode
LLRP_ImpinjAuthenticate_setSendRep (
  LLRP_tSImpinjAuthenticate *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjAuthenticate_IncRepLen;

extern llrp_u1_t
LLRP_ImpinjAuthenticate_getIncRepLen (
  LLRP_tSImpinjAuthenticate *pThis);

extern LLRP_tResultCode
LLRP_ImpinjAuthenticate_setIncRepLen (
  LLRP_tSImpinjAuthenticate *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjAuthenticate_CSI;

extern llrp_u8_t
LLRP_ImpinjAuthenticate_getCSI (
  LLRP_tSImpinjAuthenticate *pThis);

extern LLRP_tResultCode
LLRP_ImpinjAuthenticate_setCSI (
  LLRP_tSImpinjAuthenticate *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjAuthenticate_Message;

extern llrp_u1v_t
LLRP_ImpinjAuthenticate_getMessage (
  LLRP_tSImpinjAuthenticate *pThis);

extern LLRP_tResultCode
LLRP_ImpinjAuthenticate_setMessage (
  LLRP_tSImpinjAuthenticate *pThis,
  llrp_u1v_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjAuthenticate_beginCustom (
  LLRP_tSImpinjAuthenticate *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjAuthenticate_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjAuthenticate_clearCustom (
  LLRP_tSImpinjAuthenticate *pThis);

extern int
LLRP_ImpinjAuthenticate_countCustom (
  LLRP_tSImpinjAuthenticate *pThis);

extern LLRP_tResultCode
LLRP_ImpinjAuthenticate_addCustom (
  LLRP_tSImpinjAuthenticate *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjAuthenticateOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEImpinjAuthenticateResultType eResult;

    llrp_u16_t OpSpecID;

    llrp_u1v_t Response;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjAuthenticateOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjAuthenticateOpSpecResult[];

extern LLRP_tSImpinjAuthenticateOpSpecResult *
LLRP_ImpinjAuthenticateOpSpecResult_construct (void);

extern void
LLRP_ImpinjAuthenticateOpSpecResult_destruct (
 LLRP_tSImpinjAuthenticateOpSpecResult * pThis);

extern void
LLRP_ImpinjAuthenticateOpSpecResult_decodeFields (
 LLRP_tSImpinjAuthenticateOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjAuthenticateOpSpecResult_assimilateSubParameters (
 LLRP_tSImpinjAuthenticateOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjAuthenticateOpSpecResult_encode (
  const LLRP_tSImpinjAuthenticateOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjAuthenticateOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjAuthenticateOpSpecResult_Result;

extern LLRP_tEImpinjAuthenticateResultType
LLRP_ImpinjAuthenticateOpSpecResult_getResult (
  LLRP_tSImpinjAuthenticateOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ImpinjAuthenticateOpSpecResult_setResult (
  LLRP_tSImpinjAuthenticateOpSpecResult *pThis,
  LLRP_tEImpinjAuthenticateResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjAuthenticateOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ImpinjAuthenticateOpSpecResult_getOpSpecID (
  LLRP_tSImpinjAuthenticateOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ImpinjAuthenticateOpSpecResult_setOpSpecID (
  LLRP_tSImpinjAuthenticateOpSpecResult *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjAuthenticateOpSpecResult_Response;

extern llrp_u1v_t
LLRP_ImpinjAuthenticateOpSpecResult_getResponse (
  LLRP_tSImpinjAuthenticateOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ImpinjAuthenticateOpSpecResult_setResponse (
  LLRP_tSImpinjAuthenticateOpSpecResult *pThis,
  llrp_u1v_t Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjAuthenticateOpSpecResult_beginCustom (
  LLRP_tSImpinjAuthenticateOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjAuthenticateOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjAuthenticateOpSpecResult_clearCustom (
  LLRP_tSImpinjAuthenticateOpSpecResult *pThis);

extern int
LLRP_ImpinjAuthenticateOpSpecResult_countCustom (
  LLRP_tSImpinjAuthenticateOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ImpinjAuthenticateOpSpecResult_addCustom (
  LLRP_tSImpinjAuthenticateOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjTagFilterVerificationConfiguration
{
    LLRP_tSParameter hdr;
  
    LLRP_tEImpinjTagFilterVerificationMode eTagFilterVerificationMode;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjTagFilterVerificationConfiguration;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjTagFilterVerificationConfiguration[];

extern LLRP_tSImpinjTagFilterVerificationConfiguration *
LLRP_ImpinjTagFilterVerificationConfiguration_construct (void);

extern void
LLRP_ImpinjTagFilterVerificationConfiguration_destruct (
 LLRP_tSImpinjTagFilterVerificationConfiguration * pThis);

extern void
LLRP_ImpinjTagFilterVerificationConfiguration_decodeFields (
 LLRP_tSImpinjTagFilterVerificationConfiguration * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjTagFilterVerificationConfiguration_assimilateSubParameters (
 LLRP_tSImpinjTagFilterVerificationConfiguration * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjTagFilterVerificationConfiguration_encode (
  const LLRP_tSImpinjTagFilterVerificationConfiguration *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjTagFilterVerificationConfiguration_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjTagFilterVerificationConfiguration_TagFilterVerificationMode;

extern LLRP_tEImpinjTagFilterVerificationMode
LLRP_ImpinjTagFilterVerificationConfiguration_getTagFilterVerificationMode (
  LLRP_tSImpinjTagFilterVerificationConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjTagFilterVerificationConfiguration_setTagFilterVerificationMode (
  LLRP_tSImpinjTagFilterVerificationConfiguration *pThis,
  LLRP_tEImpinjTagFilterVerificationMode Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjTagFilterVerificationConfiguration_beginCustom (
  LLRP_tSImpinjTagFilterVerificationConfiguration *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjTagFilterVerificationConfiguration_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjTagFilterVerificationConfiguration_clearCustom (
  LLRP_tSImpinjTagFilterVerificationConfiguration *pThis);

extern int
LLRP_ImpinjTagFilterVerificationConfiguration_countCustom (
  LLRP_tSImpinjTagFilterVerificationConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ImpinjTagFilterVerificationConfiguration_addCustom (
  LLRP_tSImpinjTagFilterVerificationConfiguration *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SImpinjEnableTagPopulationEstimationAlgorithm
{
    LLRP_tSParameter hdr;
  
    LLRP_tEImpinjTagPopulationEstimationMode eTagPopulationEstimationMode;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdImpinjEnableTagPopulationEstimationAlgorithm;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdImpinjEnableTagPopulationEstimationAlgorithm[];

extern LLRP_tSImpinjEnableTagPopulationEstimationAlgorithm *
LLRP_ImpinjEnableTagPopulationEstimationAlgorithm_construct (void);

extern void
LLRP_ImpinjEnableTagPopulationEstimationAlgorithm_destruct (
 LLRP_tSImpinjEnableTagPopulationEstimationAlgorithm * pThis);

extern void
LLRP_ImpinjEnableTagPopulationEstimationAlgorithm_decodeFields (
 LLRP_tSImpinjEnableTagPopulationEstimationAlgorithm * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ImpinjEnableTagPopulationEstimationAlgorithm_assimilateSubParameters (
 LLRP_tSImpinjEnableTagPopulationEstimationAlgorithm * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ImpinjEnableTagPopulationEstimationAlgorithm_encode (
  const LLRP_tSImpinjEnableTagPopulationEstimationAlgorithm *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ImpinjEnableTagPopulationEstimationAlgorithm_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdImpinjEnableTagPopulationEstimationAlgorithm_TagPopulationEstimationMode;

extern LLRP_tEImpinjTagPopulationEstimationMode
LLRP_ImpinjEnableTagPopulationEstimationAlgorithm_getTagPopulationEstimationMode (
  LLRP_tSImpinjEnableTagPopulationEstimationAlgorithm *pThis);

extern LLRP_tResultCode
LLRP_ImpinjEnableTagPopulationEstimationAlgorithm_setTagPopulationEstimationMode (
  LLRP_tSImpinjEnableTagPopulationEstimationAlgorithm *pThis,
  LLRP_tEImpinjTagPopulationEstimationMode Value);

  
extern LLRP_tSParameter *
LLRP_ImpinjEnableTagPopulationEstimationAlgorithm_beginCustom (
  LLRP_tSImpinjEnableTagPopulationEstimationAlgorithm *pThis);

extern LLRP_tSParameter *
LLRP_ImpinjEnableTagPopulationEstimationAlgorithm_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ImpinjEnableTagPopulationEstimationAlgorithm_clearCustom (
  LLRP_tSImpinjEnableTagPopulationEstimationAlgorithm *pThis);

extern int
LLRP_ImpinjEnableTagPopulationEstimationAlgorithm_countCustom (
  LLRP_tSImpinjEnableTagPopulationEstimationAlgorithm *pThis);

extern LLRP_tResultCode
LLRP_ImpinjEnableTagPopulationEstimationAlgorithm_addCustom (
  LLRP_tSImpinjEnableTagPopulationEstimationAlgorithm *pThis,
  LLRP_tSParameter *pValue);





void
LLRP_enrollImpinjTypesIntoRegistry (
  LLRP_tSTypeRegistry *         pTypeRegistry);


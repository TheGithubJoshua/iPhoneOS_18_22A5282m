@class NSString, GEOLocation, PBDataReader;

@interface GEOCellConnectionQuality : PBCodable <NSCopying> {
    PBDataReader *_reader;
    unsigned long long _bytesDlTotal;
    unsigned long long _bytesUlTotal;
    NSString *_callID;
    NSString *_cellGCI;
    NSString *_cellHomePLMN2;
    NSString *_cellHomePLMN;
    NSString *_cellRatType;
    NSString *_cellServiceProvider2;
    NSString *_cellServiceProvider;
    NSString *_ftIRATRecommendationReason;
    NSString *_ftIRATRecommendation;
    GEOLocation *_location;
    unsigned long long _timeOfDay;
    long long _wifiRssi;
    long long _wifiSNR;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _cellArfcn;
    unsigned int _cellBand;
    unsigned int _cellBssLoad;
    unsigned int _cellDataLQM;
    unsigned int _cellEstimatedBW;
    int _cellLteRSRP;
    int _cellLteRSRQ;
    int _cellLteSNR;
    unsigned int _cellMaxDlCaNumConf;
    unsigned int _cellMaxUlCaNumConf;
    unsigned int _cellNpn;
    int _cellNrRSRP;
    int _cellNrRSRQ;
    int _cellNrSNR;
    unsigned int _cellNsaFR1;
    unsigned int _cellNsaFR2;
    unsigned int _cellPMax;
    unsigned int _cellRrcState;
    unsigned int _cellTotalDlBW;
    unsigned int _cellTotalUlBW;
    unsigned int _cellVoiceLQM;
    unsigned int _connectionDuration;
    int _connectionType;
    float _dlMedThroughput;
    float _dlPeakThroughput;
    int _environment;
    unsigned int _ftCounter;
    unsigned int _ftFacetimeAction;
    unsigned int _ftFacetimePacketLoss;
    unsigned int _ftFacetimeTimeDelay;
    unsigned int _latency;
    int _messageTrigger;
    int _messageType;
    int _motionState;
    float _ulMedThroughput;
    float _ulPeakThroughput;
    unsigned int _wifiBand;
    unsigned int _wifiCca;
    unsigned int _wifiChannelWidth;
    unsigned int _wifiChannel;
    unsigned int _wifiEstimatedBW;
    unsigned int _wifiPhyMode;
    unsigned int _wifiQbssLoad;
    unsigned int _wifiRxPhyRate;
    unsigned int _wifiRxRetry;
    unsigned int _wifiStationCount;
    unsigned int _wifiTxPER;
    unsigned int _wifiTxPhyRate;
    unsigned int _wrmAudioErasure;
    unsigned int _wrmVideoErasure;
    BOOL _cellIsLimitedService;
    BOOL _cellIsNoService;
    BOOL _cellIsRoaming;
    BOOL _cellNpnStatus;
    BOOL _isCallFailed;
    BOOL _isEmergency;
    BOOL _lowInternetDL;
    BOOL _lowInternetUL;
    BOOL _wifiCaptiveNetworks;
    BOOL _wrmAlertedMode;
    BOOL _wrmIsPCDetected;
    BOOL _wrmIsStallDetected;
    struct { unsigned char has_bytesDlTotal : 1; unsigned char has_bytesUlTotal : 1; unsigned char has_timeOfDay : 1; unsigned char has_wifiRssi : 1; unsigned char has_wifiSNR : 1; unsigned char has_cellArfcn : 1; unsigned char has_cellBand : 1; unsigned char has_cellBssLoad : 1; unsigned char has_cellDataLQM : 1; unsigned char has_cellEstimatedBW : 1; unsigned char has_cellLteRSRP : 1; unsigned char has_cellLteRSRQ : 1; unsigned char has_cellLteSNR : 1; unsigned char has_cellMaxDlCaNumConf : 1; unsigned char has_cellMaxUlCaNumConf : 1; unsigned char has_cellNpn : 1; unsigned char has_cellNrRSRP : 1; unsigned char has_cellNrRSRQ : 1; unsigned char has_cellNrSNR : 1; unsigned char has_cellNsaFR1 : 1; unsigned char has_cellNsaFR2 : 1; unsigned char has_cellPMax : 1; unsigned char has_cellRrcState : 1; unsigned char has_cellTotalDlBW : 1; unsigned char has_cellTotalUlBW : 1; unsigned char has_cellVoiceLQM : 1; unsigned char has_connectionDuration : 1; unsigned char has_connectionType : 1; unsigned char has_dlMedThroughput : 1; unsigned char has_dlPeakThroughput : 1; unsigned char has_environment : 1; unsigned char has_ftCounter : 1; unsigned char has_ftFacetimeAction : 1; unsigned char has_ftFacetimePacketLoss : 1; unsigned char has_ftFacetimeTimeDelay : 1; unsigned char has_latency : 1; unsigned char has_messageTrigger : 1; unsigned char has_messageType : 1; unsigned char has_motionState : 1; unsigned char has_ulMedThroughput : 1; unsigned char has_ulPeakThroughput : 1; unsigned char has_wifiBand : 1; unsigned char has_wifiCca : 1; unsigned char has_wifiChannelWidth : 1; unsigned char has_wifiChannel : 1; unsigned char has_wifiEstimatedBW : 1; unsigned char has_wifiPhyMode : 1; unsigned char has_wifiQbssLoad : 1; unsigned char has_wifiRxPhyRate : 1; unsigned char has_wifiRxRetry : 1; unsigned char has_wifiStationCount : 1; unsigned char has_wifiTxPER : 1; unsigned char has_wifiTxPhyRate : 1; unsigned char has_wrmAudioErasure : 1; unsigned char has_wrmVideoErasure : 1; unsigned char has_cellIsLimitedService : 1; unsigned char has_cellIsNoService : 1; unsigned char has_cellIsRoaming : 1; unsigned char has_cellNpnStatus : 1; unsigned char has_isCallFailed : 1; unsigned char has_isEmergency : 1; unsigned char has_lowInternetDL : 1; unsigned char has_lowInternetUL : 1; unsigned char has_wifiCaptiveNetworks : 1; unsigned char has_wrmAlertedMode : 1; unsigned char has_wrmIsPCDetected : 1; unsigned char has_wrmIsStallDetected : 1; unsigned char read_callID : 1; unsigned char read_cellGCI : 1; unsigned char read_cellHomePLMN2 : 1; unsigned char read_cellHomePLMN : 1; unsigned char read_cellRatType : 1; unsigned char read_cellServiceProvider2 : 1; unsigned char read_cellServiceProvider : 1; unsigned char read_ftIRATRecommendationReason : 1; unsigned char read_ftIRATRecommendation : 1; unsigned char read_location : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasMotionState;
@property (nonatomic) int motionState;
@property (nonatomic) BOOL hasMessageType;
@property (nonatomic) int messageType;
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic) int connectionType;
@property (nonatomic) BOOL hasMessageTrigger;
@property (nonatomic) int messageTrigger;
@property (nonatomic) BOOL hasEnvironment;
@property (nonatomic) int environment;
@property (nonatomic) BOOL hasTimeOfDay;
@property (nonatomic) unsigned long long timeOfDay;
@property (nonatomic) BOOL hasConnectionDuration;
@property (nonatomic) unsigned int connectionDuration;
@property (nonatomic) BOOL hasIsEmergency;
@property (nonatomic) BOOL isEmergency;
@property (nonatomic) BOOL hasBytesDlTotal;
@property (nonatomic) unsigned long long bytesDlTotal;
@property (nonatomic) BOOL hasBytesUlTotal;
@property (nonatomic) unsigned long long bytesUlTotal;
@property (readonly, nonatomic) BOOL hasCallID;
@property (retain, nonatomic) NSString *callID;
@property (nonatomic) BOOL hasIsCallFailed;
@property (nonatomic) BOOL isCallFailed;
@property (nonatomic) BOOL hasDlPeakThroughput;
@property (nonatomic) float dlPeakThroughput;
@property (nonatomic) BOOL hasUlPeakThroughput;
@property (nonatomic) float ulPeakThroughput;
@property (nonatomic) BOOL hasDlMedThroughput;
@property (nonatomic) float dlMedThroughput;
@property (nonatomic) BOOL hasUlMedThroughput;
@property (nonatomic) float ulMedThroughput;
@property (nonatomic) BOOL hasLowInternetUL;
@property (nonatomic) BOOL lowInternetUL;
@property (nonatomic) BOOL hasLowInternetDL;
@property (nonatomic) BOOL lowInternetDL;
@property (nonatomic) BOOL hasLatency;
@property (nonatomic) unsigned int latency;
@property (nonatomic) BOOL hasWifiRssi;
@property (nonatomic) long long wifiRssi;
@property (nonatomic) BOOL hasWifiTxPER;
@property (nonatomic) unsigned int wifiTxPER;
@property (nonatomic) BOOL hasWifiSNR;
@property (nonatomic) long long wifiSNR;
@property (nonatomic) BOOL hasWifiCaptiveNetworks;
@property (nonatomic) BOOL wifiCaptiveNetworks;
@property (nonatomic) BOOL hasWifiRxRetry;
@property (nonatomic) unsigned int wifiRxRetry;
@property (nonatomic) BOOL hasWifiEstimatedBW;
@property (nonatomic) unsigned int wifiEstimatedBW;
@property (nonatomic) BOOL hasWifiTxPhyRate;
@property (nonatomic) unsigned int wifiTxPhyRate;
@property (nonatomic) BOOL hasWifiRxPhyRate;
@property (nonatomic) unsigned int wifiRxPhyRate;
@property (nonatomic) BOOL hasWifiQbssLoad;
@property (nonatomic) unsigned int wifiQbssLoad;
@property (nonatomic) BOOL hasWifiCca;
@property (nonatomic) unsigned int wifiCca;
@property (nonatomic) BOOL hasWifiStationCount;
@property (nonatomic) unsigned int wifiStationCount;
@property (nonatomic) BOOL hasWifiBand;
@property (nonatomic) unsigned int wifiBand;
@property (nonatomic) BOOL hasWifiChannel;
@property (nonatomic) unsigned int wifiChannel;
@property (nonatomic) BOOL hasWifiChannelWidth;
@property (nonatomic) unsigned int wifiChannelWidth;
@property (nonatomic) BOOL hasWifiPhyMode;
@property (nonatomic) unsigned int wifiPhyMode;
@property (readonly, nonatomic) BOOL hasCellGCI;
@property (retain, nonatomic) NSString *cellGCI;
@property (readonly, nonatomic) BOOL hasCellHomePLMN;
@property (retain, nonatomic) NSString *cellHomePLMN;
@property (readonly, nonatomic) BOOL hasCellHomePLMN2;
@property (retain, nonatomic) NSString *cellHomePLMN2;
@property (readonly, nonatomic) BOOL hasCellServiceProvider;
@property (retain, nonatomic) NSString *cellServiceProvider;
@property (readonly, nonatomic) BOOL hasCellServiceProvider2;
@property (retain, nonatomic) NSString *cellServiceProvider2;
@property (nonatomic) BOOL hasCellVoiceLQM;
@property (nonatomic) unsigned int cellVoiceLQM;
@property (nonatomic) BOOL hasCellNpnStatus;
@property (nonatomic) BOOL cellNpnStatus;
@property (nonatomic) BOOL hasCellNpn;
@property (nonatomic) unsigned int cellNpn;
@property (nonatomic) BOOL hasCellArfcn;
@property (nonatomic) unsigned int cellArfcn;
@property (nonatomic) BOOL hasCellBand;
@property (nonatomic) unsigned int cellBand;
@property (readonly, nonatomic) BOOL hasCellRatType;
@property (retain, nonatomic) NSString *cellRatType;
@property (nonatomic) BOOL hasCellLteRSRP;
@property (nonatomic) int cellLteRSRP;
@property (nonatomic) BOOL hasCellLteSNR;
@property (nonatomic) int cellLteSNR;
@property (nonatomic) BOOL hasCellLteRSRQ;
@property (nonatomic) int cellLteRSRQ;
@property (nonatomic) BOOL hasCellNrRSRP;
@property (nonatomic) int cellNrRSRP;
@property (nonatomic) BOOL hasCellNrRSRQ;
@property (nonatomic) int cellNrRSRQ;
@property (nonatomic) BOOL hasCellNrSNR;
@property (nonatomic) int cellNrSNR;
@property (nonatomic) BOOL hasCellDataLQM;
@property (nonatomic) unsigned int cellDataLQM;
@property (nonatomic) BOOL hasCellRrcState;
@property (nonatomic) unsigned int cellRrcState;
@property (nonatomic) BOOL hasCellNsaFR1;
@property (nonatomic) unsigned int cellNsaFR1;
@property (nonatomic) BOOL hasCellNsaFR2;
@property (nonatomic) unsigned int cellNsaFR2;
@property (nonatomic) BOOL hasCellTotalDlBW;
@property (nonatomic) unsigned int cellTotalDlBW;
@property (nonatomic) BOOL hasCellTotalUlBW;
@property (nonatomic) unsigned int cellTotalUlBW;
@property (nonatomic) BOOL hasCellBssLoad;
@property (nonatomic) unsigned int cellBssLoad;
@property (nonatomic) BOOL hasCellMaxDlCaNumConf;
@property (nonatomic) unsigned int cellMaxDlCaNumConf;
@property (nonatomic) BOOL hasCellMaxUlCaNumConf;
@property (nonatomic) unsigned int cellMaxUlCaNumConf;
@property (nonatomic) BOOL hasCellEstimatedBW;
@property (nonatomic) unsigned int cellEstimatedBW;
@property (nonatomic) BOOL hasCellPMax;
@property (nonatomic) unsigned int cellPMax;
@property (nonatomic) BOOL hasCellIsRoaming;
@property (nonatomic) BOOL cellIsRoaming;
@property (nonatomic) BOOL hasCellIsNoService;
@property (nonatomic) BOOL cellIsNoService;
@property (nonatomic) BOOL hasCellIsLimitedService;
@property (nonatomic) BOOL cellIsLimitedService;
@property (readonly, nonatomic) BOOL hasFtIRATRecommendation;
@property (retain, nonatomic) NSString *ftIRATRecommendation;
@property (readonly, nonatomic) BOOL hasFtIRATRecommendationReason;
@property (retain, nonatomic) NSString *ftIRATRecommendationReason;
@property (nonatomic) BOOL hasFtFacetimePacketLoss;
@property (nonatomic) unsigned int ftFacetimePacketLoss;
@property (nonatomic) BOOL hasFtFacetimeAction;
@property (nonatomic) unsigned int ftFacetimeAction;
@property (nonatomic) BOOL hasFtFacetimeTimeDelay;
@property (nonatomic) unsigned int ftFacetimeTimeDelay;
@property (nonatomic) BOOL hasFtCounter;
@property (nonatomic) unsigned int ftCounter;
@property (nonatomic) BOOL hasWrmAlertedMode;
@property (nonatomic) BOOL wrmAlertedMode;
@property (nonatomic) BOOL hasWrmIsStallDetected;
@property (nonatomic) BOOL wrmIsStallDetected;
@property (nonatomic) BOOL hasWrmIsPCDetected;
@property (nonatomic) BOOL wrmIsPCDetected;
@property (nonatomic) BOOL hasWrmVideoErasure;
@property (nonatomic) unsigned int wrmVideoErasure;
@property (nonatomic) BOOL hasWrmAudioErasure;
@property (nonatomic) unsigned int wrmAudioErasure;
@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) GEOLocation *location;

+ (BOOL)isValid:(id)a0;

- (int)StringAsConnectionType:(id)a0;
- (id)connectionTypeAsString:(int)a0;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)messageTypeAsString:(int)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (int)StringAsMessageType:(id)a0;
- (id)jsonRepresentation;
- (int)StringAsMotionState:(id)a0;
- (id)motionStateAsString:(int)a0;
- (int)StringAsEnvironment:(id)a0;
- (int)StringAsMessageTrigger:(id)a0;
- (id)environmentAsString:(int)a0;
- (id)messageTriggerAsString:(int)a0;

@end
@class NSMutableArray;

@interface NWAWDLibnetcoreCellularFallbackReport : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _networkEvents;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _timeToNetworkEventsMsecs;
    struct { unsigned char fallbackTimerMsecs : 1; unsigned char cellularBand : 1; unsigned char cellularRadioTechnology : 1; unsigned char denyReason : 1; unsigned char wifiRadioTechnology : 1; unsigned char fellback : 1; } _has;
}

@property (nonatomic) BOOL hasFellback;
@property (nonatomic) BOOL fellback;
@property (nonatomic) BOOL hasDenyReason;
@property (nonatomic) int denyReason;
@property (nonatomic) BOOL hasFallbackTimerMsecs;
@property (nonatomic) unsigned long long fallbackTimerMsecs;
@property (readonly, nonatomic) unsigned long long networkEventsCount;
@property (readonly, nonatomic) int *networkEvents;
@property (readonly, nonatomic) unsigned long long timeToNetworkEventsMsecsCount;
@property (readonly, nonatomic) unsigned long long *timeToNetworkEventsMsecs;
@property (retain, nonatomic) NSMutableArray *primaryInterfaceAttemptStatisticsReports;
@property (retain, nonatomic) NSMutableArray *dataUsageSnapshotsAtNetworkEvents;
@property (nonatomic) BOOL hasCellularRadioTechnology;
@property (nonatomic) int cellularRadioTechnology;
@property (nonatomic) BOOL hasWifiRadioTechnology;
@property (nonatomic) int wifiRadioTechnology;
@property (nonatomic) BOOL hasCellularBand;
@property (nonatomic) int cellularBand;

+ (Class)dataUsageSnapshotsAtNetworkEventsType;
+ (Class)primaryInterfaceAttemptStatisticsReportsType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (int)StringAsNetworkEvents:(id)a0;
- (int)StringAsCellularBand:(id)a0;
- (int)StringAsCellularRadioTechnology:(id)a0;
- (int)StringAsDenyReason:(id)a0;
- (int)StringAsWifiRadioTechnology:(id)a0;
- (void)addDataUsageSnapshotsAtNetworkEvents:(id)a0;
- (void)addNetworkEvents:(int)a0;
- (void)addPrimaryInterfaceAttemptStatisticsReports:(id)a0;
- (void)addTimeToNetworkEventsMsecs:(unsigned long long)a0;
- (id)cellularBandAsString:(int)a0;
- (id)cellularRadioTechnologyAsString:(int)a0;
- (void)clearDataUsageSnapshotsAtNetworkEvents;
- (void)clearNetworkEvents;
- (void)clearPrimaryInterfaceAttemptStatisticsReports;
- (void)clearTimeToNetworkEventsMsecs;
- (id)dataUsageSnapshotsAtNetworkEventsAtIndex:(unsigned long long)a0;
- (unsigned long long)dataUsageSnapshotsAtNetworkEventsCount;
- (id)denyReasonAsString:(int)a0;
- (id)networkEventsAsString:(int)a0;
- (int)networkEventsAtIndex:(unsigned long long)a0;
- (id)primaryInterfaceAttemptStatisticsReportsAtIndex:(unsigned long long)a0;
- (unsigned long long)primaryInterfaceAttemptStatisticsReportsCount;
- (void)setNetworkEvents:(int *)a0 count:(unsigned long long)a1;
- (void)setTimeToNetworkEventsMsecs:(unsigned long long *)a0 count:(unsigned long long)a1;
- (unsigned long long)timeToNetworkEventsMsecsAtIndex:(unsigned long long)a0;
- (id)wifiRadioTechnologyAsString:(int)a0;

@end

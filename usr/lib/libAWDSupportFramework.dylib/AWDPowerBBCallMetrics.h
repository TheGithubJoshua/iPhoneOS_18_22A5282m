@class NSMutableArray;

@interface AWDPowerBBCallMetrics : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char bBAndDataPowerMicroWatt : 1; unsigned char bBPowerMicroWatt : 1; unsigned char bBTotalAndDataDuration : 1; unsigned char bBTotalCallDuration : 1; unsigned char connectedSleepDuration : 1; unsigned char connectedSleepDurationData : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *metrics;
@property (nonatomic) BOOL hasBBTotalCallDuration;
@property (nonatomic) unsigned int bBTotalCallDuration;
@property (nonatomic) BOOL hasBBPowerMicroWatt;
@property (nonatomic) unsigned int bBPowerMicroWatt;
@property (nonatomic) BOOL hasBBTotalAndDataDuration;
@property (nonatomic) unsigned int bBTotalAndDataDuration;
@property (nonatomic) BOOL hasBBAndDataPowerMicroWatt;
@property (nonatomic) unsigned int bBAndDataPowerMicroWatt;
@property (nonatomic) BOOL hasConnectedSleepDuration;
@property (nonatomic) unsigned int connectedSleepDuration;
@property (nonatomic) BOOL hasConnectedSleepDurationData;
@property (nonatomic) unsigned int connectedSleepDurationData;

+ (Class)metricsType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearMetrics;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)metricsCount;
- (void)addMetrics:(id)a0;
- (id)metricsAtIndex:(unsigned long long)a0;

@end

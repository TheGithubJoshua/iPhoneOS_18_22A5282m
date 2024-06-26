@interface AWDPowerBBCallMetricInfo : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _rxTxDurations;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _sleepStateDurations;
    struct { unsigned char callDuration : 1; unsigned char powerMicroWatt : 1; unsigned char threshold : 1; } _has;
}

@property (nonatomic) BOOL hasThreshold;
@property (nonatomic) unsigned int threshold;
@property (nonatomic) BOOL hasCallDuration;
@property (nonatomic) unsigned int callDuration;
@property (readonly, nonatomic) unsigned long long sleepStateDurationsCount;
@property (readonly, nonatomic) unsigned int *sleepStateDurations;
@property (readonly, nonatomic) unsigned long long rxTxDurationsCount;
@property (readonly, nonatomic) unsigned int *rxTxDurations;
@property (nonatomic) BOOL hasPowerMicroWatt;
@property (nonatomic) unsigned int powerMicroWatt;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)addRxTxDurations:(unsigned int)a0;
- (void)addSleepStateDurations:(unsigned int)a0;
- (void)clearRxTxDurations;
- (void)clearSleepStateDurations;
- (unsigned int)rxTxDurationsAtIndex:(unsigned long long)a0;
- (void)setRxTxDurations:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setSleepStateDurations:(unsigned int *)a0 count:(unsigned long long)a1;
- (unsigned int)sleepStateDurationsAtIndex:(unsigned long long)a0;

@end

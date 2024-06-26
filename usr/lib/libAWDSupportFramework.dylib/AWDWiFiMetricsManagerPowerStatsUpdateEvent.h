@interface AWDWiFiMetricsManagerPowerStatsUpdateEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char associatedSleepDur : 1; unsigned char roamDur : 1; unsigned char totalDur : 1; unsigned char type : 1; unsigned char unassociatedSleepDur : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasType;
@property (nonatomic) unsigned int type;
@property (nonatomic) BOOL hasUnassociatedSleepDur;
@property (nonatomic) unsigned int unassociatedSleepDur;
@property (nonatomic) BOOL hasAssociatedSleepDur;
@property (nonatomic) unsigned int associatedSleepDur;
@property (nonatomic) BOOL hasRoamDur;
@property (nonatomic) unsigned int roamDur;
@property (nonatomic) BOOL hasTotalDur;
@property (nonatomic) unsigned int totalDur;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

@interface GeraStats : PBCodable <NSCopying> {
    struct { unsigned char startTime : 1; unsigned char duration : 1; unsigned char sleepCycleCount : 1; unsigned char sleepDuration : 1; } _has;
}

@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) BOOL hasSleepDuration;
@property (nonatomic) unsigned int sleepDuration;
@property (nonatomic) BOOL hasSleepCycleCount;
@property (nonatomic) unsigned int sleepCycleCount;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) unsigned long long startTime;

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

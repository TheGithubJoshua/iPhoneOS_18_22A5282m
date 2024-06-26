@interface UtraFddStats : PBCodable <NSCopying> {
    struct { unsigned char startTime : 1; unsigned char activeDuration : 1; unsigned char clkHighDuration : 1; unsigned char clkLowDuration : 1; unsigned char clkMedDuration : 1; unsigned char deepSleepCycleCount : 1; unsigned char deepSleepDuration : 1; unsigned char duration : 1; unsigned char lightSleepCycleCount : 1; unsigned char lightSleepDuration : 1; unsigned char voltHighDuration : 1; unsigned char voltLowDuration : 1; unsigned char voltMedDuration : 1; } _has;
}

@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) BOOL hasActiveDuration;
@property (nonatomic) unsigned int activeDuration;
@property (nonatomic) BOOL hasLightSleepDuration;
@property (nonatomic) unsigned int lightSleepDuration;
@property (nonatomic) BOOL hasDeepSleepDuration;
@property (nonatomic) unsigned int deepSleepDuration;
@property (nonatomic) BOOL hasLightSleepCycleCount;
@property (nonatomic) unsigned int lightSleepCycleCount;
@property (nonatomic) BOOL hasDeepSleepCycleCount;
@property (nonatomic) unsigned int deepSleepCycleCount;
@property (nonatomic) BOOL hasVoltLowDuration;
@property (nonatomic) unsigned int voltLowDuration;
@property (nonatomic) BOOL hasVoltMedDuration;
@property (nonatomic) unsigned int voltMedDuration;
@property (nonatomic) BOOL hasVoltHighDuration;
@property (nonatomic) unsigned int voltHighDuration;
@property (nonatomic) BOOL hasClkLowDuration;
@property (nonatomic) unsigned int clkLowDuration;
@property (nonatomic) BOOL hasClkMedDuration;
@property (nonatomic) unsigned int clkMedDuration;
@property (nonatomic) BOOL hasClkHighDuration;
@property (nonatomic) unsigned int clkHighDuration;
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

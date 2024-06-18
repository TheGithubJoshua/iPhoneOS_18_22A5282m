@class HDCodableRoutineLocation;

@interface HDCodableRoutineScenarioTriggeredRequest : PBRequest <NSCopying> {
    struct { unsigned char triggerTypes : 1; } _has;
}

@property (nonatomic) BOOL hasTriggerTypes;
@property (nonatomic) unsigned long long triggerTypes;
@property (readonly, nonatomic) BOOL hasCurrentLocation;
@property (retain, nonatomic) HDCodableRoutineLocation *currentLocation;

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

@end

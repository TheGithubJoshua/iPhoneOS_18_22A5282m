@interface GEORoutingSettingsCyclingPrefs : PBCodable <NSCopying> {
    BOOL _autoRecordWorkout;
    BOOL _avoidBusyRoads;
    BOOL _avoidHills;
    BOOL _avoidStairs;
    BOOL _eBike;
    struct { unsigned char has_autoRecordWorkout : 1; unsigned char has_avoidBusyRoads : 1; unsigned char has_avoidHills : 1; unsigned char has_avoidStairs : 1; unsigned char has_eBike : 1; } _flags;
}

@property (nonatomic) BOOL hasAvoidStairs;
@property (nonatomic) BOOL avoidStairs;
@property (nonatomic) BOOL hasAvoidHills;
@property (nonatomic) BOOL avoidHills;
@property (nonatomic) BOOL hasAvoidBusyRoads;
@property (nonatomic) BOOL avoidBusyRoads;
@property (nonatomic) BOOL hasEBike;
@property (nonatomic) BOOL eBike;
@property (nonatomic) BOOL hasAutoRecordWorkout;
@property (nonatomic) BOOL autoRecordWorkout;

+ (BOOL)isValid:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;

@end
@interface CLPBaroCalibrationIndication : PBCodable <NSCopying> {
    struct { unsigned char outdoorConfidence : 1; unsigned char mapMatchRoadType : 1; unsigned char isCalibratedBarometricAlt : 1; unsigned char isMapMatched : 1; unsigned char isOutdoorContext : 1; } _has;
}

@property (nonatomic) BOOL hasIsCalibratedBarometricAlt;
@property (nonatomic) BOOL isCalibratedBarometricAlt;
@property (nonatomic) BOOL hasIsMapMatched;
@property (nonatomic) BOOL isMapMatched;
@property (nonatomic) BOOL hasIsOutdoorContext;
@property (nonatomic) BOOL isOutdoorContext;
@property (nonatomic) BOOL hasOutdoorConfidence;
@property (nonatomic) double outdoorConfidence;
@property (nonatomic) BOOL hasMapMatchRoadType;
@property (nonatomic) int mapMatchRoadType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsMapMatchRoadType:(id)a0;
- (id)mapMatchRoadTypeAsString:(int)a0;

@end

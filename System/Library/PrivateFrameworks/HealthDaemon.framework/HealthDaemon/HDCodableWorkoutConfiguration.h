@class NSString;

@interface HDCodableWorkoutConfiguration : PBCodable <NSCopying> {
    struct { unsigned char activityType : 1; unsigned char locationType : 1; unsigned char wLengthValue : 1; unsigned char wLocationType : 1; } _has;
}

@property (nonatomic) BOOL hasActivityType;
@property (nonatomic) long long activityType;
@property (nonatomic) BOOL hasLocationType;
@property (nonatomic) long long locationType;
@property (nonatomic) BOOL hasWLocationType;
@property (nonatomic) long long wLocationType;
@property (nonatomic) BOOL hasWLengthValue;
@property (nonatomic) double wLengthValue;
@property (readonly, nonatomic) BOOL hasWLengthUnitString;
@property (retain, nonatomic) NSString *wLengthUnitString;

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

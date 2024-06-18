@class HKCodableQuantity;

@interface HKCodableAudiogramSensitivityPoint : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasFrequency;
@property (retain, nonatomic) HKCodableQuantity *frequency;
@property (readonly, nonatomic) BOOL hasLeftEarSensitivity;
@property (retain, nonatomic) HKCodableQuantity *leftEarSensitivity;
@property (readonly, nonatomic) BOOL hasRightEarSensitivity;
@property (retain, nonatomic) HKCodableQuantity *rightEarSensitivity;

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

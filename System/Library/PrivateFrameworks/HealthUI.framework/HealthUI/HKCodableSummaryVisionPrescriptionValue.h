@class HKCodableQuantity, HKCodablePrescriptionType;

@interface HKCodableSummaryVisionPrescriptionValue : PBCodable <NSCopying> {
    struct APPLE_128 { unsigned char timestampData : 1; unsigned char hasImage : 1; } _has;
}

@property (nonatomic) BOOL hasTimestampData;
@property (nonatomic) double timestampData;
@property (readonly, nonatomic) BOOL hasPrescriptionType;
@property (retain, nonatomic) HKCodablePrescriptionType *prescriptionType;
@property (nonatomic) BOOL hasHasImage;
@property (nonatomic) BOOL hasImage;
@property (readonly, nonatomic) BOOL hasLeftEyeSphere;
@property (retain, nonatomic) HKCodableQuantity *leftEyeSphere;
@property (readonly, nonatomic) BOOL hasRightEyeSphere;
@property (retain, nonatomic) HKCodableQuantity *rightEyeSphere;

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

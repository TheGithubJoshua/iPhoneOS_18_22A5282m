@class HKCodableQuantity;

@interface HKCodableSummaryBloodPressureValue : PBCodable <NSCopying> {
    struct APPLE_158 { unsigned char timestampData : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSystolicValue;
@property (retain, nonatomic) HKCodableQuantity *systolicValue;
@property (readonly, nonatomic) BOOL hasDiastolicValue;
@property (retain, nonatomic) HKCodableQuantity *diastolicValue;
@property (nonatomic) BOOL hasTimestampData;
@property (nonatomic) double timestampData;

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

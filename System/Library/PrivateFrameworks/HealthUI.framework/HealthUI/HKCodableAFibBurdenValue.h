@class HKCodableQuantity, HKCodableDayIndexRange;

@interface HKCodableAFibBurdenValue : PBCodable <NSCopying> {
    struct APPLE_115 { unsigned char valueClamped : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) HKCodableQuantity *value;
@property (readonly, nonatomic) BOOL hasDayIndexRange;
@property (retain, nonatomic) HKCodableDayIndexRange *dayIndexRange;
@property (nonatomic) BOOL hasValueClamped;
@property (nonatomic) BOOL valueClamped;

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

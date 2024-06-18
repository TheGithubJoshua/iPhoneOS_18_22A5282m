@class HKCodableQuantity;

@interface HKCodableSummaryMostRecentRangeValue : PBCodable <NSCopying> {
    struct APPLE_147 { unsigned char dateData : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasMinimumValue;
@property (retain, nonatomic) HKCodableQuantity *minimumValue;
@property (readonly, nonatomic) BOOL hasMaximumValue;
@property (retain, nonatomic) HKCodableQuantity *maximumValue;
@property (nonatomic) BOOL hasDateData;
@property (nonatomic) double dateData;

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

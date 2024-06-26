@class HKCodableQuantity, HKCodableMetadataDictionary;

@interface HKCodableSampleChartData : PBCodable <NSCopying> {
    struct APPLE_141 { unsigned char dataType : 1; unsigned char endDate : 1; unsigned char int64Value : 1; unsigned char startDate : 1; } _has;
}

@property (nonatomic) BOOL hasDataType;
@property (nonatomic) long long dataType;
@property (nonatomic) BOOL hasInt64Value;
@property (nonatomic) long long int64Value;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) double startDate;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) double endDate;
@property (readonly, nonatomic) BOOL hasMetadataDictionary;
@property (retain, nonatomic) HKCodableMetadataDictionary *metadataDictionary;
@property (readonly, nonatomic) BOOL hasQuantity;
@property (retain, nonatomic) HKCodableQuantity *quantity;

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

@class NSString, HKCodableSummaryTrendValue;

@interface HKCodableSummaryCorrelatedTrendValue : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasObjectTypeIdentifier;
@property (retain, nonatomic) NSString *objectTypeIdentifier;
@property (readonly, nonatomic) BOOL hasTrendValue;
@property (retain, nonatomic) HKCodableSummaryTrendValue *trendValue;

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

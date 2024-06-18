@class NSMutableArray;

@interface HKCodableChartQuantityDistributionDataSourceQueryData : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *quantityDistributionDatas;

+ (Class)quantityDistributionDataType;

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
- (void)addQuantityDistributionData:(id)a0;
- (void)clearQuantityDistributionDatas;
- (id)quantityDistributionDataAtIndex:(unsigned long long)a0;
- (unsigned long long)quantityDistributionDatasCount;

@end

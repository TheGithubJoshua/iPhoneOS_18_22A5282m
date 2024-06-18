@class NSMutableArray;

@interface HKCodableChartInsulinDataSourceQueryData : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *basalInsulinValues;
@property (retain, nonatomic) NSMutableArray *totalInsulinValues;

+ (Class)basalInsulinValuesType;
+ (Class)totalInsulinValuesType;

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
- (void)addBasalInsulinValues:(id)a0;
- (void)addTotalInsulinValues:(id)a0;
- (id)basalInsulinValuesAtIndex:(unsigned long long)a0;
- (unsigned long long)basalInsulinValuesCount;
- (void)clearBasalInsulinValues;
- (void)clearTotalInsulinValues;
- (id)totalInsulinValuesAtIndex:(unsigned long long)a0;
- (unsigned long long)totalInsulinValuesCount;

@end

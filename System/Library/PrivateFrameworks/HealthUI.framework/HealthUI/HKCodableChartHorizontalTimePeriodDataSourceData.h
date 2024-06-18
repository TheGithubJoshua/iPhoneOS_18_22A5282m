@class NSMutableArray;

@interface HKCodableChartHorizontalTimePeriodDataSourceData : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *dateIntervalsByValues;

+ (Class)dateIntervalsByValueType;

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
- (void)addDateIntervalsByValue:(id)a0;
- (void)clearDateIntervalsByValues;
- (id)dateIntervalsByValueAtIndex:(unsigned long long)a0;
- (unsigned long long)dateIntervalsByValuesCount;

@end

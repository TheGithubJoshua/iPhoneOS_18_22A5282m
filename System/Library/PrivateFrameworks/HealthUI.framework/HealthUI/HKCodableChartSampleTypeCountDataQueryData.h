@class NSMutableArray;

@interface HKCodableChartSampleTypeCountDataQueryData : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *timePeriodToCounts;

+ (Class)timePeriodToCountType;

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
- (void)addTimePeriodToCount:(id)a0;
- (void)clearTimePeriodToCounts;
- (id)timePeriodToCountAtIndex:(unsigned long long)a0;
- (unsigned long long)timePeriodToCountsCount;

@end

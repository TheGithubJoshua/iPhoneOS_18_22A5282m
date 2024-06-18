@class HKCodableDateInterval, NSMutableArray;

@interface HKCodableSleepSummaryEntry : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasDateInterval;
@property (retain, nonatomic) HKCodableDateInterval *dateInterval;
@property (retain, nonatomic) NSMutableArray *periods;

+ (Class)periodType;

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
- (void)addPeriod:(id)a0;
- (void)clearPeriods;
- (id)periodAtIndex:(unsigned long long)a0;
- (unsigned long long)periodsCount;

@end

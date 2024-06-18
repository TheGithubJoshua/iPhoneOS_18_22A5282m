@class HKCodableDateInterval, NSMutableArray;

@interface HKCodableSleepPeriod : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasDateInterval;
@property (retain, nonatomic) HKCodableDateInterval *dateInterval;
@property (retain, nonatomic) NSMutableArray *segments;

+ (Class)segmentType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)addSegment:(id)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)segmentsCount;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)segmentAtIndex:(unsigned long long)a0;
- (void)clearSegments;

@end

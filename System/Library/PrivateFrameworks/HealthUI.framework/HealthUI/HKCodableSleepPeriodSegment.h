@class HKCodableDateInterval, NSMutableArray;

@interface HKCodableSleepPeriodSegment : PBCodable <NSCopying> {
    struct APPLE_117 { unsigned char category : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDateInterval;
@property (retain, nonatomic) HKCodableDateInterval *dateInterval;
@property (retain, nonatomic) NSMutableArray *sampleIntervals;
@property (nonatomic) BOOL hasCategory;
@property (nonatomic) long long category;

+ (Class)sampleIntervalType;

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
- (void)addSampleInterval:(id)a0;
- (void)clearSampleIntervals;
- (id)sampleIntervalAtIndex:(unsigned long long)a0;
- (unsigned long long)sampleIntervalsCount;

@end

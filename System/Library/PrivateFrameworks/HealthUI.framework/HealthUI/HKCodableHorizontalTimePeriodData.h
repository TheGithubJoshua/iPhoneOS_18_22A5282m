@class NSMutableArray;

@interface HKCodableHorizontalTimePeriodData : PBCodable <NSCopying> {
    struct APPLE_157 { unsigned char value : 1; } _has;
}

@property (nonatomic) BOOL hasValue;
@property (nonatomic) long long value;
@property (retain, nonatomic) NSMutableArray *dateIntervals;

+ (Class)dateIntervalsType;

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
- (void)addDateIntervals:(id)a0;
- (void)clearDateIntervals;
- (id)dateIntervalsAtIndex:(unsigned long long)a0;
- (unsigned long long)dateIntervalsCount;

@end

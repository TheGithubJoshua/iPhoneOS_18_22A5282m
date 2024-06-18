@class NSMutableArray;

@interface HKCodableLevelViewDataConfiguration : PBCodable <NSCopying>

@property (nonatomic) double normalizedValue;
@property (retain, nonatomic) NSMutableArray *sortedNormalizedBuckets;

+ (Class)sortedNormalizedBucketsType;

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
- (id)sortedNormalizedBucketsAtIndex:(unsigned long long)a0;
- (void)addSortedNormalizedBuckets:(id)a0;
- (void)clearSortedNormalizedBuckets;
- (unsigned long long)sortedNormalizedBucketsCount;

@end

@interface AWDProactiveModelFittingQuantizedSparseVector : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _indices;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _values;
    struct { unsigned char bucketSize : 1; unsigned char length : 1; unsigned char minValue : 1; } _has;
}

@property (readonly, nonatomic) unsigned long long indicesCount;
@property (readonly, nonatomic) unsigned int *indices;
@property (readonly, nonatomic) unsigned long long valuesCount;
@property (readonly, nonatomic) unsigned int *values;
@property (nonatomic) BOOL hasLength;
@property (nonatomic) unsigned int length;
@property (nonatomic) BOOL hasMinValue;
@property (nonatomic) float minValue;
@property (nonatomic) BOOL hasBucketSize;
@property (nonatomic) float bucketSize;

+ (id)quantizedSparseVectorFromDenseVector:(id)a0 numberOfBuckets:(unsigned long long)a1;
+ (id)quantizedSparseVectorFromSparseVector:(id)a0 numberOfBuckets:(unsigned long long)a1;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)clearValues;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)addValues:(unsigned int)a0;
- (unsigned int)valuesAtIndex:(unsigned long long)a0;
- (void)setValues:(unsigned int *)a0 count:(unsigned long long)a1;
- (unsigned int)indicesAtIndex:(unsigned long long)a0;
- (void)addIndices:(unsigned int)a0;
- (void)clearIndices;
- (float)originalValueAtIndex:(unsigned long long)a0;
- (void)setIndices:(unsigned int *)a0 count:(unsigned long long)a1;

@end

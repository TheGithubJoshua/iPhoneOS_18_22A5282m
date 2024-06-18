@interface AWDCoreRoutineLocationAwarenessBasicHistogram : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _counts;
}

@property (readonly, nonatomic) unsigned long long countsCount;
@property (readonly, nonatomic) int *counts;

- (void)setCounts:(int *)a0 count:(unsigned long long)a1;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)addCount:(int)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)clearCounts;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (int)countAtIndex:(unsigned long long)a0;

@end

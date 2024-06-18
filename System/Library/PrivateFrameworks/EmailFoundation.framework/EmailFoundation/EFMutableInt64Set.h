@interface EFMutableInt64Set : NSObject <NSCopying, NSMutableCopying> {
    unsigned int _count;
    unsigned int _storageSize;
    unsigned int _cursor;
    long long *_storage;
}

+ (id)indexSet;
+ (id)indexSetWithIndexesInRange:(struct _EFInt64Range { long long x0; unsigned long long x1; })a0;

- (long long)lastIndex;
- (long long)_insertionPositionOfIndex:(long long)a0;
- (BOOL)containsIndex:(long long)a0;
- (void)addIndexes:(id)a0;
- (void)enumerateIndexesUsingBlock:(id /* block */)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)intersectIndexes:(id)a0;
- (void)removeAllIndexes;
- (long long)_positionOfIndex:(long long)a0;
- (void)_garbageCollectStorageIfNecessary;
- (id)getIndexesInRange:(struct _EFInt64Range { long long x0; unsigned long long x1; })a0 maxCount:(unsigned long long)a1;
- (long long)firstIndex;
- (void)addIndex:(long long)a0;
- (id)getMaxCountOfIndexes:(unsigned long long)a0;
- (id)description;
- (long long)indexGreaterThanIndex:(long long)a0;
- (void)removeIndex:(long long)a0;
- (unsigned long long)getIndexes:(long long *)a0 maxCount:(unsigned long long)a1 inIndexRange:(struct _EFInt64Range { long long x0; unsigned long long x1; } *)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)commaSeparatedString;
- (void)removeIndexes:(id)a0;
- (unsigned long long)_enumerateIndexesInRange:(struct _EFInt64Range { long long x0; unsigned long long x1; } *)a0 maxCount:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (void)_incrementStorageIfNecessaryForCount:(unsigned long long)a0;
- (unsigned long long)count;

@end

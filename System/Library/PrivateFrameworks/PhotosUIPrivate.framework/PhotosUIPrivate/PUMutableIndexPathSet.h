@class NSMutableSet;

@interface PUMutableIndexPathSet : PUIndexPathSet {
    NSMutableSet *_indexPaths;
}

- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)addIndexPath:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)removeAllIndexPaths;
- (void)removeIndexPath:(id)a0;
- (long long)count;
- (BOOL)containsIndexPath:(id)a0;
- (void)enumerateIndexPathsUsingBlock:(id /* block */)a0;
- (void)setIndexPathSet:(id)a0;

@end

@protocol TRIPaths;

@interface TRIFactorPackSetStorage : NSObject {
    id<TRIPaths> _paths;
}

- (id)init;
- (id)_collectFactorPackSets;
- (BOOL)_forceRemoveItemAtPath:(id)a0;
- (BOOL)_nonAtomicOverwriteWithSrc:(id)a0 dest:(id)a1;
- (BOOL)saveFactorPackSet:(id)a0;
- (void)enumerateFactorPacksForFactorPackSet:(id)a0 usingLegacyPaths:(BOOL)a1 withBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithPaths:(id)a0;
- (id)pathForFactorPackSetWithId:(id)a0;
- (id)parentDirForFactorPackSets;
- (BOOL)removeUnreferencedFactorPackSetsWithServerContext:(id)a0 removedCount:(unsigned int *)a1;
- (BOOL)hasFactorPackSetWithId:(id)a0 path:(id *)a1;

@end

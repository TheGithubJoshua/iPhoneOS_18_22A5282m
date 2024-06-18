@interface PGCurationCache : CLSDBCache

+ (id)defaultCacheName;

- (id)curatedKeyAssetIdentifierForMoment:(id)a0 options:(id)a1;
- (id)_fetchCurationObjectForEntityName:(id)a0 predicate:(id)a1;
- (void)_setCuratedKeyAsset:(id)a0 forMomentUUID:(id)a1 options:(id)a2;
- (void)_invalidateCacheForMomentsWithUUIDs:(id)a0;
- (void)invalidateCacheForMomentUUIDs:(id)a0;
- (void)_invalidateCacheForMomentWithUUID:(id)a0 precision:(unsigned long long)a1;
- (void)_setCuratedAssets:(id)a0 forMomentUUID:(id)a1 options:(id)a2;
- (void)setCuratedKeyAsset:(id)a0 forMoment:(id)a1 options:(id)a2;
- (id)curatedKeyAssetIdentifierForCollectionUUID:(id)a0 options:(id)a1;
- (void)_setProperties:(id)a0 forCurationObjectWithEntityName:(id)a1 momentUUID:(id)a2 precision:(unsigned long long)a3 predicate:(id)a4;
- (id)initAtURL:(id)a0;
- (id)curatedAssetIdentifiersForMoment:(id)a0 options:(id)a1;
- (void)invalidateCacheForMomentUUID:(id)a0;
- (void)setCuratedAssets:(id)a0 forMoment:(id)a1 options:(id)a2;
- (id)_curatedAssetIdentifiersforMomentUUID:(id)a0 options:(id)a1;
- (void)invalidateCacheForMomentUUID:(id)a0 precision:(unsigned long long)a1;
- (void)_invalidateCacheForMomentWithUUID:(id)a0;
- (void)setCuratedKeyAsset:(id)a0 forCollectionUUID:(id)a1 options:(id)a2;
- (id)_curatedKeyAssetIdentifierforMomentUUID:(id)a0 options:(id)a1;
- (id)dataModelName;

@end

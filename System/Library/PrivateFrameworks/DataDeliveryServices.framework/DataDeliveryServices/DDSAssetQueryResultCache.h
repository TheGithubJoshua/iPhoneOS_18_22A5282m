@class DDSCache, NSString;

@interface DDSAssetQueryResultCache : NSObject <DDSCacheDelegate>

@property (readonly, nonatomic) DDSCache *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)clearCache;
- (void)cacheAssets:(id)a0 forQuery:(id)a1;
- (void)cache:(id)a0 willEvictObjects:(id)a1;
- (id)cachedAssetsForQuery:(id)a0;
- (void).cxx_destruct;

@end

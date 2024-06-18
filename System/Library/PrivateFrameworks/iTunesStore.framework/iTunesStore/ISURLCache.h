@class NSString, NSURLCache, ISURLCacheConfiguration;

@interface ISURLCache : NSObject {
    NSURLCache *_cache;
    ISURLCacheConfiguration *_configuration;
}

@property (readonly) NSString *persistentIdentifier;
@property (readonly, nonatomic) unsigned long long currentDiskUsage;
@property (readonly, nonatomic) unsigned long long currentMemoryUsage;
@property (readonly, nonatomic) unsigned long long diskCapacity;
@property (readonly, nonatomic) unsigned long long memoryCapacity;

+ (id)cacheDirectoryPath;

- (id)init;
- (void)removeCachedResponseForRequest:(id)a0;
- (void)removeAllCachedResponses;
- (void)storeCachedResponse:(id)a0 forRequest:(id)a1;
- (id)cachedResponseForRequest:(id)a0;
- (void)purgeMemoryCache;
- (id)initWithCacheConfiguration:(id)a0;
- (void)dealloc;
- (void)saveMemoryCacheToDisk;
- (void)reloadWithCacheConfiguration:(id)a0;

@end

@class NSString, NSCache;

@interface PVDocumentCacheManager : NSObject <NSCacheDelegate> {
    NSCache *_cache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)releaseSharedInstance;
+ (void)removeAllEffects;

- (id)init;
- (void)removeAllObjects;
- (void)cache:(id)a0 willEvictObject:(id)a1;
- (void)dealloc;
- (void)setCountLimit:(unsigned long long)a0;
- (void)setTotalCostLimit:(unsigned long long)a0;
- (void)cacheOZXDocument:(void *)a0 forKey:(id)a1 timeElapsed:(double)a2 memoryInfo:(unsigned long long)a3;
- (id)generateKeyFromFilePathString:(id)a0;
- (void *)getOZXDocumentForKey:(id)a0;
- (void *)newOZXDocumentForKey:(id)a0;

@end

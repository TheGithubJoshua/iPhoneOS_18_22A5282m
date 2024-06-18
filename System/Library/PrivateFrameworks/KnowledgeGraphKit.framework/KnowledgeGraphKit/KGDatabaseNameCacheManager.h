@class NSMutableDictionary;

@interface KGDatabaseNameCacheManager : NSObject {
    NSMutableDictionary *_cacheByPath;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (void)deregisterNameCacheForURL:(id)a0;
+ (void)unloadNameCacheForURL:(id)a0;
+ (id)nameCacheForURL:(id)a0;

- (id)init;
- (void)unloadCacheForURL:(id)a0;
- (void)deregisterCacheForURL:(id)a0;
- (void).cxx_destruct;
- (id)cacheForURL:(id)a0;

@end

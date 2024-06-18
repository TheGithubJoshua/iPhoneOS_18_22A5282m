@class SSVURLCacheConfiguration, NSObject;
@protocol OS_dispatch_queue;

@interface SSVURLCache : NSObject {
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    struct __CFURLStorageSession { } *_cacheStorageSession;
    SSVURLCacheConfiguration *_configuration;
    struct _CFURLCache { } *_urlCache;
}

- (id)init;
- (void)removeAllCachedResponses;
- (id)initWithConfiguration:(id)a0;
- (void)storeCachedResponse:(id)a0 forRequest:(id)a1;
- (void).cxx_destruct;
- (id)cachedResponseForRequest:(id)a0;
- (void)dealloc;
- (id)cachedConnectionResponseForRequestProperties:(id)a0;
- (id)cachedConnectionResponseForRequestProperties:(id)a0 cachedResponse:(id *)a1;
- (void)configureRequest:(id)a0;
- (void)loadMemoryCacheFromDisk;
- (void)saveMemoryCacheToDisk;
- (void)storeConnectionResponse:(id)a0 forRequestProperties:(id)a1;
- (void)storeConnectionResponse:(id)a0 forRequestProperties:(id)a1 userInfo:(id)a2;

@end

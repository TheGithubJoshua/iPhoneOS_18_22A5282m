@class NSMutableDictionary, NSMapTable, ASKResourceCache, NSOperationQueue;

@interface ASKResourceLoader : NSObject {
    long long _requestCountMap[3];
}

@property (readonly, nonatomic) NSMutableDictionary *pendingOperations;
@property (readonly, nonatomic) NSMapTable *requestsByCacheKey;
@property (readonly, nonatomic) ASKResourceCache *cachedResources;
@property (readonly, nonatomic) NSOperationQueue *accessQueue;
@property (readonly, nonatomic) NSOperationQueue *notificationQueue;
@property (readonly, nonatomic) NSOperationQueue *requestQueue;
@property (readonly, nonatomic) BOOL isIdle;
@property (readonly, nonatomic) BOOL isInBackground;

- (void)cancelAllRequests;
- (id)init;
- (void)postDidLoadAllForReason:(long long)a0;
- (long long)currentQualityOfService;
- (BOOL)loadResourceWithRequest:(id)a0 reason:(long long)a1;
- (id)initWithParentResourceLoader:(id)a0;
- (void)removeAllCachedResources;
- (void)_commonInit;
- (void)finishLoadForRequest:(id)a0 withResource:(id)a1 error:(id)a2;
- (void)updateLoadReason:(long long)a0 forOperation:(id)a1;
- (BOOL)setReason:(long long)a0 forRequestWithKey:(id)a1;
- (id)initWithRequestQueue:(id)a0 accessQueue:(id)a1 notificationQueue:(id)a2 cacheLimit:(long long)a3;
- (void)enterForeground;
- (void).cxx_destruct;
- (id)description;
- (void)enterBackground;
- (id)requestKeyForCacheKey:(id)a0;
- (BOOL)isIdleForReason:(long long)a0;
- (void)postDidBeginLoadingIfIdle;
- (void)dealloc;
- (void)postDidIdleIfIdle;
- (void)addResource:(id)a0 forCacheKey:(id)a1;
- (id)cachedResourcesForCacheKey:(id)a0;
- (void)reprioritizeOperations;
- (void)cancelRequestForCacheKey:(id)a0;

@end

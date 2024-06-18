@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _UIActivityApplicationExtensionsCache : NSObject {
    BOOL _primed;
    unsigned long long _cacheMisses;
    unsigned long long _cacheHits;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
    BOOL _precached;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *primedExtensionsQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *discoveryQueue;
@property (retain, nonatomic) NSMutableDictionary *cachedResults;
@property (retain, nonatomic) NSMutableDictionary *extensionMatchTokens;

+ (id)sharedExtensionsCache;

- (id)init;
- (void)_cacheMatchingExtensions:(id)a0 cacheKey:(id)a1 error:(id)a2;
- (id)extensionsResultWithMatchingAttributes:(id)a0;
- (void)_cacheMatchingExtensionsResult:(id)a0 cacheKey:(id)a1;
- (void).cxx_destruct;
- (id)reportExtensionsCacheResult;
- (void)_startContinuousExtensionDiscoveryForAttributes:(id)a0 cacheKey:(id)a1;
- (void)_startPrecachingContinuousExtensionDiscovery;
- (void)primeExtensionsResultWithMatchingAttributes:(id)a0;
- (id)_matchingExtensionsCachedResultForKey:(id)a0;

@end

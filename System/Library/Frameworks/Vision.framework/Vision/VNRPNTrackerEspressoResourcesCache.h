@class NSLock, NSMutableDictionary;

@interface VNRPNTrackerEspressoResourcesCache : NSObject {
    NSMutableDictionary *_rpnEspressoResourcesKeyToEspressoResourcesCache;
    NSLock *_rpnEspressoResourcesKeyToEspressoResourcesCacheLock;
}

+ (id)cacheKeyFromOptions:(id)a0 error:(id *)a1;
+ (id)cacheOptionsKeys;

- (id)init;
- (void)releaseCachedResources;
- (BOOL)addRPNTrackerResourcesConfiguredForOptions:(id)a0 resources:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)createRPNTrackerResourcesConfiguredWithOptions:(id)a0 error:(id *)a1;
- (id)locateRPNTrackerResourcesConfiguredForOptions:(id)a0 error:(id *)a1;

@end

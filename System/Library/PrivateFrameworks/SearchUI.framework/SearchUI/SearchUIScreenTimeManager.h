@class NSCache, DMFApplicationPolicyMonitor, NSObject;
@protocol OS_dispatch_queue;

@interface SearchUIScreenTimeManager : NSObject

@property (retain) NSCache *definitelyCorrectCache;
@property (retain) NSCache *possiblyCorrectCache;
@property (retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain) DMFApplicationPolicyMonitor *monitor;

+ (id)sharedInstance;

- (id)init;
- (void)getScreenTimeBlockedForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (BOOL)bundleIdIsScreenTimeBlocked:(id)a0 completion:(id /* block */)a1;
- (BOOL)cachedScreenTimeValueForBundleIdentifier:(id)a0;
- (void)purgeCache;
- (void).cxx_destruct;

@end

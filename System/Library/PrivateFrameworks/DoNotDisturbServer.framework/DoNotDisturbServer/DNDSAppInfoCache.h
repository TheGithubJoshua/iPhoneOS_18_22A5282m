@class NSURLSession, NSString, NSSet, NSMutableSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, DNDSKeybagStateProviding;

@interface DNDSAppInfoCache : NSObject <DNDSKeybagStateObserver, LSApplicationWorkspaceObserverProtocol> {
    NSSet *_monitoredBundleIdentifiers;
    NSSet *_relevantBundleIdentifiers;
    NSMutableSet *_inflightBundleIdentifiers;
    NSMutableDictionary *_appInfoByBundleIdentifier;
    NSURLSession *_urlSession;
    NSObject<OS_dispatch_queue> *_queue;
    id<DNDSKeybagStateProviding> _keybag;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_fallbackAppInfoByBundleIdentifier;

- (void)applicationsDidInstall:(id)a0;
- (void)applicationsDidUninstall:(id)a0;
- (void)_queue_read;
- (id)_parseAppStoreResponseForBundleIdentifiers:(id)a0 response:(id)a1 data:(id)a2 error:(id)a3;
- (void)_queue_removeCachedDataForAppInfo:(id)a0;
- (void)_queue_fetchMissingAppInfo;
- (void)monitorApplicationIdentifiers:(id)a0;
- (id)_queue_bundleIdentifiersWithMissingInfo;
- (id)appInfoForBundleIdentifier:(id)a0;
- (void)_queue_write;
- (id)_cacheURL;
- (void)_fetchIconsForAppInfo:(id)a0 timeoutInterval:(double)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)appInfoForBundleIdentifiers:(id)a0;
- (id)initWithKeybag:(id)a0;
- (id)_sanitizeAppInfo:(id)a0;
- (void)_queue_monitorBundleIdentifiers:(id)a0;
- (void)_fetchIconForAppInfo:(id)a0 timeoutInterval:(double)a1 completionHandler:(id /* block */)a2;
- (void)_fetchAppStoreInfoForBundleIdentifiers:(id)a0 timeoutInterval:(double)a1 limit:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)_queue_removeUnusedAppInfo;
- (id)_installedBundleIdentifiers;
- (id)_fallbackAppInfoForBundleIdentifier:(id)a0;
- (void)keybagDidUnlockForTheFirstTime:(id)a0;

@end

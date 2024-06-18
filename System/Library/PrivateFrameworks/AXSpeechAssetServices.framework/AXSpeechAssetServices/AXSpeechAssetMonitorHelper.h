@class AXAssetsService, NSObject;
@protocol OS_dispatch_queue;

@interface AXSpeechAssetMonitorHelper : NSObject {
    double _lastVoiceAssetUpdateTime;
    struct __SCNetworkReachability { } *_reachability;
    AXAssetsService *_assetService;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *longOperationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *migrationQueue;

+ (id)sharedInstance;

- (id)init;
- (void)startMigrationOnDeviceUnlock;
- (void)_monitorForNetworkChanges;
- (id)_assetUpdaterClient;
- (void)_unregisterForReachabilityNotifications;
- (void)_registerForReachabilityNotifications;
- (BOOL)_platformSupportsMobileAssetVoices;
- (void)_monitorSpeechAssetChanges;
- (id)speechAssetUpdaterClient;
- (void)_updateSpeechSourceIdentifiersIfNeeded;
- (void).cxx_destruct;
- (void)clearCurrentVoicesAndRefreshTTSVoiceListOnNextBoot;

@end

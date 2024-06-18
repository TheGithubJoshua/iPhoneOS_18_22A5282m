@class PLPhotoLibraryBundleController, NSString, PLTCCObserver, NSXPCInterface, PLCacheDeleteRegistration, PFStateCaptureHandler, PLBackgroundJobService, NSMutableSet, PLDistributedNotificationHandler, NSXPCListener, PLXPCMessageLogger;
@protocol PLPhotoLibraryDaemonService;

@interface PLAssetsdServer : NSObject <NSXPCListenerDelegate, PFStateCaptureProvider> {
    NSXPCListener *_listener;
    PLXPCMessageLogger *_connectionLogger;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _servicesLock;
    NSMutableSet *_services;
    PLPhotoLibraryBundleController *_libraryBundleController;
    PLBackgroundJobService *_backgroundJobService;
    PLDistributedNotificationHandler *_distributedNotificationHandler;
    PLTCCObserver *_tccObserver;
    NSXPCInterface *_assetsdInterface;
    PLCacheDeleteRegistration *_cacheDeleteRegistration;
    PFStateCaptureHandler *_stateHandler;
}

@property (nonatomic) int systemLibraryChangeToken;
@property (nonatomic) struct { _Atomic unsigned int imageCacheHitCount; _Atomic unsigned int imageCacheMissCount; _Atomic unsigned int videoComplementCacheHitCount; _Atomic unsigned int videoComplementCacheMissCount; } resourceCacheMetrics;
@property (retain, nonatomic) id<PLPhotoLibraryDaemonService> syndicationSpotlightReceiver;
@property (retain, nonatomic) id<PLPhotoLibraryDaemonService> syndicationPreferencesListener;
@property (retain, nonatomic) id<PLPhotoLibraryDaemonService> searchSpotlightReciever;
@property (readonly, nonatomic) BOOL isConfiguredForUnitTesting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedServer;

- (void)handleInterruption:(id)a0;
- (id)init;
- (void)removeService:(id)a0;
- (id)stateCaptureDictionary;
- (void)handleInvalidation:(id)a0;
- (void)start;
- (void)_collectCacheMetricsDataFromService:(id)a0;
- (void)stopObservingSystemLibraryChanges;
- (void)_startObservingSystemLibraryChanges;
- (void)addService:(id)a0;
- (void).cxx_destruct;
- (void)_checkInWithLaunchd;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)logStatus;

@end

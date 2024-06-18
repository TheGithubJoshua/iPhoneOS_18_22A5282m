@class FPDPresenterManager, NSString, FPDVolumeManager, FPDVersionsFileCoordinationProviderDelegate, FPDActionOperationEngine, FPDTelemetryService, FPDAppMonitor, FPDCacheDeleteService, FPDExtensionManager, NSXPCListener, NSObject, FPPacer;
@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_group;

@interface FPDServer : NSObject <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_source> *_sigIntSrc;
    NSObject<OS_dispatch_source> *_sigQuitSrc;
    NSObject<OS_dispatch_source> *_sigTermSrc;
    NSObject<OS_dispatch_source> *_machSrc;
    NSObject<OS_dispatch_queue> *_makeSureSetupEnqueued;
    NSObject<OS_dispatch_queue> *_setupQueue;
    NSObject<OS_dispatch_queue> *_afterSetupWorkQueue;
    NSObject<OS_dispatch_group> *_fileProviderManagerIsReadyGroup;
    NSObject<OS_dispatch_queue> *_machServerQueue;
    int _providerChangeNotificationToken;
    FPPacer *_signalProviderChangesPacer;
    FPDVersionsFileCoordinationProviderDelegate *_delegate;
    BOOL _isUnlocked;
    BOOL _isPastBuddy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSXPCListener *listener;
@property (readonly, nonatomic) FPDActionOperationEngine *operationEngine;
@property (readonly, nonatomic) FPDCacheDeleteService *cacheDelete;
@property (readonly, nonatomic) FPDTelemetryService *telemetry;
@property (readonly, nonatomic) FPDVolumeManager *volumeManager;
@property (readonly, nonatomic) FPDAppMonitor *appMonitor;
@property (readonly, nonatomic) FPDExtensionManager *extensionManager;
@property (readonly, nonatomic) FPDPresenterManager *presenterManager;
@property (retain, nonatomic) Class fpfsClass;
@property (retain, nonatomic) Class fpfsSQLBackupManagerClass;
@property (retain, nonatomic) Class fpfsSQLRestoreManagerClass;
@property (retain, nonatomic) Class fpckTaskClass;
@property (retain, nonatomic) Class fpdPurgerClass;

+ (id)homeDirectory;
+ (id)appSupportPath;
+ (id)personaCloudStoragePath;

- (void)purge;
- (id)init;
- (void)_startXPCListener;
- (void)_setup;
- (void)exitWithCode:(int)a0;
- (void)providersDidChange;
- (void)start;
- (void)_initSignals;
- (void).cxx_destruct;
- (void)signalProviderChangesWithLowPriority;
- (BOOL)isPastBuddy;
- (void)signalProviderChanges;
- (void)handleExitSignal:(int)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)registerVersionsFileCoordinator;
- (void)_computeUnlockedStatus;
- (void)_finishSetup;
- (void)localeDidChange;
- (void)materializeURL:(id)a0 completion:(id /* block */)a1;

@end
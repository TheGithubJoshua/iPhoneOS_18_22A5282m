@class NSMapTable, ATDeviceSyncManager, ATLockdownListener, NSObject, MSVXPCTransaction, ATXPCListener, ATEventScheduler, ATServiceProxyListener, ATStatusObserverListener, ATLegacyDeviceSyncManager, NSString, ATIDSService, ATDeviceSettings, ATDevicePairedSyncManager;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface ATDeviceService : ATConcreteService <ATMessageLinkListenerDelegate, ATMessageLinkRequestHandler, ATXPCInterfaceProtocol, ATSyncClientDelegate, ATIDSServiceListener> {
    ATLockdownListener *_lockdownListener;
    ATLockdownListener *_legacyLockdownListener;
    ATDevicePairedSyncManager *_pairedSyncManager;
    ATIDSService *_idsService;
    ATXPCListener *_xpcListener;
    ATServiceProxyListener *_proxyListener;
    NSMapTable *_messageLinkProxyListeners;
    ATStatusObserverListener *_statusObserverListener;
    ATDeviceSyncManager *_deviceSyncManager;
    ATLegacyDeviceSyncManager *_legacyDeviceSyncManager;
    ATDeviceSettings *_settings;
    ATEventScheduler *_eventScheduler;
    MSVXPCTransaction *_xpcTransaction;
    MSVXPCTransaction *_startupTransaction;
    NSObject<OS_dispatch_source> *_sigTermSrc;
    int _atcRunningToken;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)applicationsDidInstall:(id)a0;
- (void)applicationsDidUninstall:(id)a0;
- (void)_addObserversToMessageLink:(id)a0;
- (id)init;
- (void)getAssetMetricswithCompletion:(id /* block */)a0;
- (void)_scheduleNewSyncIfNeeded;
- (void)_endStartupTransaction;
- (void)applicationInstallsDidChange:(id)a0;
- (void)keepATCAlive:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)applicationInstallsDidPrioritize:(id)a0;
- (BOOL)stop;
- (void)prioritizeAsset:(id)a0 forDataclass:(id)a1 withCompletion:(id /* block */)a2;
- (void)_cancelSyncForMessageLink:(id)a0;
- (void)openDeviceMessageLinkWithPriority:(int)a0 withCompletion:(id /* block */)a1;
- (void)messageLink:(id)a0 didReceiveRequest:(id)a1;
- (void)idsServiceDevicesDidChange:(id)a0;
- (void)listener:(id)a0 didReceiveMessageLinkRequest:(id)a1;
- (void)getSyncStateWithCompletion:(id /* block */)a0;
- (void)applicationInstallsArePrioritized:(id)a0 arePaused:(id)a1;
- (void)prioritizeAsset:(id)a0 withCompletion:(id /* block */)a1;
- (id)allMessageLinkProxyListeners;
- (void)_removeObserversFromMessageLink:(id)a0;
- (void)requestKeybagSyncToPairedDeviceWithCompletion:(id /* block */)a0;
- (void)applicationInstallsDidCancel:(id)a0;
- (void)clearSyncDataWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)messageLinkWasClosed:(id)a0;
- (void)_setupStartupTransaction;
- (void)requestSyncForPairedDeviceWithPriority:(int)a0 withCompletion:(id /* block */)a1;
- (void)purgePartialAsset:(id)a0 forDataclass:(id)a1 withCompletion:(id /* block */)a2;
- (void)removeMessageLink:(id)a0;
- (void)_requestSyncForLibrary:(id)a0 onMessageLink:(id)a1;
- (void)handleDataMigrationFinished;
- (void)dealloc;
- (void)addMessageLink:(id)a0;
- (void)restoreFromDeviceWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)syncChangesForDataClass:(id)a0 withPriority:(int)a1;
- (void)syncClient:(id)a0 hasChangesWithPriority:(int)a1;
- (void)cancelSyncWithCompletion:(id /* block */)a0;
- (void)cancelAssetTransferForFailedAsset:(id)a0;
- (void)getDataRestoreIsCompleteWithCompletion:(id /* block */)a0;
- (void)requestSyncForLibrary:(id)a0 withCompletion:(id /* block */)a1;
- (void)initiateAssetDownloadSessionsWithCompletion:(id /* block */)a0;
- (void)lowBatteryNotificationWithCompletion:(id /* block */)a0;
- (id)_deviceMessageLink;
- (BOOL)run;
- (id)proxyListenerForMessageLink:(id)a0;
- (void)registerForStatusOfDataclasses:(id)a0 enabled:(id)a1 withCompletion:(id /* block */)a2;

@end

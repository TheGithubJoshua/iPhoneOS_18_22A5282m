@class NSString, ATDeviceService, NSObject;
@protocol OS_dispatch_queue;

@interface ATDevicePairedSyncManager : NSObject <ICNanoPairedDeviceStatusObserver, ATMessageLinkObserver, ATSessionObserver> {
    ATDeviceService *_deviceService;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPairedSyncManager;

- (id)init;
- (void)nanoPairedDeviceStatusMonitorNewActiveDevice:(id)a0;
- (void)nanoPairedDeviceStatusMonitor:(id)a0 didFinishInitialSyncForPairingIdentifier:(id)a1;
- (void)stop;
- (void)nanoPairedDeviceStatusMonitorPairedDeviceChanged:(id)a0;
- (void)_cleanupSyncState;
- (void)start;
- (void).cxx_destruct;
- (void)nanoPairedDeviceStatusMonitor:(id)a0 didChangeClientSyncState:(unsigned long long)a1;
- (void)_triggerInitialSync;
- (void)_setInstallDateIfNeededForBundleID:(id)a0;
- (BOOL)hasRestriction;

@end

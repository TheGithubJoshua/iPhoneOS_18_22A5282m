@class NSString, NSXPCConnection, NSObject, NSMutableArray;
@protocol ATConnectionDelegate;

@interface ATConnection : NSObject <ATConnectionDelegate> {
    NSXPCConnection *_xpcConnection;
    BOOL _registerForStatus;
    NSMutableArray *_registeredDataclasses;
    int _atcRunningToken;
    BOOL _atcRunning;
}

@property (weak, nonatomic) NSObject<ATConnectionDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openDeviceMessageLinkWithPriority:(int)a0;
- (void)requestSyncForLibrary:(id)a0;
- (id)init;
- (void)requestKeybagSyncToPairedDevice;
- (void)registerForAssetProgressForDataclass:(id)a0;
- (void)requestSyncForPairedDeviceWithPriority:(int)a0;
- (void)_sendStatusRegistrationWithCompletion:(id /* block */)a0;
- (void)clearSyncData;
- (void)registerForStatus;
- (void).cxx_destruct;
- (void)connection:(id)a0 updatedProgress:(id)a1;
- (void)unregisterForStatus;
- (void)prioritizeAsset:(id)a0 forDataclass:(id)a1;
- (void)_handleDisconnect;
- (void)purgePartialAsset:(id)a0 forDataclass:(id)a1;
- (void)lowBatteryNotification;
- (void)dealloc;
- (BOOL)isSyncing:(BOOL *)a0 automatically:(BOOL *)a1 wirelessly:(BOOL *)a2;
- (void)connectionWasInterrupted:(id)a0;
- (void)connection:(id)a0 updatedAssets:(id)a1;
- (void)cancelSync;
- (void)keepATCAlive:(BOOL)a0;
- (id)restoreDeviceWithIdentifier:(id)a0;
- (void)openDeviceMessageLink;
- (void)initiateAssetDownloadSessionsWithCompletion:(id /* block */)a0;
- (id)getAssetMetrics;
- (BOOL)getDataRestoreIsComplete;

@end

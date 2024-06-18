@class ATConnection;

@interface SBModelessSyncController : NSObject {
    int _syncRegistrationToken;
    int _iCloudRestoreToken;
    BOOL _restoringFromICloud;
    ATConnection *_airTrafficConnection;
}

@property (readonly, nonatomic) BOOL isAppSyncing;
@property (readonly, nonatomic) BOOL isSyncing;
@property (readonly, nonatomic) BOOL isRestoringFromICloud;
@property (readonly, nonatomic) BOOL isAutoSyncing;
@property (readonly, nonatomic) BOOL isWirelessSyncing;

+ (id)sharedInstance;

- (void)_iCloudStatusChanged;
- (id)init;
- (void)setIsSyncing:(BOOL)a0;
- (void)endMonitoring;
- (void).cxx_destruct;
- (void)connection:(id)a0 updatedProgress:(id)a1;
- (void)_setAppSyncState:(BOOL)a0;
- (void)_appSyncStateChanged;
- (void)_endObservingICloudRestoreStatus;
- (void)gotLowBatteryWarning;
- (void)_updateIconsForStateChange;
- (void)dealloc;
- (void)_beginObservingICloudRestoreStatus;
- (void)connectionWasInterrupted:(id)a0;
- (void)beginMonitoring;

@end

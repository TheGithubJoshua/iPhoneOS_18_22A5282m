@class VCCKApplicationStateObserver, CKRecordID, VCCKShortcutSyncService, NSString, NSObject, CKContainer;
@protocol WFDatabaseProvider, OS_dispatch_queue, OS_nw_path_monitor;

@interface VCCKShortcutSyncCoordinator : NSObject

@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;
@property (readonly, nonatomic) CKContainer *container;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateAccessQueue;
@property (readonly, nonatomic) NSObject<OS_nw_path_monitor> *pathMonitor;
@property (readonly, nonatomic) struct __CTServerConnection { } *telephonyConnection;
@property (readonly, nonatomic) VCCKApplicationStateObserver *applicationObserver;
@property (nonatomic, getter=isStarted) BOOL started;
@property (nonatomic) long long accountStatus;
@property (retain, nonatomic) CKRecordID *userRecordID;
@property (retain, nonatomic) VCCKShortcutSyncService *currentSyncService;
@property (readonly, nonatomic) NSString *accountForSyncToken;
@property (nonatomic, getter=isSyncEnabled) BOOL syncEnabled;

- (void)updateCurrentSyncServiceIfNeeded;
- (void)startObservingApplicationVisibility;
- (void)setupPathMonitor;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)startObservingDataUsagePermission;
- (void)stopObservingUserDefaults;
- (void)start;
- (void)startObservingReachability;
- (void)startObservingAccountChanges;
- (void)handleWalrusStatusDidChange;
- (void)stopObservingAccountChanges;
- (void).cxx_destruct;
- (void)handleCloudKitSyncEnabledChange;
- (void)startObservingUserDefaults;
- (void)updateAccountStatusAndUserRecordID;
- (void)deleteLegacyShortcutsZoneSubscriptionIfNeeded;
- (void)stopObservingReachability;
- (void)dealloc;
- (void)handleAccountChangedNotification:(id)a0;
- (void)stopObservingApplicationVisibility;
- (id)initWithDatabaseProvider:(id)a0;
- (void)handleCloudKitSyncZoneWasPurgedChange;
- (void)stopObservingDataUsagePermission;

@end

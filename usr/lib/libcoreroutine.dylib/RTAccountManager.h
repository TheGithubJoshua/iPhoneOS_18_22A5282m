@class RTInvocationDispatcher, RTDefaultsManager, RTLifeCycleManager, AFPreferences, ACAccountStore, RTDarwinNotificationHelper, RTAccount;

@interface RTAccountManager : RTService {
    BOOL _ready;
}

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (retain, nonatomic) RTAccount *account;
@property (retain, nonatomic) RTInvocationDispatcher *dispatcher;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTLifeCycleManager *lifecycleManager;
@property (nonatomic) long long cloudSyncAuthorizationState;
@property (nonatomic) BOOL siriCloudSyncEnabled;
@property (nonatomic) BOOL cloudSyncProvisionedForAccount;
@property (retain, nonatomic) RTDarwinNotificationHelper *notificationHelper;
@property (retain, nonatomic) AFPreferences *siriPreferences;
@property (nonatomic) double authorizationChangeExitTimeInterval;

+ (BOOL)supportsNotificationName:(id)a0;

- (void)setup;
- (void)onDefaultsUpdate:(id)a0;
- (id)init;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (id)initWithLifecycleManager:(id)a0 defaultsManager:(id)a1;
- (void)_updateCloudSyncAuthorizationState:(BOOL)a0;
- (void)_setup;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (long long)accountStatus;
- (void)updateCloudSyncProvisionedForAccount:(BOOL)a0 handler:(id /* block */)a1;
- (void)lookupAccount:(id /* block */)a0;
- (void)handleSiriCloudSyncPreferenceChangedNotification;
- (void).cxx_destruct;
- (void)fetchCloudSyncAuthorizationState:(id /* block */)a0;
- (void)currentAccount:(id /* block */)a0;
- (void)dealloc;
- (id)_primaryiCloudAccount;
- (void)_handleSiriCloudSyncPreferenceChangedNotification;
- (void)_onDefaultsUpdate:(id)a0;
- (id)initWithAccountStore:(id)a0 lifecycleManager:(id)a1 defaultsManager:(id)a2;
- (void)_lookupAccount:(id /* block */)a0;
- (void)updateCloudSyncAuthorizationState:(BOOL)a0;

@end

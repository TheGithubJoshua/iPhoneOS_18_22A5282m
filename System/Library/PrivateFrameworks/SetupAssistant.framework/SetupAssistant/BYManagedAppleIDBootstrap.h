@class UMUserSwitchContext, NSDictionary, NSString, AKAppleIDAuthenticationContext, NSObject, BYPreferencesController;
@protocol OS_dispatch_queue;

@interface BYManagedAppleIDBootstrap : NSObject <AKAppleIDAuthenticationDelegate, BYNetworkObserver, UMUserSwitchStakeholder> {
    AKAppleIDAuthenticationContext *_authContext;
    UMUserSwitchContext *_userSwitchContext;
}

@property (readonly, nonatomic) UMUserSwitchContext *userSwitchContext;
@property (nonatomic) int notifyToken;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic) BOOL shouldRetrySilentLoginUpgrade;
@property (nonatomic) long long silentLoginUpgradeRetryCount;
@property (retain, nonatomic) NSDictionary *authenticationResults;
@property (retain, nonatomic) BYPreferencesController *buddyPreferences;
@property (readonly, copy, nonatomic) NSString *shortLivedToken;
@property (readonly, nonatomic) BOOL passwordChangeFlowNeedsToRun;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isManagedAppleIDSignedIn;
+ (BOOL)isFirstTimeLogin;
+ (BOOL)isMultiUser;
+ (id)delegateBundleIDsForManagedAccount;
+ (id)sharedManager;
+ (BOOL)isSettingUpMultiUser;

- (void)willSwitchUser;
- (void)_createAppleAccountWithAuthenticationResults:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)_runPostStartupTasksWithAccountStore:(id)a0 completion:(id /* block */)a1;
- (void)_runSilentLoginUpgradeWithCompletion:(id /* block */)a0 shortLivedTokenUpgradeCompletion:(id /* block */)a1;
- (void)_upgradeShortLivedTokenCompletion:(id /* block */)a0;
- (void)runSilentLoginUpgradeIfNeededWithCompletion:(id /* block */)a0 shortLivedTokenUpgradeCompletion:(id /* block */)a1;
- (void)runSilentLoginUpgradeIfNeededWithCompletion:(id /* block */)a0 shortLivedTokenUpgradeCompletion:(id /* block */)a1 willNotCompleteBlock:(id /* block */)a2;
- (BOOL)isLoginUser;
- (void).cxx_destruct;
- (void)userSwitchContextHasBeenUsed;
- (id)_fetchAKURLBagSynchronously;
- (void)writeAccountConfigurationIfNeededWithCompletion:(id /* block */)a0;
- (id)_authenticationContextWithAuthenticationResults:(id)a0;
- (void)ingestManagedBuddyData;
- (void)switchToLoginWindowDueToError:(id)a0 completion:(id /* block */)a1;
- (void)postUserSwitchContextHasBeenUsed;
- (void)dealloc;
- (id)_languageConfigurationDictionary;
- (void)recoverEMCSWithCompletion:(id /* block */)a0;
- (BOOL)needsToUpgradeShortLivedToken;
- (void)_modifyAuthenticationContextIfNeeded:(id)a0;
- (void)_registerForStartupCompletionNotificationWithTask:(id /* block */)a0;

@end

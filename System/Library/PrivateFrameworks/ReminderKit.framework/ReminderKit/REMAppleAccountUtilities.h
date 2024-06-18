@class NSArray, ACAccountStore, ACAccount;

@interface REMAppleAccountUtilities : NSObject

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (nonatomic) BOOL cachedICloudACAccountsAreValid;
@property (retain, nonatomic) ACAccount *_debug_primaryICloudACAccount;
@property (retain, nonatomic) ACAccount *_debug_fullICloudACAccount;
@property (readonly) ACAccount *unsafeUntilSystemReady_primaryICloudACAccount;
@property (readonly) NSArray *unsafeUntilSystemReady_allICloudACAccounts;

+ (id)sharedInstance;
+ (id)accountDescriptionWithACAccount:(id)a0;

- (void)saveDidChooseToMigrate:(BOOL)a0 didFinishMigration:(BOOL)a1 toACAccount:(id)a2 inStore:(id)a3 completionHandler:(id /* block */)a4;
- (void)accountStoreDidChange:(id)a0;
- (id)init;
- (id)initForObservingAccountStoreChanges:(BOOL)a0;
- (void)_invalidateCachedICloudACAccounts;
- (void)_setNonPrimaryICloudACAccount:(id)a0;
- (id)accessQueue;
- (void)_setPrimaryICloudACAccount:(id)a0;
- (void)_updateCachedICloudACAccounts;
- (id)unsafeUntilSystemReady_iCloudAccountCalDavServiceWithAccountID:(id)a0;
- (id)unsafeUntilSystemReady_icloudACAccountMatchingAccountIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)unsafeUntilSystemReady_allICloudAccountsWithCloudKitEnabled;
- (void)_unsetMigrationFlagsWithACAccount:(id)a0 inStore:(id)a1 completionHandler:(id /* block */)a2;
- (id)unsafeUntilSystemReady_allCloudKitRemindersEnabledICloudACAccounts;
- (id)status;
- (void)dealloc;
- (void)invalidateICloudACAccounts;
- (id)unsafeUntilSystemReady_displayedHostnameOfICloudACAccountWithAccountIdentifier:(id)a0;

@end

@class ACDAccountStore, NSString;

@interface ACDAccountStoreFilter : NSObject <ACRemoteAccountStoreProtocol>

@property (readonly, nonatomic) ACDAccountStore *backingAccountStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (void)parentAccountForAccountWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)dataclassesWithHandler:(id /* block */)a0;
- (void)isPushSupportedForAccount:(id)a0 completion:(id /* block */)a1;
- (void)updateExistenceCacheOfAccountWithTypeIdentifier:(id)a0 withHandler:(id /* block */)a1;
- (void)setPermissionGranted:(id)a0 forBundleID:(id)a1 onAccountType:(id)a2 withHandler:(id /* block */)a3;
- (void)clientTokenForAccountIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)childAccountsWithAccountTypeIdentifier:(id)a0 parentAccountIdentifier:(id)a1 handler:(id /* block */)a2;
- (void)accountIdentifiersEnabledForDataclasses:(id)a0 withAccountTypeIdentifiers:(id)a1 completion:(id /* block */)a2;
- (void)requestAccessForAccountTypeWithIdentifier:(id)a0 options:(id)a1 withHandler:(id /* block */)a2;
- (void)enabledDataclassesForAccountWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)accountsWithAccountTypeIdentifiers:(id)a0 preloadedProperties:(id)a1 completion:(id /* block */)a2;
- (void)accountWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)credentialForAccountWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)removeAccountsFromPairedDeviceWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)canSaveAccount:(id)a0 completion:(id /* block */)a1;
- (void)removeAccountFromPairedDevice:(id)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (void)renewCredentialsForAccount:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)accountsWithHandler:(id /* block */)a0;
- (void)notifyRemoteDevicesOfModifiedAccount:(id)a0 withChangeType:(id)a1;
- (void)credentialForAccount:(id)a0 serviceID:(id)a1 handler:(id /* block */)a2;
- (void)removeAccountType:(id)a0 withHandler:(id /* block */)a1;
- (void)setCredential:(id)a0 forAccount:(id)a1 serviceID:(id)a2 completion:(id /* block */)a3;
- (void)removeCredentialItem:(id)a0 completion:(id /* block */)a1;
- (void)permissionForAccountType:(id)a0 withHandler:(id /* block */)a1;
- (void)isTetheredSyncingEnabledForDataclass:(id)a0 completion:(id /* block */)a1;
- (void)openAuthenticationURL:(id)a0 forAccount:(id)a1 shouldConfirm:(BOOL)a2 completion:(id /* block */)a3;
- (void)tetheredSyncSourceTypeForDataclass:(id)a0 completion:(id /* block */)a1;
- (void)accountTypesWithHandler:(id /* block */)a0;
- (void)accountIdentifiersEnabledForDataclass:(id)a0 handler:(id /* block */)a1;
- (void)insertAccountType:(id)a0 withHandler:(id /* block */)a1;
- (void)preloadDataclassOwnersWithCompletion:(id /* block */)a0;
- (void)verifyCredentialsForAccount:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)dataclassActionsForAccountDeletion:(id)a0 completion:(id /* block */)a1;
- (void)appPermissionsForAccountType:(id)a0 withHandler:(id /* block */)a1;
- (void)scheduleBackupIfNonexistent:(id /* block */)a0;
- (void)triggerKeychainMigrationIfNecessary:(id /* block */)a0;
- (void)supportedDataclassesForAccountType:(id)a0 handler:(id /* block */)a1;
- (void)kerberosAccountsForDomainFromURL:(id)a0 completion:(id /* block */)a1;
- (void)accountsWithAccountType:(id)a0 handler:(id /* block */)a1;
- (void)migrateCredentialForAccount:(id)a0 completion:(id /* block */)a1;
- (void)accountsWithAccountType:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)provisionedDataclassesForAccountWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)clearAllPermissionsGrantedForAccountType:(id)a0 withHandler:(id /* block */)a1;
- (void)credentialItemForAccount:(id)a0 serviceName:(id)a1 completion:(id /* block */)a2;
- (void)dataclassActionsForAccountSave:(id)a0 completion:(id /* block */)a1;
- (void)accountsOnPairedDeviceWithAccountTypes:(id)a0 withOptions:(id)a1 handler:(id /* block */)a2;
- (void)runAccountMigrationPlugins:(id /* block */)a0;
- (void)isPerformingDataclassActionsForAccount:(id)a0 completion:(id /* block */)a1;
- (void)saveAccount:(id)a0 toPairedDeviceWithOptions:(id)a1 completion:(id /* block */)a2;
- (void)removeAccount:(id)a0 withDataclassActions:(id)a1 completion:(id /* block */)a2;
- (void)resetDatabaseToVersion:(id)a0 withCompletion:(id /* block */)a1;
- (void)insertCredentialItem:(id)a0 completion:(id /* block */)a1;
- (void)addClientToken:(id)a0 forAccountIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)accessKeysForAccountType:(id)a0 handler:(id /* block */)a1;
- (void)handleURL:(id)a0;
- (void)saveAccount:(id)a0 withHandler:(id /* block */)a1;
- (void)displayAccountTypeForAccountWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)accountExistsWithDescription:(id)a0 completion:(id /* block */)a1;
- (void)shutdownAccountsD:(id /* block */)a0;
- (void)accountTypeWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)childAccountsForAccountWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)syncableDataclassesForAccountType:(id)a0 handler:(id /* block */)a1;
- (void)grantedPermissionsForAccountType:(id)a0 withHandler:(id /* block */)a1;
- (void)registerMonitorForAccountsOfTypes:(id)a0 propertiesToPrefetch:(id)a1 completion:(id /* block */)a2;
- (void)saveCredentialItem:(id)a0 completion:(id /* block */)a1;
- (void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)credentialItemsWithCompletion:(id /* block */)a0;
- (void)setClientBundleID:(id)a0 withHandler:(id /* block */)a1;
- (void)clearGrantedPermissionsForAccountType:(id)a0 withHandler:(id /* block */)a1;
- (void)saveAccount:(id)a0 verify:(BOOL)a1 dataclassActions:(id)a2 completion:(id /* block */)a3;
- (id)init;
- (void)setNotificationsEnabled:(BOOL)a0;
- (BOOL)_accessGrantedForClient:(id)a0 onAccountTypeID:(id)a1;
- (id)initWithBackingAccountStore:(id)a0;
- (void)accountIdentifiersEnabledToSyncDataclass:(id)a0 handler:(id /* block */)a1;
- (BOOL)_accessGrantedForBundleID:(id)a0 onAccountTypeID:(id)a1;
- (BOOL)_wildCardAuthorizationMatchingForAccountTypeIdentifier:(id)a0;
- (BOOL)_isClientPermittedToAccessAccountTypeWithIdentifier:(id)a0;
- (BOOL)isClientEntitledToAccessAccountTypeWithIdentifier:(id)a0;
- (void)discoverPropertiesForAccount:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)_clientHasPermissionToAddAccount:(id)a0;
- (void)openAuthenticationURLForAccount:(id)a0 withDelegateClassName:(id)a1 fromBundleAtPath:(id)a2 shouldConfirm:(BOOL)a3 completion:(id /* block */)a4;
- (void)notifyRemoteDevicesOfModifiedAccount:(id)a0 withChangeType:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (id)_appPermissionsForAccountTypeIdentifier:(id)a0;
- (BOOL)_isClientPermittedToAccessAccount:(id)a0;
- (BOOL)_isClientPermittedToRemoveAccount:(id)a0;

@end

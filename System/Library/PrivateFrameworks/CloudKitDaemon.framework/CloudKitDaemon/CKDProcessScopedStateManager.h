@interface CKDProcessScopedStateManager : NSObject <CKXPCProcessScopedDaemon>

+ (id)sharedManager;

- (void)accountsDidRevokeAccessToBundleID:(id)a0 containerIdentifiers:(id)a1;
- (void)clearPCSCachesForKnownContainersWithCompletionHandler:(id /* block */)a0;
- (void)fetchUsabilityForTestAccountCredentials:(id)a0 completionHandler:(id /* block */)a1;
- (id)_init;
- (void)updatePushTokens;
- (void)accountsWillDeleteAccount:(id)a0 completionHandler:(id /* block */)a1;
- (void)_wipePersonaBasedClientCacheForAppRecord:(id)a0;
- (void)dumpAllClientsStatusReportToFileHandle:(id)a0 completionHandler:(id /* block */)a1;
- (void)maxInlineMergeableDeltaSizeWithCompletionHandler:(id /* block */)a0;
- (void)wipeAllCachesAndDie;
- (void)accountsDidGrantAccessToBundleID:(id)a0 containerIdentifiers:(id)a1;
- (void)globalDeviceIdentifierWithCompletionHandler:(id /* block */)a0;
- (void)kickOffPendingLongLivedOperations;
- (void)wipeServerConfigurationsAndDie;
- (void)accountWithID:(id)a0 changedWithChangeType:(long long)a1;

@end

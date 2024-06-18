@class NSXPCInterface;
@protocol NSObject, CKXPCProcessScopedDaemon;

@interface CKProcessScopedDaemonProxy : NSObject

@property (class, readonly, copy) NSXPCInterface *CKXPCClientToDaemonProcessScopedInterface;
@property (class, readonly, copy) NSXPCInterface *CKXPCDaemonToClientProcessScopedInterface;

@property (retain, nonatomic) id<CKXPCProcessScopedDaemon> processScopedDaemonProxyCreator;
@property BOOL hasValidProcessScopedDaemonProxyCreator;
@property (retain, nonatomic) id<NSObject> connectionInterruptedObserver;

+ (id)sharedProcessScopedDaemonProxy;

- (void)accountsDidRevokeAccessToBundleID:(id)a0 containerIdentifiers:(id)a1;
- (void)clearPCSCachesForKnownContainersWithCompletionHandler:(id /* block */)a0;
- (void)kill;
- (void)fetchUsabilityForTestAccountCredentials:(id)a0 completionHandler:(id /* block */)a1;
- (id)_init;
- (void)updatePushTokens;
- (void)accountsWillDeleteAccount:(id)a0 completionHandler:(id /* block */)a1;
- (id)globalDeviceIdentifier;
- (unsigned long long)maxInlineMergeableDeltaSize;
- (void).cxx_destruct;
- (void)dumpAllClientsStatusReportToFileHandle:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (void)wipeAllCachesAndDie;
- (void)accountsDidGrantAccessToBundleID:(id)a0 containerIdentifiers:(id)a1;
- (void)_getProcessScopedDaemonProxyCreatorSynchronous:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_getProcessScopedDaemonProxySynchronous:(BOOL)a0 errorHandler:(id /* block */)a1 daemonProxyHandler:(id /* block */)a2;
- (void)wipeServerConfigurationsAndDie;
- (void)accountWithID:(id)a0 changedWithChangeType:(long long)a1;

@end

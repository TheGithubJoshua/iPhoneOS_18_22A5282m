@class NSArray, NSString, NSSet, NSMutableDictionary, NSHashTable;
@protocol NSObject;

@interface ACMonitoredAccountStore : ACAccountStore <ACRemoteAccountStoreSessionDelegate> {
    NSSet *_accountTypesToMonitor;
    NSArray *_propertiesToPrefetch;
    NSMutableDictionary *_accountsByID;
    NSHashTable *_delegates;
    id<NSObject> _credentialsDidChangeObserver;
    id<NSObject> _remoteAccountDidChangeObserver;
}

@property (readonly) NSArray *monitoredAccounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)connectionDelegate;
- (void)credentialsChangedNotification:(id)a0;
- (void)addDelegate:(id)a0;
- (void)_registerAccountMonitorWithCompletion:(id /* block */)a0;
- (void)registerSynchronouslyWithError:(id *)a0;
- (void)removeDelegate:(id)a0;
- (id)initWithAccountTypes:(id)a0 delegate:(id)a1;
- (void)connectionClosed;
- (void)accountWasRemoved:(id)a0;
- (void)_processAccountsListForNotifications:(id)a0;
- (void)_registerForCredentialChangedNotifications;
- (void)accountWasAdded:(id)a0;
- (void)_registerAccountMonitorSynchronouslyWithCompletion:(id /* block */)a0;
- (id)monitoredAccountWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithAccountTypes:(id)a0 propertiesToPrefetch:(id)a1 delegate:(id)a2;
- (id)_allDelegates;
- (void)_reregister;
- (id)initWithWithRemoteEndpoint:(id)a0 effectiveBundleID:(id)a1 accountTypes:(id)a2 propertiesToPrefetch:(id)a3 delegate:(id)a4;
- (void)dealloc;
- (void)registerWithCompletion:(id /* block */)a0;
- (void)_sendNotificationOfChange;
- (void)_accountsListPopulated:(id)a0;
- (void)accountWasModified:(id)a0;

@end

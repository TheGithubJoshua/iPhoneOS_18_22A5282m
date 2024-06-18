@class NSObject, NSString, AMSSQLiteConnection;
@protocol OS_dispatch_queue;

@interface AMSMetricsDatabase : NSObject <AMSSQLiteConnectionDelegate>

@property (retain, nonatomic) AMSSQLiteConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSString *containerId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDatabaseWithContainerId:(id)a0;

- (BOOL)dropEvents:(id)a0 error:(id *)a1;
- (BOOL)removeCrossDeviceIdentifiersWithError:(id *)a0;
- (BOOL)connectionNeedsResetForCorruption:(id)a0;
- (BOOL)enumerateUnsyncedIdentifierStoresUsingBlock:(id /* block */)a0 error:(id *)a1;
- (id)identifierForKey:(id)a0 updateMaybe:(id /* block */)a1 error:(id *)a2;
- (BOOL)unlockEvents:(id)a0 error:(id *)a1;
- (id)_cachePath;
- (BOOL)dropAllEventsWithLockKey:(id)a0 error:(id *)a1;
- (BOOL)permanentlyRemoveIdentifierForKey:(id)a0 error:(id *)a1;
- (BOOL)cleanupInvalidIdentifiersWithError:(id *)a0;
- (id)initWithContainerId:(id)a0;
- (BOOL)removeIdentifiersForAccount:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)enumerateEventsWithTopic:(id)a0 lockKey:(id)a1 objectBlock:(id /* block */)a2;
- (void)_performTransaction:(id /* block */)a0;
- (id)_lockedById;
- (id)lockAllEventsWithError:(id *)a0;
- (BOOL)unlockAllEventsWithKey:(id)a0 error:(id *)a1;
- (void)dealloc;
- (long long)countAllEventsWithLockKey:(id)a0 error:(id *)a1;
- (BOOL)insertEvents:(id)a0 error:(id *)a1;
- (BOOL)enumerateUnsyncedIdentifiersUsingBlock:(id /* block */)a0 error:(id *)a1;
- (id)identifierStoreForKey:(id)a0 updateMaybe:(id /* block */)a1 error:(id *)a2;
- (BOOL)clearIdentifierSyncStateWithError:(id *)a0;
- (void)close;

@end

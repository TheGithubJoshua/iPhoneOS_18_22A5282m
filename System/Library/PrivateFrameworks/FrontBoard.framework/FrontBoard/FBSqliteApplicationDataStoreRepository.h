@class NSString, BSSqliteDatabaseConnection, NSURL, NSObject;
@protocol OS_dispatch_queue, FBApplicationDataStoreRepositoryDelegate;

@interface FBSqliteApplicationDataStoreRepository : NSObject <FBApplicationDataStoreRepository> {
    NSURL *_storeURL;
    NSObject<OS_dispatch_queue> *_dbQueue;
    BSSqliteDatabaseConnection *_dbQueue_dbConnection;
    unsigned long long _dbQueue_batchDepth;
    int _dbQueue_firstUnlockToken;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}

@property (weak, nonatomic) id<FBApplicationDataStoreRepositoryDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_objectForResultRow:(id)a0 index:(unsigned long long)a1;
+ (id)_generateParameterizedQuery:(id)a0 forKeyList:(id)a1 outBindings:(id *)a2;
+ (BOOL)_objectRequiresSerialization:(id)a0;

- (id)objectForKey:(id)a0 forApplication:(id)a1;
- (void)removeObjectForKey:(id)a0 forApplication:(id)a1;
- (id)_dbQueue_objectForKey:(id)a0 forApplication:(id)a1;
- (id)_dbQueue_keysForApplication:(id)a0;
- (void)_dbQueue_notifyDelegateOfLateLoad;
- (void)flushSynchronously;
- (BOOL)_dbQueue_executeStatement:(id)a0 bindings:(id)a1 resultRowHandler:(id /* block */)a2;
- (id)urlByAppendingString:(id)a0 toURL:(id)a1;
- (id)keysForApplication:(id)a0;
- (void)beginBatchedUpdate;
- (BOOL)_dbQueue_containsKey:(id)a0 forApplication:(id)a1;
- (id)_dbQueue_openDatabase;
- (void)_dbQueue_notifyDelegateOfChangeForKeys:(id)a0 application:(id)a1;
- (void)_dbQueue_notifyDelegateOfStoreInvalidationForIdentifier:(id)a0;
- (void)endBatchedUpdate;
- (void)removeAllObjectsForApplication:(id)a0;
- (BOOL)_inAlternateSystemApp;
- (id)_dbQueue_objectsForKeys:(id)a0;
- (void).cxx_destruct;
- (long long)_dbQueue_databaseVersion;
- (BOOL)_dbQueue_tryPreserveDamagedDatabase;
- (BOOL)_dbQueue_executeStatement:(id)a0 bindings:(id)a1 resultRowHandler:(id /* block */)a2 error:(out id *)a3;
- (void)setObject:(id)a0 forKey:(id)a1 forApplication:(id)a2;
- (BOOL)_preserveFileAtURL:(id)a0;
- (BOOL)_isEligibleForSaving:(id)a0;
- (id)_dbQueue_applicationIdentifiersWithState;
- (BOOL)_dbQueue_truncateDamagedDatabase;
- (BOOL)_dbQueue_databaseIntegrityCheck;
- (id)initWithStorePath:(id)a0;
- (void)_dbQueue_createTables;
- (void)dealloc;
- (void)removeObjectsForKeys:(id)a0 forApplication:(id)a1;
- (id)applicationIdentifiersWithState;
- (id)allObjectsForKeys:(id)a0;
- (BOOL)containsKey:(id)a0 forApplication:(id)a1;
- (void)_dbQueue_load;
- (BOOL)_dbQueue_loadDatabase;
- (void)close;
- (void)_dbQueue_performWithSavepoint:(id)a0 handler:(id /* block */)a1;

@end

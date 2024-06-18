@class _PASSqliteDatabase, NSString, _PASKVOHandler, NSUserDefaults;
@protocol TRIStorageManagementProtocol, TRIPaths;

@interface TRIAssetStoreDatabase : NSObject <_PASDatabaseMigrationProtocol> {
    id<TRIPaths> _paths;
    id<TRIStorageManagementProtocol> _storageManagement;
    NSString *_databasePath;
    _PASSqliteDatabase *_db;
    NSUserDefaults *_defaults;
    _PASKVOHandler *_kvoHandler;
    _Atomic BOOL _isQueryPlanLoggingEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)migrations;
- (id)databaseHandle;
- (BOOL)vacuum;
- (BOOL)migrateToVersion:(unsigned int)a0;
- (id)queriesToSkipFromEmptyToVersion:(unsigned int *)a0;
- (id)init;
- (void)enumerateAssetIdsWithoutLiveReferencesUsingBlock:(id /* block */)a0;
- (void)enumerateOnDiskMAReferencesWithoutCorrespondingDatabaseEntriesUsingBlock:(id /* block */)a0;
- (void)_updateQueryPlanLogging;
- (void)closePermanently;
- (id)initWithPaths:(id)a0 storageManagement:(id)a1;
- (void)_enableQueryPlanLogging;
- (void).cxx_destruct;
- (BOOL)dropTableWithName:(id)a0 transaction:(id)a1;
- (id)initInMemoryAndPerformMigrations:(BOOL)a0;
- (void)_disableQueryPlanLogging;
- (BOOL)addReferenceToAutoAssetId:(id)a0 forLifetimeOfPath:(id)a1;
- (id)initWithPaths:(id)a0 databasePath:(id)a1 storageManagement:(id)a2 performMigrations:(BOOL)a3;

@end

@class WBSSQLiteDatabase, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface CPSClipDataSQLiteStore : NSObject {
    NSURL *_databaseURL;
    WBSSQLiteDatabase *_database;
    NSObject<OS_dispatch_queue> *_databaseQueue;
}

@property (class, readonly, nonatomic) CPSClipDataSQLiteStore *defaultStore;

- (id)init;
- (int)_migrateToSchemaVersion_7;
- (int)_createFreshDatabaseSchema;
- (id)initWithDatabaseURL:(id)a0;
- (int)_migrateToSchemaVersion_2;
- (int)_migrateToSchemaVersion_4;
- (int)_migrateToSchemaVersion_5;
- (int)_migrateToSchemaVersion_6;
- (void)_closeDatabase;
- (int)_schemaVersion;
- (void).cxx_destruct;
- (BOOL)_isDatabaseOpen;
- (int)_setDatabaseSchemaVersion:(int)a0;
- (int)_migrateToSchemaVersion_3;
- (int)_migrateToCurrentSchemaVersionIfNeeded;
- (int)_migrateToSchemaVersion:(int)a0;
- (void)_openDatabaseAndCheckIntegrity:(BOOL)a0;
- (BOOL)_checkDatabaseIntegrity;
- (void)getAppClipRecordWithBundleID:(id)a0 completion:(id /* block */)a1;
- (int)_createClipEntryPointsTable;
- (BOOL)_insertAppClipRecord:(id)a0;
- (BOOL)_insertOrReplaceEntryPointRecord:(id)a0;
- (int)_migrateToSchemeVersion_8;
- (BOOL)_updateAppClipRecord:(id)a0;
- (void)getEntryPointRecordWithWebClipIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)removeRecordWithBundleID:(id)a0;
- (void)saveAppClipRecord:(id)a0 completion:(id /* block */)a1;
- (void)saveClipEntryPointRecord:(id)a0 completion:(id /* block */)a1;

@end
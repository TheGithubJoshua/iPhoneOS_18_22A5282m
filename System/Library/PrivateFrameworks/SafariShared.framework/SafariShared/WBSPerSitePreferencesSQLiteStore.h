@class WBSSQLiteDatabase, NSURL, WBSSafariBookmarksSyncAgentProxy, NSObject;
@protocol OS_dispatch_queue;

@interface WBSPerSitePreferencesSQLiteStore : NSObject {
    NSURL *_databaseURL;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    WBSSQLiteDatabase *_database;
}

@property (retain, nonatomic) WBSSafariBookmarksSyncAgentProxy *syncProxy;

+ (BOOL)isPreferenceSyncable:(id)a0;
+ (id)sharedStore;
+ (id)defaultDatabaseURL;
+ (id)staticSyncablePerSiteSettings;

- (void)removePreferenceValuesForDomainPrefixes:(id)a0 fromPreferences:(id)a1 completionHandler:(id /* block */)a2;
- (id)init;
- (void)setValue:(id)a0 ofPreference:(id)a1 forDomain:(id)a2 withTimestamp:(id)a3 completionHandler:(id /* block */)a4;
- (void)_setSyncData:(id)a0 forPreference:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeAllPreferenceValuesFromPreferences:(id)a0 completionHandler:(id /* block */)a1;
- (void)getValuesOfPreferences:(id)a0 forDomain:(id)a1 withTimeoutInterval:(double)a2 completionHandler:(id /* block */)a3;
- (void)getValuesOfPreference:(id)a0 forDomains:(id)a1 withTimeoutInterval:(double)a2 completionHandler:(id /* block */)a3;
- (int)_createFreshDatabaseSchema;
- (id)initWithDatabaseURL:(id)a0;
- (int)_migrateToSchemaVersion_2;
- (void)getDeletedCloudKitSyncDataForRecordName:(id)a0 completionHandler:(id /* block */)a1;
- (void)getAllDomainsConfiguredForPreference:(id)a0 completionHandler:(id /* block */)a1;
- (void)removePreferenceValuesForDomains:(id)a0 fromPreference:(id)a1 completionHandler:(id /* block */)a2;
- (void)removePreferenceValueWithRecordName:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_tryToPerformTransactionInBlock:(id /* block */)a0;
- (int)_migrateToSchemaVersion_4;
- (int)_migrateToSchemaVersion_5;
- (void)removeAllSyncData;
- (void)removeAllPreferenceValuesFromPreference:(id)a0 completionHandler:(id /* block */)a1;
- (void)_closeDatabase;
- (void)getSyncDataForPreference:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeAllCloudKitRecordsWithCompletionHandler:(id /* block */)a0;
- (void)_setDeletedCloudKitSyncData:(id)a0 forRecordName:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)removeTombstoneWithRecordName:(id)a0 completionHandler:(id /* block */)a1;
- (void)setValue:(id)a0 ofPreference:(id)a1 forDomain:(id)a2 includeTimestamp:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)_openDatabaseIfNecessary;
- (id)_queryListForPreferences:(id)a0;
- (BOOL)_isDatabaseOpen;
- (void)_openDatabase;
- (int)_setDatabaseSchemaVersion:(int)a0;
- (int)_migrateToSchemaVersion_3;
- (int)_migrateToCurrentSchemaVersionIfNecessary;
- (void)savePerSiteSettingCloudKitRecordToDisk:(id)a0 completionHandler:(id /* block */)a1;
- (void)getTimestampAndValueOfPreference:(id)a0 forDomain:(id)a1 completionHandler:(id /* block */)a2;
- (void)dealloc;
- (void)closeDatabase;
- (void)getAllPreferenceInformationForPreference:(id)a0 completionHandler:(id /* block */)a1;
- (void)setValue:(id)a0 ofPreference:(id)a1 forDomain:(id)a2 completionHandler:(id /* block */)a3;
- (void)getSyncDataForPreference:(id)a0 domain:(id)a1 completionHandler:(id /* block */)a2;
- (void)getValueOfPreference:(id)a0 forDomain:(id)a1 withTimeoutInterval:(double)a2 completionHandler:(id /* block */)a3;
- (void)_setSyncData:(id)a0 forPreference:(id)a1 domain:(id)a2 recordName:(id)a3 completionHandler:(id /* block */)a4;
- (void)setDefaultValue:(id)a0 forPreference:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_migrateToSchemaVersion:(int)a0;
- (void)getDefaultValueForPreference:(id)a0 completionHandler:(id /* block */)a1;

@end

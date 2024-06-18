@class NSDate, NSMutableDictionary, CKVGlobalInfoLog, CKVSettings, NSObject, CKVFilesystemBase;
@protocol OS_dispatch_queue;

@interface CKVIndexManager : NSObject <KVSkitAccessProvider> {
    CKVFilesystemBase *_filesystemBase;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_migrationStartTime;
    NSMutableDictionary *_instanceLogCache;
    NSMutableDictionary *_readOnlyDatabaseCache;
    NSMutableDictionary *_readOnlySkitCache;
    CKVGlobalInfoLog *_globalLog;
}

@property (readonly, nonatomic) CKVSettings *settings;

+ (id)sharedReaderInstance;

- (id)init;
- (BOOL)deleteDataForUser:(id)a0 deviceId:(id)a1 ifMatching:(BOOL)a2 didDelete:(BOOL *)a3;
- (int)_protectionClassForDataDirectory:(id)a0;
- (id)storedLanguageCodes;
- (BOOL)_destroyStateAtDataDirectory:(id)a0;
- (BOOL)_deleteDataForUser:(id)a0 deviceId:(id)a1 ifMatching:(BOOL)a2 didDelete:(BOOL *)a3;
- (BOOL)_executeDatabaseTransactionForUser:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)submitSkitRebuildTransactionForUser:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)_executeSkitRebuildTransactionAtDataDirectory:(id)a0 description:(id)a1 usingBlock:(id /* block */)a2;
- (BOOL)_executeSkitRebuildTransactionForUser:(id)a0 usingBlock:(id /* block */)a1;
- (id)findProfileSnapshotsNearDate:(id)a0;
- (id)accessReadOnlyDatabaseForAllUsers;
- (BOOL)initiateMigration:(BOOL)a0;
- (BOOL)_initiateMigration:(BOOL)a0;
- (unsigned short)performMaintenance;
- (BOOL)updateStoredEnablementOptions:(unsigned char)a0;
- (id)_localDatabaseFileURL;
- (BOOL)_verifySkitAtDataDirectory:(id)a0 description:(id)a1;
- (id)captureProfileSnapshot:(id)a0;
- (void)_clearAllCaches;
- (void)_verifyAllManagedDataDirectories;
- (void)performIndexVerification;
- (BOOL)setItems:(id)a0 error:(id *)a1;
- (id)accessReadOnlyDatabaseForUser:(id)a0;
- (void)_loadGlobalLog;
- (id)_dataDirectoryURLForUser:(id)a0;
- (BOOL)_dataDirectoryExists:(id)a0;
- (BOOL)deleteDataForUser:(id)a0;
- (BOOL)rebuildSpeechProfileForUser:(id)a0;
- (unsigned short)_executeDatabaseAndSkitTransactionForUser:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)resetAllState;
- (void)_speechProfileAccessAtDataDirectory:(id)a0 userId:(id)a1 description:(id)a2 usingBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (BOOL)_destroySkitAtDataDirectory:(id)a0;
- (BOOL)_shouldRunMigration;
- (BOOL)_purgeProfileSnapshots;
- (id)initWithFilesystemBase:(id)a0 settings:(id)a1 isWriter:(BOOL)a2;
- (BOOL)_rebuildSpeechProfileForUser:(id)a0;
- (id)_openReadWriteDatabaseOrCreate:(BOOL)a0 atDataDirectory:(id)a1 description:(id)a2;
- (unsigned short)submitDatabaseAndSkitTransactionForUser:(id)a0 usingBlock:(id /* block */)a1;
- (id)_cachedReadOnlyDatabaseAccessAtDataDirectoryURL:(id)a0;
- (id)_getFilesSortedByCreationDateForDirectoryPath:(id)a0;
- (BOOL)_destroySpeechProfileAtDataDirectory:(id)a0;
- (unsigned char)storedEnablementOptions;
- (void)completeMigration;
- (BOOL)updateStoredLanguageCodes:(id)a0;
- (id)_writeOnlySkitAccessAtDataDirectory:(id)a0 description:(id)a1 flushThreshold:(unsigned long long)a2;
- (id)_snapshotDirectoryURL;
- (BOOL)submitDatabaseTransactionForUser:(id)a0 usingBlock:(id /* block */)a1;
- (void)_verifyIndexesAtDataDirectory:(id)a0 description:(id)a1 userId:(id)a2 clean:(BOOL)a3;
- (BOOL)supportsMultiUser;
- (void)registerSpeechProfileUpdateForUser:(id)a0 originAppId:(id)a1 itemType:(long long)a2 fieldTypes:(id)a3 options:(unsigned short)a4;
- (void)_clearCachedDatabaseAccessAtDataDirectory:(id)a0;
- (id)_localDataDirectoryURL;
- (void)_cacheAllLocalAccess;
- (void)_speechProfileAccessForUser:(id)a0 usingBlock:(id /* block */)a1;
- (id)_accessReadOnlyDatabaseForAllUsers;
- (void)_clearAllCachedAccessAtDataDirectory:(id)a0;
- (void)_cleanupSnapshotDirectory;
- (void)closeAllConnections;
- (id)_cachedReadOnlySkitAccessAtDataDirectoryURL:(id)a0;
- (BOOL)_resetAllState;
- (id)_localSkitDirectoryURL;
- (BOOL)_shouldCleanupDatabaseAtDataDirectory:(id)a0 instanceLog:(id)a1;
- (id)userIdHash:(id)a0;
- (void)resetWithFilesystemBase:(id)a0;
- (id)_instanceLogAtDataDirectory:(id)a0;
- (id)lastMaintenanceForUser:(id)a0;
- (void)_clearCachedSkitAccessAtDataDirectory:(id)a0;
- (id)accessReadOnlySkitForUser:(id)a0;

@end

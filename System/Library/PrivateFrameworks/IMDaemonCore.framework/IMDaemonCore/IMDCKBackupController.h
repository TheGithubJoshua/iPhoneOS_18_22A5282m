@class NSDate, NSString, IMDCKUtilities;

@interface IMDCKBackupController : NSObject <IMDXPCEventStreamHandlerDelegate>

@property (weak, nonatomic) IMDCKUtilities *ckUtilities;
@property (retain, nonatomic) NSDate *firstSyncDate;
@property (nonatomic) BOOL iCloudBackupsDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)checkDatabaseWasRestored;
- (void)eventStreamHandler:(id)a0 didReceiveEventWithName:(id)a1 userInfo:(id)a2;
- (id)dateOfLastBackUp;
- (void)removeUserDefault:(id)a0;
- (void)setFirstSyncDateToNow;
- (BOOL)iCloudBackupsDisabled;
- (id)syncStateDebuggingInfo:(id)a0;
- (long long)_attemptToDisableiCloudBackupsWithCurrentDeviceState:(id)a0;
- (void)_savePreviousDeviceState:(id)a0;
- (void)_ensureRestoredDatabaseToBackup;
- (void)setICloudBackupsDisabled:(BOOL)a0;
- (BOOL)iCloudBackupEnabledSystemWide;
- (id)_serverBagTimeIntervalForFirstSyncTimeout;
- (id)createBackupManager;
- (BOOL)_currentDeviceStateIsRestore:(id)a0;
- (id)_disabledDirectoryPath;
- (void)_saveRecordCount:(long long)a0;
- (BOOL)pathRemovedFromBackup:(id)a0;
- (long long)_readRecordCount;
- (id)_primaryAccountAltDSID;
- (void)setUserDefaultBool:(BOOL)a0 forKey:(id)a1;
- (id)_readPreviousDeviceState;
- (void).cxx_destruct;
- (BOOL)readUserDefaultBoolForKey:(id)a0;
- (long long)_disableiCloudBackupIfSyncPercentageIsHighEnough:(long long)a0 totalCount:(long long)a1;
- (void)_enqueOperation:(id)a0;
- (void)toggleiCloudBackupsIfNeeded:(id /* block */)a0;
- (BOOL)_setiCloudBackupAttribute:(BOOL)a0 onItemAtPath:(id)a1 error:(id *)a2;
- (BOOL)_timeIntervalFromFirstSync:(id)a0 hasExpiredForDate:(id)a1;
- (void)_setICloudBackupsDisabled:(BOOL)a0;
- (void)setFirstSyncDate:(id)a0;
- (BOOL)setupAssistantNeedsToRun;
- (BOOL)_canDisableiCloudBackupsAfterRestore;
- (void)_fetchCountOfSyncedCloudKitRecords:(long long *)a0 totalCount:(long long *)a1;
- (double)_firstSyncExpirationTimeInterval;
- (id)_readCurrentDeviceState;
- (BOOL)_firstSyncTimeoutHasExpired;
- (void)writeUserDefault:(id)a0 forKey:(id)a1;
- (void)registerForDistributedNotifications;
- (id)readUserDefaultForKey:(id)a0;
- (void)removePathFromiCloudBackup:(id)a0;
- (BOOL)_deviceStateHasChanged:(id)a0;
- (void)_deviceIDFromMobileBackupManager:(id *)a0 legacyDeviceID:(id *)a1;
- (id)_debuggingRestoreStateDescription;
- (void)sendDeviceIDToCloudKitWithCompletion:(id /* block */)a0;
- (id)firstSyncDate;

@end

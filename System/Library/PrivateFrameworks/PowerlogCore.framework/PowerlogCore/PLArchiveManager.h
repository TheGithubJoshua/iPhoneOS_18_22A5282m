@class NSString, NSMutableArray, NSDate;

@interface PLArchiveManager : NSObject <PLArchiveJobManager>

@property double interval;
@property double mustRunInterval;
@property double EPSQLVacuumInterval;
@property double PLSQLDBDuration;
@property double EPSQLDBDuration;
@property double CESQLDBDuration;
@property double archiveRetention;
@property (retain) NSMutableArray *archiveJobs;
@property (nonatomic) BOOL interrupted;
@property (retain) NSMutableArray *notificationBlocks;
@property (retain) NSDate *lastEPSQLVacuumDate;
@property BOOL monotonicResetOccurred;
@property (nonatomic) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)workQueue;
+ (id)sharedInstance;
+ (id)lastArchivePath;
+ (void)systemTimeChangedByOffset:(double)a0;
+ (id)archiveEntriesWithComparisons:(id)a0;
+ (id)archiveEntriesUnfinished;
+ (id)storageQueue;
+ (id)allArchivePaths;
+ (id)archiveEntriesFinished;

- (void)disable;
- (void)migrate;
- (void)enable;
- (id)init;
- (void)handleFailure:(long long)a0 forArchiveEntry:(id)a1;
- (void)runActivityWithLastCompletedDate:(id)a0;
- (void)recover;
- (void)cleanup;
- (void)trimExtendedPersistenceLog;
- (id)getArchivingCriteria;
- (void).cxx_destruct;
- (void)runArchiveJobs;
- (void)runInitialActivity;
- (BOOL)isInterrupted;
- (BOOL)eliglibleToVacuumEPSQLForDate:(id)a0;
- (void)dealloc;
- (void)scheduleArchiveJobs;
- (void)migrateArchive:(id)a0;
- (void)deprecateTables;
- (void)registerForArchivingNotificationUsingBlock:(id /* block */)a0;
- (void)deprecateTablesEPSQL;
- (void)trimCleanEnergyLog;

@end

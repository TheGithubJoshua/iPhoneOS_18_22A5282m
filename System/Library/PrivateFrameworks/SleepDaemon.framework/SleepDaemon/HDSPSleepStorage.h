@class HKSPObserverSet, HDSPSyncedDefaults, NSString, HDSPEnvironment, HDSPSyncedDefaultsConfiguration;

@interface HDSPSleepStorage : NSObject <HDSPSyncedUserDefaultsExternalChangeDelegate, HDSPNotificationObserver, HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPSource>

@property (readonly, nonatomic) HDSPSyncedDefaults *syncedDefaults;
@property (readonly, nonatomic) HDSPSyncedDefaultsConfiguration *configuration;
@property (readonly, nonatomic) HKSPObserverSet *observers;
@property (readonly, nonatomic) unsigned long long dataVersion;
@property (readonly, nonatomic) unsigned long long cloudStorageDataVersion;
@property (readonly, nonatomic) unsigned long long localDataVersion;
@property (readonly, nonatomic) BOOL needsMigration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;

+ (id)standardConfiguration;

- (void)removeObserver:(id)a0;
- (id)initWithEnvironment:(id)a0;
- (id)diagnosticInfo;
- (id)loadSleepSettings:(id *)a0;
- (void)environmentWillBecomeReady:(id)a0;
- (BOOL)removeSleepScheduleWithError:(id *)a0;
- (BOOL)_saveObject:(id)a0 error:(id *)a1;
- (BOOL)saveSleepEventRecordChanges:(id)a0 error:(id *)a1;
- (BOOL)saveSleepSettings:(id)a0 error:(id *)a1;
- (id)notificationListener:(id)a0 didReceiveNotificationWithName:(id)a1;
- (BOOL)saveSleepScheduleChanges:(id)a0 error:(id *)a1;
- (BOOL)removeSleepSettingsWithError:(id *)a0;
- (BOOL)_saveObjectChanges:(id)a0 versionKey:(id)a1 currentVersion:(unsigned long long)a2 error:(id *)a3;
- (void)syncedUserDefaultsDidChangeExternally:(id)a0;
- (void)resetCloudStorage;
- (void)performInitialSyncWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithEnvironment:(id)a0 configuration:(id)a1 syncedDefaults:(id)a2;
- (BOOL)saveSleepScheduleModel:(id)a0 error:(id *)a1;
- (BOOL)removeSleepEventRecordWithError:(id *)a0;
- (id)diagnosticDescription;
- (id)loadSleepEventRecord:(id *)a0;
- (id)loadSleepSchedule:(id *)a0;
- (BOOL)saveSleepSettingsChanges:(id)a0 error:(id *)a1;
- (BOOL)_removeObjectProperties:(id)a0 error:(id *)a1;
- (BOOL)saveSleepSchedule:(id)a0 error:(id *)a1;
- (id)loadSleepScheduleModel:(id *)a0;
- (void)saveDataVersion;
- (BOOL)saveSleepEventRecord:(id)a0 error:(id *)a1;
- (void)addObserver:(id)a0;
- (id)_loadObjectOfClass:(Class)a0 allowedClasses:(id)a1 propertiesToLoad:(id)a2 error:(id *)a3;

@end

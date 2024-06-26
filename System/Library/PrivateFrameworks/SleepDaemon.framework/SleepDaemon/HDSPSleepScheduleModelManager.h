@class HKSPSleepSettings, HDSPSleepScheduleModelChangeEvaluator, HKSPSleepEventRecord, HKSPSleepScheduleModel, NSString, NSSet, HDSPEnvironment, HKSPSleepSchedule, HKSPObserverSet;
@protocol HDSPSleepEventDelegate;

@interface HDSPSleepScheduleModelManager : NSObject <HDSPDiagnosticsProvider, HDSPSleepEventProvider, HDSPTimeChangeObserver, HDSPSource, HDSPEnvironmentAware, HDSPSleepStorageObserver, HDSPApplicationWorkspaceObserver>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } storeLock;
@property (readonly, nonatomic) HKSPObserverSet *observers;
@property (readonly, nonatomic) HDSPSleepScheduleModelChangeEvaluator *changeEvaluator;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) HKSPSleepSchedule *sleepSchedule;
@property (readonly, nonatomic) HKSPSleepSettings *sleepSettings;
@property (readonly, nonatomic) HKSPSleepEventRecord *sleepEventRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) id<HDSPSleepEventDelegate> sleepEventDelegate;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;
@property (readonly, nonatomic) NSSet *observedApplicationBundleIdentifiers;

- (id)upcomingEventsDueAfterDate:(id)a0;
- (void)significantTimeChangeDetected:(id)a0;
- (id)_locked_loadSleepSettings:(id *)a0;
- (void)removeObserver:(id)a0;
- (BOOL)_locked_saveSleepEventRecord:(id)a0 error:(id *)a1 preNotifyBlock:(id /* block */)a2;
- (id)initWithEnvironment:(id)a0;
- (void)_turnOffSleepSchedule;
- (id)_loadSleepSettings:(id *)a0;
- (BOOL)_locked_saveSleepEventRecord:(id)a0 error:(id *)a1;
- (id)diagnosticInfo;
- (void)environmentDidBecomeReady:(id)a0;
- (void)_locked_applyNecessarySleepSettingsChangesBeforeSavingSleepEventRecord:(id)a0;
- (void)environmentWillBecomeReady:(id)a0;
- (id)_locked_validateSleepSchedule:(id)a0 generateValidSchedule:(BOOL)a1;
- (void)_locked_notifyObserversForSleepEventRecordChange:(id)a0;
- (void)_locked_notifyObserversForSleepSettingsChange:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (id)_locked_loadSleepSchedule:(id *)a0;
- (BOOL)_locked_updateModelWithBlock:(id /* block */)a0 persistBlock:(id /* block */)a1 error:(id *)a2;
- (BOOL)saveSleepSettings:(id)a0 error:(id *)a1;
- (void)_locked_notifyObserversForSleepScheduleChange:(id)a0;
- (id)_loadSleepScheduleModel:(id *)a0;
- (BOOL)_shouldTurnOffWatchSleepFeatures;
- (id)_locked_saveSleepEventRecord:(id)a0;
- (id)_locked_applyNecessaryChangesBeforeSavingSleepEventRecord:(id)a0;
- (id)_locked_updateSleepEventRecord:(id)a0;
- (id)_locked_saveSleepSchedule:(id)a0;
- (id)_locked_applyNecessaryChangesBeforeSavingSleepSchedule:(id)a0 validationResult:(id)a1;
- (void)_locked_applyNecessaryEventRecordChangesBeforeSavingSleepSchedule:(id)a0 validationResult:(id)a1;
- (id)_locked_saveSleepSettings:(id)a0;
- (id)_locked_loadSleepScheduleModel:(id *)a0;
- (id)_locked_loadSleepEventRecord:(id *)a0;
- (void)sleepStorageDidChangeExternally:(id)a0;
- (id)_locked_resetSleepEventRecord;
- (void)observedApplicationDidInstall:(id)a0;
- (id)_locked_updateSleepSchedule:(id)a0;
- (id)_locked_setSleepEventRecord:(id)a0;
- (void).cxx_destruct;
- (BOOL)saveSleepScheduleModel:(id)a0 error:(id *)a1;
- (id)_earliestDateToScheduleEventsForDate:(id)a0;
- (void)notifyObserversForSleepScheduleChange:(id)a0;
- (BOOL)_locked_saveSleepSchedule:(id)a0 error:(id *)a1;
- (id)_loadSleepEventRecord:(id *)a0;
- (id)_locked_removeSleepSchedule;
- (void)_locked_notifyObserversForSleepScheduleModelChange:(id)a0;
- (id)diagnosticDescription;
- (BOOL)removeSleepScheduleModelWithError:(id *)a0;
- (id)_locked_sleepScheduleModel;
- (BOOL)_shouldTurnOffSleepSchedule;
- (id)_loadSleepSchedule:(id *)a0;
- (id)_locked_updateSleepSettings:(id)a0;
- (BOOL)saveSleepSchedule:(id)a0 error:(id *)a1;
- (BOOL)_locked_saveSleepSettings:(id)a0 error:(id *)a1;
- (void)notifyObserversForSleepEventRecordChange:(id)a0;
- (BOOL)_locked_canApplyChangesFrom:(id)a0 to:(id)a1 error:(id *)a2;
- (void)notifyObserversForSleepSettingsChange:(id)a0;
- (id)_locked_applyNecessaryChangesBeforeSaving:(id)a0;
- (BOOL)saveSleepEventRecord:(id)a0 error:(id *)a1;
- (id)_locked_setSleepSettings:(id)a0;
- (void)addObserver:(id)a0;
- (id)_locked_resetSleepSettings;
- (void)observedApplicationDidUninstall:(id)a0;
- (void)_turnOffWatchSleepFeatures;
- (id)_locked_setSleepSchedule:(id)a0;
- (BOOL)saveSleepEventRecord:(id)a0 error:(id *)a1 preNotifyBlock:(id /* block */)a2;

@end

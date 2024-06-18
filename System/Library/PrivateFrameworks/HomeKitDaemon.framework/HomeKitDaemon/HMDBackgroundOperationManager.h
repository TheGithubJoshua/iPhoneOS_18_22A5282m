@class HMFTimer, NSString, HMDBackgroundOperationGraph, HAPPairingIdentity, NSOperationQueue, NSMutableArray, HMDHomeManager;
@protocol HMDBackgroundOperationManagerCurrentDeviceStateDataSource;

@interface HMDBackgroundOperationManager : HMFObject <HMFLogging, HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSMutableArray *operationList;
@property (retain, nonatomic) NSMutableArray *dataSourceList;
@property (retain, nonatomic) NSString *backgroundOperationsDataStorePath;
@property (readonly, nonatomic) HMFTimer *expirationTimer;
@property (readonly, nonatomic) HMFTimer *deferralTimer;
@property (readonly, nonatomic) HMFTimer *dataSourceCoalescingTimer;
@property (readonly, nonatomic) HMDBackgroundOperationGraph *opGraph;
@property (retain, nonatomic) HAPPairingIdentity *hh1Key;
@property (retain, nonatomic) HAPPairingIdentity *hh2Key;
@property (retain, nonatomic) NSOperationQueue *queue;
@property (readonly, nonatomic) id<HMDBackgroundOperationManagerCurrentDeviceStateDataSource> currentDeviceStateDataSource;
@property (weak, nonatomic) HMDHomeManager *homeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getAllReachableAccessories:(id)a0;
+ (id)logCategory;
+ (id)findHomeWhereThisDeviceIsConfirmedPrimaryResident:(id)a0;
+ (id)findAccessoryUsing:(id)a0 fromHome:(id)a1;
+ (id)findAccessoryUsing:(id)a0 homeManager:(id)a1;
+ (id)findHomeUsingIdentifier:(id)a0 homeManager:(id)a1;
+ (id)sharedManager;
+ (id)allowedClasses;
+ (id)getAllPairedAccessoriesOfAllHomes:(id)a0;

- (void)addDataSource:(id)a0;
- (id)initWithLocalStorePath:(id)a0 currentDeviceStateDataSource:(id)a1;
- (void)completeProcessingForOperation:(id)a0;
- (BOOL)scheduleHH2KeyRollForAccessory:(id)a0 previousIdentity:(id)a1 newIdentity:(id)a2;
- (void)scheduleTimerToRetryDeferredOperations;
- (id)__getReadyToExecuteOperations;
- (id)__unarchiveFromDiskForUnitTesting;
- (void)checkAndRemoveExpiredOperations;
- (void)makeSureToLoadPairingIdentities;
- (void)_runOperationsAfterEvaluatingPredicate:(id)a0;
- (void)addOperation:(id)a0;
- (void)_runOperation:(id)a0 withParameters:(id)a1;
- (id)__initForUnitTesting:(id)a0;
- (void)scheduleHH2KeyRollForAccessory:(id)a0;
- (void)removeAllOperationsBeforeStartingHH2Migration;
- (void)scheduleHH2KeyRollOperationForHome:(id)a0 isRunningOnResident:(BOOL)a1;
- (void)timerDidFire:(id)a0;
- (void)auditKeyChainEntryForAccessory:(id)a0 isRunningOnResident:(BOOL)a1;
- (void)_scheduleHH2AirPlayKeyRollIfNecessary:(id)a0;
- (id)unarchiveFromDisk;
- (void)removeOperationsForAccessoryIdentifier:(id)a0 operationKind:(id)a1;
- (BOOL)_scheduleKeyRollForAccessory:(id)a0;
- (void)auditOwnerPairingForAirPlayAccessory:(id)a0 isRunningOnResident:(BOOL)a1;
- (void)removeAllOperationForAccessoryIdentifier:(id)a0;
- (BOOL)addOperationDependency:(id)a0 dependsOn:(id)a1;
- (void)__removeAllOperationsForUnitTesting;
- (void).cxx_destruct;
- (void)scheduleHH2KeyRollIfNecessary;
- (BOOL)scheduleHH2KeyRollForAirPlayAccessory:(id)a0 previousIdentity:(id)a1 newIdentity:(id)a2;
- (id)dumpState;
- (void)_scheduleHH2KeyRollIfNecessary:(id)a0;
- (void)startSchedulingKeyRollOperations:(BOOL)a0 forAccessory:(id)a1;
- (void)addDefaultDataSources;
- (void)registerForNotifications;
- (void)auditKeyChainEntriesAndScheduleKeyRollOperationsIfNecessaryForHome:(id)a0 isRunningOnResident:(BOOL)a1;
- (void)evaluateOperations;
- (id)getHH1ControllerKey;
- (void)dataSourceHasUpdate:(id)a0;
- (BOOL)shouldWeScheduleKeyRollOperationsOnThisDevice;
- (id)getHH2ControllerKey;
- (void)_dataSourceHasUpdate:(id)a0;
- (void)scheduleHH2KeyRollIfNecessaryDueToNotification:(id)a0;
- (void)scheduleTimerToCheckAndRemoveExpiredOperation;
- (void)__archiveToDiskForUnitTesting:(id)a0;
- (void)__resetAndRebuildOperationGraphForUnitTesting;
- (void)removeOperation:(id)a0;
- (void)__removeAllDataSourcesForUnitTesting;
- (void)__clearLocalStoreForUnitTesting;
- (void)scheduleHH2KeyRollForAirPlayAccessory:(id)a0;

@end

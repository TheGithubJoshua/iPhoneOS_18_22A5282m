@class NSDate, NSString, HKSPObserverSet, HDSPEnvironment, HDSPSleepScheduleStateCoordinatorStateMachine, HKSPSleepScheduleModel, HKSPSleepScheduleOccurrence;
@protocol NAScheduler;

@interface HDSPSleepScheduleStateCoordinator : NSObject <HDSPSleepScheduleStateCoordinatorStateMachineDelegate, HDSPSleepScheduleStateCoordinatorStateMachineInfoProvider, HDSPSource, HDSPEnvironmentAware, HDSPSleepEventHandler, HDSPSleepScheduleModelObserver, HDSPDiagnosticsProvider, HDSPSleepActionObserver, HDSPTimeChangeObserver>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } stateMachineLock;
@property (readonly, nonatomic) HDSPSleepScheduleStateCoordinatorStateMachine *stateMachine;
@property (readonly, nonatomic) HKSPObserverSet *observers;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isAppleWatch;
@property (readonly, nonatomic) BOOL sleepFeaturesEnabled;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) HKSPSleepScheduleOccurrence *previousOccurrence;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (void)significantTimeChangeDetected:(id)a0;
- (id)eventIdentifiers;
- (void)sleepEventIsDue:(id)a0;
- (void)removeObserver:(id)a0;
- (id)initWithEnvironment:(id)a0;
- (id)currentState;
- (id)diagnosticInfo;
- (void)environmentDidBecomeReady:(id)a0;
- (void)environmentWillBecomeReady:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (void)sleepScheduleModelManager:(id)a0 didUpdateSleepScheduleModel:(id)a1;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0 previousState:(unsigned long long)a1 context:(id)a2;
- (void)wakeUpAlarmWasDismissedFromSource:(unsigned long long)a0;
- (void)_updateEventRecordForSleepScheduleState:(unsigned long long)a0 context:(id)a1 notifyBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)wakeNotificationWasConfirmed;
- (void)snoozeFireDateShouldBeReset;
- (void)timeZoneChangeDetected:(id)a0;
- (BOOL)_updateEventRecordHelper:(id)a0 sleepScheduleState:(unsigned long long)a1 context:(id)a2;
- (id)diagnosticDescription;
- (void)addObserver:(id)a0;
- (unsigned long long)currentSleepScheduleState;
- (void)_updateSleepScheduleState;

@end

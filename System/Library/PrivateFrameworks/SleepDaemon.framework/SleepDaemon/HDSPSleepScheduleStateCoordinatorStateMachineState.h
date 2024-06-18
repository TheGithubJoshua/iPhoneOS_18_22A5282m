@class HDSPSleepScheduleStateCoordinatorStateMachine, NSString;

@interface HDSPSleepScheduleStateCoordinatorStateMachineState : HKSPPersistentStateMachineState <HDSPSleepScheduleStateCoordinatorStateMachineEventHandler>

@property (readonly, weak, nonatomic) HDSPSleepScheduleStateCoordinatorStateMachine *stateMachine;
@property (readonly, nonatomic) unsigned long long scheduleState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)wakeTimeReached;
- (void)wakeUpConfirmed;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)significantTimeChange;
- (void)significantScheduleChangeOccurred:(unsigned long long)a0;
- (void)timeZoneChange;
- (id)nextStateWithContext:(id *)a0 forceUpdate:(BOOL)a1;
- (void)stateDidExpireWithContext:(id)a0;
- (void)bedtimeReached;
- (void)windDownReached;
- (void)scheduleModelChanged:(id)a0;
- (id)nextStateWithContext:(id *)a0;
- (id)_determineNextStateFromTimeline;
- (void)_forceUpdateStateWithChangeReason:(unsigned long long)a0;
- (id)_timelineForDate:(id)a0;
- (BOOL)isAlarmEnabled;
- (BOOL)isSleepScheduleDisabled;

@end

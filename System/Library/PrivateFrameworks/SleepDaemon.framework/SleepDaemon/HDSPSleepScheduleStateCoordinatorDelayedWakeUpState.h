@interface HDSPSleepScheduleStateCoordinatorDelayedWakeUpState : HDSPSleepScheduleStateCoordinatorStateMachineState

- (id)stateName;
- (id)expirationDate;
- (void)wakeUpConfirmed;
- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (void)significantScheduleChangeOccurred:(unsigned long long)a0;
- (id)nextStateWithContext:(id *)a0 forceUpdate:(BOOL)a1;
- (void)bedtimeReached;
- (void)windDownReached;
- (unsigned long long)scheduleState;

@end

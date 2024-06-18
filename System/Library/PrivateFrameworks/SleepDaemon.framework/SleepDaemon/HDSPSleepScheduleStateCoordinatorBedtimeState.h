@interface HDSPSleepScheduleStateCoordinatorBedtimeState : HDSPSleepScheduleStateCoordinatorStateMachineState

- (id)stateName;
- (void)wakeTimeReached;
- (id)expirationDate;
- (void)wakeUpConfirmed;
- (unsigned long long)scheduleState;

@end

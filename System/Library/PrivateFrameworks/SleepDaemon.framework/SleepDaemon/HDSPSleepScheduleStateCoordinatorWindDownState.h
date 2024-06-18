@interface HDSPSleepScheduleStateCoordinatorWindDownState : HDSPSleepScheduleStateCoordinatorStateMachineState

- (id)stateName;
- (id)expirationDate;
- (void)bedtimeReached;
- (unsigned long long)scheduleState;

@end

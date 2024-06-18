@interface HDSPSleepScheduleStateCoordinatorWakeUpState : HDSPSleepScheduleStateCoordinatorStateMachineState

- (id)stateName;
- (id)expirationDate;
- (void)bedtimeReached;
- (void)windDownReached;
- (unsigned long long)scheduleState;

@end

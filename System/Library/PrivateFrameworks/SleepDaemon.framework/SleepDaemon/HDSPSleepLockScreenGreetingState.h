@interface HDSPSleepLockScreenGreetingState : HDSPSleepLockScreenStateMachineState

- (id)stateName;
- (long long)sleepLockScreenState;
- (void)dismissAlertForGoodMorning;
- (id)nextStateWithContext:(id *)a0;

@end

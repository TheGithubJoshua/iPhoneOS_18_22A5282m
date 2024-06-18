@interface HDSPWakeDetectionNotifiedState : HDSPWakeDetectionStateMachineState

- (id)stateName;
- (id)expirationDate;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)stateDidExpireWithContext:(id)a0;
- (id)nextStateWithContext:(id *)a0;

@end

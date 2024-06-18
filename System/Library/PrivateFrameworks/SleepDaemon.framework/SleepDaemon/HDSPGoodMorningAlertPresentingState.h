@interface HDSPGoodMorningAlertPresentingState : HDSPGoodMorningAlertStateMachineState

- (id)stateName;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (void)stateDidExpireWithContext:(id)a0;
- (void)sleepScheduleStateChangedToBedtime;
- (BOOL)schedulesExpiration;
- (double)expirationDuration;
- (id)nextStateWithContext:(id *)a0;

@end

@interface HDSPWakeUpResultsNotificationNeedsProtectedDataState : HDSPWakeUpResultsNotificationStateMachineState

- (id)stateName;
- (id)expirationDate;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)protectedHealthDataDidBecomeAvailable;
- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (void)_transitionToQueryingState;

@end

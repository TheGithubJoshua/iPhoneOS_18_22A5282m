@interface HDSPWakeUpResultsNotificationWaitingForRetryState : HDSPWakeUpResultsNotificationStateMachineState

- (id)stateName;
- (id)expirationDate;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (void)retryAttemptEventDue;

@end

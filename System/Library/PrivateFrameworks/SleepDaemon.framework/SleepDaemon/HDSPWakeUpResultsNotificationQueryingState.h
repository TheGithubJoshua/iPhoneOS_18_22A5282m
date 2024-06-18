@interface HDSPWakeUpResultsNotificationQueryingState : HDSPWakeUpResultsNotificationStateMachineState {
    BOOL _shouldRetryImmediatelyOnFailure;
}

- (id)stateName;
- (id)initWithCoder:(id)a0;
- (id)expirationDate;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)_transitionToWaitingForWakeUpState;
- (void)protectedHealthDataDidBecomeAvailable;
- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (void)queryDidComplete;
- (void)queryDidFailWithError:(id)a0;
- (void)_executeQuery;
- (void)_transitionToNotifiedState;
- (void)_retryQueryIfNeededOrTransitionToNeedsProtectedDataState;
- (BOOL)schedulesExpiration;
- (void)_transitionToRetryState;

@end

@interface HDSPWakeUpResultsNotificationWaitingForWakeUpState : HDSPWakeUpResultsNotificationStateMachineState

- (id)stateName;
- (void)_transitionToDelayingForTrackingState;
- (void)wakeUpDidOccur;

@end

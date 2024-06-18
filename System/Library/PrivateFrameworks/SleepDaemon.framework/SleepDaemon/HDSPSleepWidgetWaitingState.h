@interface HDSPSleepWidgetWaitingState : HDSPSleepWidgetStateMachineState

- (id)stateName;
- (id)expirationDate;
- (void)stateDidExpireWithContext:(id)a0;
- (BOOL)schedulesExpiration;
- (long long)widgetState;

@end

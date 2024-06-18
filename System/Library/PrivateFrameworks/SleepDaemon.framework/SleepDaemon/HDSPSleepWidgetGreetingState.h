@interface HDSPSleepWidgetGreetingState : HDSPSleepWidgetStateMachineState

- (id)stateName;
- (BOOL)reloadsWidgetOnTimeChange;
- (void)stateDidExpireWithContext:(id)a0;
- (BOOL)reloadsWidgetOnModelChange;
- (BOOL)schedulesExpiration;
- (double)expirationDuration;
- (long long)widgetState;

@end

@interface HDSPSleepWidgetBedtimeState : HDSPSleepWidgetStateMachineState

- (id)stateName;
- (void)stateDidExpireWithContext:(id)a0;
- (BOOL)schedulesExpiration;
- (double)expirationDuration;
- (long long)widgetState;

@end

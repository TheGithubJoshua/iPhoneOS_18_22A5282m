@interface HDSPSleepWidgetUpcomingState : HDSPSleepWidgetStateMachineState

- (id)stateName;
- (BOOL)schedulesExpiration;
- (long long)widgetState;

@end

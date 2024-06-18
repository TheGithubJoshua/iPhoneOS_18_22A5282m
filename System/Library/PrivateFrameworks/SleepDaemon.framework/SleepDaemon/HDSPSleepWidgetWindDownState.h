@interface HDSPSleepWidgetWindDownState : HDSPSleepWidgetStateMachineState

- (id)stateName;
- (BOOL)widgetStateHasTimeComponent;
- (long long)widgetState;

@end

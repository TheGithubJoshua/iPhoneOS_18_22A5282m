@interface HDSPSleepWidgetDisabledState : HDSPSleepWidgetStateMachineState

- (id)stateName;
- (BOOL)widgetStateHasTimeComponent;
- (BOOL)reloadsWidgetOnTimeChange;
- (BOOL)reloadsWidgetOnModelChange;
- (long long)widgetState;

@end

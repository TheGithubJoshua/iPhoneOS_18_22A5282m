@interface HDSPSleepWidgetNotOnboardedState : HDSPSleepWidgetStateMachineState

- (id)stateName;
- (BOOL)widgetStateHasTimeComponent;
- (void)sleepScheduleModelDidChange:(id)a0;
- (BOOL)reloadsWidgetOnTimeChange;
- (void)sleepModeDidChange:(long long)a0 isUserRequested:(BOOL)a1;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0;
- (BOOL)reloadsWidgetOnModelChange;
- (long long)widgetState;

@end

@interface HDSPSleepModeAutomatedOffFromManualState : _HDSPSleepModeTurnedOffState

- (id)stateName;
- (void)automationTurnedOnSleepModeWithReason:(unsigned long long)a0;
- (void)sleepModeTurnedOnForUnknownReason;
- (unsigned long long)defaultChangeReason;

@end

@interface HDSPSleepModeBedtimeState : HDSPSleepModeStateMachineState

- (id)stateName;
- (void)sleepModeTurnedOffForUnknownReason;
- (void)sleepModeTurnedOnForUnknownReason;
- (long long)sleepMode;
- (void)userTurnedOffSleepModeWithReason:(unsigned long long)a0;
- (void)automationTurnedOffSleepModeWithReason:(unsigned long long)a0;

@end

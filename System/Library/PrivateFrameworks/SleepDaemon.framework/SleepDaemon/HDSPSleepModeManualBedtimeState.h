@interface HDSPSleepModeManualBedtimeState : HDSPSleepModeBedtimeState

- (id)stateName;
- (void)sleepScheduleStateChangedToBedtime:(unsigned long long)a0 fromState:(unsigned long long)a1;
- (void)sleepScheduleStateChangedToWindDown:(unsigned long long)a0 fromState:(unsigned long long)a1;
- (void)sleepScheduleStateChangedToWakeUp:(unsigned long long)a0;
- (void)sleepScheduleStateChangedToDisabledFromState:(unsigned long long)a0;
- (unsigned long long)defaultChangeReason;
- (id)nextStateWithContext:(id *)a0;
- (void)automationTurnedOffSleepModeWithReason:(unsigned long long)a0;

@end

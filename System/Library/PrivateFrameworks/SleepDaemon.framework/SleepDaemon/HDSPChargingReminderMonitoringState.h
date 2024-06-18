@interface HDSPChargingReminderMonitoringState : HDSPChargingReminderStateMachineState

- (id)stateName;
- (id)expirationDate;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (BOOL)schedulesExpiration;
- (void)batteryLevelChanged:(float)a0;

@end

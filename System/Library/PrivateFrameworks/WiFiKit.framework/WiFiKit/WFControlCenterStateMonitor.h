@interface WFControlCenterStateMonitor : WFWiFiStateMonitor

- (void)_performAction:(long long)a0;
- (void)performAction;
- (BOOL)_isCellularOutrankingWiFi;
- (BOOL)_airplaneModeEnabled;
- (void)performAction:(id /* block */)a0;
- (void)_promptCarPlayDisable;
- (void)_promptMISDisable;
- (void)_promptCellularOutankDisable;

@end

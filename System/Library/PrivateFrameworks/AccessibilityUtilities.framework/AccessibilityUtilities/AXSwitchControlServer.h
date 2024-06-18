@interface AXSwitchControlServer : AXServer

+ (id)server;

- (void)_didConnectToClient;
- (void)_wasDisconnectedFromClient;
- (id)_serviceName;
- (BOOL)_connectIfNecessary;
- (void)_willClearServer;
- (BOOL)isScannerPaused;
- (BOOL)setupAutomation;
- (BOOL)triggerCommand:(long long)a0;
- (BOOL)isScannerActive;
- (BOOL)_triggerAutomationCommand:(long long)a0;
- (id)currentFocusedElement;
- (BOOL)isAutoScanEnabled;
- (BOOL)isDwellEnabled;
- (BOOL)isManualScanEnabled;
- (BOOL)tearDownAutomation;

@end

@interface VTSiriAssertionMonitor : VTEventMonitor {
    unsigned char _assertionState;
}

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)isEnabled;
- (void)_notifyObserver:(BOOL)a0;
- (void)dealloc;
- (void)disableAssertionReceived;
- (void)enableAssertionReceived;

@end

@interface VTSiriEnabledMonitor : VTEventMonitor {
    BOOL _isSiriEnabled;
}

+ (id)sharedInstance;

- (id)init;
- (void)_didReceiveSiriSettingChanged:(BOOL)a0;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)isEnabled;
- (void)_notifyObserver:(id)a0 withEnabled:(BOOL)a1;

@end

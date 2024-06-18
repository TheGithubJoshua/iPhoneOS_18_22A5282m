@interface CSScreenLockMonitor : CSEventMonitor {
    BOOL _isScreenLocked;
}

+ (id)sharedInstance;

- (BOOL)_queryIsScreenLocked;
- (id)init;
- (BOOL)isScreenLocked;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(id)a0 isScreenLocked:(BOOL)a1;
- (void)screenLockStateChanged;
- (void)dealloc;

@end

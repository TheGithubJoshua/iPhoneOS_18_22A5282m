@interface VTLockScreenMonitor : VTEventMonitor {
    int _notifyToken;
    unsigned char _lockScreenState;
}

+ (id)sharedInstance;

- (id)init;
- (unsigned char)_checkLockScreenState;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (unsigned char)lockScreenState;
- (void)_notifyObserver:(id)a0 withLockScreenState:(unsigned char)a1;
- (id)lockScreenStateDescription:(unsigned char)a0;
- (void)_didReceiveLockScreenStateChanged:(unsigned char)a0;
- (void)_didReceiveLockScreenStateChangedInQueue:(unsigned char)a0;

@end

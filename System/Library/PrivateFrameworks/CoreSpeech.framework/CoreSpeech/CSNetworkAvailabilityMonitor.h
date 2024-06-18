@interface CSNetworkAvailabilityMonitor : CSEventMonitor {
    int _notifyToken;
}

+ (id)sharedInstance;

- (id)init;
- (void)_didReceivedNetworkAvailabilityChangedNotification:(BOOL)a0;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)isAvailable;
- (void)_notifyObserver:(id)a0 withNetworkAvailability:(BOOL)a1;
- (void)_availabilityChanged;

@end

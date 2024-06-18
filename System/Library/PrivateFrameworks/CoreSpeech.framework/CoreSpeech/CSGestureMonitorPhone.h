@class NSString, CMWakeGestureManager;

@interface CSGestureMonitorPhone : CSGestureMonitor <CMWakeGestureDelegate> {
    CMWakeGestureManager *_gestureManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)wakeGestureManager:(id)a0 didUpdateWakeGesture:(long long)a1;
- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)_didReceiveSleepGesture;
- (void)_didReceiveWakeGesture;

@end

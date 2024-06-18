@class SLGNotificationActivatedLogger;

@interface SBCameraHardwareButtonStudyLogger : NSObject {
    BOOL _monitoringProcesses;
    SLGNotificationActivatedLogger *_logger;
}

- (id)init;
- (void).cxx_destruct;
- (void)_handleApplicationProcessStateDidChangeNotification:(id)a0;
- (void)dealloc;
- (void)logButtonEvent:(struct __IOHIDEvent { } *)a0;
- (void)logPocketState:(long long)a0;
- (void)_startProcessMonitor;
- (void)_stopProcessMonitor;

@end

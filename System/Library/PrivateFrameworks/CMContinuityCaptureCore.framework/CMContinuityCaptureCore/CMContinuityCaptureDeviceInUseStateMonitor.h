@class TUCallCenter;

@interface CMContinuityCaptureDeviceInUseStateMonitor : NSObject

@property (retain) TUCallCenter *callCenter;
@property (readonly) unsigned long long inUseState;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_handleCallNotification:(id)a0;
- (void)addCallStateObserver;
- (void)removeCallStateObserver;

@end

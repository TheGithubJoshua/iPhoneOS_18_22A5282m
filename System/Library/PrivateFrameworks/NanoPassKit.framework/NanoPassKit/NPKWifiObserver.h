@class NSObject;
@protocol NPKWiFiObserverDelegate, OS_dispatch_queue;

@interface NPKWifiObserver : NSObject {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    _Atomic BOOL _wiFiEnabled;
}

@property (weak, nonatomic) id<NPKWiFiObserverDelegate> delegate;

- (id)initWithCallbackQueue:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isWifiEnabled;
- (void)_setupInterface;
- (void)_updateWiFiStateAndNotifiyObserver:(BOOL)a0;

@end

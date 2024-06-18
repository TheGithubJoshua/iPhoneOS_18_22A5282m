@class NSObject, MTObserverStore;
@protocol OS_dispatch_queue;

@interface MTSpringboardStartMonitor : NSObject {
    int _notifyToken;
    BOOL _isSpringBoardStarted;
    MTObserverStore *_observers;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (void)removeObserver:(id)a0;
- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)didReceiveSpringboardStarted:(BOOL)a0;
- (BOOL)_checkSpringBoardStarted;
- (void).cxx_destruct;
- (void)enumerateObservers:(id /* block */)a0;
- (BOOL)isSpringboardStarted;
- (void)dealloc;
- (void)addObserver:(id)a0;

@end

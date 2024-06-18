@class NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface CSEventMonitor : NSObject {
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)removeObserver:(id)a0;
- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)enumerateObservers:(id /* block */)a0;
- (void)notifyObserver:(id)a0;
- (void)dealloc;
- (unsigned long long)type;
- (void)addObserver:(id)a0;
- (void)enumerateObserversInQueue:(id /* block */)a0;

@end

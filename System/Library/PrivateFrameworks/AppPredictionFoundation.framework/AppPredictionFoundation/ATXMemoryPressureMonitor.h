@class NSHashTable, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ATXMemoryPressureMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_memoryMonitoringSource;
    NSHashTable *_observers;
}

+ (id)sharedInstance;

- (id)init;
- (void)unregisterObserver:(id)a0;
- (void)_notifyObserversOfMemoryPressureType:(unsigned long long)a0;
- (void)registerObserver:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)_currentMemoryPressureType;
- (void)dealloc;

@end

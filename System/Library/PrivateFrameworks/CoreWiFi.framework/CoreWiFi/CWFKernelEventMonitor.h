@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CWFKernelEventMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSObject<OS_dispatch_source> *_keventSource;
    BOOL _isMonitoringEvents;
}

@property (copy) id /* block */ eventHandler;

- (id)init;
- (BOOL)isMonitoringEvents;
- (void)stopEventMonitoring;
- (unsigned long long)interfaceFlagsWithInterfaceName:(id)a0;
- (void)startEventMonitoring;
- (void).cxx_destruct;
- (id)__descriptionForKernelEventCode:(unsigned long long)a0;
- (void)dealloc;

@end

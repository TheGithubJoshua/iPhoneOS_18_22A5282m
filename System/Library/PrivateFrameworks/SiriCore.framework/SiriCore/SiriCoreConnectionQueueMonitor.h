@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface SiriCoreConnectionQueueMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_watcher;
}

- (id)init;
- (void).cxx_destruct;
- (void)_startWatcher;
- (void)dealloc;
- (void)_signalWatcher;
- (void)signalWatcher;
- (void)startWatcher;

@end

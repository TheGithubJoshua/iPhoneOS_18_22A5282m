@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface STKAlertSessionEventQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_haltingAssertions;
    NSMutableArray *_queue_eventQueue;
}

- (id)init;
- (id)acquireEventQueueHaltingAssertionForReason:(id)a0;
- (void)enqueue:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_queue_dequeueEventsIfPossible;
- (void)_queue_enqueueEvent:(id /* block */)a0;

@end

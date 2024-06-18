@class NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CalAccumulatingQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _block;
    id /* block */ _throttleBlock;
    double _delay;
    NSMutableSet *_tags;
    NSMutableDictionary *_context;
    BOOL _executionPending;
    unsigned long long _pendingPopTime;
    NSObject<OS_dispatch_source> *_pendingExecutionTimer;
}

- (id)initWithQueue:(id)a0 andBlock:(id /* block */)a1;
- (void)_executeBlockWithThrottleBlock;
- (void)_executeBlockWithoutThrottleBlock;
- (void)updateTags:(id)a0 withContext:(id)a1;
- (void)executeBlock;
- (void)updateTagsAndExecuteBlock:(id)a0;
- (id)_initWithQueue:(id)a0 andBlock:(id /* block */)a1 delay:(double)a2 throttle:(id /* block */)a3;
- (void)_scheduleTimerWithDelay:(double)a0;
- (id)initWithQueue:(id)a0 andBlock:(id /* block */)a1 delay:(double)a2;
- (void).cxx_destruct;
- (void)updateTags:(id)a0;
- (void)_cancelPendingTimer;
- (void)_callTargetBlockAndReset;
- (id)initWithQueue:(id)a0 andBlock:(id /* block */)a1 throttle:(id /* block */)a2;
- (void)updateTagsAndExecuteBlock:(id)a0 withContext:(id)a1;

@end

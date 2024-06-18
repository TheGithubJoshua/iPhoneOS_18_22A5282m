@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_workloop;

@interface PLConcurrencyLimiter : NSObject {
    NSObject<OS_dispatch_queue> *_userInitiatedQueueA;
    NSObject<OS_dispatch_queue> *_userInitiatedQueueB;
    NSObject<OS_dispatch_queue> *_backgroundAndUtilityQueue;
    NSObject<OS_dispatch_queue> *_sharedUtilityQueue;
    NSObject<OS_dispatch_queue> *_sharedBackgroundQueue;
    NSObject<OS_dispatch_workloop> *_sharedWorkloop;
    _Atomic int _chooseQueueA;
}

+ (id)debugDescriptionOfEnqueuedBlocksOnQueue:(id)a0;
+ (void)reportBlockDequeuedOnQueue:(id)a0;
+ (id)sharedLimiter;
+ (BOOL)isRunningUnderLimiter;
+ (void)configureListTrackingForDispatchQueue:(id)a0;
+ (void)reportBlockEnqueued:(id /* block */)a0 onQueue:(id)a1 forLibrary:(id)a2;

- (id)init;
- (id)sharedBackgroundQueue;
- (void)dispatchAsync:(id)a0 block:(id /* block */)a1;
- (void)async:(id /* block */)a0 identifyingBlock:(id /* block */)a1 library:(id)a2;
- (void)_handleUnexpectedQoSClass:(unsigned int)a0;
- (void /* function */ *)callOutForCurrentQoS;
- (void)_syncPerformBlockNotOnAnyQueue:(id /* block */)a0;
- (id)_nextDispatchQueueForCurrentQoS;
- (void).cxx_destruct;
- (id)_queuesTrackingBlocks;
- (id)debugDescription;
- (void)asyncPerformOnContext:(id)a0 identifyingBlock:(id /* block */)a1 block:(id /* block */)a2;
- (void)sync:(id /* block */)a0 identifyingBlock:(id /* block */)a1 library:(id)a2;
- (id)sharedUtilityQueue;

@end

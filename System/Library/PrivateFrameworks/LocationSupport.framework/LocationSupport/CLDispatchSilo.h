@class NSOperationQueue, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface CLDispatchSilo : CLSilo {
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
    BOOL _useCLPermissiveTimer;
    BOOL _isQueueSuspended;
    NSNumber *_cohortId;
}

- (void)assertOutside;
- (BOOL)inPermissiveMode;
- (void)heartBeat:(id)a0;
- (void)async:(id /* block */)a0;
- (void)sync:(id /* block */)a0;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;
- (BOOL)isSuspended;
- (void)suspend;
- (id)initWithIdentifier:(id)a0;
- (double)currentLatchedAbsoluteTimestamp;
- (id)initWithUnderlyingQueue:(id)a0 bePermissive:(BOOL)a1;
- (id)initWithUnderlyingQueue:(id)a0;
- (void).cxx_destruct;
- (void)intendToSync;
- (void)_setLatchedAbsoluteTimestamp:(double)a0;
- (id)debugDescription;
- (void)resume;
- (id)getTimeCoercibleVariantInstance;
- (id)initMain;
- (void)assertInside;
- (id)operationQueue;
- (id)queue;
- (id)newTimer;

@end

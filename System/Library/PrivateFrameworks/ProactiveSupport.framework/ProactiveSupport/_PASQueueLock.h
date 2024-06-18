@class NSObject;
@protocol OS_dispatch_queue;

@interface _PASQueueLock : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id _guardedData;
}

- (unsigned char)runWithLockAcquired:(id /* block */)a0 shouldContinueBlock:(id /* block */)a1;
- (id)unsafeGuardedData;
- (id)initWithGuardedData:(id)a0 serialQueue:(id)a1;
- (void)runWithLockAcquired:(id /* block */)a0;
- (void).cxx_destruct;
- (id)guardedDataAssertingLockContext;
- (void)runAsyncWithLockAcquired:(id /* block */)a0;

@end

@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface RTInvocationDispatcher : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableArray *pendingInvocations;
@property (nonatomic) BOOL valid;

- (void)shutdown;
- (id)init;
- (void)removeAllPendingInvocations;
- (void)enqueueBlock:(id /* block */)a0 failureBlock:(id /* block */)a1 description:(id)a2;
- (BOOL)dispatchPendingInvocations;
- (BOOL)invocationsPending;
- (unsigned long long)countOfPendingInvocations;
- (void)enqueueBlock:(id /* block */)a0 description:(id)a1;
- (void)_enqueueBlock:(id /* block */)a0 failureBlock:(id /* block */)a1 description:(id)a2;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;

@end

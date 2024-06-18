@class CNTask, NSString, NSConditionLock, CNFutureResult, CNFutureCompletionBlocks;

@interface CNFutureTask : NSObject <CNFuture, CNPromise> {
    NSConditionLock *_stateLock;
    CNFutureResult *_futureResult;
    CNTask *_task;
    CNFutureCompletionBlocks *_completionBlocks;
}

@property (readonly, getter=isFinished) BOOL finished;
@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTask:(id)a0;
- (id)resultWithTimeout:(double)a0 error:(id *)a1;
- (BOOL)nts_isFinished;
- (id)init;
- (id)result:(id *)a0;
- (void)_flushCompletionBlocks;
- (id)futureResult;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (id)recover:(id /* block */)a0;
- (BOOL)finishWithResult:(id)a0;
- (id /* block */)boolErrorCompletionHandlerAdapter;
- (BOOL)cancel;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (id)flatMap:(id /* block */)a0;
- (void)didCancel;
- (void)addSuccessBlock:(id /* block */)a0;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (id /* block */)completionHandlerAdapterWithDefaultValue:(id)a0;
- (void)addFailureBlock:(id /* block */)a0;
- (id /* block */)completionHandlerAdapter;
- (void).cxx_destruct;
- (BOOL)finishWithError:(id)a0;
- (void)addFailureBlock:(id /* block */)a0 scheduler:(id)a1;
- (void)addSuccessBlock:(id /* block */)a0 scheduler:(id)a1;
- (BOOL)run;

@end

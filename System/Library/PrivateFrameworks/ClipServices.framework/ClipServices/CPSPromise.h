@class NSError, NSMutableArray, NSConditionLock;

@interface CPSPromise : NSObject {
    NSConditionLock *_stateLock;
    id _result;
    NSError *_error;
    NSMutableArray *_completionBlocks;
}

+ (id)promise;

- (void)finish;
- (id)init;
- (void)addCompletionBlock:(id /* block */)a0;
- (void)_flushCompletionBlocks;
- (void)finishWithResult:(id)a0;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (BOOL)_isFinished;
- (void)_finishWithResult:(id)a0 error:(id)a1;

@end

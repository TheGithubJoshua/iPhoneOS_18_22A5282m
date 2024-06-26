@class NSConditionLock, MTPromiseCompletionBlocks, MTPromiseResult;

@interface MTPromise : NSObject

@property (retain, nonatomic) MTPromiseCompletionBlocks *completionBlocks;
@property (retain, nonatomic) MTPromiseResult *promiseResult;
@property (retain, nonatomic) NSConditionLock *stateLock;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;

+ (void)_configureAllPromise:(id)a0 withResults:(id)a1 promises:(id)a2 currentPromiseIndex:(unsigned long long)a3;
+ (id)promiseWithError:(id)a0;
+ (id)promiseWithAll:(id)a0;
+ (id)promiseWithAny:(id)a0;
+ (BOOL)_errorIsCanceledError:(id)a0;
+ (void)_finishPromise:(id)a0 withPromise:(id)a1;
+ (id)promiseWithResult:(id)a0;
+ (id)_globalPromiseStorageAccessQueue;
+ (id)_globalPromiseStorage;
+ (void)_configureAnyPromise:(id)a0 withPromises:(id)a1 currentPromiseIndex:(unsigned long long)a2;
+ (id)_findUnfinishedPromise:(id)a0;
+ (id)_resultOfComposition:(id)a0 errors:(id)a1;
+ (void)_setupCompositePromise:(id)a0 composition:(id)a1;
+ (void)cancelPromisesInComposition:(id)a0;
+ (id)promiseWithComposition:(id)a0;

- (void)waitUntilFinished;
- (id)resultWithTimeout:(double)a0 error:(id *)a1;
- (id)init;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (BOOL)finishWithResult:(id)a0;
- (BOOL)cancel;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (id /* block */)boolCompletionHandlerAdapter;
- (void)_addBlock:(id /* block */)a0 orCallWithResult:(id /* block */)a1;
- (void)addSuccessBlock:(id /* block */)a0;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (id)catchWithBlock:(id /* block */)a0;
- (id)resultWithError:(id *)a0;
- (id /* block */)nilValueCompletionHandlerAdapter;
- (id /* block */)completionHandlerAdapter;
- (id)thenWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)addFinishBlock:(id /* block */)a0;
- (void)addErrorBlock:(id /* block */)a0;
- (void)waitUntilFinishedWithTimeout:(double)a0;
- (BOOL)finishWithError:(id)a0;
- (BOOL)_isFinished;

@end

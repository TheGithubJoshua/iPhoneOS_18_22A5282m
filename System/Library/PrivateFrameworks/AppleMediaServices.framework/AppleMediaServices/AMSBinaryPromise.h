@class AMSMutablePromise;

@interface AMSBinaryPromise : NSObject

@property (retain, nonatomic) AMSMutablePromise *backingPromise;

+ (id)promiseWithError:(id)a0;
+ (id)promiseWithFlattenedPromises:(id)a0;
+ (id)promiseWithAll:(id)a0;
+ (id)promiseWithAny:(id)a0;
+ (id)promiseWithSuccess;
+ (id)promiseWithPromise:(id)a0;
+ (id)_globalPromiseStorageAccessQueue;
+ (id)_globalPromiseStorage;

- (void)waitUntilFinished;
- (BOOL)resultWithTimeout:(double)a0 error:(id *)a1;
- (id)init;
- (id)promiseAdapter;
- (id)continueWithBlock:(id /* block */)a0;
- (BOOL)cancel;
- (void)resultWithTimeout:(double)a0 completion:(id /* block */)a1;
- (BOOL)finishWithSuccess;
- (void)addSuccessBlock:(id /* block */)a0;
- (id)catchWithBlock:(id /* block */)a0;
- (BOOL)resultWithError:(id *)a0;
- (BOOL)finishWithSuccess:(BOOL)a0 error:(id)a1;
- (id /* block */)completionHandlerAdapter;
- (id)thenWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)addFinishBlock:(id /* block */)a0;
- (void)addErrorBlock:(id /* block */)a0;
- (BOOL)finishWithPromise:(id)a0;
- (void)waitUntilFinishedWithTimeout:(double)a0;
- (BOOL)finishWithError:(id)a0;
- (void)resultWithCompletion:(id /* block */)a0;
- (void)_removeFromGlobalPromiseStorage;

@end

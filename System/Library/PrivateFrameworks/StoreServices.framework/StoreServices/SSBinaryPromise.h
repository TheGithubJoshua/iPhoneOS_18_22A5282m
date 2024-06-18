@class SSPromise;

@interface SSBinaryPromise : NSObject

@property (retain, nonatomic) SSPromise *backingPromise;

+ (id)promiseWithError:(id)a0;
+ (id)promiseWithSuccess;
+ (id)promiseWithPromise:(id)a0;
+ (id)_globalPromiseStorageAccessQueue;
+ (id)_globalPromiseStorage;

- (void)waitUntilFinished;
- (BOOL)resultWithTimeout:(double)a0 error:(id *)a1;
- (id)init;
- (id)promiseAdapter;
- (BOOL)finishWithSuccess;
- (void)addSuccessBlock:(id /* block */)a0;
- (BOOL)resultWithError:(id *)a0;
- (id /* block */)completionHandlerAdapter;
- (void).cxx_destruct;
- (void)addFinishBlock:(id /* block */)a0;
- (void)addErrorBlock:(id /* block */)a0;
- (void)waitUntilFinishedWithTimeout:(double)a0;
- (BOOL)finishWithError:(id)a0;
- (void)_removeFromGlobalPromiseStorage;

@end

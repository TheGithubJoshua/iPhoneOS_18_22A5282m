@class NSError, NSObject;
@protocol OS_dispatch_queue;

@interface AVOperation : NSOperation {
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    long long _status;
    NSError *_error;
}

@property (readonly) long long status;
@property (readonly) NSError *error;

+ (void)initialize;
+ (long long)statusOfOperations:(id)a0 error:(id *)a1;

- (void)markAsFailedWithError:(id)a0;
- (id)init;
- (BOOL)isReady;
- (void)markAsCompleted;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)dealloc;
- (void)didEnterTerminalState;
- (void)markAsCancelled;
- (BOOL)_setStatus:(long long)a0 error:(id)a1 resultingStatus:(long long *)a2 failureReason:(id *)a3;
- (BOOL)evaluateDependenciesAndMarkAsExecuting;

@end

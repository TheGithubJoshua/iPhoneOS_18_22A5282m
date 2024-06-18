@class NSObject;
@protocol OS_dispatch_queue;

@interface JXOperation : NSOperation

@property BOOL isExecuting;
@property BOOL isFinished;
@property (retain) NSObject<OS_dispatch_queue> *stateQueue;

- (void)finish;
- (id)init;
- (void)cancel;
- (void)start;
- (BOOL)isConcurrent;
- (void).cxx_destruct;
- (void)dealloc;
- (void)willFinish;
- (void)startAndWaitUntilFinished;

@end

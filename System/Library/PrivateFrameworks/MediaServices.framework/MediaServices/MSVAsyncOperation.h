@class NSError, NSObject;
@protocol OS_dispatch_queue;

@interface MSVAsyncOperation : NSOperation

@property (copy, nonatomic) NSError *error;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, getter=_isExecuting, setter=_setExecuting:) BOOL _executing;
@property (nonatomic, getter=_isFinished, setter=_setFinished:) BOOL _finished;

- (BOOL)isAsynchronous;
- (void)finish;
- (id)init;
- (void)start;
- (void)execute;
- (BOOL)isConcurrent;
- (void).cxx_destruct;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)finishWithError:(id)a0;

@end

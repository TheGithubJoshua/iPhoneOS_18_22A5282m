@class NSOperationQueue, NSOperation;

@interface VSTimeoutOperation : VSAsyncOperation

@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (readonly, nonatomic) NSOperation *operation;
@property (readonly, nonatomic) double timeout;

- (id)init;
- (void)cancel;
- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)initWithOperation:(id)a0 timeout:(double)a1;

@end

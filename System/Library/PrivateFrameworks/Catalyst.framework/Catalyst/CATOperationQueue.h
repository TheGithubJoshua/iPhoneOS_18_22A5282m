@protocol CATOperationQueueDelegate;

@interface CATOperationQueue : NSOperationQueue

@property (weak, nonatomic) id<CATOperationQueueDelegate> delegate;

+ (id)currentQueue;
+ (id)mainQueue;
+ (id)backgroundQueue;

- (void)setUnderlyingQueue:(id)a0;
- (void)delegateOperationDidFinish:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)addOperation:(id)a0;
- (void)stopObserving:(id)a0;
- (void)addOperations:(id)a0 waitUntilFinished:(BOOL)a1;
- (void).cxx_destruct;
- (id)description;
- (void)delegateWillAddOperation:(id)a0;
- (void)startObserving:(id)a0;

@end

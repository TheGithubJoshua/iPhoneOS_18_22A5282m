@class TPSOperationQueueCountObserver;

@interface TPSOperationQueue : NSOperationQueue

@property (retain, nonatomic) TPSOperationQueueCountObserver *observer;
@property (copy, nonatomic) id /* block */ completionBlock;

- (id /* block */)completionBlock;
- (void).cxx_destruct;
- (void)setCompletionBlock:(id /* block */)a0;
- (void)addOperationWithAsyncBlock:(id /* block */)a0;

@end

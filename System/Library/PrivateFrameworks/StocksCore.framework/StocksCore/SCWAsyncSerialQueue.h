@class NSOperationQueue;

@interface SCWAsyncSerialQueue : NSObject

@property (retain, nonatomic) NSOperationQueue *serialOperationQueue;
@property (getter=isSuspended) BOOL suspended;

- (id)initWithQualityOfService:(long long)a0;
- (void)enqueueBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)waitUntilEmpty;

@end

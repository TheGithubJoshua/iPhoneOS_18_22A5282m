@class NSOperationQueue;

@interface __HMOperationQueueDelegateCaller : HMDelegateCaller {
    NSOperationQueue *_queue;
}

- (id)init;
- (void).cxx_destruct;
- (void)invokeBlock:(id /* block */)a0;
- (id)initWithQueue:(id)a0;
- (id)initWithOperationQueue:(id)a0;

@end

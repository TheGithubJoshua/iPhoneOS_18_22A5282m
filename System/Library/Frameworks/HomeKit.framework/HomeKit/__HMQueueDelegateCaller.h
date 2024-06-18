@class NSObject;
@protocol OS_dispatch_queue;

@interface __HMQueueDelegateCaller : HMDelegateCaller {
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)invokeBlock:(id /* block */)a0;
- (id)initWithQueue:(id)a0;

@end

@class NSObject;
@protocol OS_dispatch_queue;

@interface EKReadWriteLock : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)performWithReadLock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)performWithWriteLock:(id /* block */)a0;
- (id)initWithName:(const char *)a0;

@end

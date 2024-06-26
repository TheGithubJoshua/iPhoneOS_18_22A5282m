@class NSObject;
@protocol OS_dispatch_queue;

@interface TSKLowPriorityThreadDispatcher : TSKThreadDispatcher {
    NSObject<OS_dispatch_queue> *_queue;
    _Atomic int _suspendCount;
}

@property (class, readonly) TSKLowPriorityThreadDispatcher *sharedLowPriorityDispatcher;

@property (readonly, getter=isSuspended) BOOL suspended;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;

- (id)init;
- (void)suspend;
- (void).cxx_destruct;
- (void)resume;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)p_dispatchQueue;

@end

@class NSObject;
@protocol OS_dispatch_queue;

@interface TSKLowPriorityThreadDispatcher : TSKThreadDispatcher {
    NSObject<OS_dispatch_queue> *_queue;
    int _suspendCount;
}

@property (readonly, getter=isSuspended) BOOL suspended;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;
+ (id)sharedLowPriorityDispatcher;

- (id)init;
- (void)suspend;
- (oneway void)release;
- (id)autorelease;
- (unsigned long long)retainCount;
- (void)resume;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (id)p_dispatchQueue;

@end

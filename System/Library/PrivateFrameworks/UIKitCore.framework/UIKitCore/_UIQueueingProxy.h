@class NSMutableArray;

@interface _UIQueueingProxy : _UITargetedProxy {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _suspensionCount;
    NSMutableArray *_queuedInvocations;
    id /* block */ _shouldSuspendInvocationBlock;
}

+ (id)proxyWithTarget:(id)a0;
+ (id)proxyWithTarget:(id)a0 shouldSuspendInvocationBlock:(id /* block */)a1;

- (void)suspend;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)resume;
- (void)_dispatchSuspendedMessages;
- (void)removeAllEnqueuedInvocations;

@end

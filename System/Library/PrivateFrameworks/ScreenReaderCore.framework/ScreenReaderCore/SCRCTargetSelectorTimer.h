@class NSLock;

@interface SCRCTargetSelectorTimer : SCRCTargetSelector {
    struct __CFRunLoopTimer { } *_timer;
    id _key;
    BOOL _isCanceled;
    BOOL _isPending;
    id _object;
    NSLock *_lock;
    BOOL _createdTimer;
    id /* block */ _block;
}

+ (void)initialize;
+ (void)_runThread;
+ (void)_assignThreadPriority;

- (void)cancel;
- (BOOL)isCanceled;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)isPending;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;
- (void)dealloc;
- (BOOL)isCancelled;
- (BOOL)_createdTimer;
- (void)_runTimerBlock:(id /* block */)a0;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 thread:(id)a2;
- (void)_dispatch;
- (void)_dispatchMainThread;
- (void)_dispatchSCRCThread;
- (void)_dispatchThreadHelper:(id /* block */)a0;
- (id)_initWithTarget:(id)a0 selector:(SEL)a1 threadKeyOrThread:(id)a2;
- (void)dispatchAfterDelay:(double)a0;
- (void)dispatchAfterDelay:(double)a0 withBlock:(id /* block */)a1;
- (void)dispatchAfterDelay:(double)a0 withObject:(id)a1;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 threadKey:(id)a2;
- (id)threadKey;

@end

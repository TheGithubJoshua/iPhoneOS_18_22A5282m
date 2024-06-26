@class NSLock, NSMutableArray;

@interface SCROBrailleEventDispatcher : NSObject {
    NSLock *_queueLock;
    struct __CFRunLoop { } *_runLoop;
    struct __CFRunLoopSource { } *_queueSource;
    NSMutableArray *_queue;
    NSMutableArray *_brailleEventQueue;
    id _target;
    BOOL _isValid;
}

- (void)enqueueEvent:(id)a0;
- (id)initWithTarget:(id)a0;
- (BOOL)isValid;
- (void)start;
- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_processQueue;

@end

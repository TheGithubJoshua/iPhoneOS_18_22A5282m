@class CLRunLoopSiloThread;

@interface CLRunLoopSilo : CLSilo {
    CLRunLoopSiloThread *_siloThread;
    BOOL _useCLPermissiveTimer;
}

- (void)assertOutside;
- (BOOL)inPermissiveMode;
- (void)heartBeat:(id)a0;
- (void)async:(id /* block */)a0;
- (void)sync:(id /* block */)a0;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;
- (BOOL)isSuspended;
- (void)suspend;
- (id)initWithCurrentRunLoopAndIdentifier:(id)a0 bePermissive:(BOOL)a1;
- (id)initWithIdentifier:(id)a0;
- (double)currentLatchedAbsoluteTimestamp;
- (id)runloop;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)resume;
- (id)getTimeCoercibleVariantInstance;
- (void)assertInside;
- (id)initWithUnderlyingRunLoop:(struct __CFRunLoop { } *)a0;
- (id)initWithCurrentRunLoopAndIdentifier:(id)a0;
- (id)newTimer;

@end

@interface WebMainThreadInvoker : NSProxy {
    id target;
    struct RetainPtr<id> { void *m_ptr; } exception;
}

- (id)initWithTarget:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)handleException:(id)a0;

@end

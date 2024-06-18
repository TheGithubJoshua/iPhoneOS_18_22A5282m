@interface WebPolicyDecisionListenerPrivate : NSObject {
    struct RetainPtr<id> { void *m_ptr; } target;
    SEL action;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 action:(SEL)a1;

@end

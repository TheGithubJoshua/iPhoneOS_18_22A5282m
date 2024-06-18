@interface AMSUIWebDelegateProxy : NSObject

@property (weak, nonatomic) id delegate;

- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithDelegate:(id)a0;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;

@end

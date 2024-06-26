@interface _RTIWeakProxy : NSProxy

@property (weak, nonatomic, setter=_setTarget:) id _target;

+ (id)proxyWithTarget:(id)a0;

- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end

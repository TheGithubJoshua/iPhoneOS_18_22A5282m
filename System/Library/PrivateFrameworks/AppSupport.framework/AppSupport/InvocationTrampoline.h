@interface InvocationTrampoline : NSObject

@property (retain) id target;

- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)dealloc;
- (void)performInvocation:(id)a0;

@end

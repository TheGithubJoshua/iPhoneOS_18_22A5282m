@interface ISInvocationRecorder : NSObject {
    id _target;
}

- (id)init;
- (id)initWithTarget:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void)invokeInvocation:(id)a0;
- (void)dealloc;
- (id)adjustedTargetForSelector:(SEL)a0;

@end

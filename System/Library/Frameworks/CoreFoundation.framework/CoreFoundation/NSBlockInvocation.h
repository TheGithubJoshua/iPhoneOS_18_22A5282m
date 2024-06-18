@interface NSBlockInvocation : NSInvocation

- (void)setSelector:(SEL)a0;
- (SEL)selector;
- (void)invoke;
- (void)invokeUsingIMP:(void /* function */ *)a0;
- (void)invokeSuper;

@end

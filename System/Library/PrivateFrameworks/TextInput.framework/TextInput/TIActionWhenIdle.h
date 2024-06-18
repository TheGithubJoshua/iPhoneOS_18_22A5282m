@class NSInvocation;

@interface TIActionWhenIdle : NSObject

@property (retain, nonatomic) NSInvocation *invocation;

+ (id)actionWhenIdleWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;

- (id)initWithInvocation:(id)a0;
- (void)addObserverToRunLoop;
- (void)invoke;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;
- (BOOL)isValid;
- (void)invalidate;
- (void).cxx_destruct;

@end

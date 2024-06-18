@class NSString;

@interface RTInvocationRecord : NSObject <NSCopying>

@property (copy, nonatomic) id /* block */ block;
@property (copy, nonatomic) id /* block */ failureBlock;
@property (copy, nonatomic) NSString *invocationDescription;

- (id)initWithBlock:(id /* block */)a0 failureBlock:(id /* block */)a1 description:(id)a2;
- (void)invoke;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)invokeFailure;

@end

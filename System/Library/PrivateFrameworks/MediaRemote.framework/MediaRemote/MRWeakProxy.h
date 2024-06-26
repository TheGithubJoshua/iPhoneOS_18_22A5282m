@class Protocol;

@interface MRWeakProxy : NSObject

@property (weak, nonatomic) id object;
@property (retain, nonatomic) Protocol *protocol;

+ (id)weakProxyWithObject:(id)a0 protocol:(id)a1;

- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end

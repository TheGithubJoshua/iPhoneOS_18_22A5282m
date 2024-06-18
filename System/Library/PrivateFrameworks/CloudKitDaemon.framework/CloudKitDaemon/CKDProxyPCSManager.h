@interface CKDProxyPCSManager : NSObject

@property (retain, nonatomic) Class PCSManagerSuperclass;

- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)weAreNeverEverEverUsingEncryption:(id)a0;

@end

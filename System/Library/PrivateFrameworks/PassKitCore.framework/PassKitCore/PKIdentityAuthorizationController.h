@class DIIdentityAuthorizationController;

@interface PKIdentityAuthorizationController : NSObject

@property (retain, nonatomic) DIIdentityAuthorizationController *wrapped;

- (id)init;
- (void).cxx_destruct;
- (void)cancelRequest;
- (void)checkCanRequestDocument:(id)a0 completion:(id /* block */)a1;
- (void)requestDocument:(id)a0 completion:(id /* block */)a1;

@end

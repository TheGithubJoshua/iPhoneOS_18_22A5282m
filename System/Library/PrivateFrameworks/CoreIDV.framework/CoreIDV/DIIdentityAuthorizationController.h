@class _TtC7CoreIDV25DigitalPresentmentSession;

@interface DIIdentityAuthorizationController : NSObject

@property (retain) _TtC7CoreIDV25DigitalPresentmentSession *session;

- (id)init;
- (void).cxx_destruct;
- (void)cancelRequest;
- (void)checkCanRequestDocument:(id)a0 completion:(id /* block */)a1;
- (void)requestDocument:(id)a0 completion:(id /* block */)a1;

@end

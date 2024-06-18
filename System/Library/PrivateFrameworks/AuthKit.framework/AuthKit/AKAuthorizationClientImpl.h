@protocol AKAuthorizationUIProvider;

@interface AKAuthorizationClientImpl : NSObject <AKAuthorizationClientProtocol>

@property (retain, nonatomic) id<AKAuthorizationUIProvider> uiProvider;

- (void).cxx_destruct;
- (void)dealloc;
- (void)presentAuthorizationUIForContext:(id)a0 completion:(id /* block */)a1;

@end

@class NSXPCConnection;
@protocol HKHealthPrivacyHostAuthorizationControllerDelegate;

@interface HKNanoHostAuthorizationController : NSObject <HKHealthPrivacyHostRemoteViewController>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (weak, nonatomic) id<HKHealthPrivacyHostAuthorizationControllerDelegate> delegate;

- (void)show;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)connectionDidInterrupt;
- (void)connectionDidInvalidate;
- (void)didFinishWithError:(id)a0;
- (void)_remoteObjectProxyWithCompletion:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)setRequestRecord:(id)a0 presentationRequests:(id)a1;

@end

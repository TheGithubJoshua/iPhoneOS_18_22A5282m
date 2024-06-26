@class NSString, PKXPCService;
@protocol NPKCompanionViewServiceConnectionDelegate;

@interface NPKCompanionViewServiceConnection : NSObject <PKXPCServiceDelegate, NPKCompanionViewServiceConnectionClientProtocol> {
    PKXPCService *_remoteService;
}

@property (weak, nonatomic) id<NPKCompanionViewServiceConnectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)serviceResumed;
- (id)init;
- (void)presentRemotePassItemSelectionViewControllerForRequest:(id)a0 contact:(id)a1 completion:(id /* block */)a2;
- (void)serviceSuspended;
- (void)remoteService:(id)a0 didEstablishConnection:(id)a1;
- (void).cxx_destruct;
- (void)remoteService:(id)a0 didInterruptConnection:(id)a1;
- (void)presentRemotePassValueEntryViewControllerForRequest:(id)a0 contact:(id)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)a0;
- (id /* block */)_errorHandlerWithCompletion:(id /* block */)a0;
- (void)handleCompanionItemSelectionRequestCancelledForRequestIdentifier:(id)a0;
- (void)handleCompanionItemSelectionRequestFinishedWithRenewalAmount:(id)a0 serviceProviderData:(id)a1 forRequestIdentifier:(id)a2;
- (void)handleCompanionValueEntryCancelledForRequestIdentifier:(id)a0;
- (void)handleCompanionValueEntryFinishedWithCurrencyAmount:(id)a0 forRequestIdentifier:(id)a1;

@end

@class NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SOServiceConnection : NSObject <SOServiceProtocol>

@property (retain) NSXPCConnection *xpcConnection;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)isExtensionProcessWithAuditToken:(struct { unsigned int x0[8]; })a0 completion:(id /* block */)a1;
- (void)profilesWithExtensionBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)beginAuthorizationWithRequestParameters:(id)a0 completion:(id /* block */)a1;
- (void)performAuthorizationWithRequestParameters:(id)a0 completion:(id /* block */)a1;
- (void)cancelAuthorization:(id)a0 completion:(id /* block */)a1;
- (void)configurationWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)realmsWithCompletion:(id /* block */)a0;
- (void)getAuthorizationHintsWithURL:(id)a0 responseCode:(long long)a1 completion:(id /* block */)a2;
- (id)initWithQueue:(id)a0;
- (void)debugHintsWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (id)_doConnectWithOptions:(unsigned long long)a0;
- (void)finishAuthorization:(id)a0 completion:(id /* block */)a1;
- (BOOL)_connectToService;

@end

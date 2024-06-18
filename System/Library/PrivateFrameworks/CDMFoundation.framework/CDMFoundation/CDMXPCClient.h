@class NSString, CDMServiceCenter, NSXPCConnection;
@protocol CDMClientDelegate;

@interface CDMXPCClient : CDMClientInterface {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<CDMClientDelegate> _delegate;
    NSXPCConnection *_connection;
    NSString *_localeIdentifier;
    CDMServiceCenter *_serviceCenter;
}

- (void)invalidateConnection;
- (id)init;
- (id)connection;
- (id)initWithConnection:(id)a0 delegate:(id)a1;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)processCDMNluRequest:(id)a0;
- (BOOL)registerWithAssetsDelegate:(id)a0;
- (void)setup:(id)a0;
- (BOOL)areAssetsAvailable:(id)a0;
- (void)doHandleCommand:(id)a0 forCallback:(id /* block */)a1;
- (void)handleOverridesAssetUpdateEvent:(id)a0;
- (void)processCDMNluRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)processCDMNluRequest:(id)a0 nullableCompletionHandler:(id /* block */)a1;
- (void)setup:(id)a0 completionHandler:(id /* block */)a1;
- (void)setup:(id)a0 nullableCompletionHandler:(id /* block */)a1;

@end

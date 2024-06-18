@class NSXPCListenerEndpoint, NSString, NSXPCConnection, ACAccountStoreClientSideListener;

@interface ACRemoteAccountStoreSession : NSObject <NSXPCProxyCreating> {
    NSXPCConnection *_connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionLock;
    ACAccountStoreClientSideListener *_clientSideListener;
}

@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (copy, nonatomic) NSString *effectiveBundleID;
@property (nonatomic) BOOL notificationsEnabled;

- (id)_connection;
- (id)init;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)initWithListenerEndpoint:(id)a0 delegate:(id)a1;
- (void)_locked_connection:(id)a0 setNotificationsEnabled:(BOOL)a1;
- (void)_locked_connection:(id)a0 setEffectiveBundleID:(id)a1;
- (void)_locked_configureRemoteAccountStoreWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)_setConnectionInvalidated;
- (void)dealloc;
- (id)remoteObjectProxy;
- (void)_setConnectionInterrupted;

@end

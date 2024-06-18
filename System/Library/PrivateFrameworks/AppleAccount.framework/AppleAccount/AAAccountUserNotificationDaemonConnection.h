@class NSXPCConnection, NSXPCListenerEndpoint;

@interface AAAccountUserNotificationDaemonConnection : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
    NSXPCConnection *_connection;
}

@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;

- (id)_connection;
- (id)initWithListenerEndpoint:(id)a0;
- (id)init;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_connectionInterruptionHandler;
- (void)dealloc;
- (void)_connectionInvalidationHandler;

@end

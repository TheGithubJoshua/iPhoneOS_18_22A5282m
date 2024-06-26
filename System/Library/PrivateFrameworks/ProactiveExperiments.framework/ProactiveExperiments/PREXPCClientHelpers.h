@class NSString, NSXPCInterface, NSXPCConnection;

@interface PREXPCClientHelpers : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _connLock;
    NSXPCConnection *_conn;
    NSString *_serviceName;
    NSXPCInterface *_whitelistedServerInterface;
    id _clientExportedObject;
    id /* block */ _interruptionHandler;
    id /* block */ _invalidationHandler;
}

- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_locked_establishConnection;
- (void)dealloc;
- (id)remoteObjectProxy;
- (id)initWithServiceName:(id)a0 whitelistedServerInterface:(id)a1 clientExportedObject:(id)a2 interruptionHandler:(id /* block */)a3 invalidationHandler:(id /* block */)a4;

@end

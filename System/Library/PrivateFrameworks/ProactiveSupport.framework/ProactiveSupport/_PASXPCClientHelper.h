@class NSString, NSXPCConnection, NSXPCInterface, NSObject;
@protocol OS_os_log;

@interface _PASXPCClientHelper : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _connLock;
    NSXPCConnection *_conn;
    NSString *_serviceName;
    NSXPCInterface *_whitelistedServerInterface;
    NSXPCInterface *_whitelistedClientInterface;
    id _serverInitiatedRequestHandler;
    id /* block */ _interruptionHandler;
    id /* block */ _invalidationHandler;
    NSObject<OS_os_log> *_logHandle;
}

- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithServiceName:(id)a0 whitelistedServerInterface:(id)a1 whitelistedClientInterface:(id)a2 serverInitiatedRequestHandler:(id)a3 interruptionHandler:(id /* block */)a4 invalidationHandler:(id /* block */)a5 logHandle:(id)a6;
- (void)_locked_establishConnection;
- (void)dealloc;
- (id)remoteObjectProxy;

@end

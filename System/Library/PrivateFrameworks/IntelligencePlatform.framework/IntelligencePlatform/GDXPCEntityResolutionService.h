@class NSXPCInterface, NSXPCConnection;

@interface GDXPCEntityResolutionService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (id)init;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)locked_establishConnection;
- (id)submitCollectionQuery:(id)a0 withError:(id *)a1;
- (id)submitQuery:(id)a0 withError:(id *)a1;

@end

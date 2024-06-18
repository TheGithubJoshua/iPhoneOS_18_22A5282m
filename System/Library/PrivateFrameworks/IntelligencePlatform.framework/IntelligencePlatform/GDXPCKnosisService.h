@class NSXPCInterface, NSXPCConnection;

@interface GDXPCKnosisService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (id)init;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)executeKGQ:(id)a0 withError:(id *)a1;
- (void)locked_establishConnection;

@end

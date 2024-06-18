@class NSXPCInterface, NSXPCConnection;

@interface GDXPCCoordinationService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (id)init;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)graphUpdatedWithError:(id *)a0;
- (void)locked_establishConnection;

@end

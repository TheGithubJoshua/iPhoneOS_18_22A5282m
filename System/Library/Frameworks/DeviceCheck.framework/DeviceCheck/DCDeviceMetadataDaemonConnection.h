@class NSLock, NSXPCConnection;

@interface DCDeviceMetadataDaemonConnection : NSObject {
    NSXPCConnection *_conn;
    NSLock *_connLock;
}

- (id)init;
- (id)remoteObjectProxy:(id /* block */)a0;
- (id)connection;
- (void).cxx_destruct;
- (id)synchronousRemoteObjectProxy:(id /* block */)a0;

@end

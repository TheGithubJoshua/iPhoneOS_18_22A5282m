@class NSXPCConnection, NSLock, NSXPCListenerEndpoint;

@interface CDPDaemonConnection : NSObject {
    NSXPCConnection *_conn;
    NSLock *_connLock;
}

@property (retain, nonatomic) NSXPCListenerEndpoint *daemonXPCEndpoint;

- (id)init;
- (id)daemonWithErrorHandler:(id /* block */)a0;
- (id)connection;
- (id)synchronousDaemonWithErrorHandler:(id /* block */)a0;
- (id)daemon;
- (void).cxx_destruct;
- (void)dealloc;

@end

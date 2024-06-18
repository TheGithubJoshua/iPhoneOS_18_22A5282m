@class NSXPCConnection, NSLock, NSXPCListenerEndpoint;

@interface FLDaemon : NSObject {
    NSXPCConnection *_conn;
    NSLock *_connLock;
}

@property (retain, nonatomic) NSXPCListenerEndpoint *daemonXPCEndpoint;

+ (id)daemonWithErrorHandler:(id /* block */)a0;
+ (id)sharedInstance;

- (void)invalidateConnection;
- (id)init;
- (id)daemonWithErrorHandler:(id /* block */)a0;
- (id)connection;
- (id)synchronousDaemonWithErrorHandler:(id /* block */)a0;
- (id)remoteObjectInterface;
- (void).cxx_destruct;
- (void)dealloc;

@end

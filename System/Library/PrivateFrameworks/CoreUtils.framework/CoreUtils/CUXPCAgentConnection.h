@class NSObject, NSXPCConnection, CUXPCAgent;
@protocol OS_dispatch_queue;

@interface CUXPCAgentConnection : NSObject {
    CUXPCAgent *_agent;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSXPCConnection *_xpcCnx;
}

- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (id)remoteObjectProxy;

@end

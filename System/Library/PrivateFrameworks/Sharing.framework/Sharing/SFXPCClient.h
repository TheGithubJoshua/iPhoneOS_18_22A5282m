@class NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SFXPCClient : NSObject <NSXPCConnectionDelegate> {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldEscapeXpcTryCatch;
- (id)init;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (void)onqueue_connectionEstablished;
- (id)remoteObjectInterface;
- (void)onqueue_activate;
- (void)onqueue_invalidated;
- (void)onqueue_ensureXPCStarted;
- (void)onqueue_interrupted;
- (id)machServiceName;
- (void).cxx_destruct;
- (void)interrupted;
- (void)getRemoteObjectProxyOnQueue:(id /* block */)a0;
- (void)onqueue_ensureConnectionEstablished;
- (void)invalidated;
- (id)exportedInterface;
- (void)dealloc;
- (void)connectionEstablished;
- (void)onqueue_connectionInterrupted;
- (void)onqueue_getRemoteObjectProxyOnQueue:(id /* block */)a0;
- (void)onqueue_connectionInvalidated;
- (void)_activate;
- (void)_invalidate;
- (void)onqueue_invalidate;

@end

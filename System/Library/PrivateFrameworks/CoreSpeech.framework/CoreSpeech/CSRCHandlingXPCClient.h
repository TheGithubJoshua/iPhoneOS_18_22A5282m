@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface CSRCHandlingXPCClient : NSObject

@property (retain, nonatomic) NSXPCConnection *rcXPCConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcConnectionQueue;
@property (retain, nonatomic) id remoteObjectProxy;

- (void)processRCWithId:(unsigned long long)a0 duration:(double)a1 lrnnScore:(double)a2 lrnnThreshold:(double)a3 taskId:(id)a4 forceAccept:(BOOL)a5 completionHandler:(id /* block */)a6;
- (id)init;
- (id)_getRemoteServiceProxyObject;
- (void)_createClientConnection;
- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)getMitigationDecisionForRCIdWithCompletion:(unsigned long long)a0 completion:(id /* block */)a1;

@end

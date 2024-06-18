@class NSString, NSObject;
@protocol OS_dispatch_queue, SESSessionInterface, NSXPCProxyCreating;

@interface SESSession : NSObject <SESSessionCallbackInterface, SESSession> {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isQueueSuspended;
    id /* block */ _didStartCallback;
    id /* block */ _didEndCallback;
    NSObject<SESSessionInterface, NSXPCProxyCreating> *_proxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long state;

- (void)endSession;
- (void)setProxy:(id)a0;
- (id)init;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)proxy;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)resume;
- (void)dealloc;
- (id)queue;
- (void)setDidEndCallback:(id /* block */)a0;
- (void)didStartSession:(id)a0;
- (void)setDidStartCallback:(id /* block */)a0;
- (void)didEndUnexpectedly:(id)a0;
- (id)endRemoteSession;
- (void)endSessionWithError:(id)a0;

@end

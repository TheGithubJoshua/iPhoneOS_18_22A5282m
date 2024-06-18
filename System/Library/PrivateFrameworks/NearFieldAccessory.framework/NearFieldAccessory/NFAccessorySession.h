@class NSString, NSObject;
@protocol OS_dispatch_queue, NFSessionAccessoryInterface, NSXPCProxyCreating;

@interface NFAccessorySession : NSObject <NFAccessorySession> {
    BOOL _isFirstInQueue;
    BOOL _isCallbackQueueSuspended;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<NFSessionAccessoryInterface, NSXPCProxyCreating> *_proxy;
    id /* block */ _didStartCallback;
    id /* block */ _didEndCallback;
}

@property (readonly) unsigned long long state;
@property (readonly) BOOL didEnd;
@property (readonly) BOOL isActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setProxy:(id)a0;
- (id)init;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)proxy;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)callbackQueue;
- (void).cxx_destruct;
- (void)resume;
- (void)dealloc;
- (void)didEndUnexpectedly;
- (void)setDidEndCallback:(id /* block */)a0;
- (void)endSessionWithCompletion:(id /* block */)a0;
- (BOOL)isFirstInQueue;
- (void)_endProxySession;
- (void)didStartSession:(id)a0;
- (void)didStartSessionWithoutQueue:(id)a0;
- (void)setDidStartCallback:(id /* block */)a0;
- (void)setIsFirstInQueue:(BOOL)a0;
- (void)_didEndSession;
- (void)_didStartSession:(id)a0;

@end

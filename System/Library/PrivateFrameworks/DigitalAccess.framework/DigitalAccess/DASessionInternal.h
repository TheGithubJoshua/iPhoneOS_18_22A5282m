@class NSObject;
@protocol OS_dispatch_queue, NSXPCProxyCreating;

@interface DASessionInternal : NSObject {
    BOOL _isCallbackQueueSuspended;
    NSObject<NSXPCProxyCreating> *_proxy;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property BOOL isFirstInQueue;
@property (retain, setter=setProxy:) id proxy;
@property (readonly, weak) id delegate;

- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)resume;
- (void)dealloc;
- (void)closeProxy;
- (void)dispatchBlockOnCallback:(id /* block */)a0;

@end

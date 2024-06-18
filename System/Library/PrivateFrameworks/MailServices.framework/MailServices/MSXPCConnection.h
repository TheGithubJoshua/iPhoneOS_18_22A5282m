@class Protocol, EFPromise, NSXPCInterface, NSLock, NSObject;
@protocol OS_dispatch_queue;

@interface MSXPCConnection : NSXPCConnection {
    NSLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    EFPromise *_connectionPromise;
    NSXPCInterface *_remoteObjectInterface;
    NSXPCInterface *_exportedInterface;
    id _exportedObject;
    id /* block */ _interruptionHandler;
    id /* block */ _invalidationHandler;
    long long _resumeCount;
    _Atomic BOOL _locallyInvalidated;
}

@property (readonly, retain, nonatomic) Protocol *protocol;
@property (nonatomic) BOOL shouldLaunchMobileMail;

- (id)_connection;
- (id)exportedObject;
- (id)initWithProtocol:(id)a0;
- (void)setExportedInterface:(id)a0;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id /* block */)invalidationHandler;
- (void)suspend;
- (void)setRemoteObjectInterface:(id)a0;
- (id /* block */)_nts_wrappedInterruptionHandler;
- (void)_finishPromise:(id)a0 withConnection:(id)a1 error:(id)a2;
- (id)remoteObjectInterface;
- (void)_queue_invokeInvalidationHandler;
- (int)auditSessionIdentifier;
- (int)processIdentifier;
- (void)setInvalidationHandler:(id /* block */)a0;
- (void)setInterruptionHandler:(id /* block */)a0;
- (void)_sendInvocation:(id)a0 remoteInterface:(id)a1 remoteProxy:(id)a2 errorHandler:(id /* block */)a3;
- (void)invalidate;
- (void).cxx_destruct;
- (id)description;
- (unsigned int)effectiveUserIdentifier;
- (void)_invalidatePromise:(id)a0;
- (void)resume;
- (void)setExportedObject:(id)a0;
- (id)_connectionForPromise:(id)a0;
- (id)exportedInterface;
- (void)dealloc;
- (void)_invokeInterruptionHandlerForPromise:(id)a0;
- (id)remoteObjectProxy;
- (unsigned int)effectiveGroupIdentifier;
- (id /* block */)interruptionHandler;

@end

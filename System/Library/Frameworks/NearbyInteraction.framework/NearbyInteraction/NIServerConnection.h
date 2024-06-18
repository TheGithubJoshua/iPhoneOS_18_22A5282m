@class NSUUID, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface NIServerConnection : NSObject {
    NSXPCConnection *_connection;
    unsigned long long _options;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy) id /* block */ interruptionHandler;
@property (copy) id /* block */ invalidationHandler;
@property (readonly) NSUUID *sessionID;
@property (retain) id exportedObject;

- (id)synchronousRemoteObjectProxy;
- (void)invalidate;
- (void).cxx_destruct;
- (void)resume;
- (id)initWithSessionID:(id)a0 queue:(id)a1 exportedObject:(id)a2 options:(unsigned long long)a3;
- (void)dealloc;
- (struct { unsigned int x0[8]; })auditTokenForConnection;
- (id)remoteObjectProxy;

@end

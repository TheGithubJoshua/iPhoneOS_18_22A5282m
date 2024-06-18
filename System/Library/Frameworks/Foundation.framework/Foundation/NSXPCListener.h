@class NSXPCListenerEndpoint, NSString, NSObject, OS_xpc_remote_connection;
@protocol OS_xpc_object, OS_dispatch_queue, NSXPCListenerDelegate;

@interface NSXPCListener : NSObject {
    union { NSObject<OS_xpc_object> *xpc; OS_xpc_remote_connection *remote; } _connection;
    NSObject<OS_dispatch_queue> *_userQueue;
    _Atomic id _delegate;
    NSString *_serviceName;
    unsigned long long _state;
    unsigned char _remote;
}

@property (weak) id<NSXPCListenerDelegate> delegate;
@property (readonly, retain) NSXPCListenerEndpoint *endpoint;

+ (id)serviceListener;
+ (id)anonymousListener;
+ (void)enableTransactions;
+ (id)_UUID;

- (void)__receiveRemoteConnection:(id)a0;
- (id)_xpcConnection;
- (void)_setQueue:(id)a0;
- (id)__initWithoutRemoteConnection;
- (id)initWithServiceName:(id)a0;
- (id)_initShared;
- (id)_queue;
- (id)initWithMachServiceName:(id)a0;
- (id)_initWithRemoteName:(id)a0;
- (void)suspend;
- (void)stop;
- (id)serviceName;
- (void)activate;
- (void)setOptions:(unsigned long long)a0;
- (void)invalidate;
- (id)description;
- (void)resume;
- (void)dealloc;

@end

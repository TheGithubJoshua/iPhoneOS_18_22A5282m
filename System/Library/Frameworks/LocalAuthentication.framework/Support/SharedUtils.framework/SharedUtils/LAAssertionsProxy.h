@class NSString, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface LAAssertionsProxy : NSObject <LAAssertionsXPC> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setQueue:(id)a0;
- (BOOL)isConnected;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)setConnection:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)dropTouchIdAssertion:(id /* block */)a0;
- (void)takeTouchIdAssertion:(id /* block */)a0;

@end

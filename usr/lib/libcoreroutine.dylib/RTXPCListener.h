@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface RTXPCListener : NSXPCListener <NSXPCListenerDelegate, RTWatchdogProtocol>

@property (readonly, nonatomic) NSString *machServiceName;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableArray *connectedClients;
@property (readonly, nonatomic) NSMutableArray *disconnectedClients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shutdownWithHandler:(id /* block */)a0;
- (void)setup;
- (id)initWithMachServiceName:(id)a0;
- (void)_setup;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)checkInWithHandler:(id /* block */)a0;
- (void)logClients;

@end

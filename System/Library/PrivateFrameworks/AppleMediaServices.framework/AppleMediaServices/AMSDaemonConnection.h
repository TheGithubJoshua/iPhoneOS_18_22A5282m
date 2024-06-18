@class NSString, NSXPCConnection, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AMSDaemonConnection : NSObject <AMSDServiceBrokerProtocol>

@property (retain, nonatomic) NSXPCConnection *sharedConnection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedConnectionAccessQueue;
@property (readonly, nonatomic) NSMutableArray *interruptionHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleInterruption;
- (id)init;
- (id)fraudReportServiceProxy;
- (id)callService:(id)a0 then:(id /* block */)a1;
- (id)_serviceInterfaceForSelector:(SEL)a0;
- (id)securityServiceProxyWithDelegate:(id)a0;
- (id)cookieServiceProxySyncWithError:(id *)a0;
- (id)purchaseServiceProxy;
- (void)_handleInvalidation;
- (void)addInterruptionHandler:(id /* block */)a0;
- (void)_errorForwardingProxyForServiceProxy:(id)a0 proxyReplyError:(id)a1 interface:(id)a2 proxyPromise:(id)a3;
- (void).cxx_destruct;
- (id)cookieServiceProxy;
- (id)_connectionProxyWithAccessBlock:(id /* block */)a0;
- (void)dealloc;
- (void)_initializeConnection;
- (id)deviceMessengerProxyWithDelegate:(id)a0;
- (id)pushNotificationService;
- (void)_connectionSyncProxyWithAccessBlock:(id /* block */)a0;

@end

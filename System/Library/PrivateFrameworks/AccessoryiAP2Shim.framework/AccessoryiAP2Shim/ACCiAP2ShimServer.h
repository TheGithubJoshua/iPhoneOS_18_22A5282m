@class NSLock, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface ACCiAP2ShimServer : NSObject

@property (retain, nonatomic) NSMutableDictionary *delegateList;
@property (retain, nonatomic) NSMutableDictionary *accessoryViaKeyUIDList;
@property (retain, nonatomic) NSMutableDictionary *accessoryViaConnectionIDList;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *listQueue;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *listener;
@property (readonly, nonatomic) BOOL isShuttingDown;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *iap2dhighPriorityRootQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalListenerQueue;
@property (readonly) struct __serverFlags { unsigned char deathBecomesUs : 1; unsigned char serverExiting : 1; unsigned int reserved : 30; } serverFlags;
@property (readonly) NSMutableDictionary *clients;
@property (readonly) NSLock *clientLock;
@property (readonly) int iap2AvailableNotifyToken;

+ (id)sharedInstance;
+ (void)resetServerState;
+ (void)postiAP2NotificationType:(id)a0 notifyDict:(id)a1;
+ (id)stringForClientID:(unsigned int)a0;
+ (void)postNSDistributeNotificationType:(id)a0 notifyDict:(id)a1;
+ (void)postiAP2AppNotificationType:(id)a0 notifyDict:(id)a1;
+ (void)postNotifydNotificationType:(id)a0;

- (void)_startServer;
- (void)addDelegate:(id)a0;
- (id)findClientWithXPCConnection:(id)a0;
- (id)init;
- (void)_addAccessory:(id)a0;
- (id)_findAccessoryForConnectionID:(unsigned int)a0;
- (id)findAccessoryForConnectionID:(unsigned int)a0;
- (void)iterateDelegatesSync:(id /* block */)a0;
- (void)removeAccessory:(id)a0;
- (void)_takeClientAssertionsForAccessoryConnection;
- (void)_removeDelegate:(id)a0;
- (void)_stopServer;
- (void)removeDelegate:(id)a0;
- (void)removeAllClients;
- (void)removeClientForXPCConnection:(id)a0;
- (void)stopServer;
- (unsigned int)addClientWithCapabilities:(unsigned int)a0 auditToken:(struct { unsigned int x0[8]; })a1 currentClientID:(unsigned int)a2 xpcConnection:(id)a3 eaProtocols:(id)a4 notifyOfAlreadyConnectedAccessories:(BOOL)a5 andBundleId:(id)a6;
- (id)findAccessoryForConnectionID:(unsigned int)a0 andKeyTag:(id)a1;
- (void)notifyEAClientsOfAccessoryConnection:(id)a0;
- (void)_addDelegate:(id)a0;
- (void)notifyEAClientsOfAccessoryEvent:(const char *)a0 accessory:(id)a1;
- (void)iterateAccessoriesAsync:(id /* block */)a0;
- (void)_attachAccessory:(id)a0;
- (void)removeClientWithID:(unsigned int)a0;
- (unsigned int)generateClientID;
- (void)_iterateDelegates:(id /* block */)a0;
- (void)_detachAccessory:(id)a0;
- (void)notifyEAClientsOfAccessoryReconnection:(id)a0;
- (void)_takeClientAssertionsForAccessoryDisconnection;
- (void)_iterateAccessories:(id /* block */)a0;
- (void)notifyEAClient:(id)a0 ofAccessoryEvent:(const char *)a1 accessory:(id)a2;
- (void)_resetServerState;
- (id)_findAccessoryForAccessoryUID:(id)a0 andKeyTag:(id)a1;
- (void).cxx_destruct;
- (void)processDetachXPCConnection:(id)a0;
- (id)_findAccessoryForConnectionID:(unsigned int)a0 andKeyTag:(id)a1;
- (void)startServer;
- (id)findAccessoryForAccessoryUID:(id)a0 andKeyTag:(id)a1;
- (id)findClientWithID:(unsigned int)a0;
- (void)notifyEAClientsOfAccessoryDisconnection:(id)a0;
- (void)addAccessory:(id)a0;
- (void)dealloc;
- (void)iterateDelegatesAsync:(id /* block */)a0;
- (void)iterateAccessoriesSync:(id /* block */)a0;
- (void)_pollForDeathAfterPromptCompletes;
- (BOOL)processXPCMessage:(id)a0 connection:(id)a1;
- (void)_removeAccessory:(id)a0;

@end

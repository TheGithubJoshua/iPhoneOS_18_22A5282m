@class NSXPCListener, NSString, NSMutableDictionary, FPProviderMonitor, FPDExtensionManager, NSObject;
@protocol OS_dispatch_queue;

@interface FPDPushConnection : NSObject <NSXPCListenerDelegate, PKFileProviderXPCServer, APSConnectionDelegate, FPProviderObserver> {
    FPDExtensionManager *_manager;
    NSXPCListener *_xpcListener;
    NSObject<OS_dispatch_queue> *_pushQueue;
    NSObject<OS_dispatch_queue> *_payloadDeliveryQueue;
    NSMutableDictionary *_pushConnectionsByEnvironment;
    NSMutableDictionary *_messageDelegates;
    NSMutableDictionary *_bundleIdentifierForTopic;
    NSMutableDictionary *_topicsForBundleIdentifier;
    NSMutableDictionary *_clientConnections;
    FPProviderMonitor *_providerMonitor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (id)clientConnectionsForApplicationBundleIdentifier:(id)a0;
- (void)connection:(id)a0 didReceiveToken:(id)a1 forTopic:(id)a2 identifier:(id)a3;
- (void)providerDidEnterBackground:(id)a0;
- (void)addClientConnection:(id)a0 forApplicationBundleIdentifier:(id)a1;
- (id)initWithExtensionManager:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (void)fileProviderUnregister;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)fileProviderRegister;
- (void)performWithConnection:(id)a0 block:(id /* block */)a1;
- (id)_debugTopicsForApplicationIdentifier:(id)a0;
- (void)removeClientConnection:(id)a0 forApplicationBundleIdentifier:(id)a1;
- (id)topicsForApplicationBundleIdentifier:(id)a0;
- (void)updateTopicsForBundleIdentifier:(id)a0;
- (void)updateTopicsForProvider:(id)a0;
- (void)setMessageDelegate:(id)a0 forApplicationBundleIdentifier:(id)a1;
- (void)providerDidEnterForeground:(id)a0;
- (void)updateTopicsForApplicationBundleIdentifier:(id)a0 providerIdentifier:(id)a1 requestToken:(BOOL)a2 environment:(id)a3;
- (id)_pushConnectionWithEnvironmentName:(id)a0;

@end

@class WPDSearchPartyAgent, WPDObjectDiscoveryData, WPDObjectDiscoveryManager, NSNumber;

@interface WPDObjectDiscoveryClient : WPDClient

@property BOOL pendingSent;
@property (weak) WPDObjectDiscoveryManager *objectDiscoveryManager;
@property (readonly) WPDObjectDiscoveryData *keyAddressAndPayload;
@property unsigned long long keyRequestID;
@property unsigned long long tokenRequestID;
@property (retain) WPDSearchPartyAgent *spAgent;
@property (retain) NSNumber *testBeaconingInterval;

- (void)generateStateDump;
- (void)startAdvertising:(id)a0;
- (void)completeSPBeaconingWithSuccess:(BOOL)a0;
- (void)sendRegisteredWithDaemonAndContinuingSession:(BOOL)a0;
- (void)stopSPBeaconing;
- (void)endTestMode;
- (id)initWithXPCConnection:(id)a0 server:(id)a1;
- (void)completeSPNearbyTockensWithSuccess:(BOOL)a0;
- (void)notifyClientObjectDiscoveryStateChange:(long long)a0;
- (void)updateSPBeaconing;
- (void).cxx_destruct;
- (void)startSPBeaconing;
- (void)notifyClientStateChange:(long long)a0 Restricted:(BOOL)a1;
- (void)sendTestRequest:(id)a0;
- (void)dealloc;
- (void)updateSPNearbyTokens;
- (void)registerWithDaemon:(id)a0 forProcess:(id)a1 machName:(id)a2 holdVouchers:(long long)a3;
- (void)stopAdvertising:(id)a0;
- (void)destroy;

@end

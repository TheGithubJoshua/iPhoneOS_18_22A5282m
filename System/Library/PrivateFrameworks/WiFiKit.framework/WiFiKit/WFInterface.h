@class WFNetworkScanRecord, NSString, NSArray, WFClient, NSSet, NSOperationQueue, NSThread, NSRunLoop, NSObject, CWFInterface, WFIPMonitor;
@protocol OS_dispatch_queue;

@interface WFInterface : NSObject

@property (retain, nonatomic) NSSet *currentNetworkIssues;
@property (retain, nonatomic) WFNetworkScanRecord *currentNetwork;
@property (retain, nonatomic) WFNetworkScanRecord *mobileWiFiCurrentNetwork;
@property (retain, nonatomic) WFNetworkScanRecord *coreWiFiCurrentNetwork;
@property (copy, nonatomic) NSString *interfaceName;
@property (retain, nonatomic) WFIPMonitor *ipMonitor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *currentNetworkQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *networkProcessingQueue;
@property (nonatomic) struct __WiFiDeviceClient { } *device;
@property (retain, nonatomic) NSOperationQueue *joinQueue;
@property (retain, nonatomic) NSArray *deviceScanChannels;
@property (nonatomic) int ipState;
@property (nonatomic) BOOL ipv4SelfAssigned;
@property (nonatomic) BOOL hasNoGatewayIP;
@property (nonatomic) BOOL currentNetworkIsDirected;
@property (retain, nonatomic) NSThread *callbackThread;
@property (retain, nonatomic) NSRunLoop *callbackRunLoop;
@property BOOL monitoringEvents;
@property BOOL scanning;
@property (weak, nonatomic) WFClient *wifiClient;
@property (retain, nonatomic) CWFInterface *cInterface;

- (id)initWithDevice:(struct __WiFiDeviceClient { } *)a0;
- (id)initWithDevice:(struct __WiFiDeviceClient { } *)a0 coreWiFiInterface:(id)a1;
- (void)asyncCurrentNetwork:(id /* block */)a0;
- (void)_carPlayNetworkTypeChangedCallback:(int)a0;
- (void)_updateCurrentNetworkWithNetwork:(struct __WiFiNetwork { } *)a0 forceUpdateNetwork:(BOOL)a1 callback:(id /* block */)a2 userInfo:(id)a3;
- (void)notifyNoNetworksFound;
- (void)_updateCurrentNetworkWithNetwork:(struct __WiFiNetwork { } *)a0 callback:(id /* block */)a1;
- (void)asyncAssociateToNetwork:(id)a0 profile:(id)a1 reply:(id /* block */)a2;
- (id)_debugLQMString:(id)a0;
- (void)asyncScanRequest:(id)a0 reply:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_currentNetworkDidChangeWithReason:(unsigned long long)a0 previousNetwork:(id)a1;
- (void)_linkQualityChanged:(id)a0;
- (void)disassociateFromCurrentNetwork;
- (void)_linkChangedWithInfo:(id)a0;
- (void)disassociateFromCarPlayUserConfiguredNetwork;
- (BOOL)isReadyForConnectionVelocityTest;
- (void)dealloc;
- (void)_hostAPStateDidChange:(id)a0;
- (void)_initCurrentNetwork;
- (void)_startMonitoringWiFiEvents;
- (void)asyncHS20Supported:(id /* block */)a0;
- (void)_stopMonitoringWiFiEvents;
- (void)_wifiManagerRestarted:(id)a0;
- (void)asyncAssociateToNetwork:(id)a0 password:(id)a1 reply:(id /* block */)a2;
- (void)_resetCurrentNetworkStates;

@end

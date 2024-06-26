@class NSString, NSDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface WiFiShim : NSObject {
    struct __WiFiManagerClient { } *_wifiManager;
    struct __WiFiDeviceClient { } *_wifiDevice;
    BOOL _registeredForCallbacks;
    unsigned char _lqmCallbackRegistrationAttempts;
    double _lqmCallbackLastRegistered;
    id _tdObserver;
}

@property (nonatomic) unsigned char lqmCallbacks;
@property (nonatomic) unsigned char lqmCallbackThreshold;
@property (nonatomic) unsigned char lqmBradycardia;
@property (nonatomic) int lqmEventInterval;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL hasAssociation;
@property (nonatomic) BOOL apIsAwake;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *lqmCallbackTimer;
@property (nonatomic) BOOL lqmCallbackTimerResumed;
@property (nonatomic) double lqmBradycardiaLastCalled;
@property (nonatomic) double lqmAsystoleLastCalled;
@property (nonatomic) double lqmCallbackLastTimestamp;
@property (retain, nonatomic) NSDictionary *awdlStateDict;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *awdlTimer;
@property (nonatomic) long long awdlTimerCount;
@property (nonatomic) char awdlLinkState;
@property (nonatomic) struct __WiFiDeviceClient { } *awdlDevice;
@property (retain, nonatomic) NSString *lastSsid;
@property (retain, nonatomic) NSString *lastBssid;
@property (retain, nonatomic) NSMutableSet *delegates;
@property (readonly) BOOL awdlLinkUp;
@property (nonatomic) BOOL monitorLQMBradycardia;

+ (id)sharedInstance;

- (void)addDelegate:(id)a0;
- (id)init;
- (void)_registerForLQMCallbacks;
- (void)_triggerDisconnectEdge:(id)a0;
- (struct __WiFiManagerClient { } *)wifiManager;
- (void)checkForLQMAsystole;
- (void)suspendLQMCallbackMonitoring;
- (BOOL)toggleLQMIntervalOn:(id)a0 toFast:(BOOL)a1;
- (BOOL)_shouldRegisterForLQMCallbacks;
- (void)checkForLQMCallbackRegistration;
- (id)ssidForInterfaceWithName:(id)a0;
- (id)associationInfoForWiFiNetwork:(struct __WiFiNetwork { } *)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)unregisterForCallbacks;
- (id)bssidForInterfaceWithName:(id)a0;
- (void)removeDelegate:(id)a0;
- (BOOL)isApplePersonalHotspot;
- (void)handleAWDLStateChange:(id)a0;
- (void)resumeLQMCallbackMonitoring;
- (id)getAWDLPeerList;
- (void)_delayedRegisterForLQMCallbacks;
- (void).cxx_destruct;
- (struct __WiFiDeviceClient { } *)wifiDevice;
- (void)registerForCallbacks;
- (void)_unregisterForLQMCallbacks;
- (void)setWifiDevice:(struct __WiFiDeviceClient { } *)a0;
- (void)changeLQMMonitoring;
- (void)setAWDLDevice:(struct __WiFiDeviceClient { } *)a0;
- (void)checkForLQMBradycardia;
- (BOOL)manualJoinInfoForNetwork:(struct __WiFiNetwork { } *)a0;
- (void)processAsystoleDeclaration;
- (void)_wifiDevicesRefresh;
- (void)dealloc;
- (void)_setAWDLLinkUp:(BOOL)a0;
- (long long)phyModeForInterfaceWithName:(id)a0;
- (id)refreshAssociationInfo;
- (BOOL)isHotSpotOnInterfaceWithName:(id)a0;
- (void)_setLQMEventInterval:(int)a0;
- (id)awdlPeerList;

@end

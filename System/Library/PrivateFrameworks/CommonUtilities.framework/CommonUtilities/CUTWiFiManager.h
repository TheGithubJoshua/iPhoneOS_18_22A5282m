@class NSHashTable, NSString, NSRecursiveLock, NSThread, NSRunLoop, NSDictionary, NSMutableSet, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface CUTWiFiManager : NSObject

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSThread *wifiThread;
@property (retain, nonatomic) NSRunLoop *wifiRunLoop;
@property (nonatomic) struct __CFRunLoopSource { } *runLoopSource;
@property (nonatomic) void *wifiManager;
@property (nonatomic) void *wifiDevice;
@property (nonatomic) void *currentNetwork;
@property (nonatomic) void *dynamicStore;
@property (nonatomic) int linkToken;
@property (retain, nonatomic) NSHashTable *delegateMap;
@property (retain, nonatomic) NSHashTable *wowClients;
@property (copy, nonatomic) NSDictionary *lastWiFiPowerInfo;
@property (retain, nonatomic) NSMutableSet *wiFiAutoAssociationTokens;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *incomingCallbacksQueue;
@property BOOL isPrimaryCellularCached;
@property (readonly, nonatomic) BOOL isWiFiEnabled;
@property (readonly, nonatomic) BOOL isWiFiAssociated;
@property (readonly, nonatomic) BOOL isWiFiCaptive;
@property (readonly, nonatomic) BOOL isHostingWiFiHotSpot;
@property (readonly, nonatomic) BOOL isWoWSupported;
@property (readonly, nonatomic) BOOL isWoWEnabled;
@property (readonly, nonatomic) BOOL willTryToSearchForWiFiNetwork;
@property (readonly, nonatomic) BOOL willTryToAutoAssociateWiFiNetwork;
@property (readonly, nonatomic) NSNumber *wiFiSignalStrength;
@property (readonly, nonatomic) NSNumber *wiFiScaledRSSI;
@property (readonly, nonatomic) NSNumber *wiFiScaledRate;
@property (readonly, nonatomic) NSString *currentSSID;
@property (nonatomic) BOOL autoAssociateWiFiAsForegroundClient;
@property (readonly, nonatomic) BOOL autoAssociateWiFi;

+ (id)sharedInstance;

- (void)addDelegate:(id)a0;
- (void)_handleHostAPStateChangedCallback;
- (id)init;
- (void)_performDeviceBlock:(id /* block */)a0 useCache:(BOOL)a1;
- (void)_threadedMain;
- (void)_performCurrentNetworkBlock:(id /* block */)a0 withDevice:(struct __WiFiDeviceClient { } *)a1 async:(BOOL)a2;
- (void)removeDelegate:(id)a0;
- (void)_performBackgroundInit;
- (double)_wifiMeasurementErrorForInterval:(double)a0;
- (void)_setCurrentNetwork:(struct __WiFiNetwork { } *)a0;
- (void)currentWiFiNetworkPowerUsageWithCompletion:(id /* block */)a0;
- (void)_adjustWiFiAutoAssociationLocked;
- (void)showNetworkOptions;
- (void)_performPowerReading;
- (void)_setupWifiNotifications;
- (void)removeWiFiAutoAssociationClientToken:(id)a0;
- (void).cxx_destruct;
- (void)_createDynamicStore;
- (void)addWiFiAutoAssociationClientToken:(id)a0;
- (void)_updateInitialWiFiState;
- (void)_adjustWoWState;
- (void)_performCurrentNetworkBlock:(id /* block */)a0 withDevice:(struct __WiFiDeviceClient { } *)a1;
- (BOOL)hasWoWClient:(id)a0;
- (void)_updateIsWiFiAssociatedAsync:(BOOL)a0;
- (void)_performDeviceBlock:(id /* block */)a0;
- (void)removeWoWClient:(id)a0;
- (void)dealloc;
- (id)_ssidFromNetwork:(struct __WiFiNetwork { } *)a0;
- (void)_handlePotentialDeviceChange:(struct __WiFiDeviceClient { } *)a0;
- (void)addWoWClient:(id)a0;
- (void)_handleDevicePowerCallback;
- (void)_updateIsWiFiEnabled;
- (void)_handleDeviceAttachedCallback;
- (BOOL)hasWiFiAutoAssociationClientToken:(id)a0;
- (BOOL)_isPrimaryCellular;
- (void)_performCurrentNetworkBlock:(id /* block */)a0;
- (void)_adjustWiFiAutoAssociation;

@end

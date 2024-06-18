@class NSString, NSArray, NSObject, CURetrier;
@protocol OS_dispatch_queue;

@interface CUWiFiManager : NSObject {
    BOOL _activateCalled;
    BOOL _activated;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    BOOL _updating;
    NSArray *_trafficPeersCurrent;
    BOOL _wifiAutoJoinDisabled;
    BOOL _wifiCriticalSetup;
    BOOL _wifiCriticalState;
    struct __WiFiManagerClient { } *_wifiManager;
    BOOL _wifiManagerSetup;
    struct __WiFiDeviceClient { } *_wifiDevice;
    BOOL _wifiDeviceSetup;
    struct __WiFiNetwork { } *_wifiNetworkDisabled;
    CURetrier *_wifiRetrier;
    BOOL _wifiStateMonitorSetup;
    BOOL _infraDisabledChanged;
    BOOL _trafficPeerChanged;
    BOOL _wakeOnWirelessEnabledChanged;
}

@property (nonatomic) unsigned int controlFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) BOOL infraDisabled;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSArray *trafficPeers;
@property (nonatomic) BOOL wakeOnWirelessEnabled;
@property (readonly, nonatomic) unsigned int wifiFlags;
@property (readonly, nonatomic) int wifiState;
@property (copy, nonatomic) id /* block */ wifiStateChangedHandler;

- (void)performUpdate:(id /* block */)a0;
- (id)init;
- (void)_activateSafeInvokeBlock:(id /* block */)a0;
- (void)_updateWakeOnWireless;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)activate;
- (void)_invalidated;
- (void)_wifiEnsureStopped;
- (unsigned int)_wifiFlagsUncached;
- (int)_wifiStateUncached;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_interrupted;
- (void)dealloc;
- (void)_updateTrafficPeersWithService:(unsigned int)a0;
- (void)_updateTrafficPeers;
- (void)_updateInfraDisabled;
- (void)_wifiEnsureStarted;
- (void)_wifiAutoJoinNotification:(id)a0;
- (void)_update;
- (void)_wifiStateChanged;

@end
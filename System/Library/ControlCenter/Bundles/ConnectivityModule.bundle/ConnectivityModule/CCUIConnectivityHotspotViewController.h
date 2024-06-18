@class WFPersonalHotspotStateMonitor, NSString;

@interface CCUIConnectivityHotspotViewController : CCUIConnectivityButtonViewController <MCProfileConnectionObserver>

@property (retain) WFPersonalHotspotStateMonitor *phStateMonitor;
@property (getter=isAvailable) BOOL available;
@property (getter=isDiscoverable) BOOL discoverable;
@property unsigned int connections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupported;

- (void)_hostAPStateChanged;
- (id)init;
- (id)subtitleText;
- (BOOL)_toggleState;
- (void)_updateDiscoverability;
- (void)_setGlobalServiceState:(int)a0;
- (void)buttonTapped:(id)a0;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)startObservingStateChanges;
- (void)stopObservingStateChanges;
- (id)displayName;
- (BOOL)_isHotSpotRestricted;
- (void)_updateState;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (BOOL)_isCellularDataEnabled;
- (void)viewWillAppear:(BOOL)a0;
- (void)_networkTetheringStateChanged;

@end

@class RadiosPreferences, NSObject;
@protocol OS_dispatch_queue;

@interface CCUIConnectivityAirplaneViewController : CCUIConnectivityButtonViewController <RadiosPreferencesDelegate>

@property (retain, nonatomic) RadiosPreferences *airplaneModeController;
@property (nonatomic, getter=_isAirplaneModeEnabled, setter=_setAirplaneModeEnabled:) BOOL airplaneModeEnabled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (id)_debugDescriptionForState:(BOOL)a0;
- (BOOL)_toggleState;
- (void)airplaneModeChanged;
- (void)buttonTapped:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)startObservingStateChanges;
- (void)stopObservingStateChanges;
- (id)displayName;
- (void)_updateState;
- (void).cxx_destruct;
- (BOOL)_stateWithEffectiveOverrides;
- (BOOL)_canShowWhileLocked;
- (BOOL)_isStateOverridden;
- (void)_updateStateWithEnabled:(BOOL)a0;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;

@end

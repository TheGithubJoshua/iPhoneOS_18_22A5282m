@class BLSAssertion, NSString, BrightnessSystemClient, NSHashTable, SBAlwaysOnDefaults;
@protocol SBBacklightControllerContextProviding, BSInvalidatable;

@interface SBBacklightController : NSObject <BLSBacklightStateObserving, BLSHBacklightHostObserving> {
    id<SBBacklightControllerContextProviding> _contextProvider;
    NSHashTable *_observers;
    NSHashTable *_informers;
    long long _backlightState;
    id /* block */ _backlightCompletion;
    long long _lastReportedWillTransitionState;
    BrightnessSystemClient *_brightnessSystemClient;
    BLSAssertion *_disableAODAssertion;
    SBAlwaysOnDefaults *_alwaysOnDefaults;
}

@property (retain, nonatomic) id<BSInvalidatable> currentHIDUISensorModeAssertion;
@property (retain, nonatomic) id<BSInvalidatable> currentDisplayStateAssertion;
@property (readonly, nonatomic) BOOL isPendingScreenUnblankAfterCACommit;
@property (readonly, nonatomic) BOOL screenIsOn;
@property (readonly, nonatomic) BOOL screenIsDim;
@property (readonly, nonatomic) long long lastBacklightChangeSource;
@property (readonly, nonatomic, getter=isDigitizerDisabled) BOOL digitizerDisabled;
@property (readonly, nonatomic, getter=isTapToWakeEnabled) BOOL tapToWakeEnabled;
@property (readonly, nonatomic) BOOL tapToWakeRequiresHitTestSuppression;
@property (readonly, nonatomic) long long backlightState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNeeded:(BOOL)a0;
+ (id)sharedInstanceIfExists;

- (void)removeObserver:(id)a0;
- (void)_notifyObserversWillTransitionToBacklightState:(long long)a0 source:(long long)a1;
- (id)init;
- (float)_factorToPublishForBacklightState:(long long)a0;
- (void)_notifyObserversDidAnimateToFactor:(float)a0 source:(long long)a1;
- (id)initWithContextProvider:(id)a0;
- (void)_startFadeOutAnimationFromLockSource:(int)a0;
- (double)defaultLockScreenDimIntervalWhenNotificationsPresent;
- (void)_noteDigitizerDisabled:(BOOL)a0 tapToWakeEnabled:(BOOL)a1 disabledDigitizerMode:(long long)a2;
- (void)backlight:(id)a0 didCompleteUpdateToState:(long long)a1 forEvent:(id)a2;
- (void)preventIdleSleep;
- (void)allowIdleSleep;
- (void)_notifyObserversDidTransitionToBacklightState:(long long)a0 source:(long long)a1;
- (double)defaultLockScreenDimInterval;
- (long long)lastRequestedBacklightState;
- (void)_notifyObserversWillAnimateToFactor:(float)a0 source:(long long)a1;
- (BOOL)shouldTurnOnScreenForBacklightSource:(long long)a0;
- (void)_userInterfaceStyleChanged;
- (void)setBacklightState:(long long)a0 source:(long long)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)registerInformer:(id)a0;
- (void)_undimFromSource:(long long)a0;
- (void)completeStartup;
- (void)setBacklightState:(long long)a0 source:(long long)a1;
- (void)unregisterInformer:(id)a0;
- (void)_performBacklightChangeRequest:(id)a0 completion:(id /* block */)a1;
- (void)addObserver:(id)a0;
- (void)_updateHIDUISensorModeForBacklightState:(long long)a0 source:(long long)a1;
- (void)backlightHost:(id)a0 willTransitionToState:(long long)a1 forEvent:(id)a2;
- (void)preventIdleSleepForNumberOfSeconds:(float)a0;
- (void)turnOnScreenFullyWithBacklightSource:(long long)a0;
- (void)_performDeferredBacklightRampWorkWithInfo:(id)a0;

@end

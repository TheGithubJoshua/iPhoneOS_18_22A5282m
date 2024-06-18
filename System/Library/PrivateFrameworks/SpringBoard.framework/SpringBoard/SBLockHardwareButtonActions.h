@class SBApplication, NSString, SBSiriHardwareButtonInteraction, SBHardwareButtonService, SBWalletPreArmController, SBSleepWakeHardwareButtonInteraction, SOSManager, SBHardwareButtonGestureParameters, SBProximitySensorManager, SBAccessibilityHardwareButtonInteraction;
@protocol SBHardwareButtonGestureParametersProvider, SBHardwareButtonInteraction;

@interface SBLockHardwareButtonActions : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonGestureParametersObserver> {
    long long _homeButtonType;
    SBApplication *_lastLockButtonEventRecipient;
    SBProximitySensorManager *_proximitySensorManager;
    SBHardwareButtonService *_hardwareButtonService;
    SBWalletPreArmController *_walletPreArmController;
    SOSManager *_sosManager;
    SBHardwareButtonGestureParameters *_accessibilityGestureParameters;
    SBHardwareButtonGestureParameters *_siriGestureParameters;
    SBHardwareButtonGestureParameters *_proximitySensorGestureParameters;
    long long _sosTriggerMechanism;
}

@property (retain, nonatomic) SBSiriHardwareButtonInteraction *siriButtonInteraction;
@property (retain, nonatomic) SBAccessibilityHardwareButtonInteraction *accessibilityButtonInteraction;
@property (retain, nonatomic) SBSleepWakeHardwareButtonInteraction *sleepWakeButtonInteraction;
@property (retain, nonatomic) id<SBHardwareButtonInteraction, SBHardwareButtonGestureParametersProvider> proximitySensorButtonInteraction;
@property (readonly, nonatomic) BOOL isButtonDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)disallowsSinglePressForReason:(id *)a0;
- (BOOL)reverseFadeOutIfNeeded;
- (void)performLongPressCancelledActions;
- (void)performLongPressActions;
- (void)performSOSGestureEndedActions;
- (void)provider:(id)a0 didUpdateButtonGestureParameters:(id)a1;
- (void)performKeyboardShortcut;
- (void)performSOSActionsWithUUID:(id)a0 triggerMechanism:(long long)a1 completion:(id /* block */)a2;
- (BOOL)disallowsLongPressForReason:(id *)a0;
- (BOOL)_shouldWaitForDoublePress;
- (id)initWithHomeButtonType:(long long)a0 proximitySensorManager:(id)a1;
- (void)performForceResetSequenceBeganActions;
- (BOOL)_usesLockButtonForSiri;
- (void)performSOSGestureBeganActions;
- (void)performInitialButtonDownActions;
- (void)_performSOSDidTriggerActions;
- (BOOL)shouldBeginDoublePressGestureWhileObjectWithinProximity;
- (void)performTriplePressActions;
- (void)performFinalButtonUpActions;
- (void)_registeredLockButtonAppsDidChange:(id)a0;
- (void)performDoublePressActions;
- (BOOL)disallowsTriplePressForReason:(id *)a0;
- (void).cxx_destruct;
- (BOOL)disallowsDoublePressForReason:(id *)a0;
- (void)performTerminalLockLongPressActions;
- (void)performInitialButtonUpActions;
- (void)performSinglePressDidFailActions;
- (BOOL)_sendButtonUpToRegisteredApp;
- (void)performSecondButtonDownActions;
- (BOOL)_sendButtonDownToRegisteredApp;
- (void)performSinglePressAction;
- (BOOL)performButtonUpPreActions;
- (void)_showPowerDownTransientOverlayOnForceReset;
- (BOOL)_usesLockButtonForSecureIntent;
- (void)_sendButtonEventToApp:(id)a0 down:(BOOL)a1;
- (id)hardwareButtonGestureParameters;
- (BOOL)_isSOSActive;
- (id)_foregroundAppRegisteredForLockButtonEvents;

@end

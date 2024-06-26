@class SBTapToWakeController, SBLockScreenOrientationManager, SBPasscodeEntryTransientOverlayViewController, CSCoverSheetViewController, SBLockScreenDisabledAssertionManager, SBCoverSheetBiometricResourceObserver, UINotificationFeedbackGenerator, SBSRemoteAlertHandle, NSString, NSMutableSet, SBFMouseButtonDownGestureRecognizer, SBIdleTimerCoordinatorHelper, SBFAuthenticationAssertion, NSMutableDictionary, SBLockScreenBiometricAuthenticationCoordinator, SBPearlInterlockObserver, BSCompoundAssertion, SBLockScreenAutoUnlockAggregateRule, SBLiftToWakeManager, SBLockScreenUnlockRequest, SBLockElementViewProvider, SBFUserAuthenticationController;
@protocol SBNotificationDestination, SBHomeButtonShowPasscodeRecognizer, SBHomeButtonSuppressAfterUnlockRecognizer, SBLockScreenEnvironment, BSInvalidatable, SAInvalidatable, SBFLockOutStatusProvider;

@interface SBLockScreenManager : NSObject <BSDescriptionProviding, SBPasscodeEntryTransientOverlayViewControllerDelegate, SBFPrivateAuthenticationObserver, CSCoverSheetViewControllerDelegate, CSWallpaperColorProvider, SBLockScreenBiometricAuthenticationCoordinatorDelegate, SBHomeButtonShowPasscodeRecognizerDelegate, SBHomeButtonSuppressAfterUnlockRecognizerDelegate, PBUIWallpaperObserver, SBCoverSheetPresentationDelegate, SBUILockStateProvider, SBTapToWakeDelegate, SBSRemoteAlertHandleObserver, SBBacklightControllerObserver, SBIdleTimerProviding, SBIdleTimerCoordinating, SBUILockStateProviding> {
    SBLockScreenBiometricAuthenticationCoordinator *_biometricAuthenticationCoordinator;
    SBCoverSheetBiometricResourceObserver *_biometricResourceObserver;
    SBPearlInterlockObserver *_pearlInterlockObserver;
    id<SBHomeButtonShowPasscodeRecognizer> _homeButtonShowPasscodeRecognizer;
    id<SBHomeButtonSuppressAfterUnlockRecognizer> _homeButtonSuppressAfterUnlockRecognizer;
    BOOL _allowDisablePasscodeLockAssertion;
    BOOL _allowUILockUnlock;
    BOOL _isScreenOn;
    SBLockScreenUnlockRequest *_unlockRequest;
    BOOL _saveUnlockRequest;
    BOOL _uiHasBeenLockedOnce;
    SBPasscodeEntryTransientOverlayViewController *_passcodeEntryTransientOverlayViewController;
    BOOL _passcodeEntryTransientOverlayViewControllerPresentedAnimated;
    SBFAuthenticationAssertion *_sustainAuthenticationWhileUIUnlockedAssertion;
    SBLockScreenDisabledAssertionManager *_lockScreenDisabledAssertionManager;
    BOOL _isInLostMode;
    SBLockScreenAutoUnlockAggregateRule *_autoUnlockRuleAggregator;
    BOOL _shouldTransitionIrisWallpaperToStillWhenPlaybackFinishes;
    SBSRemoteAlertHandle *_wakeToRemoteAlertHandle;
    id /* block */ _alertLaunchFinish;
    SBFMouseButtonDownGestureRecognizer *_mouseButtonDownGesture;
    NSMutableDictionary *_mesaCoordinatorDisabledAssertions;
    NSMutableDictionary *_mesaWalletPreArmDisabledAssertions;
    NSMutableSet *_mesaWalletPreArmDisabledReasons;
    NSMutableDictionary *_mesaAutoUnlockingDisabledAssertions;
    NSMutableDictionary *_mesaUnlockingDisabledAssertions;
    SBIdleTimerCoordinatorHelper *_idleTimerCoordinatorHelper;
    UINotificationFeedbackGenerator *_authenticationFeedbackGenerator;
    id<BSInvalidatable> _bannerSuppressionAssertion;
    id<BSInvalidatable> _pipInterruptionAssertion;
    id<SAInvalidatable> _proudLockAssertion;
    SBLockElementViewProvider *_lockElement;
    NSString *_delayedLockReason;
    BOOL _ignoringDelayDismissalPending;
    BSCompoundAssertion *_lockScreenPresentationPendingAssertions;
}

@property (nonatomic, getter=isUIUnlocking) BOOL UIUnlocking;
@property (retain, nonatomic, getter=_lockOutController, setter=_setLockOutController:) id<SBFLockOutStatusProvider> lockOutController;
@property (retain, nonatomic, getter=_userAuthController, setter=_setUserAuthController:) SBFUserAuthenticationController *userAuthController;
@property (retain, nonatomic, getter=_liftToWakeManager, setter=_setLiftToWakeManager:) SBLiftToWakeManager *liftToWakeManager;
@property (retain, nonatomic, getter=_tapToWakeController, setter=_setTapToWakeController:) SBTapToWakeController *tapToWakeController;
@property (copy, nonatomic) id /* block */ unlockActionBlock;
@property (readonly, nonatomic) id<SBLockScreenEnvironment> lockScreenEnvironment;
@property (readonly, nonatomic) CSCoverSheetViewController *coverSheetViewController;
@property (readonly, nonatomic) id<SBNotificationDestination> notificationDestination;
@property (readonly, nonatomic) SBLockScreenOrientationManager *lockScreenOrientationManager;
@property (readonly) BOOL isUILocked;
@property (readonly) BOOL isWaitingToLockUI;
@property (readonly) BOOL shouldHandlePocketStateChanges;
@property (readonly) BOOL shouldTapToWake;
@property (readonly) BOOL shouldPlayLockSound;
@property (readonly) BOOL isLockScreenActive;
@property (readonly) BOOL isLockScreenVisible;
@property (readonly) BOOL hasWakeToContentForInactiveDisplay;
@property (readonly) BOOL isSupressingLockButton;
@property (readonly) BOOL bioAuthenticatedWhileMenuButtonDown;
@property (readonly, getter=isLockScreenPresentationPending) BOOL lockScreenPresentationPending;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNeeded:(BOOL)a0;
+ (id)sharedInstanceIfExists;

- (void)_setupModeChanged;
- (void)remoteAlertHandleDidActivate:(id)a0;
- (void)loadViewsIfNeeded;
- (void)coverSheetViewControllerDidDismissInlinePasscode:(id)a0;
- (BOOL)_isPasscodeVisible;
- (id)init;
- (void)_setIdleTimerCoordinator:(id)a0;
- (id)averageColorForCurrentWallpaper;
- (BOOL)coverSheetViewControllerHasBeenDismissedSinceKeybagLock:(id)a0;
- (id)idleTimerProvider:(id)a0 didProposeBehavior:(id)a1 forReason:(id)a2;
- (BOOL)handleTransitionRequest:(id)a0;
- (void)exitLostModeIfNecessaryFromRemoteRequest:(BOOL)a0;
- (BOOL)_shouldWakeToOtherContentForUnlockSource:(int)a0 wakingTheDisplay:(BOOL)a1 stopAfterWakeTo:(BOOL)a2;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_evaluateWallpaperMode;
- (void)attemptUnlockWithMesa;
- (void)_setHomeButtonSuppressAfterUnlockRecognizer:(id)a0;
- (void)passcodeEntryTransientOverlayViewControllerRequestsDismissal:(id)a0;
- (void)_prepareWallpaperForStaticMode;
- (void)setPasscodeVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)lockScreenViewControllerWillPresent;
- (BOOL)coverSheetViewControllerHasSecureApp:(id)a0;
- (BOOL)_lockUI;
- (void)backlightController:(id)a0 didUpdateDigitizerDisabled:(BOOL)a1 tapToWakeEnabled:(BOOL)a2;
- (void)_lockFeaturesForRemoteLock:(BOOL)a0;
- (void)_resetOrRestoreStateChanged:(id)a0;
- (BOOL)_shouldReactivateInCallWakingTheDisplay:(BOOL)a0;
- (void)homeButtonSuppressAfterUnlockRecognizerRequestsEndOfSuppression:(id)a0;
- (void)noteMenuButtonSinglePress;
- (void)wallpaperDidChangeForVariant:(long long)a0;
- (void)_setMesaCoordinatorDisabled:(BOOL)a0 forReason:(id)a1;
- (void)passcodeEntryTransientOverlayViewControllerRequestsEmergencyCall:(id)a0;
- (void)coverSheetViewControllerIrisPlayingDidFinish:(id)a0;
- (void)_authenticationStateChanged:(id)a0;
- (void)_activateLockScreenAnimated:(BOOL)a0 animationProvider:(id /* block */)a1 automatically:(BOOL)a2 inScreenOffMode:(BOOL)a3 dismissNotificationCenter:(BOOL)a4 completion:(id /* block */)a5;
- (id)coordinatorRequestedIdleTimerBehavior:(id)a0;
- (BOOL)passcodeEntryTransientOverlayViewControllerDidDetectFaceOcclusionsSinceScreenOn:(id)a0;
- (void)coverSheetViewController:(id)a0 startSpotlightInteractiveGestureTransactionForGesture:(id)a1;
- (void)_reallySetUILocked:(BOOL)a0;
- (BOOL)isPasscodeEntryTransientOverlayVisible;
- (void)coverSheetWindowedAccessoryViewControllerDidDismiss:(id)a0;
- (BOOL)coverSheetViewControllerShouldPreserveOrientationForExternalTransition:(id)a0;
- (void)tapToWakeControllerDidRecognizeWakeGesture:(id)a0;
- (BOOL)_attemptUnlockWithPasscode:(id)a0 finishUIUnlock:(BOOL)a1;
- (void)biometricAuthenticationCoordinator:(id)a0 handleIdentityMatchSuccess:(BOOL)a1;
- (void)_updateBloom;
- (void)setBiometricAutoUnlockingDisabled:(BOOL)a0 forReason:(id)a1;
- (void)_maybeLaunchSetupForcingCheckIfNotBricked:(BOOL)a0;
- (void)coverSheetViewController:(id)a0 setMesaUnlockingDisabled:(BOOL)a1 forReason:(id)a2;
- (BOOL)passcodeEntryTransientOverlayViewControllerDidDetectBottomFaceOcclusionsSinceScreenOn:(id)a0;
- (BOOL)_requiresEmptyLockElementForBacklightState:(long long)a0;
- (BOOL)_attemptUnlockWithPasscode:(id)a0 mesa:(BOOL)a1 finishUIUnlock:(BOOL)a2;
- (void)homeButtonShowPasscodeRecognizerDidFailToRecognize:(id)a0;
- (void)_wakeScreenForMouseButtonDown:(id)a0;
- (void)backlightController:(id)a0 didTransitionToBacklightState:(long long)a1 source:(long long)a2;
- (void)_cleanupSystemApertureLockElementIgnoringDelays:(BOOL)a0 reason:(id)a1;
- (id)succinctDescription;
- (id)_statusBarLayoutManager;
- (void)_setSystemApertureProudLockElementVisible:(BOOL)a0 withReason:(id)a1 afterDelay:(double)a2;
- (void)_lockScreenDimmed:(id)a0;
- (BOOL)coverSheetViewControllerTraitsArbiterOrientationActuationEnabled:(id)a0;
- (void)_setHomeButtonShowPasscodeRecognizer:(id)a0;
- (BOOL)biometricAuthenticationCoordinator:(id)a0 requestsUnlockWithIntent:(int)a1;
- (void)extendedKeybagLockStateChanged:(BOOL)a0;
- (void)activateLostModeForRemoteLock:(BOOL)a0;
- (void)lockUIFromSource:(int)a0 withOptions:(id)a1 completion:(id /* block */)a2;
- (void)_emulateInterstitialPasscodePresentationForAccessibility:(BOOL)a0;
- (void)lockScreenViewControllerDidPresent;
- (void)_noteStartupTransitionWillBegin;
- (void)coverSheetViewControllerShouldDismissContextMenu:(id)a0;
- (void)_postLockCompletedNotification:(BOOL)a0;
- (BOOL)unlockWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)_handleBacklightDidTurnOff:(id)a0;
- (BOOL)_canHandleTransitionRequest:(id)a0;
- (id)biometricAuthenticationCoordinator;
- (BOOL)_shouldBeShowingLockElement;
- (id)acquireLockScreenPresentationPendingAssertionWithReason:(id)a0;
- (void)addLockScreenDisableAssertion:(id)a0;
- (void)_handleBacklightLevelWillChange:(id)a0;
- (BOOL)_canAttemptRealUIUnlockIgnoringBacklightNonsenseWithReason:(out id *)a0;
- (void)coverSheetPresentationManager:(id)a0 unlockWithRequest:(id)a1 completion:(id /* block */)a2;
- (void)homeButtonShowPasscodeRecognizerRequestsPasscodeUIToBeShown:(id)a0;
- (BOOL)unlockUIFromSource:(int)a0 withOptions:(id)a1;
- (void).cxx_destruct;
- (void)passcodeEntryTransientOverlayViewControllerDidDisappear:(id)a0;
- (BOOL)biometricAuthenticationCoordinatorShouldWaitToInvalidateMatchingAssertion:(id)a0;
- (void)_setWalletPreArmDisabled:(BOOL)a0 forReason:(id)a1;
- (double)contrastForCurrentWallpaper;
- (id)succinctDescriptionBuilder;
- (void)enableLostModePlugin;
- (BOOL)handlesHomeButtonSinglePresses;
- (BOOL)_attemptUnlockWithPasscode:(id)a0 mesa:(BOOL)a1 finishUIUnlock:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)_shouldLockAfterEndingFaceTimeCall;
- (void)_setUILocked:(BOOL)a0;
- (BOOL)_shouldLockAfterEndingTelephonyCall;
- (void)_deviceBlockedChanged:(id)a0;
- (void)_disconnectActiveCallIfNeededFromSource:(int)a0;
- (void)lockUIFromSource:(int)a0 withOptions:(id)a1;
- (BOOL)shouldLockUIAfterEndingCall;
- (void)tapToWakeControllerDidRecognizePencilWakeGesture:(id)a0;
- (id)_hostingWindowScene;
- (void)_cleanupSystemApertureLockElementIfNecessaryWithReason:(id)a0;
- (BOOL)hasUIEverBeenLocked;
- (void)coverSheetViewController:(id)a0 requestsTouchIDDisabled:(BOOL)a1 forReason:(id)a2;
- (void)_wakeScreenForTapToWake;
- (void)coverSheetViewControllerWillPresentInlinePasscode:(id)a0;
- (BOOL)_specifiesTransientPresentationForMode:(long long)a0;
- (void)_runUnlockActionBlock:(BOOL)a0;
- (void)_setSystemApertureProudLockElementVisible:(BOOL)a0 withReason:(id)a1;
- (BOOL)_unlockWithRequest:(id)a0 cancelPendingRequests:(BOOL)a1 completion:(id /* block */)a2;
- (void)lockScreenViewControllerDidDismiss;
- (BOOL)handleKeyHIDEvent:(struct __IOHIDEvent { } *)a0;
- (id)passcodeEntryTransientOverlayViewControllerStatusText;
- (void)_clearAuthenticationLockAssertion;
- (void)_sendUILockStateChangedNotification;
- (void)activationChanged:(id)a0;
- (void)remoteLock:(BOOL)a0;
- (void)_showSystemApertureProudLockElementIfSupportedWithReason:(id)a0;
- (BOOL)biometricAuthenticationCoordinator:(id)a0 requestsAuthenticationFeedback:(id)a1;
- (BOOL)_shouldEmulateInterstitialPresentationForAccessibility:(BOOL)a0;
- (BOOL)_shouldUnlockUIOnKeyDownEvent;
- (void)requestUserAttentionScreenWakeFromSource:(int)a0 reason:(id)a1;
- (void)coverSheetWindowedAccessoryViewControllerDidPresent:(id)a0;
- (void)_setSystemApertureProudLockElementVisible:(BOOL)a0 backlightState:(long long)a1 withReason:(id)a2;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)_shouldDisconnectCallWhenLockingForActiveAudioRoute;
- (void)_relockUIForButtonlikeSource:(int)a0;
- (BOOL)isInLostMode;
- (id)averageColorForCurrentWallpaperInScreenRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startUIUnlockFromSource:(int)a0 withOptions:(id)a1;
- (BOOL)coverSheetViewControllerIsPasscodeVisible:(id)a0;
- (BOOL)_shouldBeShowingLockElementForBacklightState:(long long)a0;
- (BOOL)isLockScreenDisabledForAssertion;
- (void)_activeCallStateChanged;
- (BOOL)_shouldBloomForAnyReason;
- (void)_handleAuthenticationFeedback:(id)a0;
- (void)_noteStartupTransitionDidBegin;
- (BOOL)_shouldBeInSetupMode;
- (void)_evaluatePreArmDisabledAssertions;
- (void)lockScreenViewControllerWillDismiss;
- (void)_setMesaUnlockingDisabled:(BOOL)a0 forReason:(id)a1;
- (void)attemptUnlockWithPasscode:(id)a0 finishUIUnlock:(BOOL)a1 completion:(id /* block */)a2;
- (id)passcodeEntryTransientOverlayViewControllerStatusSubtitleText;
- (void)_setMesaAutoUnlockingDisabled:(BOOL)a0 forReason:(id)a1;
- (void)_createAuthenticationAssertion;
- (void)_prepareWallpaperForInteractiveMode;
- (BOOL)coverSheetViewControllerIsShowingSecureApp:(id)a0;
- (void)noteBacklightWillTransitionToInactive;
- (BOOL)_shouldWakeToInCallForUnlockSource:(int)a0 wakingTheDisplay:(BOOL)a1;
- (void)noteMenuButtonDoublePress;
- (id)_newLockScreenEnvironment;
- (BOOL)_setPasscodeVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)updateSpringBoardStatusBarForLockScreenTeardown;
- (BOOL)_isUnlockDisabled;
- (id)newLegibilitySettingsProvider;
- (BOOL)passcodeEntryTransientOverlayViewController:(id)a0 authenticatePasscode:(id)a1;
- (void)backlightController:(id)a0 willTransitionToBacklightState:(long long)a1 source:(long long)a2;
- (void)_showSystemApertureProudLockElementForBacklightState:(long long)a0 WithReason:(id)a1;
- (void)coverSheetViewControllerHandleUnlockAttemptSucceeded:(id)a0;
- (void)coverSheetViewController:(id)a0 unlockWithRequest:(id)a1 completion:(id /* block */)a2;
- (BOOL)_finishUIUnlockFromSource:(int)a0 withOptions:(id)a1;
- (void)attemptUnlockWithPasscode:(id)a0;
- (void)removeLockScreenDisableAssertion:(id)a0;
- (void)lockScreenViewControllerRequestsUnlock;

@end

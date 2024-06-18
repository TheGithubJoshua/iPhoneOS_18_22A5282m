@class SBFLegacyWallpaperWakeAnimator, NSString, UIVisualEffectView, SBFLockScreenActionContext;
@protocol SBBiometricUnlockBehaviorDelegate, SBIdleTimerCoordinating;

@interface SBLockScreenViewControllerBase : UIViewController <SBApplicationHosting, SBAutoUnlockRule, SBBiometricUnlockBehavior, SBButtonEventsHandler, SBCoverSheetSlidingViewControllerContentViewController, SBIdleTimerProviding, SBLockScreenBacklightControlling, SBLockScreenBehaviorSuppressing, SBLockScreenBlockedStateObserving, SBLockScreenButtonObserving, SBLockScreenCallHandling, SBLockScreenContentStateProviding, SBLockScreenCustomActionStoring, SBLockScreenIdleTimerControlling, SBLockScreenLockingAndUnlocking, SBLockScreenMediaControlsPresenting, SBLockScreenPasscodeViewPresenting, SBLockScreenPluginPresenting, SBLockScreenProximityBehaviorProviding, SBLockScreenStatusBarTransitioning, SBLockScreenSpotlightPresenting> {
    SBFLockScreenActionContext *_customLockScreenActionContext;
}

@property (weak, nonatomic) UIVisualEffectView *wakeEffectView;
@property (readonly, nonatomic) SBFLegacyWallpaperWakeAnimator *legacyWallpaperWakeAnimator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBBiometricUnlockBehaviorDelegate> biometricUnlockBehaviorDelegate;
@property (readonly, nonatomic) BOOL contentOccludesBackground;
@property (readonly, nonatomic) long long backlightLuminance;
@property (nonatomic) double backlightLevel;
@property (retain, nonatomic, getter=_customLockScreenActionContext) SBFLockScreenActionContext *customLockScreenActionContext;
@property (weak, nonatomic) id<SBIdleTimerCoordinating> idleTimerCoordinator;
@property (nonatomic, getter=isAuthenticated) BOOL authenticated;
@property (nonatomic, getter=isShowingMediaControls) BOOL showingMediaControls;
@property (readonly, nonatomic) BOOL expectsFaceContact;
@property (readonly, nonatomic) BOOL shouldShowLockStatusBarTime;

- (BOOL)shouldAutoUnlockForSource:(int)a0;
- (BOOL)canHostAnApp;
- (void)noteMenuButtonDown;
- (void)finishUIUnlockFromSource:(int)a0;
- (void)setInScreenOffMode:(BOOL)a0 preservingCoverSheetPresentationState:(BOOL)a1;
- (BOOL)handleHeadsetButtonPress:(BOOL)a0;
- (BOOL)shouldDisableALS;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)noteMenuButtonUp;
- (BOOL)handleVoiceCommandButtonPress;
- (void)handleBiometricEvent:(unsigned long long)a0;
- (void)disableLockScreenPluginWithContext:(id)a0;
- (id)hostedAppSceneHandle;
- (BOOL)handleHomeButtonLongPress;
- (BOOL)handleHomeButtonPress;
- (BOOL)shouldPresentOrDismissCoverSheetSpotlight;
- (BOOL)handleHomeButtonDoublePress;
- (void)emergencyDialerExitedWithError:(id)a0;
- (BOOL)handleLockButtonPress;
- (BOOL)handleVolumeUpButtonPress;
- (void)prepareForUILock;
- (void)updateScaleViewWithScale:(double)a0 withDuration:(double)a1;
- (BOOL)handleVolumeDownButtonPress;
- (id)coordinatorRequestedIdleTimerBehavior:(id)a0;
- (BOOL)isMainPageVisible;
- (id)createHomeButtonShowPasscodeRecognizerForHomeButtonPress;
- (BOOL)isInScreenOffMode;
- (id)succinctDescription;
- (void)exitEmergencyDialerAnimated:(BOOL)a0;
- (void)startLockScreenFadeInAnimationForSource:(int)a0;
- (BOOL)suppressesControlCenter;
- (void)viewDidLoad;
- (BOOL)shouldUnlockUIOnKeyDownEvent;
- (BOOL)suppressesScreenshots;
- (void)updateStatusBarForLockScreenComeback;
- (id)createHomeButtonSuppressAfterUnlockRecognizerForUnlockSource:(int)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)isMakingEmergencyCall;
- (void)setPasscodeLockVisible:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (BOOL)isUnlockDisabled;
- (void)prepareForUIUnlock;
- (void)enableLockScreenPluginWithContext:(id)a0;
- (BOOL)canBeDeactivatedForUIUnlockFromSource:(int)a0;
- (void)jiggleLockIcon;
- (void)noteDeviceBlockedStatusUpdated;
- (id)hostedAppSceneHandles;
- (void)setPasscodeLockVisible:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)launchEmergencyDialerAnimated:(BOOL)a0;
- (BOOL)suppressesBanners;
- (void)noteResetRestoreStateUpdated;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)willUIUnlockFromSource:(int)a0;
- (void)launchEmergencyDialer;
- (BOOL)isPasscodeLockVisible;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)a0;
- (void)setInScreenOffMode:(BOOL)a0;
- (BOOL)isHostingAnApp;
- (void)conformsToSBApplicationHosting;
- (void)presentOrDismissCoverSheetSpotlightAnimated:(BOOL)a0;
- (void)updateStatusBarForLockScreenTeardown;
- (void)setInScreenOffMode:(BOOL)a0 forAutoUnlock:(BOOL)a1 fromUnlockSource:(int)a2;
- (void)conformsToSBCoverSheetSlidingViewControllerContentViewController;

@end
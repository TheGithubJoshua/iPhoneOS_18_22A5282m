@class NSArray, NSString, _UIBackdropView, SBVoiceControlViewController;
@protocol SBVoiceControlTransientOverlayViewControllerDelegate;

@interface SBVoiceControlTransientOverlayViewController : SBTransientOverlayViewController <SBVoiceControlViewControllerDelegate, CSExternalBehaviorProviding> {
    _UIBackdropView *_backdropView;
    SBVoiceControlViewController *_contentViewController;
}

@property (copy, nonatomic) NSArray *nextRecognitionAudioInputPaths;
@property (nonatomic) BOOL shouldAllowSensitiveActions;
@property (nonatomic) BOOL shouldDisableHandlerActions;
@property (nonatomic) BOOL shouldDisableVoiceControlForBluetoothRequests;
@property (nonatomic, getter=isVoiceControlLoggingEnabled) BOOL voiceControlLoggingEnabled;
@property (weak, nonatomic) id<SBVoiceControlTransientOverlayViewControllerDelegate> voiceControlDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long scrollingStrategy;
@property (readonly, nonatomic) long long notificationBehavior;
@property (readonly, nonatomic) unsigned long long restrictedCapabilities;
@property (readonly, nonatomic) long long proximityDetectionMode;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, nonatomic) long long participantState;

- (long long)idleWarnMode;
- (id)initWithSource:(id)a0;
- (void)setContainerOrientation:(long long)a0;
- (void)viewDidLayoutSubviews;
- (BOOL)becomeFirstResponder;
- (BOOL)handleHomeButtonPress;
- (long long)preferredStatusBarStyle;
- (void)conformsToCSBehaviorProviding;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (long long)preferredWhitePointAdaptivityStyle;
- (int)_preferredStatusBarVisibility;
- (void)viewDidLoad;
- (BOOL)canResignFirstResponder;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)shouldAutorotate;
- (long long)preferredInterfaceOrientationForPresentation;
- (void).cxx_destruct;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (BOOL)resignFirstResponder;
- (void)conformsToCSExternalBehaviorProviding;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)idleTimerMode;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)canBecomeFirstResponder;
- (long long)idleTimerDuration;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (BOOL)prefersEmbeddedDisplayPresentation;
- (BOOL)shouldDisableOrientationUpdates;
- (void)beginIgnoringAppearanceUpdates;
- (void)endIgnoringAppearanceUpdates;
- (void)handleGestureDismissal;
- (void)handleHeadsetButtonUpFromButtonDownSource:(BOOL)a0;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (long long)preferredLockedGestureDismissalStyle;
- (long long)preferredUnlockedGestureDismissalStyle;
- (BOOL)prefersProximityDetectionEnabled;
- (void)resetSessionWithSource:(id)a0;
- (void)voiceControlViewControllerPrefersProximityDetectionEnabledDidChange:(id)a0;
- (void)voiceControlViewControllerRequestsDismissal:(id)a0;

@end

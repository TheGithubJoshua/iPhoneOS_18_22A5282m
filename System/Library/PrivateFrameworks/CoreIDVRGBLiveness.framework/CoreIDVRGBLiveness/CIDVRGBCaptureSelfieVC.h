@class UIVisualEffectView, CIDVRGBCaptureTimer, UIBarButtonItem, UILabel, NSMutableArray, NSError, NSString, CIDVRGBCaptureUIConfig, CIDVRGBCameraShutterView, UIActivityIndicatorView, CIDVRGBCoachingView, NSTimer, NSArray, UIButton, CIDVRGBAudioSession, UIView, CIDVRGBCameraPreview, NSLayoutConstraint, UIImageView, UIScrollView, UIColor;
@protocol CIDVRGBCaptureSelfieController;

@interface CIDVRGBCaptureSelfieVC : UIViewController <CIDVRGBCaptureSelfieControllerDelegate> {
    UIBarButtonItem *_flashButton;
    UIView *_topContainer;
    UIView *_nagContainer;
    UILabel *_nagPrompt;
    CIDVRGBCameraPreview *_cameraFeed;
    UIVisualEffectView *_blurView;
    CIDVRGBCoachingView *_coachingView;
    UIImageView *_selfieView;
    CIDVRGBAudioSession *_audioSession;
    UIView *_bottomContainer;
    UIView *_coachingPromptContainer;
    UIView *_livenessButtonContainer;
    UIScrollView *_coachingPromptScrollView;
    UILabel *_coachingPrompt;
    UILabel *_axOptionsPrompt;
    UIButton *_livenessPrimaryButton;
    UIButton *_livenessSecondaryButton;
    UIActivityIndicatorView *_livenessPrimaryButtonActivityIndicator;
    UILabel *_shutterPrompt;
    UIButton *_retakeButton;
    UIButton *_continueButton;
    UIButton *_expandButton;
    CIDVRGBCameraShutterView *_shutterButton;
    NSLayoutConstraint *_coachingViewCenterYConstraintLarge;
    NSLayoutConstraint *_coachingViewCenterYConstraintSmall;
    NSLayoutConstraint *_coachingViewWidthConstraintLarge;
    NSLayoutConstraint *_coachingViewWidthConstraintSmall;
    NSLayoutConstraint *_topContainerLivenessHeightConstraint;
    NSLayoutConstraint *_bottomContainerSelfieHeightConstraint;
    NSLayoutConstraint *_coachingPromptBottomConstraint;
    NSLayoutConstraint *_axOptionsPromptBottomConstraint;
    NSArray *_cameraPreviewConstraintsDefault;
    NSArray *_cameraPreviewConstraintsExpanded;
    NSLayoutConstraint *_coachingPromptTopConstraint;
    id<CIDVRGBCaptureSelfieController> _controller;
    CIDVRGBCaptureTimer *_skipButtonTimer;
    CIDVRGBCaptureTimer *_skipAlertTimer;
    NSTimer *_errorReminderTimer;
    NSTimer *_gestureTutorialDelayTimer;
    NSTimer *_gestureDetectedTimer;
    NSString *_primaryButtonTitle;
    long long _maxRetakeCount;
    long long _reminderCount;
    long long _alertCount;
    long long _consecutiveInvalidFrames;
    long long _flashMode;
    NSError *_latestImageQualityError;
    NSMutableArray *_blocksAwaitingImageQualityVerifications;
    BOOL _shouldIgnoreErrors;
    BOOL _hasPresentedFirstGesture;
    BOOL _hasPresentedLastGesture;
    BOOL _modelsAreRunning;
    BOOL _didSkipLastGesture;
    BOOL _originalIdleTimerDisabled;
    UIColor *_originalNavBarColor;
    BOOL _haveOverriddenWindowUserInterfaceStyle;
    long long _originalWindowUserInterfaceStyle;
    BOOL _cameraPreviewExpanded;
    BOOL _accessibilityOptionsEnabled;
    BOOL _shouldShowSkipGestureAfterInitialTimer;
    BOOL _hasShownGestureReminder;
    BOOL _hasShownGestureNotDetectedAlert;
    BOOL _hasShownErrorAlert;
    BOOL _hasShownInvalidFramesAlert;
    BOOL _hasCancelledFromStitch;
    BOOL _hasPausedGestureTutorial;
    BOOL _canResumeGestureTutorial;
    BOOL _hasShownAXOptions;
    long long _currentGesture;
    long long _alertCause;
    double _alertStartTime;
    double _currentGestureDetectionStartTime;
    id /* block */ _livenessPrimaryBlock;
    id /* block */ _livenessSecondaryBlock;
}

@property (nonatomic) CIDVRGBCaptureUIConfig *config;

- (void)setController:(id)a0;
- (void)loadView;
- (long long)preferredStatusBarStyle;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_setupBlurView;
- (void)_setupController;
- (void)prepareForDismissal;
- (void)_continuePressed:(id)a0;
- (void)_resumeTutorial;
- (void)captureSelfieDidEncounterError:(id)a0;
- (void)_retakePressed:(id)a0;
- (void)_animateGestureReminderWithCompletion:(id /* block */)a0;
- (void)_animateTransitionToGesture:(long long)a0 completion:(id /* block */)a1;
- (void)_animateTransitionToPhotoCaptureWithCompletion:(id /* block */)a0;
- (void)_cancelCaptureSession:(id)a0;
- (void)_cancelErrorReminderTimer;
- (void)_cancelFromInvalidFramesWithCode:(long long)a0;
- (void)_cancelFromStitchDetection:(id)a0;
- (void)_cancelGestureTutorialDelayTimer;
- (void)_cancelSkipButtonTimers;
- (long long)_coachingViewStyleForGesture:(long long)a0;
- (void)_completeCaptureSession;
- (void)_dispatchSkipButtonTimers;
- (void)_enableAccessibilityOptions;
- (void)_enableSkipButtonWithReminder;
- (void)_hideBlurView:(id /* block */)a0;
- (void)_hideCoachingView;
- (void)_incrementInvalidFrameCounterWithCode:(long long)a0;
- (void)_livenessPrimaryButtonPressed:(id)a0;
- (void)_livenessSecondaryButtonPressed:(id)a0;
- (void)_overrideWindowUserInterfaceStyle;
- (void)_pauseSkipButtonTimers;
- (void)_pauseTutorial;
- (void)_performBlocksAwaitingImageQualityVerification;
- (void)_performSelfieCapture;
- (void)_presentCoachingForGesture:(long long)a0 completion:(id /* block */)a1;
- (void)_presentCoachingSuccess:(id /* block */)a0;
- (void)_presentErrorGenericAlert:(id)a0;
- (void)_presentErrorLowDiskSpaceAlert;
- (void)_presentForcedSkipGestureAlert;
- (void)_presentLastGestureDetectedScreen;
- (void)_presentSelfieErrorAlert:(id)a0;
- (void)_presentSkipGestureAlert;
- (void)_repeatCurrentGestureCoaching;
- (void)_resetInvalidFrameCounter;
- (long long)_restartCauseFromErrorCode:(long long)a0;
- (void)_restartSelfieCapture;
- (void)_restoreOriginalWindowUserInterfaceStyle;
- (void)_sendAlertAnalyticsEvent;
- (void)_sendGestureDetectedAnalyticsEvent;
- (void)_setCoachingPromptText:(id)a0;
- (void)_setCoachingPromptTextForGesture:(long long)a0;
- (void)_setErrorReminderTimer;
- (void)_setUseFlash:(BOOL)a0;
- (void)_setupBottomContainer;
- (void)_setupCameraFeed;
- (void)_setupCoachingPrompt;
- (void)_setupCoachingPromptContainer;
- (void)_setupCoachingPromptScrollView;
- (void)_setupCoachingView;
- (void)_setupContinueButton;
- (void)_setupExpandButton;
- (void)_setupFlashButton;
- (void)_setupLivenessButtonContainer;
- (void)_setupLivenessPrimaryButton;
- (void)_setupLivenessSecondaryButton;
- (void)_setupNag;
- (void)_setupRetakeButton;
- (void)_setupSelfieView;
- (void)_setupShutterButton;
- (void)_setupShutterPrompt;
- (void)_setupTopContainer;
- (BOOL)_shouldRestart;
- (void)_showAXOptions;
- (void)_showBlurView:(id /* block */)a0;
- (void)_showNextGesture:(long long)a0;
- (void)_showPhotoCapture;
- (void)_showSelfieCapturedOptions;
- (void)_skipGesture;
- (void)_startCaptureSession;
- (void)_startShowingLivenessActivity;
- (void)_stopShowingLivenessActivity;
- (void)_toggleCameraPreviewExpansion:(id)a0;
- (void)_toggleFlash:(id)a0;
- (void)_updateViewsForWatchMode;
- (void)_useLargeCoachingView;
- (void)_useSmallCoachingView;
- (id)boldFontWithFont:(id)a0;
- (void)captureSelfieDidDetectIncorrectGesture;
- (void)captureSelfieDidFinishGestureMonitoring;
- (void)captureSelfieDidObtainImageQualityError:(id)a0;
- (void)captureSelfieDidObtainPicture:(id)a0 error:(id)a1;
- (void)captureSelfieWillMonitorGesture:(long long)a0;
- (void)performBlockAfterImageQualityVerifications:(id /* block */)a0;

@end
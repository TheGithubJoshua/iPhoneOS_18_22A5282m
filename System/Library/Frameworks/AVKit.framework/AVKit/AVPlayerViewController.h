@class UITapGestureRecognizer, AVCenterTapGestureRecognizer, NSDictionary, AVRoutingConfiguration, AVPlayerViewControllerContentView, UIPanGestureRecognizer, AVPlayerController, NSValue, AVPlayerViewControllerCustomControlsView, AVMobileControlsViewController, AVTransitionController, UIPinchGestureRecognizer, __AVPlayerLayerView, UIViewController, AVObservationController, AVBehaviorStorage, UIWindow, AVVideoFrameVisualAnalyzer, AVScrubbingGestureController, AVMobileFullscreenController, AVNowPlayingInfoController, AVPlayerView, UIView, AVSecondScreenContentViewConnection, NSArray, AVPresentationContext, AVVisualAnalysisView, NSMutableDictionary, AVPlayer, AVContentOverlayView, NSString, AVPictureInPictureController, VKCImageAnalysis, AVPlaybackSpeed, UIPopoverPresentationController, AVFullScreenViewController, NSTimer, AVPlaybackControlsController, UIHoverGestureRecognizer, AVPlaybackRateCollection, AVPlayerControllerVolumeAnimator, AVPlaybackSpeedCollection;
@protocol AVVolumeController, AVPlayerViewControllerContentTransitioning_NewsOnly, AVPlayerViewControllerDelegate;

@interface AVPlayerViewController : UIViewController <AVPictureInPictureControllerDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, AVFullScreenViewControllerDelegate, AVTransitionControllerDelegate, AVPictureInPictureContentSource, AVContentOverlayViewDelegate, AVPlaybackSpeedCollectionDelegate, AVScrollingObserverDelegate, AVPlayerViewControllerContentViewDelegate, AVScrubbingGestureControllerDelegate, AVInterstitialControllerDelegateManager, AVPlayerControllerDelegate, AVVideoFrameVisualAnalyzerDelegate, AVVisualAnalysisViewDelegate, AVMobileChromelessControlsViewControllerDelegate, AVPlaybackControlsViewVisibilityDelegate> {
    BOOL _playerShouldAutoplay;
    BOOL _showsPlaybackControls;
    BOOL _actuallyRequiresLinearPlayback;
    long long _videoGravity;
    BOOL _allowsPictureInPicturePlayback;
    BOOL _hasClientSetVideoGravity;
    BOOL _canShowPictureInPictureButton;
    NSDictionary *_pixelBufferAttributes;
    BOOL _canDisplayContentInDetachedWindow;
    BOOL _canPausePlaybackWhenExitingPictureInPicture;
    BOOL _disallowsAutomaticPictureInPictureStart;
    BOOL _canStartPictureInPictureAutomaticallyWhenEnteringBackground;
    BOOL _pipStartingOrActive;
    BOOL _fullscreenTransitionInProgress;
    BOOL _presentationTransitionInProgress;
    BOOL _playbackControlsIncludeTransportControls;
    BOOL _playbackControlsIncludeDisplayModeControls;
    BOOL _playbackControlsIncludeVolumeControls;
    BOOL _playbackBeganAfterPlayerControllerBecameReadyToPlay;
    AVRoutingConfiguration *_routingConfiguration;
    VKCImageAnalysis *_currentInternalImageAnalysis;
    AVMobileFullscreenController *_fullscreenController;
    AVSecondScreenContentViewConnection *_secondScreenConnection;
    AVNowPlayingInfoController *_nowPlayingInfoController;
    AVPictureInPictureController *_pictureInPictureController;
    UIPopoverPresentationController *_mediaSelectionPopoverPresentationController;
    AVTransitionController *_transitionController;
    AVPlaybackControlsController *_playbackControlsController;
    id<AVVolumeController> _volumeController;
    AVVideoFrameVisualAnalyzer *_videoFrameVisualAnalyzer;
    AVScrubbingGestureController *_scrubbingGestureController;
    AVPlayerView *_playerViewControllerView;
    AVPlayerViewControllerContentView *_playerViewControllerContentView;
    AVMobileControlsViewController *_controlsViewController;
    AVPlayerViewControllerCustomControlsView *_customControlsView;
    UIView *_contentOverlayView;
    NSValue *_overrideLayoutMarginsWhenEmbeddedInline;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _overrideTransformForProminentPlayButton;
    BOOL _canToggleVideoGravityWhenEmbeddedInline;
    BOOL _playbackControlsShouldControlSystemVolume;
    NSTimer *_scrubGestureMomentumTimer;
    BOOL _scrubGestureIsActive;
    float _defaultLinearPlaybackRate;
    BOOL _currentPrefersStatusBarHidden;
    AVCenterTapGestureRecognizer *_tapThroughGestureRecognizer;
    UITapGestureRecognizer *_singleTapGestureRecognizer;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    UITapGestureRecognizer *_doubleTapTwoFingersGestureRecognizer;
    UIPinchGestureRecognizer *_videoGravityPinchGestureRecognizer;
    BOOL _controlsViewControllerHasBeenSetUp;
    BOOL _playerLayerViewObservationsHasBeenSetup;
    long long _playerViewControllerAnimated;
}

@property (class, nonatomic) BOOL usesSecondGenerationControls;

@property (readonly, nonatomic) UIView *iAdPrerollView;
@property (nonatomic) BOOL showsExitFullScreenButton;
@property (readonly, nonatomic, getter=isPictureInPicturePossible) BOOL pictureInPicturePossible;
@property (nonatomic) BOOL playbackControlsShouldControlSystemVolume;
@property (readonly, nonatomic, getter=isPictureInPictureSuspended) BOOL pictureInPictureSuspended;
@property (readonly, nonatomic) BOOL pictureInPictureWasStartedWhenEnteringBackground;
@property (nonatomic, setter=_setInlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused:) BOOL _inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } overrideTransformForProminentPlayButton;
@property (nonatomic) BOOL canToggleVideoGravityWhenEmbeddedInline;
@property (readonly, nonatomic) AVMobileControlsViewController *controlsViewController;
@property (readonly, nonatomic) AVPlaybackControlsController *playbackControlsController;
@property (readonly, nonatomic) AVTransitionController *_transitionController;
@property (nonatomic) BOOL canShowPictureInPictureButton;
@property (nonatomic) BOOL canStartPictureInPictureAutomaticallyWhenEnteringBackground;
@property (readonly, nonatomic) BOOL hasCustomPlaybackControls;
@property (readonly, nonatomic) BOOL canControlPlayback;
@property (readonly, nonatomic, getter=isAudioOnlyContent) BOOL audioOnlyContent;
@property (nonatomic) BOOL canPausePlaybackWhenExitingPictureInPicture;
@property (nonatomic) BOOL actuallyRequiresLinearPlayback;
@property (readonly, weak, nonatomic) UIViewController *fullScreenViewController;
@property (readonly, nonatomic) AVPlayerViewControllerContentView *contentView;
@property (nonatomic) BOOL canDisplayContentInDetachedWindow;
@property (readonly, nonatomic, getter=isPresentingDetachedFullScreen) BOOL presentingDetachedFullScreen;
@property (readonly, nonatomic, getter=isPresentingFullWindow) BOOL presentingFullWindow;
@property (readonly, nonatomic, getter=isPresentingFullScreenFromInline) BOOL presentingFullScreenFromInline;
@property (readonly, nonatomic, getter=isPresentedFullScreen) BOOL presentedFullScreen;
@property (readonly, nonatomic) BOOL hasActiveTransition;
@property (readonly, nonatomic) AVPresentationContext *presentationContext;
@property (nonatomic) long long preferredUnobscuredArea;
@property (nonatomic) BOOL entersFullScreenWhenTapped;
@property (retain, nonatomic) AVPlaybackRateCollection *playbackRateCollection;
@property (nonatomic) double defaultPlaybackRate;
@property (nonatomic) BOOL playbackControlsIncludeTransportControls;
@property (nonatomic) BOOL playbackControlsIncludeDisplayModeControls;
@property (nonatomic) BOOL playbackControlsIncludeVolumeControls;
@property (nonatomic) BOOL wantsVideoFrameAnalysis;
@property (readonly, nonatomic) long long activeContentTransitionType;
@property (readonly, nonatomic, getter=isContentTransitionInteractive) BOOL contentTransitionInteractive;
@property (readonly, nonatomic) AVPlayer *contentTransitioningPlayer;
@property (readonly, nonatomic) UIView *contentTransitioningOverlayView;
@property (weak, nonatomic) id<AVPlayerViewControllerContentTransitioning_NewsOnly> contentTransitioningDelegate;
@property (nonatomic, getter=isStartNextContentTransitionButtonEnabled) BOOL startNextContentTransitionButtonEnabled;
@property (nonatomic, getter=isStartPreviousContentTransitionButtonEnabled) BOOL startPreviousContentTransitionButtonEnabled;
@property (retain, nonatomic) UIView *customContentTransitioningInfoPanel;
@property (readonly, nonatomic) NSArray *behaviors;
@property (readonly, nonatomic) AVMobileControlsViewController *controlsViewController;
@property (readonly, nonatomic) AVContentOverlayView *_actualContentOverlayView;
@property (readonly, nonatomic) AVFullScreenViewController *fullScreenViewController;
@property (nonatomic) BOOL shouldUseNetworkingResourcesForLiveStreamingWhilePaused;
@property (copy, nonatomic) id /* block */ finishPreparingForInteractiveDismissalHandler;
@property (copy, nonatomic) id /* block */ dismissForPIPStartAfterPresentationHandler;
@property (copy, nonatomic) id /* block */ pendingRestoreUserInterfaceForPictureInPictureStopHandler;
@property (copy, nonatomic) id /* block */ interactiveDismissalCompletionHandler;
@property (readonly, nonatomic) AVObservationController *_observationController;
@property (readonly, nonatomic) AVObservationController *_pipActivitySessionObservationController;
@property (readonly, nonatomic) AVBehaviorStorage *_behaviorStorage;
@property (readonly, nonatomic) NSMutableDictionary *_targetVideoGravitiesForLayoutClass;
@property (nonatomic) BOOL _hasBegunObservation;
@property (nonatomic, setter=_setNumberOfTrackedUserInteractions:) long long _numberOfTrackedUserInteractions;
@property (retain, nonatomic) UIHoverGestureRecognizer *hoverGestureRecognizer;
@property (retain, nonatomic) UIPanGestureRecognizer *scrubGestureRecognizer;
@property (readonly, nonatomic) NSMutableDictionary *_localizedDiscoverabilityTitleForKeyCommandLocalizationKey;
@property (nonatomic) struct CGSize { double width; double height; } secondScreenConnectionDisplaySize;
@property (retain, nonatomic) AVPlayerControllerVolumeAnimator *volumeAnimator;
@property (retain, nonatomic) __AVPlayerLayerView *playerLayerView;
@property (nonatomic, getter=isReadyForDisplay) BOOL readyForDisplay;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } videoBounds;
@property (nonatomic) BOOL hasPerformedInitialSetup;
@property (nonatomic) BOOL wasInitializedUsingWebKitSPI;
@property (nonatomic, getter=isHoveringOverPlaybackControl) BOOL hoveringOverPlaybackControl;
@property (retain, nonatomic) AVPlaybackSpeedCollection *playbackSpeedCollection;
@property (retain, nonatomic) AVVisualAnalysisView *analysisView;
@property (nonatomic) BOOL isUpdatingSecondScreenConnectionReadyToConnect;
@property (nonatomic) BOOL requiresImmediateAssetInspection;
@property (retain, nonatomic) AVPlayerController *playerController;
@property (nonatomic) BOOL canHidePlaybackControls;
@property (nonatomic) BOOL allowsEnteringFullScreen;
@property (copy, nonatomic) NSArray *transportBarCustomMenuItems;
@property (nonatomic) BOOL showsAnalysisButtonIfAvailable;
@property (retain, nonatomic) VKCImageAnalysis *imageAnalysis;
@property (readonly, nonatomic) BOOL analysisInteractionInProgress;
@property (nonatomic) BOOL showsMinimalPlaybackControlsWhenEmbeddedInline;
@property (nonatomic) BOOL canPausePlaybackWhenExitingFullScreen;
@property (readonly, nonatomic) AVPlayerViewControllerCustomControlsView *customControlsView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } legibleContentInsets;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } videoDisplaySize;
@property (readonly, nonatomic) double videoDisplayScale;
@property (nonatomic) BOOL volumeControlsCanShowSlider;
@property (readonly, nonatomic) UIViewController *viewControllerForFullScreenPresentation;
@property (copy, nonatomic) NSArray *customControlItems;
@property (copy, nonatomic) NSString *overrideParentApplicationDisplayIdentifier;
@property (nonatomic) BOOL canIncludePlaybackControlsWhenInline;
@property (retain, nonatomic) NSValue *overrideLayoutMarginsWhenEmbeddedInline;
@property (readonly, nonatomic, getter=isPictureInPictureActive) BOOL pictureInPictureActive;
@property (copy, nonatomic) NSString *pictureInPictureActivitySessionIdentifier;
@property (copy, nonatomic) id /* block */ playButtonHandlerForLazyPlayerLoading;
@property (nonatomic) BOOL wantsDetachedFullscreenPresentation;
@property (retain, nonatomic) AVPlayer *player;
@property (nonatomic) BOOL showsPlaybackControls;
@property (nonatomic) BOOL showsTimecodes;
@property (copy, nonatomic) NSString *videoGravity;
@property (readonly, nonatomic) UIView *contentOverlayView;
@property (nonatomic) BOOL allowsPictureInPicturePlayback;
@property (nonatomic) BOOL allowsVideoFrameAnalysis;
@property (nonatomic) BOOL canStartPictureInPictureAutomaticallyFromInline;
@property (nonatomic) BOOL updatesNowPlayingInfoCenter;
@property (nonatomic) BOOL entersFullScreenWhenPlaybackBegins;
@property (nonatomic) BOOL exitsFullScreenWhenPlaybackEnds;
@property (nonatomic) BOOL requiresLinearPlayback;
@property (copy, nonatomic) NSDictionary *pixelBufferAttributes;
@property (weak, nonatomic) id<AVPlayerViewControllerDelegate> delegate;
@property (copy, nonatomic) NSArray *speeds;
@property (readonly, nonatomic) AVPlaybackSpeed *selectedSpeed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } avkit_videoRectInWindow;
@property (readonly, nonatomic) BOOL avkit_isVisible;
@property (readonly, nonatomic) UIWindow *avkit_window;

+ (id)keyPathsForValuesAffectingAnalysisInteractionInProgress;
+ (id)keyPathsForValuesAffectingPixelBufferAttributes;
+ (id)keyPathsForValuesAffectingPictureInPictureWasStartedWhenEnteringBackground;
+ (id)keyPathsForValuesAffectingWantsVideoFrameAnalysis;
+ (id)keyPathsForValuesAffectingSelectedSpeed;
+ (id)keyPathsForValuesAffectingPictureInPictureSuspended;
+ (id)keyPathsForValuesAffectingPictureInPictureActive;
+ (id)keyPathsForValuesAffectingVideoGravity;
+ (id)keyPathsForValuesAffectingTransportBarCustomMenuItems;
+ (id)keyPathsForValuesAffectingSpeeds;
+ (id)keyPathsForValuesAffectingVideoDisplaySize;
+ (id)keyPathsForValuesAffectingPictureInPicturePossible;

- (void)startContentTransition:(long long)a0;
- (void)setVideoGravity:(id)a0 forLayoutClass:(unsigned long long)a1;
- (void)_beginTrackingUserInteraction;
- (void)visualAnalysisViewDidBeginInteraction:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)_updateVolumeController;
- (void)avkit_stopRoutingVideoToPictureInPictureViewController:(id)a0;
- (void)setWebKitOverrideRouteSharingPolicy:(unsigned long long)a0 routingContextUID:(id)a1;
- (id)_volumeController;
- (BOOL)_controlsViewControllerPrefersStatusBarHidden;
- (void)playbackControlsViewNeedsUpdateStatusBarAppearance:(id)a0;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (void)_handleShowPreviousFrameKeyCommand:(id)a0;
- (void)updateVideoBounds;
- (id)interactiveContentOverlayView;
- (void)_updateDefaultPlaybackRateIfNeeded;
- (void)exitAutoplayPhase;
- (void)_didEndPlayingOnSecondScreen;
- (void)_updateUnsupportedContentIndicatorView;
- (void)willPresentInterstitialGroup:(id)a0;
- (void)_updateSecondScreenConnectionReadyToConnect;
- (id)_avkitPreferredTransitioningDelegate;
- (void)pictureInPictureController:(id)a0 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)a1;
- (void)toggleMuted:(id)a0;
- (void)_handleVolumeUpKeyPressedCommand:(id)a0;
- (void)transitionController:(id)a0 willBeginDismissingViewController:(id)a1;
- (void)_createPictureInPictureControllerIfNeeded;
- (void)loadView;
- (void)popoverPresentationControllerDidDismissPopover:(id)a0;
- (id)transitionController:(id)a0 configurationForPresentedViewController:(id)a1 presentingViewController:(id)a2;
- (void)videoFrameVisualAnalyzerFailedAnalyzingVideoFrame:(id)a0 withError:(id)a1;
- (void)_updateExternalPlaybackIndicatorView;
- (id)viewForFullScreenViewController:(id)a0;
- (void)_beginScrubGestureIfNeeded;
- (void)exitFullScreenWithCompletion:(id /* block */)a0;
- (void)_mediaSelectionDoneButtonTapped:(id)a0;
- (long long)avkit_contentSourceType;
- (void)_setSecondScreenConnectionReadyToConnect:(BOOL)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (long long)preferredStatusStyleForFullScreenViewController:(id)a0;
- (void)flashAutoplayControls;
- (id)scrubGestureConfigurationSettings;
- (long long)preferredStatusBarStyle;
- (void)_startPlayerLayerViewObservationsIfNeeded;
- (void)playbackControlsViewDidToggleControlsVisibility:(id)a0;
- (id)scrubbingGestureConfigurationForGestureController:(id)a0;
- (id)keyCommandResponderForFullScreenViewController:(id)a0;
- (void)_updatePlaybackBeganAfterPlayerControllerBecameReadyToPlayIfNeeded;
- (void)setVideoGravityForTransitioningContent:(id)a0;
- (BOOL)_modalPresentationStyleIsFullScreen;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0;
- (id)playbackContainerViewForFullScreenViewController:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)_hoverGestureRecognizer:(id)a0 hasCursorOverView:(id)a1;
- (long long)preferredWhitePointAdaptivityStyle;
- (void)selectSpeed:(id)a0;
- (id)_newsWidgetPlayerBehaviorContext;
- (void)prepareForPopoverPresentation:(id)a0;
- (void)_addObservers;
- (id)_activeViewControllerForContentView;
- (void)_transitionFromFullScreenPresentationToInlineAnimated:(BOOL)a0 interactive:(BOOL)a1 completionHandler:(id /* block */)a2;
- (BOOL)_canEnterFullScreen;
- (double)_applyNonlinearScaleToScrubGestureVelocity:(double)a0;
- (void)_transitionToFullScreenAnimated:(BOOL)a0 interactive:(BOOL)a1 completionHandler:(id /* block */)a2;
- (BOOL)_wantsNowPlayingInfoCenter;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_handleVideoGravityPinchGesture:(id)a0;
- (BOOL)_shouldEnterFullScreenAfterPlaybackBegins;
- (void)visualAnalysisView:(id)a0 didToggleAnalysisButtonVisibilityToVisible:(BOOL)a1;
- (void)_contentViewDidMoveWindow;
- (void)_updateActuallyRequiresLinearPlayback;
- (id)transitionController:(id)a0 targetViewForDismissingViewController:(id)a1;
- (BOOL)prefersStatusBarHidden;
- (void)_updateContentOverlayViewSuperview;
- (id)transitionControllerBackgroundViewBackgroundColor:(id)a0;
- (id)_transitionControllerIfLoaded;
- (void)_handleRewindKeyReleasedCommand:(id)a0;
- (void)doneButtonTapped:(id)a0;
- (void)_updatePlaybackControlsState;
- (void)_handleHoverGestureRecognizer:(id)a0;
- (void)mediaSelectionButtonTapped:(id)a0;
- (void)scrollingObserverDidChangeScrollingState:(id)a0;
- (void)chromlessControlsViewControllerDidPressLiveTextButton:(id)a0;
- (BOOL)modalPresentationCapturesStatusBarAppearance;
- (void)exitFullscreen:(id)a0;
- (void)transitionController:(id)a0 transitionWillComplete:(BOOL)a1 continueBlock:(id /* block */)a2;
- (id)avkit_makePlayerControllerIfNeeded:(id)a0;
- (void)transitionControllerBeginInteractiveDismissalTransition:(id)a0;
- (void)viewDidLoad;
- (BOOL)_isReadyToConnectSynchronousChecks;
- (void)_handleShowNextFrameKeyCommand:(id)a0;
- (BOOL)transitionControllerCanBeginInteractiveDismissalTransition:(id)a0;
- (void)_enterFullScreenWhenPlayingIfNeeded;
- (void)setDefaultPlaybackRate:(double)a0;
- (BOOL)_isTransitioningToOrFromFullScreen;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)didMoveToParentViewController:(id)a0;
- (void)_updateCustomControlsViewSuperViewIfNeeded;
- (void)fullScreenViewControllerDidAttachContentView:(id)a0;
- (BOOL)_shouldShowPictureInPictureButton;
- (void)_transitionFromFullScreenAnimated:(BOOL)a0 interactive:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)a0;
- (BOOL)_isTrackingUserInteractionWithInteractiveView;
- (void)enterAutoplayPhase;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_isTrackingUserInteraction;
- (id)transitionControllerPresentedViewBackgroundColor:(id)a0;
- (void)avkit_startRoutingVideoToPictureInPictureViewController:(id)a0;
- (void)_handleFastForwardKeyReleasedCommand:(id)a0;
- (void)enterFullScreen:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)fullScreenViewControllerWillBeginFullScreenPresentation:(id)a0;
- (void)controlsViewController:(id)a0 willBeginUpdatingVisibleControlsTo:(unsigned long long)a1 withAnimationCoordinator:(id)a2;
- (void)removeBehavior:(id)a0;
- (void)_didBeginPlayingOnSecondScreen;
- (void)_handleDoubleTapTwoFingersGesture:(id)a0;
- (void)transitionControllerBeginInteractivePresentationTransition:(id)a0;
- (void)_handleVolumeDownKeyReleasedCommand:(id)a0;
- (id)_chromeControlsViewController;
- (void)_transitionFromFullScreenAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)a0;
- (void)_setContentViewOnSelf;
- (void).cxx_destruct;
- (void)controlsViewControllerDidUpdateLayoutGuides:(id)a0;
- (void)controlsViewController:(id)a0 didBeginUpdatingVisibleControlsTo:(unsigned long long)a1 withAnimationCoordinator:(id)a2;
- (void)performInitialSetupIfNeededAndPossible;
- (void)_ensureBehaviorStorage;
- (void)_playPauseButtonWasPressedEvent:(id)a0;
- (void)_updatePiPControllerCanStartAutomaticallyWhenEnteringBackground;
- (BOOL)transitionControllerCanBeginInteractivePresentationTransition:(id)a0;
- (void)_updateSecondScreenConnectionPlayingState;
- (void)_togglePictureInPicture;
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)a0;
- (void)activeContentViewDidChange;
- (void)_setUpSecondScreenConnectionIfNeeded;
- (BOOL)avkit_wantsManagedSecondScreenPlayback;
- (void)togglePlayback:(id)a0;
- (void)_handleRewindKeyPressedCommand:(id)a0;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)_contentViewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_updateViewControllerPreferencesIfNeeded;
- (void)_handleGoToBeginningKeyCommand:(id)a0;
- (void)_updateContentViewEdgeInsetsForLetterboxedContent;
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)a0;
- (void)_updateIncludedControls;
- (void)fullScreenViewController:(id)a0 viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a1 coordinator:(id)a2;
- (void)_handleDoubleTapGesture:(id)a0;
- (BOOL)avkit_isEffectivelyFullScreen;
- (id)avkit_pictureInPictureViewController;
- (void)_updateNowPlayingInfoController;
- (id)controlsViewController:(id)a0 displayNameForMediaSelectionOption:(id)a1;
- (void)playerControllerDidCompleteInspection:(id)a0;
- (double)_seekDistanceForScrubGestureWithVelocity:(double)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_handleVolumeDownKeyPressedCommand:(id)a0;
- (void)_handleSkipBack15SecondsKeyCommand:(id)a0;
- (void)_handleExitFullScreenKeyCommand:(id)a0;
- (void)setView:(id)a0;
- (void)didPresentInterstitialGroup:(id)a0;
- (BOOL)playerViewControllerContentViewIsPlayingOnSecondScreen:(id)a0;
- (void)_updatePlaybackControlsCanHideStateIfNeeded;
- (void)_endTrackingUserInteraction;
- (BOOL)prefersStatusBarHiddenForFullScreenViewController:(id)a0;
- (void)addBehavior:(id)a0;
- (void)visualAnalysisViewDidPressAnalysisButton:(id)a0;
- (id)_newsWidgetPlayerLegacyBehavior;
- (BOOL)_isDescendantOfRootViewController;
- (BOOL)_secondGenerationControlsEnabled;
- (void)_volumeButtonWasPressedEvent:(id)a0;
- (BOOL)transitionController:(id)a0 gestureRecognizer:(id)a1 shouldReceiveTouch:(id)a2;
- (BOOL)_shouldPausePlaybackWhenExitingFullscreen;
- (void)pictureInPictureButtonTapped:(id)a0;
- (void)dealloc;
- (void)transitionController:(id)a0 prepareForFinishingInteractiveTransition:(id /* block */)a1;
- (void)_resetVisualAnalysisViewSelectionIfNeeded;
- (void)_handleSkipAhead15SecondsKeyCommand:(id)a0;
- (void)exitFullScreenAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)startPictureInPicture;
- (void)viewWillAppear:(BOOL)a0;
- (id)transitioningDelegate;
- (BOOL)canBecomeFirstResponder;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)fullScreenViewControllerWillEndFullScreenPresentation:(id)a0;
- (BOOL)_delegateRespondsTo:(SEL)a0;
- (void)_handleFastForwardKeyPressedCommand:(id)a0;
- (void)_notifyOfMetricsCollectionEvent:(long long)a0;
- (void)_updateDefaultLinearPlaybackRateIfNeeded;
- (void)_updateSelectedPlaybackSpeedIfPlayerControllerRateChanges;
- (void)_handleUserInteractionObservationRecognizer:(id)a0;
- (void)_transitionFromFullScreenWithReason:(long long)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)visualAnalysisView:(id)a0 prepareForCalloutAction:(SEL)a1 completion:(id /* block */)a2;
- (void)enterFullScreenWithCompletion:(id /* block */)a0;
- (void)avkit_beginReducingResourcesForPictureInPictureViewController:(id)a0 playerController:(id)a1;
- (void)stopPictureInPicture;
- (void)contentOverlayViewDidAddOrRemoveSubview:(id)a0;
- (id)keyCommands;
- (void)videoFrameVisualAnalyzerDidFinishAnalyzingVideoFrame:(id)a0 withAnalysis:(id)a1;
- (void)flashPlaybackControlsWithDuration:(double)a0;
- (void)_handleSingleTapGesture:(id)a0;
- (void)_updateActivePlaybackSpeedIfNeeded;
- (void)videoGravityButtonTapped:(id)a0;
- (BOOL)_isUnsupportedContent;
- (void)_setPlayerLayerLegibleContentInsetsIfPossible:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)avkit_endReducingResourcesForPictureInPictureViewController:(id)a0 playerController:(id)a1;
- (void)pictureInPictureController:(id)a0 failedToStartPictureInPictureWithError:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })playerViewControllerContentViewEdgeInsetsForLetterboxedVideo:(id)a0;
- (long long)_preferredModalPresentationStyle;
- (void)transitionController:(id)a0 animationProgressDidChange:(float)a1;
- (void)_transitionToDetachedFullScreenCompletionHandler:(id /* block */)a0;
- (void)_seekForScrubGestureWithVelocity:(double)a0;
- (void)playbackSpeedCollection:(id)a0 selectedPlaybackSpeedDidChangeTo:(id)a1;
- (BOOL)playerControllerCanRestorePlaybackRateAfterAudioSessionDeactivation:(id)a0;
- (void)avkit_willBeginStoppingPictureInPictureForPictureInPictureViewController:(id)a0;
- (id)initWithPlayerLayerView:(id)a0;
- (void)_handleScrubInteruptionGestureRecognizer:(id)a0;
- (void)_endScrubGestureIfActive;
- (void)_handleScrubbingGestureRecognizer:(id)a0;
- (void)_transitionFromDetachedFullScreenPresentationToInlineAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_handleVolumeUpKeyReleasedCommand:(id)a0;
- (void)enterFullScreenAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)showFullScreenPresentationFromView:(id)a0 completion:(id /* block */)a1;
- (void)_updateAudioOnlyIndicatorView;
- (void)_togglePlaybackForCenterTapGesture:(id)a0;
- (void)playerViewControllerContentView:(id)a0 didMoveToWindow:(id)a1;
- (void)playbackControlsView:(id)a0 animateAlongsideVisibilityAnimationsWithAnimationCoordinator:(id)a1 appearingViews:(id)a2 disappearingViews:(id)a3;
- (void)_transitionToAttachedFullScreenAnimated:(BOOL)a0 interactive:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_handlePlayPauseKeyCommand:(id)a0;
- (void)fullScreenViewControllerWillAttachContentView:(id)a0;
- (void)_updateCustomControlsViewStateWithVisibleControlsSet:(unsigned long long)a0;
- (void)_handlePlaybackToggleNotificationForMetricsCollectionEvent;
- (void)transitionController:(id)a0 willBeginPresentingViewController:(id)a1;

@end

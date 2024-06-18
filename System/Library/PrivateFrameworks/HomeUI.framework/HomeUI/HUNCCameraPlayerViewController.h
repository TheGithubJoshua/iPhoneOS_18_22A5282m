@class HMCameraProfile, NSDate, HUCameraPlayerAVBehavior, HUCameraBlurViewController, HMCameraClip, HFCameraPlaybackEngine, HUCameraPlayerAccessoryViewController, HUNCCameraPlayerPlaceholderContentViewController, NSString, HUCameraLiveButtonView, HFCameraAnalyticsCameraPlayerLaunchEvent, HUCameraPlayerLiveContentViewController, HFItemManager, HFCameraItem, HUNCCameraScrubberViewController, NAUILayoutConstraintSet, NSUUID;

@interface HUNCCameraPlayerViewController : AVPlayerViewController <AVPlayerViewControllerDelegate, AVPlayerViewControllerDelegatePrivate, HFCameraPlaybackEngineObserver, HFItemManagerDelegate, HUCameraPlayerAVBehaviorDelegate>

@property (retain, nonatomic) HFItemManager *itemManager;
@property (retain, nonatomic) HFCameraItem *cameraItem;
@property (retain, nonatomic) HFCameraPlaybackEngine *playbackEngine;
@property (retain, nonatomic) HUCameraPlayerAVBehavior *behavior;
@property (retain, nonatomic) HUCameraPlayerLiveContentViewController *liveContentViewController;
@property (retain, nonatomic) HUNCCameraScrubberViewController *miniScrubberViewController;
@property (retain, nonatomic) HUCameraPlayerAccessoryViewController *accessoryViewController;
@property (retain, nonatomic) HUNCCameraPlayerPlaceholderContentViewController *placeholderContentViewController;
@property (retain, nonatomic) HUCameraBlurViewController *blurViewController;
@property (retain, nonatomic) NAUILayoutConstraintSet *staticConstraintSet;
@property (retain, nonatomic) NAUILayoutConstraintSet *scrubberConstraintSet;
@property (weak, nonatomic) HMCameraClip *currentClip;
@property (retain, nonatomic) NSUUID *notificationUUID;
@property (retain, nonatomic) NSUUID *clipUUID;
@property (retain, nonatomic) HMCameraProfile *cameraProfile;
@property (retain, nonatomic) NSDate *playbackStartDateFromSignificantEvent;
@property (nonatomic) BOOL hu_playbackControlsAreVisible;
@property (retain, nonatomic) HFCameraAnalyticsCameraPlayerLaunchEvent *launchEvent;
@property (retain, nonatomic) HUCameraLiveButtonView *liveButtonView;
@property (nonatomic) unsigned long long numberOfAssociatedAccessoriesDisplayed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)usesSecondGenerationControls;

- (void)addPlaybackEngineObservation;
- (void)viewWillLayoutSubviews;
- (void)playbackEngine:(id)a0 didUpdateTimeControlStatus:(unsigned long long)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)updateMicrophoneVisibility;
- (void)viewDidDisappear:(BOOL)a0;
- (void)loadCameraClip;
- (void)playbackEngine:(id)a0 didUpdateScrubbingStatus:(BOOL)a1;
- (void)playbackEngine:(id)a0 didUpdateEvents:(id)a1;
- (void)updateLiveButton;
- (void)reloadAfterNotificationUpdate;
- (void)_updatedRecordedClipInterfaceAvailabilityAnimated:(BOOL)a0;
- (void)itemManager:(id)a0 didUpdateResultsForSourceItem:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)playbackEngine:(id)a0 didUpdatePlaybackError:(id)a1;
- (void)_updateLivePreviewAspectRatio;
- (void)playerViewController:(id)a0 willTransitionToVisibilityOfPlaybackControls:(BOOL)a1 withAnimationCoordinator:(id)a2;
- (void)updateVolumeControlVisibility;
- (void)playbackEngine:(id)a0 didUpdatePlaybackPosition:(id)a1;
- (BOOL)shouldDisplayMicrophoneControl;
- (double)currentScrubberResolutionForBehavior:(id)a0;
- (void).cxx_destruct;
- (void)playbackControlsDidUpdateVisibilityOfLoadingIndicator:(BOOL)a0;
- (void)toggleMicrophoneState;
- (void)_updateCameraStatus;
- (void)updateViewConstraints;
- (void)toggleLive;
- (void)updateMicrophone;
- (void)_updateStateForScrubbingStatus:(BOOL)a0 animated:(BOOL)a1;
- (void)playbackControlsDidToggleMuted:(BOOL)a0;
- (void)_setupPlaybackEngine;
- (void)playbackControlsDidChangePlayerVolume:(float)a0;
- (BOOL)_shouldAutoPlayOnViewAppearance;
- (void)dealloc;
- (void)_setupConstraintSets;
- (void)viewWillAppear:(BOOL)a0;
- (void)playbackEngine:(id)a0 didUpdateLiveCameraSource:(id)a1;
- (void)_updateStateForPlaybackPosition:(id)a0 animated:(BOOL)a1;
- (void)reloadForCurrentClip;
- (id)initWithCameraProfile:(id)a0 notificationUUID:(id)a1 clipUUID:(id)a2 imageURL:(id)a3;
- (id)home;
- (void)_updatePlayerVolumeSliderState;

@end

@class UIView, NSString, HUClipScrubberView, CADisplayLink, HUClipScrubberDataSource, HUClipScrubberScrollDelegate, UIButton, HFCameraPlaybackEngine, HMCameraClipFetchVideoAssetContextOperation, NSLayoutConstraint, UITapGestureRecognizer, HFCameraAnalyticsCameraClipExportSessionEvent;

@interface HUClipScrubberViewController : UIViewController <NSURLSessionDelegate, UIGestureRecognizerDelegate, HFExecutionEnvironmentObserver, HUFeedbackConsentViewControllerDelegate, HUCameraPlayerScrubbing, HFCameraPlaybackEngineObserver>

@property (weak, nonatomic) HFCameraPlaybackEngine *playbackEngine;
@property (retain, nonatomic) HUClipScrubberView *scrubberView;
@property (retain, nonatomic) UIButton *selectionButton;
@property (retain, nonatomic) UIButton *nearbyAccessoriesButton;
@property (retain, nonatomic) UIButton *feedbackButton;
@property (retain, nonatomic) UIView *selectionPlatter;
@property (retain, nonatomic) UIView *feedbackPlatter;
@property (retain, nonatomic) UIView *nearbyAccessoriesPlatter;
@property (retain, nonatomic) HUClipScrubberDataSource *dataSource;
@property (retain, nonatomic) HUClipScrubberScrollDelegate *clipScrollDelegate;
@property (retain, nonatomic) NSLayoutConstraint *scrubberViewRightAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *scrubberViewLeftAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *feedbackPlatterTopAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *nearbyAccessoriesPlatterTopAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *selectionPlatterTopAnchorConstraint;
@property (retain, nonatomic) CADisplayLink *scrubberUpdateDisplayLink;
@property (nonatomic) BOOL isVisible;
@property (nonatomic) unsigned long long lastEngineMode;
@property (weak, nonatomic) HMCameraClipFetchVideoAssetContextOperation *exportDownloadOperation;
@property (retain, nonatomic) UITapGestureRecognizer *singleTapGestureRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer;
@property (retain, nonatomic) HFCameraAnalyticsCameraClipExportSessionEvent *exportSessionEvent;
@property (copy, nonatomic) id /* block */ accessoryButtonHandler;
@property (copy, nonatomic) id /* block */ beginEditingHandler;
@property (copy, nonatomic) id /* block */ endEditingHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double currentScrubberResolution;

- (id)initWithPlaybackEngine:(id)a0;
- (unsigned long long)displayMode;
- (void)loadView;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)playbackEngine:(id)a0 didUpdateTimeControlStatus:(unsigned long long)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)playbackEngine:(id)a0 didUpdateEvents:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)playbackEngine:(id)a0 didUpdatePlaybackError:(id)a1;
- (void)playbackEngine:(id)a0 didUpdatePlaybackPosition:(id)a1;
- (void).cxx_destruct;
- (void)didTap:(id)a0;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)_addConstraints;
- (void)togglePlayPause;
- (void)_presentAlertWithTitle:(id)a0 message:(id)a1;
- (void)playbackEngine:(id)a0 didRemoveEvents:(id)a1;
- (BOOL)userIsScrubbing;
- (BOOL)_cellBoundsContainsPlayhead:(id)a0;
- (void)_createAndStartDisplayLink;
- (id)_displayableURLForCameraClipURL:(id)a0;
- (id)_feedbackClip;
- (void)_removeDisplayLink;
- (void)_scrubberDisplayLinkTick:(id)a0;
- (void)changeToLiveMode;
- (void)changeToLiveModeIfNeeded;
- (void)consentController:(id)a0 didFinishConsentWithAnswer:(BOOL)a1;
- (void)deleteClip;
- (void)didDoubleTap:(id)a0;
- (void)didPinch:(id)a0;
- (void)didSelectFeedbackButton;
- (void)didSelectRightActionButton:(id)a0;
- (void)dismissEditInterface;
- (void)donateAllClips;
- (void)donateClip:(id)a0;
- (void)executionEnvironmentDidBecomeActive:(id)a0;
- (void)exportCurrentClipWithCompletion:(id /* block */)a0;
- (void)exportLocalClipAtURL:(id)a0;
- (id)outputURLForClip:(id)a0;
- (id)platterWithView:(id)a0;
- (void)playbackEngine:(id)a0 didUpdateTimelineState:(unsigned long long)a1;
- (void)presentFeedbackConsent;
- (void)presentFeedbackOptions;
- (void)presentPreviouslySubmittedClipAlert;
- (void)reloadClipManager:(id)a0;
- (void)removeLiveButtonHighlighting;
- (void)showAssociatedAccessories;
- (void)showDeleteInterface;
- (void)showEditInterface;
- (void)submitCurrentClip;
- (void)updateAccessoryViews;
- (void)updateDisplayForLiveMode;
- (void)updatePlaybackPosition:(id)a0 animated:(BOOL)a1;
- (void)updateScrubberDisplayLinkState;
- (void)updateScrubberViewAndAssociatedConstraints;
- (void)updateSelectionPlatterDisplay;
- (id)uploadURLCameraClip:(id)a0;
- (void)verifySubmitAllClips;

@end
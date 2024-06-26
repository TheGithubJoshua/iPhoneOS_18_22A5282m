@class CEKEdgeGradientView, UILabel, PTCinematographyScript, CEKApertureButton, PUVideoEditOverlayViewController, _UIBackdropView, UIView, UIButton, NSString, NSMutableArray, NSLayoutConstraint, UILayoutGuide, PXCinematicEditController, PUTrimToolController, PLRoundProgressView, PXUIButton, PUPhotoEditApertureToolbar;

@interface PUPhotoEditMediaToolController : PUPhotoEditToolController <PUTrimToolControllerDelegate, PUPhotoEditApertureToolbarDelegate, PUVideoEditOverlayViewControllerDelegate, PXCinematicEditControllerDelegate> {
    _UIBackdropView *_backdropBackgroundView;
    UIView *_solidBackgroundView;
    UIView *_containerView;
    NSLayoutConstraint *_viewHeightConstraint;
    NSLayoutConstraint *_leadingWidthConstraint;
    NSLayoutConstraint *_trailingWidthConstraint;
    NSMutableArray *_constraints;
    PUTrimToolController *_trimController;
    PXUIButton *_muteButton;
    PXUIButton *_livePhotoButton;
    UILabel *_videoLabelView;
    UIButton *_stabilizeButton;
    PLRoundProgressView *_stabilizeProgressView;
    BOOL _cinematicButtonsNeedDimmingViews;
    PXUIButton *_portraitVideoButton;
    UIView *_portraitVideoButtonDimmingView;
    CEKApertureButton *_apertureButton;
    UIView *_apertureButtonContainerDimmingView;
    UIView *_apertureButtonContainer;
    PXUIButton *_autoFocusButton;
    PUVideoEditOverlayViewController *_overlayController;
    UIView *_apertureContainer;
    PUPhotoEditApertureToolbar *_apertureToolbar;
    UILayoutGuide *_apertureContainerLayoutGuide;
    long long _toolMode;
    PXCinematicEditController *_cinematographyController;
    CEKEdgeGradientView *_apertureGradientView;
    BOOL _trimControllerVisible;
    BOOL _viewHasAppeared;
    BOOL _trimControllerScrubberNeedsVisualUpdate;
    BOOL _stabilizationInProgress;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _originalStillImageTime;
}

@property (nonatomic) long long layoutType;
@property (retain, nonatomic) UIView *primaryView;
@property (nonatomic) double horizontalControlPadding;
@property (readonly, nonatomic) double horizontalPrimaryViewPaddingOffset;
@property (nonatomic) double verticalButtonOffset;
@property (nonatomic) BOOL useTranslucentBackground;
@property (readonly, nonatomic) UIButton *livePhotoButton;
@property (readonly, nonatomic) PUTrimToolController *trimController;
@property (readonly, nonatomic) PTCinematographyScript *cinematographyScript;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateLivePhotoButtonAnimated:(BOOL)a0;
- (id)init;
- (void)loadView;
- (void)_invalidateConstraints;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (id)localizedName;
- (void).cxx_destruct;
- (void)togglePlayback:(id)a0;
- (void)updateViewConstraints;
- (BOOL)wantsSecondaryToolbarVisible;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)setPlaceholderImage:(id)a0;
- (void)setBackdropViewGroupName:(id)a0;
- (void)_updateBackgroundAnimated:(BOOL)a0;
- (id)axDescriptionForFocusDecisionAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)cineScriptBecameAvailable:(id)a0;
- (void)cineScriptCouldNotInitializeWithError:(id)a0;
- (void)cinematographyWasEdited;
- (void)cinematographyWasEditedAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)didRemoveUserDecision;
- (void)disableCinematicUIForLoadingAsset;
- (void)interactionBegan;
- (void)objectTrackingFinishedWithSuccess:(BOOL)a0;
- (void)objectTrackingStartedAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)removeFocusDecisionAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)trackedObjectWasUpdatedAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 shouldStop:(BOOL *)a1;
- (void)_updateStabilizationInProgress:(BOOL)a0;
- (void)apertureToolbar:(id)a0 didChangeValue:(double)a1;
- (BOOL)hasTrimmedVideo;
- (void)_initializeCinematographyScript;
- (void)_updateStabilizeButtonAnimated:(BOOL)a0;
- (void)apertureToolbarDidStartSliding:(id)a0;
- (void)_dismissPortraitVideoDebugControls:(id)a0;
- (void)_handleApertureButton:(id)a0;
- (void)_handleAutoFocusButton:(id)a0;
- (void)_handleLivePhotoButton:(id)a0;
- (void)_handleMuteButton:(id)a0;
- (void)_handlePortraitVideoButton:(id)a0;
- (void)_handlePortraitVideoButtonLongPress:(id)a0;
- (void)_handleStabilizeButton:(id)a0;
- (void)_invalidateTrimControlScrubberThumbnails;
- (BOOL)_isTrimAllowed;
- (void)_layoutToolGradient;
- (id)_localizedTitleForCurrentPlaybackVariation;
- (void)_presentPortraitVideoDebugControls;
- (void)_reportStabilizeProgress:(double)a0;
- (void)_resetDefaultToolMode;
- (void)_setToolMode:(long long)a0;
- (void)_updateApertureControlsAnimated:(BOOL)a0;
- (void)_updateApertureSliderLength;
- (BOOL)_updateAutoFocusToolbarButton;
- (void)_updateLivePhotoButton:(id)a0;
- (void)_updateMuteButtonAnimated:(BOOL)a0;
- (void)_updatePortraitVideoButtonAnimated:(BOOL)a0;
- (void)_updateStabilizeProgressViewAnimated:(BOOL)a0;
- (void)_updateToolVisibilityAnimated:(BOOL)a0;
- (void)_updateTrackerDisplay:(BOOL)a0;
- (void)_updateTrimControlAndToolbarButtons;
- (BOOL)_wantsPortraitVideoControls;
- (BOOL)_wantsTrimControl;
- (id)accessibilityHUDItemForButton:(id)a0;
- (void)addCropToolGainMapIfNeeded;
- (void)apertureToolbarDidStopSliding:(id)a0;
- (BOOL)apertureToolbarShouldRotateLabelsWithOrientation:(id)a0;
- (void)baseMediaInvalidated;
- (BOOL)canResetToDefaultValue;
- (id)centerToolbarView;
- (void)compositionControllerDidChangeForAdjustments:(id)a0;
- (void)decreaseScrubberValue:(BOOL)a0;
- (void)increaseScrubberValue:(BOOL)a0;
- (id)leadingToolbarViews;
- (id)makeTrimToolController;
- (void)mediaView:(id)a0 didZoom:(double)a1;
- (void)mediaViewDidScroll:(id)a0;
- (void)photoEditLivePhotoModelUpdated;
- (void)reactivate;
- (void)reloadToolbarButtons:(BOOL)a0;
- (void)removeCropToolGainMap;
- (long long)scrubberOrientation;
- (void)setLayoutOrientation:(long long)a0 withTransitionCoordinator:(id)a1;
- (void)setOriginalStillImageTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setUseGradientBackground:(BOOL)a0 animated:(BOOL)a1;
- (void)setupWithAsset:(id)a0 compositionController:(id)a1 editSource:(id)a2 overcaptureEditSource:(id)a3 valuesCalculator:(id)a4;
- (long long)toolControllerTag;
- (id)toolbarIcon;
- (id)toolbarIconAccessibilityLabel;
- (id)trailingToolbarViews;
- (void)trimToolController:(id)a0 didBeginInteractivelyEditingElement:(long long)a1;
- (void)trimToolController:(id)a0 didEndInteractivelyEditingElement:(long long)a1;
- (void)trimToolControllerDidChange:(id)a0 state:(unsigned long long)a1;
- (void)updateCinematicVideoControlsEnableState;
- (void)updateForIncomingAnimation;
- (void)updateToolbarButtonsAnimated:(BOOL)a0;
- (void)videoRenderingChanged;
- (BOOL)wantsScrubberKeyControl;
- (BOOL)wantsZoomAndPanEnabled;
- (void)willBecomeActiveTool;
- (void)willResignActiveTool;

@end

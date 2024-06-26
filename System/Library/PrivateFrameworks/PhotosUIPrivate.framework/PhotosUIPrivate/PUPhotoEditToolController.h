@class CEKEdgeGradientView, NUComposition, PUPhotoEditToolControllerSpec, PUPhotoEditAggregateSession, PFSlowMotionTimeRangeMapper, PUPhotoEditViewControllerSpec, UIButton, UIView, NSMutableArray, NSString, PICompositionController, UIColor, NURenderPipelineFilter, _PUPhotoEditToolGradientView, NSArray, PLEditSource, PEValuesCalculator, UIImage;
@protocol PUPhotoEditToolControllerDelegate, PUEditableAsset;

@interface PUPhotoEditToolController : UIViewController <PUViewControllerSpecChangeObserver, PUPhotoEditLayoutDynamicAdaptable> {
    CEKEdgeGradientView *_gradientMask;
    _PUPhotoEditToolGradientView *_gradientView;
}

@property (retain, nonatomic) NSMutableArray *mutableEditActionActivites;
@property (retain, nonatomic) PFSlowMotionTimeRangeMapper *slowMotionTimeMapper;
@property (retain, nonatomic) NUComposition *storedComposition;
@property (nonatomic) long long storedCompositionCount;
@property (retain, nonatomic) PUPhotoEditToolControllerSpec *toolControllerSpec;
@property (nonatomic, getter=isPerformingLiveInteraction) BOOL performingLiveInteraction;
@property (retain, nonatomic) UIButton *preferredAlternateToolbarButton;
@property (retain, nonatomic) PUPhotoEditAggregateSession *aggregateSession;
@property (nonatomic) BOOL hasMediaScrubber;
@property (readonly, nonatomic) BOOL supportsPreviewingOriginal;
@property (readonly, nonatomic) BOOL wantsScrubberKeyControl;
@property (readonly, nonatomic) long long scrubberOrientation;
@property (readonly, nonatomic) BOOL wantsSliderKeyControl;
@property (copy, nonatomic) id /* block */ ppt_didBecomeActiveToolBlock;
@property (readonly, nonatomic) id<PUEditableAsset> asset;
@property (readonly, nonatomic) PICompositionController *compositionController;
@property (readonly, nonatomic) PICompositionController *uneditedCompositionController;
@property (readonly, nonatomic) PLEditSource *editSource;
@property (readonly, nonatomic) PLEditSource *overcaptureEditSource;
@property (readonly, nonatomic) PEValuesCalculator *valuesCalculator;
@property (retain, nonatomic) PUPhotoEditViewControllerSpec *photoEditSpec;
@property (weak, nonatomic) id<PUPhotoEditToolControllerDelegate> delegate;
@property (readonly, nonatomic) UIView *toolContainerView;
@property (nonatomic) double toolGradientDistance;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) UIImage *toolbarIcon;
@property (readonly, nonatomic) UIImage *selectedToolbarIcon;
@property (readonly, nonatomic) NSString *toolbarIconAccessibilityLabel;
@property (readonly, nonatomic) BOOL canResetToDefaultValue;
@property (readonly, nonatomic) NSString *localizedResetToolActionTitle;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } preferredPreviewViewInsets;
@property (readonly, nonatomic) BOOL wantsDefaultPreviewView;
@property (readonly, copy, nonatomic) UIColor *preferredPreviewBackgroundColor;
@property (readonly, nonatomic) BOOL wantsZoomAndPanEnabled;
@property (readonly, nonatomic) BOOL wantsSecondaryToolbarVisible;
@property (readonly, nonatomic) BOOL suppressesEditUpdates;
@property (readonly, nonatomic) BOOL handlesVideoPlaying;
@property (readonly, nonatomic) BOOL handlesMediaViewInsets;
@property (readonly, copy, nonatomic) NURenderPipelineFilter *filter;
@property (copy, nonatomic) NSString *backdropViewGroupName;
@property (readonly, nonatomic) UIView *leftToolbarView;
@property (readonly, nonatomic) UIView *centerToolbarView;
@property (readonly, nonatomic) long long toolControllerTag;
@property (readonly, nonatomic) NSArray *editActionActivities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long layoutOrientation;

- (BOOL)prefersHomeIndicatorAutoHidden;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)canBecomeFirstResponder;
- (void)setPlaceholderImage:(id)a0;
- (void)prepareForSave:(BOOL)a0;
- (void)_layoutToolGradient;
- (id)_newTimeMapper;
- (void)_registerActionWithSourceComposition:(id)a0 localizedName:(id)a1;
- (void)_updateTraitCollectionAndLayoutReferenceSize;
- (void)_updateTraitCollectionAndLayoutReferenceSize:(struct CGSize { double x0; double x1; })a0;
- (id)accessibilityHUDItemForButton:(id)a0;
- (void)addEditActionActivity:(id)a0;
- (void)baseMediaInvalidated;
- (void)basePhotoInvalidated;
- (BOOL)canBecomeActiveTool;
- (void)compositionControllerDidChangeForAdjustments:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectInCoordinateSpace:(id)a0;
- (void)decreaseScrubberValue:(BOOL)a0;
- (void)decreaseSliderValue:(BOOL)a0;
- (void)didBecomeActiveTool;
- (void)didModifyAdjustmentWithLocalizedName:(id)a0;
- (void)didResignActiveTool;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })displayedTimeForOriginalAssetTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)editValuesCalculatorHasChangedFlashStatus:(id)a0;
- (void)editValuesCalculatorHasChangedGeometricValues:(id)a0;
- (void)editValuesCalculatorHasChangedImageValues:(id)a0;
- (void)increaseScrubberValue:(BOOL)a0;
- (void)increaseSliderValue:(BOOL)a0;
- (BOOL)installLivePhotoPlaybackGestureRecognizer:(id)a0;
- (BOOL)installTogglePreviewGestureRecognizer:(id)a0;
- (BOOL)isActiveTool;
- (id)leadingToolbarViews;
- (void)leavingEditWithCancel;
- (void)mediaView:(id)a0 didZoom:(double)a1;
- (void)mediaViewDidEndZooming:(id)a0;
- (void)mediaViewDidScroll:(id)a0;
- (void)mediaViewIsReady;
- (void)mediaViewWillBeginZooming:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })originalAssetTimeForDisplayedTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)photoEditLivePhotoModelUpdated;
- (void)prepareForToolTransitionWithCompletion:(id /* block */)a0;
- (void)reactivate;
- (void)reloadToolbarButtons:(BOOL)a0;
- (void)removeEditActionActivity:(id)a0;
- (void)resetToDefaultValueAnimated:(BOOL)a0;
- (void)setLayoutOrientation:(long long)a0 withTransitionCoordinator:(id)a1;
- (void)setOriginalStillImageTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setUseGradientBackground:(BOOL)a0 animated:(BOOL)a1;
- (void)setupWithAsset:(id)a0 compositionController:(id)a1 editSource:(id)a2 overcaptureEditSource:(id)a3 valuesCalculator:(id)a4;
- (void)specDidChange;
- (id)trailingToolbarViews;
- (void)updateForIncomingAnimation;
- (void)updateToolbarButtonsAnimated:(BOOL)a0;
- (void)viewControllerSpec:(id)a0 didChange:(id)a1;
- (void)willBecomeActiveTool;
- (void)willModifyAdjustment;
- (void)willResignActiveTool;

@end

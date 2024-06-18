@class CEKApertureSlider, CAMDrawerLowLightButton, CAMSemanticStyleControl, NSString, CAMDrawerHDRButton, CAMDrawerProResButton, CAMControlDrawerButton, NSArray, NSMutableDictionary, CAMLowLightSlider, CAMDrawerSemanticStyleButton, CAMDrawerExposureButton, CEKSlider, CAMDrawerLivePhotoButton, CAMDrawerRAWButton, CAMDrawerVideoStabilizationButton, CAMDrawerFlashButton, CAMDrawerApertureButton, CAMDrawerTimerButton, CAMDrawerFilterButton, CAMDrawerIntensityButton, CAMDrawerAspectRatioButton, CEKWheelScrubberView, CAMDrawerSharedLibraryButton, UIScrollView, CAMExposureSlider;
@protocol CAMControlDrawerPresentationDelegate, CAMControlDrawerExpandableButton, CAMControlDrawerDelegate;

@interface CAMControlDrawer : UIView <CAMControlDrawerMenuButtonDelegate, UIScrollViewDelegate, CAMAccessibilityHUDItemProvider, CAMBarsAccessibilityHUDManagerGestureProvider>

@property (readonly, nonatomic) NSMutableDictionary *_controlMap;
@property (retain, nonatomic, setter=_setExpandedControl:) CAMControlDrawerButton<CAMControlDrawerExpandableButton> *expandedControl;
@property (readonly, nonatomic) UIScrollView *_scrollView;
@property (nonatomic) long long layoutStyle;
@property (weak, nonatomic) id<CAMControlDrawerDelegate> delegate;
@property (weak, nonatomic) id<CAMControlDrawerPresentationDelegate> presentationDelegate;
@property (retain, nonatomic) NSArray *visibleControlTypes;
@property (nonatomic) long long orientation;
@property (readonly, nonatomic) CAMDrawerFlashButton *flashButton;
@property (readonly, nonatomic) CAMDrawerLivePhotoButton *livePhotoButton;
@property (readonly, nonatomic) CAMDrawerAspectRatioButton *aspectRatioButton;
@property (readonly, nonatomic) CAMDrawerTimerButton *timerButton;
@property (readonly, nonatomic) CAMDrawerFilterButton *filterButton;
@property (readonly, nonatomic) CAMDrawerApertureButton *apertureButton;
@property (readonly, nonatomic) CAMDrawerIntensityButton *intensityButton;
@property (readonly, nonatomic) CAMDrawerExposureButton *exposureButton;
@property (readonly, nonatomic) CAMDrawerHDRButton *hdrButton;
@property (readonly, nonatomic) CAMDrawerSemanticStyleButton *semanticStyleButton;
@property (readonly, nonatomic) CAMDrawerRAWButton *rawButton;
@property (readonly, nonatomic) CAMDrawerProResButton *proResButton;
@property (readonly, nonatomic) CAMDrawerSharedLibraryButton *sharedLibraryButton;
@property (readonly, nonatomic) CAMDrawerVideoStabilizationButton *videoStabilizationButton;
@property (readonly, nonatomic) CEKWheelScrubberView *filterScrubberView;
@property (readonly, nonatomic, getter=isFilterScrubberVisible) BOOL filterScrubberVisible;
@property (readonly, nonatomic) CEKApertureSlider *apertureSlider;
@property (nonatomic, getter=isApertureSliderVisible) BOOL apertureSliderVisible;
@property (readonly, nonatomic) CEKSlider *intensitySlider;
@property (nonatomic, getter=isIntensitySliderVisible) BOOL intensitySliderVisible;
@property (readonly, nonatomic) CAMDrawerLowLightButton *lowLightButton;
@property (readonly, nonatomic) CAMLowLightSlider *lowLightSlider;
@property (nonatomic, getter=isLowLightSliderVisible) BOOL lowLightSliderVisible;
@property (readonly, nonatomic) CAMExposureSlider *exposureSlider;
@property (nonatomic, getter=isExposureSliderVisible) BOOL exposureSliderVisible;
@property (readonly, nonatomic) CAMSemanticStyleControl *semanticStyleControl;
@property (nonatomic, getter=isSemanticStyleControlVisible) BOOL semanticStyleControlVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLayoutStyle:(long long)a0;
- (id)initWithCoder:(id)a0;
- (void)selectedByAccessibilityHUDManager:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (id)touchingRecognizersToCancel;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (id)hudItemForAccessibilityHUDManager:(id)a0;
- (void)layoutSubviews;
- (void)_installControlIfNeededForType:(long long)a0;
- (double)_viewportLength;
- (void)_apertureSliderDidChangeValue;
- (void)_commonInitializationWithLayoutStyle:(long long)a0;
- (double)_controlCenterSpacingForControlCount:(unsigned long long)a0;
- (id)_createControlForType:(long long)a0;
- (void)_ensureVisibleControls;
- (void)_exposureSliderDidChangeValue;
- (void)_filterScrubberDidChangeValue;
- (void)_handleControlReleased:(id)a0;
- (void)_handleControlValueChanged:(id)a0;
- (void)_intensitySliderDidChangeValue;
- (void)_iterateViewsForHUDManager:(id)a0 withItemFoundBlock:(id /* block */)a1;
- (void)_layoutApertureSlider;
- (void)_layoutCustomControlsAnimated:(BOOL)a0;
- (void)_layoutExposureSlider;
- (void)_layoutFilterScrubberView;
- (void)_layoutFullWidthCustomView:(id)a0 forAssociatedControl:(id)a1 expanded:(BOOL)a2;
- (void)_layoutFullWidthCustomView:(id)a0 withAlignmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 forAssociatedControl:(id)a2 expanded:(BOOL)a3;
- (void)_layoutIntensitySlider;
- (void)_layoutLowLightSlider;
- (void)_layoutSemanticStyleControl;
- (void)_layoutVisibleControlForType:(long long)a0 visibleControlTypes:(id)a1;
- (void)_loadApertureSliderIfNeeded;
- (void)_loadControlIfNeededForType:(long long)a0;
- (void)_loadCustomUIIfNeededForControlType:(long long)a0;
- (void)_loadExposureSliderIfNeeded;
- (void)_loadFilterScrubberIfNeeded;
- (void)_loadIntensitySliderIfNeeded;
- (void)_loadLowLightSliderIfNeeded;
- (void)_loadSemanticStyleControlIfNeeded;
- (void)_lowLightSliderDidChangeValue;
- (struct CGSize { double x0; double x1; })_scrollingContentSizeForControlCount:(unsigned long long)a0;
- (struct { double x0; double x1; })_scrubberGradientEdgeInsets;
- (void)_semanticStyleControlDidChangeValue;
- (void)_setExpandedControl:(id)a0 animated:(BOOL)a1;
- (unsigned long long)_sliderFontStyle;
- (void)_updateControlsScaleAnimated:(BOOL)a0;
- (void)_updateControlsVisibilityAnimated:(BOOL)a0;
- (void)_updateExpansionInsetsForExpandableButton:(id)a0;
- (unsigned long long)_viewportMaximumControlCount;
- (id)buttonForType:(long long)a0;
- (void)collapseExpandableButtonsAnimated:(BOOL)a0;
- (void)expandControlForType:(long long)a0 animated:(BOOL)a1;
- (void)expandableButton:(id)a0 willChangeExpanded:(BOOL)a1;
- (BOOL)isControlExpandedForType:(long long)a0;
- (void)menuButtonDidSelectItem:(id)a0;
- (void)setApertureSliderVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)setExposureSliderVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)setFilterScrubberVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)setIntensitySliderVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)setLowLightSliderVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)setSemanticStyleControlVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)setVisibleControlTypes:(id)a0 animated:(BOOL)a1;
- (BOOL)shouldAccessibilityGestureBeginForHUDManager:(id)a0;

@end
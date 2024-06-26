@class HKDisplayTypeSectionedContextView, HKLollipopController, HKUnitPreferenceController, UIButton, HKAxis, _HKAudiogramAnnotationViewDataSource, NSLayoutConstraint, NSMutableArray, NSString, UIStackView, _HKAudiogramHeader, NSArray, HKScalarGraphCollectionViewController, HKSampleTypeUpdateController;

@interface HKAudiogramChartViewController : HKViewController <HKLollipopDelegate, HKDisplayTypeSectionedContextViewDelegate, HKScalarGraphCollectionViewDelegate, HKSampleTypeUpdateControllerObserver>

@property (retain, nonatomic) HKUnitPreferenceController *unitController;
@property (nonatomic) double minimumAudiogramHeight;
@property (retain, nonatomic) HKScalarGraphCollectionViewController *scalarGraphCollectionController;
@property (retain, nonatomic) HKSampleTypeUpdateController *updateController;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) NSLayoutConstraint *stackViewHeightConstraint;
@property (retain, nonatomic) _HKAudiogramHeader *audiogramHeader;
@property (retain, nonatomic) UIButton *showAllFiltersButton;
@property (retain, nonatomic) HKDisplayTypeSectionedContextView *contextView;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) _HKAudiogramAnnotationViewDataSource *annotationViewDataSource;
@property (nonatomic) long long selectedOverlayEar;
@property (retain, nonatomic) HKLollipopController *lollipopController;
@property (retain, nonatomic) HKAxis *yAxis;
@property (nonatomic) BOOL audiogramsFetched;
@property (retain, nonatomic) NSLayoutConstraint *leadingMarginConstraint;
@property (retain, nonatomic) NSLayoutConstraint *trailingMarginConstraint;
@property (retain, nonatomic) NSMutableArray *audiograms;
@property (nonatomic) long long currentAudiogramIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_chartPointsFromSensitivityData:(id)a0 leftEarSeries:(BOOL)a1;
+ (BOOL)testChartPointCreation:(id)a0 leftEarSeries:(BOOL)a1 expectedChartPoints:(id)a2 failureMessage:(id *)a3;

- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)dealloc;
- (long long)numberOfItemsInCollection;
- (void)_addContextView;
- (void)_setupInitialUI;
- (id)_accessibleColorFromColor:(id)a0;
- (void)_addControllerAsChildController:(id)a0;
- (void)_applyDynamicInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)_audiogramDisplayType;
- (id)_audiogramLabelColorForStyle:(long long)a0;
- (id)_audiogramLineColorForStyle:(long long)a0;
- (id)_audiogramPointMarkerColorForStyle:(long long)a0;
- (id)_audiogramPresentationStyleWithStyle:(long long)a0 isOverlay:(BOOL)a1;
- (id)_audiogramSeriesForOverlay:(id)a0 forLeftEar:(BOOL)a1;
- (id)_audiogramSeriesWithAudiogram:(id)a0 forLeftEar:(BOOL)a1 withLineStyle:(long long)a2 legendAnnotation:(BOOL)a3;
- (id)_audiogramStrokeStyleWithColor:(id)a0 dottedLines:(BOOL)a1;
- (id)_averageLineColor;
- (id)_averageSectionFromAudiogram:(id)a0;
- (id)_buildAnnotationViewDataSourceWithUnitController:(id)a0;
- (id)_buildAudiogramHeader;
- (id)_buildContextItem;
- (id)_buildYAxisForSensitivity;
- (id)_currentValueTitleStringFromSample:(id)a0;
- (id)_currentValueValueStringFromSample:(id)a0;
- (id)_defaultLabelStyleForStyle:(long long)a0 axis:(BOOL)a1;
- (long long)_defaultLineStyleForLeftEar:(BOOL)a0;
- (id)_disabledLineColor;
- (id)_disabledPointMarkerColor;
- (id)_findNavigationController;
- (id)_indexPathForCurrentSelections;
- (id)_leftEarSensitivityForAudiogram:(id)a0;
- (id)_localizedLegendEntryKey:(BOOL)a0;
- (id)_numberFromSensitivity:(id)a0;
- (void)_pinView:(id)a0 toParentGuide:(id)a1;
- (id)_primaryAnnotationColor;
- (id)_primaryLineColor;
- (id)_primaryPointMarkerColor;
- (void)_resetCurrentGraph;
- (id)_rightEarSensitivityForAudiogram:(id)a0;
- (id)_secondaryAnnotationColor;
- (id)_secondaryLineColor;
- (long long)_secondaryLineStyleForLeftEar:(BOOL)a0;
- (id)_secondaryPointMarkerColor;
- (id)_sectionsFromAudiogram:(id)a0;
- (void)_setupFixedFrequencyAxisForGraphView:(id)a0;
- (id)_setupSeriesForAudiogramSample:(id)a0 leftStyle:(long long)a1 rightStyle:(long long)a2;
- (void)_updateAudiogramSamples:(id)a0 error:(id)a1;
- (void)_updateHeaderState;
- (void)_updateOverlayPillsAndHeaderWithSample:(id)a0;
- (void)contextView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (void)contextView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)graphCollectionView:(id)a0 didChangeVisibleIndex:(long long)a1;
- (id)graphSeriesForIndex:(long long)a0;
- (id)graphViewControllerForIndex:(long long)a0;
- (id)headerViewForLollipop;
- (id)initWithUnitController:(id)a0 sampleTypeUpdateController:(id)a1 minimumAudiogramHeight:(double)a2;
- (id)lollipopAnnotationColor;
- (id)lollipopControllerForGraphCollectionView;
- (double)lollipopExtensionLength;
- (id)lollipopFieldColor;
- (void)queryForAudiogramsUsingHealthStore:(id)a0;
- (BOOL)shouldScrollToSample:(id)a0;
- (void)updateAnnotationDataSource:(id)a0 pointContexts:(id)a1;
- (void)updateController:(id)a0 didReceiveHighFrequencyUpdateForType:(id)a1;
- (void)updateController:(id)a0 didReceiveUpdateForType:(id)a1 samplesAdded:(id)a2 objectsRemoved:(id)a3 recoveringFromError:(BOOL)a4;

@end

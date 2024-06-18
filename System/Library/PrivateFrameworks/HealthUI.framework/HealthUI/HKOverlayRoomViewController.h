@class HKDisplayTypeSectionedContextView, NSUserActivity, NSDate, NSObject, HKValueRange, NSString, UISegmentedControl, HKOverlayRoomApplicationItems, HKDisplayType, NSDateInterval, NSArray, HKOverlayContextLocation, HKInteractiveChartOverlayViewController;
@protocol OS_dispatch_queue, HKOverlayRoomViewControllerLayoutDelegate;

@interface HKOverlayRoomViewController : HKViewController <HKDisplayTypeSectionedContextViewDelegate, HKInteractiveChartViewObserver, HKSampleTypeUpdateControllerObserver, HKChartOverlayVersionProviding, HKCurrentOverlayLocationProviding, HKSampleTypeDateRangeControllerObserver>

@property (retain, nonatomic) HKOverlayRoomApplicationItems *applicationItems;
@property (nonatomic) long long currentChartTimeScope;
@property (copy, nonatomic) NSDateInterval *currentChartDateInterval;
@property (retain, nonatomic) HKOverlayContextLocation *currentSelectedContextLocation;
@property (nonatomic) long long controllerMode;
@property (retain, nonatomic) HKInteractiveChartOverlayViewController *chartController;
@property (retain, nonatomic) HKDisplayTypeSectionedContextView *sectionedContextView;
@property (nonatomic) BOOL userHasOverriddenPreferredOverlay;
@property (retain, nonatomic) HKDisplayType *primaryDisplayType;
@property (retain, nonatomic) NSArray *overlayContextSectionContainers;
@property (retain, nonatomic) HKOverlayContextLocation *initialSelectedContextLocation;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *contextUpdateQueue;
@property (nonatomic) BOOL showAllFiltersVisible;
@property (retain, nonatomic) NSUserActivity *showAllFiltersActivity;
@property (retain, nonatomic) HKOverlayContextLocation *restorationContextLocation;
@property (retain, nonatomic) UISegmentedControl *segmentedControl;
@property (readonly, copy, nonatomic) NSDate *displayDate;
@property (nonatomic) BOOL shouldSelectInitialOverlay;
@property (retain, nonatomic) HKValueRange *initialVisibleDateRange;
@property (weak, nonatomic) id<HKOverlayRoomViewControllerLayoutDelegate> layoutDelegate;
@property (readonly, nonatomic) NSUserActivity *restorationUserActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *chartOverlayVersion;

- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_currentIndexPath;
- (void)restoreUserActivityState:(id)a0;
- (id)_segmentedControlTitles;
- (id)contextSectionContainersForMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2;
- (id)controllerTitleWithApplicationItems:(id)a0;
- (id)createChartOverlayViewController;
- (id)createViewControllerForMode:(long long)a0 displayDate:(id)a1 applicationItems:(id)a2;
- (void)didUpdateFromDateZoom:(long long)a0 toDateZoom:(long long)a1 newVisibleRange:(id)a2;
- (void)didUpdateSeriesWithNewValueRange:(id)a0;
- (void)didUpdateVisibleValueRange:(id)a0 changeContext:(long long)a1;
- (id)initWithDisplayDate:(id)a0 applicationItems:(id)a1 mode:(long long)a2;
- (id)primaryDisplayTypeWithApplicationItems:(id)a0;
- (BOOL)supportsShowAllFilters;
- (void)_setupInterface;
- (void)contextViewDidInvalidateLayout:(id)a0;
- (void)_showAllFilters;
- (void)_callPrepareOnOverlayContexts;
- (BOOL)_canSelectOverlayLocation:(id)a0 previousSelection:(id)a1;
- (long long)_contextItemCount;
- (id)_contextViewBackgroundColor;
- (id)_currentChartEffectiveVisibleRange;
- (BOOL)_currentSelectedContextValidForTimeScope:(long long)a0;
- (void)_didPresentShowAllFilters;
- (void)_enumerateContextItemsWithBlock:(id /* block */)a0;
- (id)_findNavigationController;
- (void)_invalidateContextItems;
- (void)_layoutNoVerticalExpansion:(id)a0;
- (void)_pinView:(id)a0 toSafeAreaOf:(id)a1;
- (void)_refreshContextItemsAndUpdateChart:(BOOL)a0;
- (void)_refreshUpdatedItemsWithChartUpdate:(BOOL)a0 invalidateChartItems:(BOOL)a1;
- (void)_selectContextItemAtLocation:(id)a0 animated:(BOOL)a1;
- (void)_selectPreferredItem;
- (void)_setupOverlayContainers;
- (void)_setupOverlayContextItems;
- (void)_setupPrimaryDisplayType;
- (id)_setupSegmentedControl;
- (BOOL)_shouldUpdateContextItemsForChanges:(id)a0;
- (void)_showAllFilters:(id)a0;
- (void)_unselectCurrentContext;
- (void)_updateChartForOverlaySelection:(id)a0 previousSelection:(id)a1;
- (void)_updateContextTiles;
- (void)_willPresentShowAllFilters;
- (BOOL)contextView:(id)a0 canSelectItemAtIndexPath:(id)a1;
- (void)contextView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (void)contextView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)didChangeFromContextItem:(id)a0 toContextItem:(id)a1;
- (void)fetchContextItemsIfNeededWithDateInterval:(id)a0 completion:(id /* block */)a1;
- (long long)initialSelectedContainerIndexForMode:(long long)a0;
- (id)initialSelectedContextForMode:(long long)a0 containerIndex:(long long)a1;
- (void)refreshOverlayContextItems;
- (void)reloadOverlayContextItems;
- (id)restorationStateDictionary;
- (void)sampleTypeDateRangeController:(id)a0 didUpdateDateRanges:(id)a1;
- (void)saveRestorationState;
- (long long)segmentedControlSelectedIndex;
- (void)segmentedControlValueChanged:(id)a0;
- (id)selectedContextLocation;
- (void)setRestorationUserActivity:(id)a0;
- (void)setSegmentedControlSelectedIndex:(unsigned long long)a0;
- (id)showAllFiltersButtonTitle;
- (void)updateController:(id)a0 didReceiveHighFrequencyUpdateForType:(id)a1;
- (void)updateController:(id)a0 didReceiveUpdateForType:(id)a1 samplesAdded:(id)a2 objectsRemoved:(id)a3 recoveringFromError:(BOOL)a4;

@end
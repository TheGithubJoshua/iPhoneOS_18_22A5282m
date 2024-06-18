@class NSString, NSDictionary, HKDisplayType, HKInteractiveChartDataFormatter, HKChartSummaryTrendModel, HKOverlayContextLocation;
@protocol HKSleepDataSourceProvider;

@interface HKOverlayRoomSleepViewController : HKOverlayRoomViewController <HKCurrentValueViewDataSourceDelegate, HKOverlaySleepRoomContextChangeDelegate, HKOverlayRoomTrendModelProviding>

@property (weak, nonatomic) id<HKSleepDataSourceProvider> sleepDataSourceProvider;
@property (retain, nonatomic) HKInteractiveChartDataFormatter *sleepChartFormatter;
@property (retain, nonatomic) HKDisplayType *sleepDisplayType;
@property (retain, nonatomic) NSDictionary *sleepChartCaches;
@property (readonly, nonatomic) HKChartSummaryTrendModel *trendModel;
@property (retain, nonatomic) HKOverlayContextLocation *trendContextLocation;
@property (retain, nonatomic) HKOverlayContextLocation *comparisonContextLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL durationContextSelected;
@property (nonatomic) BOOL scheduleContextSelected;
@property (nonatomic) BOOL comparisonContextSelected;
@property (nonatomic) BOOL baseDisplayIsSchedule;
@property (nonatomic) BOOL shouldHighlightBaseDisplayContext;
@property (nonatomic) BOOL stageDurationContextSelected;
@property (nonatomic) BOOL stagePercentageContextSelected;
@property (nonatomic) BOOL stagePercentageContextWillBeSelected;

+ (long long)indexForOverlaySleepRoomSegment:(long long)a0;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)dealloc;
- (void)restoreUserActivityState:(id)a0;
- (id)contextSectionContainersForMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2;
- (id)controllerTitleWithApplicationItems:(id)a0;
- (id)createChartOverlayViewController;
- (id)createViewControllerForMode:(long long)a0 displayDate:(id)a1 applicationItems:(id)a2;
- (id)dateRangeFromSelectionContext:(id)a0 timeScope:(long long)a1;
- (BOOL)infographicSupportedForDisplayType:(id)a0 healthStore:(id)a1;
- (id)infographicViewControllerForDisplayType:(id)a0 healthStore:(id)a1;
- (id)primaryDisplayTypeWithApplicationItems:(id)a0;
- (id)stringForValueRange:(id)a0 timeScope:(long long)a1;
- (BOOL)supportsShowAllFilters;
- (id)titleForSelectedRangeData:(id)a0 displayType:(id)a1;
- (id)_buildConsistencyDisplayTypeWithApplicationItems:(id)a0;
- (id)_buildDurationAverageDisplayTypeWithApplicationItems:(id)a0 customSleepSeriesMapping:(id)a1 customSleepChartFormatter:(id)a2;
- (id)_buildDurationAverageFormatter;
- (id)_buildDurationAverageSeries;
- (id)_buildDurationDisplayTypeForStackedWithApplicationItems:(id)a0;
- (id)_buildDurationDisplayTypeWithApplicationItems:(id)a0;
- (id)_buildDurationGoalDisplayTypeWithApplicationItems:(id)a0;
- (id)_buildScheduleDisplayTypeWithApplicationItems:(id)a0;
- (id)_buildSleepDisplayTypeWithApplicationItems:(id)a0 sleepSeriesType:(long long)a1 customSleepSeriesMapping:(id)a2 customSleepChartFormatter:(id)a3 isStackedChart:(BOOL)a4;
- (id)_buildSleepTrendContext:(id)a0 overlayChartController:(id)a1;
- (id)_buildStagesDisplayTypeWithApplicationItems:(id)a0;
- (id)_buildStagesDurationDisplayTypeWithApplicationItems:(id)a0;
- (id)_consistencyContextForApplicationItems:(id)a0 overlayMode:(long long)a1 isPrimaryContext:(BOOL)a2;
- (id)_durationAmountContextForApplicationItems:(id)a0 durationDisplayType:(id)a1;
- (id)_durationAverageContextForApplicationItems:(id)a0 durationDisplayType:(id)a1 useInBedAverage:(BOOL)a2;
- (id)_durationGoalContextForApplicationItems:(id)a0 durationDisplayType:(id)a1 overlayMode:(long long)a2 isPrimaryContext:(BOOL)a3;
- (id)_fullContextsForApplicationItems:(id)a0 overlayChartController:(id)a1;
- (BOOL)_initialTrendSelectedForMode:(long long)a0 trendModel:(id)a1;
- (void)_installUpdateObserversForGoalsAndSchedulesWithApplicationItems:(id)a0;
- (id)_itemForSleepStageInfographicWithStage:(long long)a0;
- (id)_itemForTitle:(id)a0 titleAccessoryColor:(id)a1 description:(id)a2;
- (id)_primaryContextForApplicationItems:(id)a0 overlayChartController:(id)a1;
- (void)_setDefaultChartFormatterFonts;
- (id)_sleepColorForSelectedRangeData:(id)a0;
- (id)_sleepStagePercentageContextForStage:(long long)a0 applicationItems:(id)a1 baseDisplayType:(id)a2;
- (id)_stageDurationContextForApplicationItems:(id)a0 baseDisplayType:(id)a1 sleepCategoryValue:(long long)a2;
- (void)_updateHighlightedSleepStage:(long long)a0 onDisplayType:(id)a1;
- (void)didChangeFromContextItem:(id)a0 toContextItem:(id)a1;
- (id)getChartSummaryTrendModelToModify;
- (id)initWithDisplayDate:(id)a0 applicationItems:(id)a1 sleepDataSourceProvider:(id)a2 sleepChartFormatter:(id)a3 mode:(long long)a4 trendModel:(id)a5;
- (long long)initialSelectedContainerIndexForMode:(long long)a0;
- (id)initialSelectedContextForMode:(long long)a0 containerIndex:(long long)a1;
- (long long)initialSleepSeriesType;
- (id)restorationStateDictionary;
- (void)saveRestorationState;
- (void)setBaseDisplayIsDuration;
- (void)setBaseDisplayIsSchedule;
- (void)setShouldHighlightBaseDisplayContext;

@end
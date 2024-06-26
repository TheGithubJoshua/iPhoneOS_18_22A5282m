@class HRAtrialFibrillationOnboardingManager, NSDate, UITapGestureRecognizer, NSArray, HKKeyValueDomain, HKFeatureStatusManager, HKDisplayType, NSString, WDProfile, HKFeatureStatus;
@protocol WDDataListViewControllerDataProvider, HKDataMetadataSectionProtocol;

@interface WDAtrialFibrillationEventOverviewViewController : HKTableViewController <HRAtrialFibrillationOnboardingManagerDelegate, UITextViewDelegate, HKOnboardingSetupViewDelegate, HKFeatureStatusProvidingObserver>

@property (nonatomic) BOOL firstViewDidLayoutSubviews;
@property (retain, nonatomic) HKDisplayType *displayType;
@property (retain, nonatomic) WDProfile *profile;
@property (readonly, nonatomic) long long mode;
@property (retain, nonatomic) HRAtrialFibrillationOnboardingManager *onboardingManager;
@property (retain, nonatomic) HKKeyValueDomain *keyValueDomain;
@property (retain, nonatomic) HKFeatureStatusManager *statusManager;
@property (nonatomic) long long detectionState;
@property (retain, nonatomic) UITapGestureRecognizer *tripleTapToSettingsRecognizer;
@property (retain, nonatomic) HKFeatureStatus *featureStatus;
@property (retain, nonatomic) NSArray *sectionsToDisplay;
@property (retain, nonatomic) id<HKDataMetadataSectionProtocol> metaDataSection;
@property (retain, nonatomic) NSDate *latestAnalyzedSampleDate;
@property (nonatomic) long long visibleSampleCount;
@property (nonatomic, getter=isFavorited) BOOL favorited;
@property (retain, nonatomic) id<WDDataListViewControllerDataProvider> dataProvider;
@property (nonatomic) long long totalSampleCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)featureStatusProviding:(id)a0 didUpdateFeatureStatus:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (long long)_sectionIndexForSection:(long long)a0;
- (void)beginOnboardingForOnboardingSetupView:(id)a0;
- (void)didCompleteOnboarding;
- (void)didDismissOnboarding;
- (void)didEnableAtrialFibrillationNotifications;
- (id)_cellForShowAll;
- (id)_atrialFibrillationDetectionRescindedHeaderView;
- (id)_atrialFibrillationSetupContainerView;
- (id)_cellForAFibEducationalMaterialInTable:(id)a0 atIndex:(long long)a1;
- (id)_cellForAFibEventInTable:(id)a0 atIndexPath:(id)a1;
- (id)_cellForDataSourcesAndAccess;
- (id)_cellForDataTypeDescription;
- (id)_cellForFavorites;
- (id)_cellForIRN2ConsentForm;
- (id)_cellForRegulatory;
- (void)_getLatestAnalyzedSampleDate;
- (BOOL)_hasDetailViewController;
- (id)_pushDataSourcesAndAccessController;
- (id)_pushShowAllViewController;
- (void)_reloadAllData;
- (void)_reloadAtrialFibrillationSetupTableHeaderView;
- (void)_reloadTableViewAndScrollToTop;
- (id)_sectionHeaderViewWithTitle:(id)a0;
- (void)_showInternalSettingsViewController;
- (void)_startOnboardingForFirstTime:(BOOL)a0;
- (void)_updateDetectionState;
- (double)adjustedSafeAreaInsetTop;
- (void)didSelectRegulatoryRow;
- (void)featureStatusCellTappedAtIndexPath:(id)a0;
- (id)featureStatusCells;
- (id)featureStatusFooterView;
- (id)initWithDisplayType:(id)a0 profile:(id)a1 mode:(long long)a2;
- (void)launchOnboardingToReenableFeature;
- (id)makeInternalSettingsControllerWithHealthStore:(id)a0;
- (void)recomputeTotalSampleCount;
- (void)reloadFavoritesSection;
- (void)reloadFeatureStatusSection;
- (id)userConfigurationRowsToDisplay;

@end

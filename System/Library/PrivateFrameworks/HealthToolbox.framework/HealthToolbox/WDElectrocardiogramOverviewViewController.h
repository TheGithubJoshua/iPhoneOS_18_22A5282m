@class HRElectrocardiogramOnboardingManager, UITapGestureRecognizer, NSString, HKElectrocardiogramMoreHealthDataProvider, HKFeatureStatusManager, HKDisplayType, WDElectrocardiogramFilterDataProvider, WDProfile, HKFeatureStatus, WDElectrocardiogramListDataProvider, NSNumber;
@protocol HKDataMetadataSectionProtocol;

@interface WDElectrocardiogramOverviewViewController : HKTableViewController <HRFeatureRegulatoryReenableFeatureActionDelegate, HRElectrocardiogramOnboardingManagerDelegate, WDElectrocardiogramFilterDataProviderDelegate, HKOnboardingSetupViewDelegate, HKFeatureStatusProvidingObserver>

@property (nonatomic) BOOL firstViewDidLayoutSubviews;
@property (retain, nonatomic) HKDisplayType *displayType;
@property (weak, nonatomic) WDProfile *profile;
@property (readonly, nonatomic) long long mode;
@property (retain, nonatomic) WDElectrocardiogramListDataProvider *dataProvider;
@property (retain, nonatomic) HRElectrocardiogramOnboardingManager *onboardingManager;
@property (retain, nonatomic) WDElectrocardiogramFilterDataProvider *filterDataProvider;
@property (retain, nonatomic) HKElectrocardiogramMoreHealthDataProvider *moreHealthDataProvider;
@property (retain, nonatomic) HKFeatureStatusManager *featureStatusManager;
@property (retain, nonatomic) HKFeatureStatus *featureStatus;
@property (retain, nonatomic) id<HKDataMetadataSectionProtocol> educationSection;
@property (retain, nonatomic) UITapGestureRecognizer *tripleTapToSettingsRecognizer;
@property (nonatomic) BOOL displayAboutRowBeforeOnboarding;
@property (nonatomic) NSNumber *availabilityStateCache;
@property (nonatomic, getter=isFavorited) BOOL favorited;
@property (nonatomic) long long placeholderCellCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)availabilityState;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)featureStatusProviding:(id)a0 didUpdateFeatureStatus:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (struct WDElectrocardiogramOverviewSectionInfo { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; })sectionInfo;
- (void)showInternalSettings;
- (void)beginOnboardingForOnboardingSetupView:(id)a0;
- (void)didCompleteOnboarding;
- (void)didDismissOnboarding;
- (void)didSelectReenableFeatureForProductName:(id)a0;
- (void)didTapOnElectrocardiogram:(id)a0;
- (long long)_availabilityStateToShowInSetupTableHeaderView;
- (id)_cellForDataSourcesAndAccess;
- (id)_cellForDescription;
- (id)_cellForFavorites;
- (id)_cellForRegulatoryPane;
- (id)_cellForSampleAtIndex:(long long)a0 section:(long long)a1;
- (id)_cellWithDisclosureIndicatorAndText:(id)a0 value:(id)a1;
- (id)_dataListViewControllerForSummaryData;
- (id)_dataListViewControllerWithFilterType:(long long)a0;
- (long long)_electrocardiogramRecordingRescindedStatus;
- (id)_electrocardiogramSetupContainerViewWithUpgrade:(BOOL)a0;
- (long long)_filterTypeForDataSectionRow:(long long)a0;
- (BOOL)_isElectrocardiogramRecordingAgeGated;
- (id)_recordingRescindedHeaderView;
- (void)_reloadAllSections;
- (void)_reloadElectrocardiogramSetupTableHeaderView;
- (void)_reloadMoreHealthSectionWithAnimation:(BOOL)a0;
- (void)_reloadTableViewAndScrollToTop;
- (void)_removeUpgradeTileNotProminentIfNeeded;
- (id)_sectionHeaderViewWithTitle:(id)a0;
- (void)_setTableHeaderViewWithUpgradeView:(BOOL)a0;
- (BOOL)_shouldDisplayAboutRowBeforeOnboarding;
- (id)_showAllResultsCellForType:(long long)a0;
- (id)_showAllResultsForSummarySharingProfile;
- (void)_showDataSourcesAndAccessController;
- (BOOL)_showUpgradeTileInProminentPosition;
- (void)_showUpgradeTileNotProminent;
- (void)_startOnboardingForFirstTime:(BOOL)a0;
- (void)_startUpgrade;
- (BOOL)_userLocaleOnlySupportsECG1;
- (double)adjustedSafeAreaInsetTop;
- (id)createDataProviderWithDisplayType:(id)a0 profile:(id)a1 mode:(long long)a2;
- (void)electrocardiogramFilterDataProvider:(id)a0 didUpdateCount:(long long)a1 type:(long long)a2;
- (id)initWithDisplayType:(id)a0 profile:(id)a1 mode:(long long)a2;
- (void)reloadFavoritesSection;
- (BOOL)shouldShowRecordingRescindedHeader;
- (struct WDElectrocardiogramOverviewUserConfigurationRowInfo { long long x0; long long x1; long long x2; })userConfigurationRowInfo;

@end

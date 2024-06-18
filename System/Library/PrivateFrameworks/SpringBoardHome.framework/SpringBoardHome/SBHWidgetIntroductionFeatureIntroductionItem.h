@class NSString, SBHomeScreenDefaults, NSMutableDictionary, NSDictionary, SBModalWidgetIntroductionViewController, NSMutableArray, SBHTrialClientManager, SBHIconManager;

@interface SBHWidgetIntroductionFeatureIntroductionItem : SBHFeatureIntroductionItem <SBHFeatureIntroductionProviding>

@property (retain, nonatomic) SBHTrialClientManager *trialClientManager;
@property (readonly, nonatomic) SBHomeScreenDefaults *homeScreenDefaults;
@property (nonatomic) BOOL shouldDisplayWidgetIntroduction;
@property (nonatomic) BOOL widgetDiscoverabilityIsRunning;
@property (weak, nonatomic) SBHIconManager *iconManager;
@property (retain, nonatomic) NSMutableArray *defaultWidgetsIconsRestoringRecordOriginalIndex;
@property (retain, nonatomic) NSMutableArray *defaultWidgetsBumpedIconUsageRanking;
@property (retain, nonatomic) NSMutableDictionary *defaultWidgetsIconsRestoringRecord;
@property (nonatomic) BOOL stopUpdatingDefaultWidgetsBumpedIconRecord;
@property (nonatomic) BOOL isVerticalWidgetIntroduction;
@property (nonatomic) BOOL forceShowWidgetIntroduction;
@property (retain, nonatomic) SBModalWidgetIntroductionViewController *modalIntroductionViewController;
@property (copy, nonatomic) NSDictionary *originalIconStateBeforeWidgetDiscoverability;
@property (readonly, nonatomic) NSString *featureIntroductionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldDeferAlertsAtLocations:(unsigned long long)a0;
- (id)init;
- (BOOL)widgetDiscoverabilityServerSideEnabled;
- (void)immediateDownloadSpringBoardHomeTrialSettingsWhenNeeded;
- (void)prewarmModalWidgetIntroductionViewController;
- (BOOL)shouldSetupFeatureIntroductionAtLocations:(unsigned long long)a0;
- (BOOL)shouldDisplayFeatureIntroductionAtLocations:(unsigned long long)a0;
- (id)prewarmModalWidgetIntroductionWithCompletion:(id /* block */)a0;
- (BOOL)shouldPauseUserInteractionAtLocations:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)resetDefaultWidgetsUndoInfo;
- (void)animateModalWidgetDiscoverabilityIntroductionWhenNeededWithPresentCompletion:(id /* block */)a0 dismissCompletion:(id /* block */)a1;
- (BOOL)overrideShouldAddDefaultWidgetsToHomeScreenWhenNeeded;
- (void)displayFeatureIntroductionAtLocations:(unsigned long long)a0 presentCompletion:(id /* block */)a1 dismissCompletion:(id /* block */)a2;
- (id)defaultWidgetsIconsRestoringRecordKeyForIcon:(id)a0;
- (void)setupFeatureIntroductionAtLocations:(unsigned long long)a0;
- (BOOL)deviceTypeSupportModalWidgetIntroduction;

@end

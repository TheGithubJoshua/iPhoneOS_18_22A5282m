@class ATXDigitalHealthBlacklist, _ATXRecentInstallCache, ATXAppPredictionBlacklist;

@interface ATXCandidateRelevanceModelConfigApp : ATXCandidateRelevanceModelConfig

@property (retain, nonatomic) ATXAppPredictionBlacklist *appBlacklist;
@property (retain, nonatomic) ATXDigitalHealthBlacklist *appDigitalHealthBlacklist;
@property (retain, nonatomic) _ATXRecentInstallCache *recentInstallCache;

- (id)heuristicSuggestionsForContext:(id)a0 currentSuggestionExecutableIds:(id)a1;
- (id)init;
- (id)appInstallAgesForAppsWithExcludedApps:(id)a0 appInfoManager:(id)a1;
- (BOOL)candidateIsStillValidToSuggest:(id)a0;
- (id)recentlyLaunchedAppsFromAppLaunchAges:(id)a0;
- (id)datasetGenerator;
- (BOOL)bundleIdIsEnabledForPrediction:(id)a0;
- (id)proactiveSuggestionForBundleId:(id)a0 prediction:(float)a1;
- (void).cxx_destruct;
- (id)recentlyInstalledAndNotLaunchedAppsFromAppInfoManager:(id)a0 currentSuggestionExecutableIds:(id)a1 launchedApps:(id)a2;
- (id)candidatePublisherFromStartTime:(double)a0;
- (id)proactiveSuggestionForCandidate:(id)a0 prediction:(float)a1;
- (id)heuristicSuggestionsForContext:(id)a0 currentSuggestionExecutableIds:(id)a1 appInfoManager:(id)a2;

@end

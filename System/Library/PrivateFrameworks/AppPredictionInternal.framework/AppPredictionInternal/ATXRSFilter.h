@class ATXHomeScreenConfigCache, _ATXAppLaunchHistogramManager;

@interface ATXRSFilter : NSObject {
    ATXHomeScreenConfigCache *_homeScreenConfigCache;
    _ATXAppLaunchHistogramManager *_appLaunchHistogramManager;
}

- (id)init;
- (id)filterCandidatesBySuggestionRequirements:(id)a0;
- (id)initWithHomeScreenConfigCache:(id)a0 appLaunchHistogramManager:(id)a1;
- (void).cxx_destruct;
- (id)_filterCandidates_widgetExistsOnScreen:(id)a0;
- (id)_filterCandidates_trendingAppLaunchPopularity:(id)a0;

@end

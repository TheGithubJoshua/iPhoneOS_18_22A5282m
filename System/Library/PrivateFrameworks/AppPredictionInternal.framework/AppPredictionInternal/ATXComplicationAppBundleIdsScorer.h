@class ATXWatchFaceConfigurationCollector, ATXComplicationSuggestionParameters, BMAppLaunchStream, ATXHomeScreenConfigCache;

@interface ATXComplicationAppBundleIdsScorer : NSObject {
    BMAppLaunchStream *_appLaunchStream;
    ATXComplicationSuggestionParameters *_parameters;
    ATXHomeScreenConfigCache *_hsCache;
    ATXWatchFaceConfigurationCollector *_watchFaceConfiguration;
}

- (id)init;
- (id)scoredComplicationBundleIdsForModularSet:(id)a0;
- (void).cxx_destruct;
- (id)_scoredComplicationBundleIdsForModularSet:(id)a0 bundleIdToAppLaunchData:(id)a1 bundleIdToPriors:(id)a2 widgetAppBundleIdsOnHomeScreen:(id)a3 complicationBundleIdCountsOnWatch:(id)a4;
- (id)_widgetAppBundleIdsOnHomeScreen;
- (id)rankedComplicationAppBundleIdsGivenComplicationAppBundleIds:(id)a0 bundleIdToAppLaunchData:(id)a1 bundleIdToPriors:(id)a2 widgetAppBundleIdsOnHomeScreen:(id)a3;
- (id)inputDescriptionForSignal:(id)a0 complicationAppBundleIds:(id)a1;

@end

@class WGWidgetDiscoveryController, NCLaunchStats;

@interface WGWidgetStatsController : NSObject

@property (readonly, nonatomic) NCLaunchStats *launchStats;
@property (readonly, weak, nonatomic) WGWidgetDiscoveryController *discoveryController;
@property (nonatomic) BOOL bootstrapFavoriteWidgets;

- (void)requestRefreshForWidget:(id)a0 afterDate:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_favoriteWidgetIdentifiersDidUpdate:(id)a0;
- (void)_setupLaunchStats;
- (void)_teardownLaunchStats;
- (void)_updateFavoriteWidgetIdentifiers;
- (id)initWithDiscoveryController:(id)a0;
- (void)launchStats:(id)a0 incomingRecommendationForBundleIDs:(id)a1 completion:(id /* block */)a2;
- (void)notePreWarmHasEnded:(id)a0 withResult:(long long)a1 withTriggerType:(int)a2 withSequence:(unsigned long long)a3;
- (void)notePreWarmHasStarted:(id)a0 withTriggerType:(int)a1 withSequence:(unsigned long long)a2;
- (void)registerWidgetForPredictionEvents:(id)a0;
- (void)unregisterWidgetForPredictionEvents:(id)a0;

@end

@protocol SBSWidgetMetricsProviding;

@interface SBSWidgetMetricsService : NSObject

@property (readonly, weak, nonatomic) id<SBSWidgetMetricsProviding> metricsProvider;

- (id)init;
- (id)previewMetricsSpecificationForDeviceContext:(id)a0 displayContext:(id)a1 bundleIdentifier:(id)a2;
- (id)metricsForLiveActivities;
- (id)previewMetricsSpecificationForBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)systemMetricsForWidget:(id)a0;
- (id)initWithMetricsProvider:(id)a0;

@end

@class NSMutableDictionary, NSMutableSet;

@interface REMLMetricsSet : NSObject <REMLMetricsProvider> {
    NSMutableDictionary *metricsIndex;
    NSMutableSet *metricsSet;
}

- (id)init;
- (id)name;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)addMetrics:(id)a0;
- (id)getMetricsByName:(id)a0;
- (void)updateMetricsFromFeatures:(id)a0 prediction:(id)a1 truth:(id)a2;

@end

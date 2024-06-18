@class _ATXCoreAnalyticsDimensionSet;

@interface _ATXCoreAnalyticsMetric : NSObject

@property (readonly, nonatomic) _ATXCoreAnalyticsDimensionSet *dimensionSet;

- (id)metricName;
- (id)init;
- (id)initWithDimensions:(id)a0;
- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;
- (void)logToCoreAnalytics;
- (id)coreAnalyticsDictionaryWithDimensions;

@end

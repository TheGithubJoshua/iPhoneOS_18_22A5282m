@class NSString;

@interface ATXSuggestedPagesHomeScreenModificationsMetrics : NSObject

@property (copy, nonatomic) NSString *suggestedPageType;
@property (copy, nonatomic) NSString *eventType;
@property (copy, nonatomic) NSString *widgetBundleId;
@property (copy, nonatomic) NSString *widgetKind;
@property (copy, nonatomic) NSString *appBundleId;
@property (copy, nonatomic) NSString *widgetSize;
@property (nonatomic) BOOL isSuggestedWidget;
@property (nonatomic) int source;

- (id)metricName;
- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;
- (id)description;
- (void)logToCoreAnalytics;
- (id)metricsSourceToStringWithSource:(int)a0;

@end

@class NSString;

@interface ATXHomeScreenFocusSuggestionMetrics : _ATXCoreAnalyticsMetric

@property (copy, nonatomic) NSString *modeSemanticType;
@property (nonatomic) long long outcome;

- (id)metricName;
- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;
- (id)description;
- (id)outcomeToString:(long long)a0;
- (unsigned long long)cappedForPrivacyWithValue:(long long)a0;

@end

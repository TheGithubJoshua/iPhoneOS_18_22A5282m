@class NSString;

@interface ATXModeSetupExperienceMetrics : NSObject

@property (copy, nonatomic) NSString *modeSemanticType;
@property (nonatomic) long long onboardingOutcome;

- (id)metricName;
- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;
- (id)description;
- (id)outcomeToString:(long long)a0;
- (void)sendToCoreAnalytics;

@end

@class NSDictionary;

@interface HAMenstrualAlgorithmsDeviation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int julianDayOfAnalysisWindowStart;
@property (nonatomic) unsigned int julianDayOfAnalysisWindowEnd;
@property (copy, nonatomic) NSDictionary *metricsForCoreAnalytics;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end

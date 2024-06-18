@class NSString, NSDictionary;

@interface HKMCScheduledAnalysisMetric : NSObject

@property (class, readonly, nonatomic) NSString *eventName;

@property (copy, nonatomic) NSDictionary *eventPayload;
@property (nonatomic) long long timeSuccessful;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTimeSuccessful:(long long)a0;

@end

@class CTSweetgumUsagePlanItemVoice, NSString, CTSweetgumUsagePlanItemData, NSDate, CTSweetgumUsagePlanItemMessages;

@interface CTSweetgumUsagePlanMetrics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *planLabel;
@property (nonatomic) long long planCategory;
@property (nonatomic) BOOL currentUsedPlan;
@property (retain, nonatomic) CTSweetgumUsagePlanItemData *dataUsage;
@property (retain, nonatomic) CTSweetgumUsagePlanItemMessages *messages;
@property (retain, nonatomic) CTSweetgumUsagePlanItemVoice *voice;
@property (retain, nonatomic) NSString *remainingBalance;
@property (nonatomic) BOOL throttled;
@property (retain, nonatomic) NSDate *lastUpdatedAt;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
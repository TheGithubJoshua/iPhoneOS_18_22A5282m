@class NSString, NSArray, NSDate;

@interface CTCarrierSpaceUsageAccountMetrics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *networkUsageLabel;
@property (nonatomic) long long deviceType;
@property (nonatomic) BOOL localDevice;
@property (retain, nonatomic) NSString *subscriptionStatus;
@property (retain, nonatomic) NSString *planType;
@property (retain, nonatomic) NSDate *billingCycleEndDate;
@property (retain, nonatomic) NSArray *applicablePlans;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end

@class PKPayLaterFinancingPlanFundingSource;

@interface PKPayLaterUnavailablePassPaymentSource : PKPayLaterPaymentSource <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKPayLaterFinancingPlanFundingSource *fundingSource;

- (id)initWithCoder:(id)a0;
- (id)name;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)identifier;
- (unsigned long long)type;
- (id)initWithFundingSource:(id)a0;

@end

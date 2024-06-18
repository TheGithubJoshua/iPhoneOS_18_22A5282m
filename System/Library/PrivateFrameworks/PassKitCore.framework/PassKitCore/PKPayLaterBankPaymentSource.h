@class PKAccountPaymentFundingSource;

@interface PKPayLaterBankPaymentSource : PKPayLaterPaymentSource <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKAccountPaymentFundingSource *accountPaymentFundingSource;

- (id)initWithCoder:(id)a0;
- (id)name;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)identifier;
- (unsigned long long)type;
- (id)initWithAccountPaymentFundingSource:(id)a0;

@end

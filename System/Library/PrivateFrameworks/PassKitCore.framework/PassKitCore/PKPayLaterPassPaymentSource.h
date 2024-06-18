@class PKPaymentApplication, PKPaymentPass;

@interface PKPayLaterPassPaymentSource : PKPayLaterPaymentSource <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKPaymentPass *paymentPass;
@property (readonly, nonatomic) PKPaymentApplication *paymentApplication;

- (id)initWithCoder:(id)a0;
- (id)name;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)identifier;
- (unsigned long long)type;
- (id)initWithPaymentPass:(id)a0 paymentApplication:(id)a1;

@end

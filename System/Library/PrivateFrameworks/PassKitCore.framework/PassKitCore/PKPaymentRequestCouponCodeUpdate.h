@class NSArray;

@interface PKPaymentRequestCouponCodeUpdate : PKPaymentRequestUpdate <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *errors;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithErrors:(id)a0 paymentSummaryItems:(id)a1 shippingMethods:(id)a2;
- (id)initWithPaymentSummaryItems:(id)a0;

@end
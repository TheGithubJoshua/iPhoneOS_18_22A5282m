@class NSDecimalNumber, NSString, NSDate;

@interface STSPaymentRequestBase : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDecimalNumber *transactionAmount;
@property (retain, nonatomic) NSString *currencyCode;
@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSDate *transactionDate;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTransactionAmount:(id)a0 currencyCode:(id)a1 countryCode:(id)a2 transactionDate:(id)a3;

@end

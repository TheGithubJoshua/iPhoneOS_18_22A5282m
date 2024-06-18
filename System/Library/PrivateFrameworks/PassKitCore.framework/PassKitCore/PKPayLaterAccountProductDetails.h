@class PKCurrencyAmount, NSTimeZone;

@interface PKPayLaterAccountProductDetails : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSTimeZone *productTimeZone;
@property (retain, nonatomic) PKCurrencyAmount *minimumSinglePurchaseAmount;
@property (retain, nonatomic) PKCurrencyAmount *maximumSinglePurchaseAmount;
@property (retain, nonatomic) PKCurrencyAmount *currentBalance;
@property (retain, nonatomic) PKCurrencyAmount *totalFinanced;
@property (retain, nonatomic) PKCurrencyAmount *amountPaid;

- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

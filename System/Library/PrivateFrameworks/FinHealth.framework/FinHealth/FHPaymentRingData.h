@class NSDecimalNumber, NSDate;

@interface FHPaymentRingData : NSObject

@property (copy, nonatomic) NSDate *transactionDate;
@property (copy, nonatomic) NSDecimalNumber *transactionAmount;
@property (nonatomic) unsigned long long paymentAmountCategory;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithTransactionDate:(id)a0 transactionAmount:(id)a1 paymentAmountCategory:(unsigned long long)a2;

@end

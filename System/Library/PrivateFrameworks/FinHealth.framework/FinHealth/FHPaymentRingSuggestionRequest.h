@class NSDecimalNumber, NSArray, NSDictionary, FHStatementDetails;

@interface FHPaymentRingSuggestionRequest : NSObject

@property (retain, nonatomic) FHStatementDetails *currentStatement;
@property (retain, nonatomic) FHStatementDetails *previousStatement;
@property (retain, nonatomic) NSDecimalNumber *previousStatementPaymentsSum;
@property (retain, nonatomic) NSDecimalNumber *currentStatementPaymentsSum;
@property (retain, nonatomic) NSDecimalNumber *statementPurchasesSum;
@property (retain, nonatomic) NSDictionary *merchantCategoryTransactionSums;
@property (retain, nonatomic) NSArray *paymentDetails;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithcurrentStatement:(id)a0 previousStatement:(id)a1 previousStatementPaymentsSum:(id)a2 currentStatementPaymentsSum:(id)a3 statementPurchasesSum:(id)a4 merchantCategoryTransactionSums:(id)a5 paymentDetails:(id)a6;

@end

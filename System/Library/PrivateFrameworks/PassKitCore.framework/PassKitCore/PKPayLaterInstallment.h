@class NSString, NSArray, PKCurrencyAmount, NSDate;

@interface PKPayLaterInstallment : NSObject <NSSecureCoding, NSCopying> {
    NSDate *_payoffDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *installmentIdentifier;
@property (copy, nonatomic) NSString *planIdentifier;
@property (copy, nonatomic) NSArray *appliedPayments;
@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) PKCurrencyAmount *totalAmount;
@property (copy, nonatomic) PKCurrencyAmount *currentBalance;
@property (copy, nonatomic) NSDate *dueDate;
@property (nonatomic) long long interval;
@property (copy, nonatomic) NSArray *payments;

- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)amountPaid;
- (BOOL)isEqualToPayLaterInstallment:(id)a0;
- (BOOL)paymentIdentitiferContributedToInstallment:(id)a0;
- (id)payoffDate;

@end

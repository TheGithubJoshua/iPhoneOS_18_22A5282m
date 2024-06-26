@class NSDecimalNumber, NSString;

@interface PKCreditInstallmentPlanLineItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (retain, nonatomic) NSDecimalNumber *amount;
@property (nonatomic) unsigned long long duration;
@property (copy, nonatomic) NSString *itemDescription;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDecimalNumber *paymentsToDateAmount;

- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToInstallmentPlanLineItem:(id)a0;

@end

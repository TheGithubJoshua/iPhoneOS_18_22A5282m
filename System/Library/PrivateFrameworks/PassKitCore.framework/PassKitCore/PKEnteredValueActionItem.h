@class NSDecimalNumber, NSArray, NSString, NSDictionary;

@interface PKEnteredValueActionItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDecimalNumber *minLoadAmount;
@property (readonly, copy, nonatomic) NSDecimalNumber *maxLoadAmount;
@property (readonly, copy, nonatomic) NSDecimalNumber *minLoadedBalance;
@property (readonly, copy, nonatomic) NSDecimalNumber *maxLoadedBalance;
@property (readonly, copy, nonatomic) NSArray *defaultSuggestions;
@property (readonly, copy, nonatomic) NSArray *lowBalanceReminderOptions;
@property (readonly, nonatomic) BOOL maxAmountIncludesLocalBalance;
@property (readonly, copy, nonatomic) NSString *currency;
@property (readonly, copy, nonatomic) NSDictionary *serviceProviderData;
@property (readonly, copy, nonatomic) NSDecimalNumber *minAmount;
@property (readonly, copy, nonatomic) NSDecimalNumber *maxAmount;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_processLocalizableStrings:(id /* block */)a0;

@end

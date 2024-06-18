@class NSDecimalNumber;

@interface FHPaymentRingSuggestionResponse : NSObject

@property (nonatomic) unsigned long long category;
@property (copy, nonatomic) NSDecimalNumber *amount;
@property (nonatomic) long long priority;
@property (nonatomic) long long merchantCategory;

+ (id)roundingAmount:(id)a0;

- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithAmount:(id)a0 category:(unsigned long long)a1;

@end

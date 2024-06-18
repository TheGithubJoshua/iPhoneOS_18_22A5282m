@class NSString;

@interface FHAmountAggregateFeature : FHAggregateFeature

@property (copy, nonatomic) NSString *comparator;
@property (nonatomic) unsigned long long amount;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithAmount:(unsigned long long)a0 comparator:(id)a1;

@end

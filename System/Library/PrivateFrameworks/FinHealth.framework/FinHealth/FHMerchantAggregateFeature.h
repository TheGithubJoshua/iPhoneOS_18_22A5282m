@class NSString;

@interface FHMerchantAggregateFeature : FHAggregateFeature

@property (copy, nonatomic) NSString *merchantID;
@property (copy, nonatomic) NSString *merchantDisplayName;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithMerchantID:(id)a0 merchantDisplayName:(id)a1;

@end

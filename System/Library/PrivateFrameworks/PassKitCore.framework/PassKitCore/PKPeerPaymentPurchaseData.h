@interface PKPeerPaymentPurchaseData : PKServiceProviderPurchaseData

@property (nonatomic) unsigned long long status;
@property (nonatomic) BOOL requiresInteraction;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isEqualToPKPeerPaymentPurchaseData:(id)a0;

@end

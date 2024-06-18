@class AMSDelegatePurchaseResult;

@interface CASStorePurchaseResponse : CASAuthenticationResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) AMSDelegatePurchaseResult *purchaseResult;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPurchaseResult:(id)a0;

@end

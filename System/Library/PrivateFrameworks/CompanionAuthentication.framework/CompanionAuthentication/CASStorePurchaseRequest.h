@class AMSDelegatePurchaseRequest, ACAccount;

@interface CASStorePurchaseRequest : CASAuthenticationRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AMSDelegatePurchaseRequest *purchaseRequest;
@property (retain, nonatomic) ACAccount *account;

- (id)initWithCoder:(id)a0;
- (long long)authType;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end

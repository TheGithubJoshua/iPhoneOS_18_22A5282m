@class NSString, AKAppleIDAuthenticationContext;

@interface AMSPurchaseSIWA : AMSPurchase <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AKAppleIDAuthenticationContext *authenticationContext;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *serviceID;
@property (copy, nonatomic) NSString *teamID;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)appProvidedData;
- (id)initWithPurchaseType:(long long)a0 buyParams:(id)a1;
- (id)authenticationContextForRequest:(id)a0;

@end

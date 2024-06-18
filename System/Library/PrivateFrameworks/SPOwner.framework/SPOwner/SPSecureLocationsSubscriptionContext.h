@class NSString, NSDictionary;

@interface SPSecureLocationsSubscriptionContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long subscriptionMode;
@property (copy, nonatomic) NSString *clientApp;
@property (nonatomic) long long fetchMode;
@property (retain, nonatomic) NSDictionary *pushIdentifiers;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

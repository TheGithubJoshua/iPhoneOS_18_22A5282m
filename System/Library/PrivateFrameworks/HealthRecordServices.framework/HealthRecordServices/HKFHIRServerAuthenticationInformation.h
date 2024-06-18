@class NSString;

@interface HKFHIRServerAuthenticationInformation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *clientID;
@property (readonly, copy, nonatomic) NSString *clientSecret;
@property (readonly, nonatomic) long long PKCEAlgorithm;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithClientID:(id)a0 clientSecret:(id)a1 PKCEAlgorithm:(long long)a2;

@end

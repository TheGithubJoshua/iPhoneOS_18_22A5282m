@class NSString, NSURL;

@interface PKIssuerBindingData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *sessionIdentifier;
@property (copy, nonatomic) NSString *createdKeyHash;
@property (copy, nonatomic) NSString *signedData;
@property (copy, nonatomic) NSURL *callbackURL;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isEqualToIssuerBindingData:(id)a0;

@end

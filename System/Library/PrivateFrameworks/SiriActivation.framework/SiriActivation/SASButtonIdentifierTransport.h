@class NSString;

@interface SASButtonIdentifierTransport : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;

- (id)initWithCoder:(id)a0;
- (id)initWithString:(id)a0;
- (long long)siriButtonIdentifier;
- (BOOL)_identifierMatchesSiriButtonIdentifier:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSiriButtonIdentifier:(long long)a0;

@end

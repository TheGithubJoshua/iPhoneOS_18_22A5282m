@class NSNumber;

@interface SiriPresentationIdentifierTransport : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *identifier;

- (id)initWithCoder:(id)a0;
- (long long)siriPresentationIdentifier;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSiriPresentationIdentifier:(long long)a0;

@end

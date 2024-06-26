@class NSData, NSNumber;

@interface SESLegacyKeySignResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *signature;
@property (retain, nonatomic) NSNumber *localValidationVerified;

+ (id)withSignature:(id)a0 localValidationVerified:(id)a1;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end

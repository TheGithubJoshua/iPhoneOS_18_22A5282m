@class NSData, NSUUID;

@interface CUPairingIdentity : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *altIRK;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSData *publicKey;
@property (copy, nonatomic) NSData *secretKey;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end

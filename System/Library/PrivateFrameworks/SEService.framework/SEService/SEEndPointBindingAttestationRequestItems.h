@class NSData;

@interface SEEndPointBindingAttestationRequestItems : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *subCAAttestation;
@property (retain, nonatomic) NSData *casdECDSACertificate;
@property (retain, nonatomic) NSData *casdRSACertificate;

+ (id)withSubCAAttestation:(id)a0 casdECDSACertificate:(id)a1 casdRSACertificate:(id)a2;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end

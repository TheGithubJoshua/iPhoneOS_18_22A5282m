@class NSString, NSData;

@interface SEEndPointPrivacyEncryptResponse : NSObject <NSSecureCoding, SEEndPointPrivacyEncryptResponse>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSData *cipherText;
@property (retain, nonatomic) NSData *ephemeralPublicKeydata;
@property (retain, nonatomic) NSData *receiverPublicKeyHash;

+ (id)responseWithCipherText:(id)a0 epehemeralPublicKeydata:(id)a1 receiverPublicKeyHash:(id)a2;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end

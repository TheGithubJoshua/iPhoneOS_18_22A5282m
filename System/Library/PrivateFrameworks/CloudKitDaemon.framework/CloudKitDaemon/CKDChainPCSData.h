@class CKEncryptedData;

@interface CKDChainPCSData : CKDPCSData <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CKEncryptedData *encryptedChainPCSPrivateKey;

- (id)initWithCoder:(id)a0;
- (id)initWithPCSData:(id)a0 encryptedPrivateKey:(id)a1;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end

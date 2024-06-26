@class EMCertificateTrustInformation, NSError;

@interface EMMessageSigner : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) EMCertificateTrustInformation *signingCertificateTrustInfo;
@property (retain, nonatomic) EMCertificateTrustInformation *encryptionCertificateTrustInfo;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL hasSeparateSigningAndEncryptionCertificates;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSigningTrust:(id)a0 encryptionTrust:(id)a1;
- (void)evaluateTrustsWithOptions:(unsigned long long)a0;
- (void)reevaluateTrustWithNetworkAccessAllowed;

@end

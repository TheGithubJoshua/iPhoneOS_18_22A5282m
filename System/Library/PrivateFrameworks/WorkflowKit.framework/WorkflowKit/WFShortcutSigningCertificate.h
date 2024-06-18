@class NSString, NSDate;

@interface WFShortcutSigningCertificate : NSObject

@property (nonatomic) struct __SecCertificate { } *certificate;
@property (readonly, nonatomic) NSString *commonName;
@property (readonly, nonatomic) NSDate *expirationDate;

- (void).cxx_destruct;
- (id)initWithCertificate:(struct __SecCertificate { } *)a0;
- (void)dealloc;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)copyPublicKey;
- (id)generateAuthData;
- (id)initWithCertificateData:(id)a0;

@end

@class NSData;

@interface MCWAPIIdentityCertificatePayload : MCCertificatePayload

@property (readonly, retain, nonatomic) NSData *pemData;

+ (id)localizedSingularForm;
+ (id)typeStrings;
+ (id)localizedPluralForm;

- (struct __SecCertificate { } *)copyCertificate;
- (void).cxx_destruct;
- (id)verboseDescription;
- (BOOL)isIdentity;
- (struct __SecIdentity { } *)copyIdentityFromKeychain;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;

@end

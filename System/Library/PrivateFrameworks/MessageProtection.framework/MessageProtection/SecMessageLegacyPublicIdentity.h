@class LegacySigningKeyPublic, SecKeyRSAPublic;

@interface SecMessageLegacyPublicIdentity : NSObject

@property (readonly, nonatomic) LegacySigningKeyPublic *signingKey;
@property (readonly, nonatomic) SecKeyRSAPublic *encryptionKey;

+ (id)identityWithIdentityData:(id)a0 error:(id *)a1;

- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)publicSigningKeyForTerminusMigration;
- (id)encryptData:(id)a0;
- (unsigned long long)encryptionSize;
- (id)publicIDCanonicalHash;
- (struct _SecMPPublicIdentity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKey *x1; struct __SecKey *x2; id x3; } *)asRef;
- (void).cxx_destruct;
- (id)sealMessage:(id)a0 signedByFullIdentity:(id)a1 error:(id *)a2;
- (BOOL)verifySignature:(id)a0 ofData:(id)a1;
- (id)publicIDHash;
- (id)identityData;
- (id)initWithEncryptionKey:(id)a0 signingKey:(id)a1;

@end

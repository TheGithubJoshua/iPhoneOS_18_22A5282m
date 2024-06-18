@class SigningPublicKey, NGMPublicPreKey;

@interface NGMPublicDeviceIdentity : NSObject

@property (retain, nonatomic) SigningPublicKey *signingKey;
@property (retain, nonatomic) NGMPublicPreKey *prekey;

+ (id)identityWithIdentityData:(id)a0 prekeyData:(id)a1 error:(id *)a2;

- (BOOL)verifySignature:(id)a0 formatter:(id)a1;
- (BOOL)isValidSignature:(id)a0 forMessage:(id)a1 forType:(long long)a2 error:(id *)a3;
- (void).cxx_destruct;
- (id)description;
- (id)sealMessage:(id)a0 signedByFullIdentity:(id)a1 error:(id *)a2;
- (id)identityData;
- (id)initWithPrekey:(id)a0 signingKey:(id)a1;
- (id)sealMessage:(id)a0 withEncryptedAttributes:(id)a1 signedByFullIdentity:(id)a2 error:(id *)a3;
- (id)prekeyData;
- (BOOL)isValidSigningDestination;

@end

@interface IDSNGMFullDeviceIdentity : NSObject

+ (id)identityWithDataRepresentation:(id)a0 error:(id *)a1;
+ (id)identityWithAccess:(id)a0 usageIdentifier:(id)a1 error:(id *)a2;

- (id)batchSign:(id)a0 forType:(long long)a1 error:(id *)a2;
- (id)sign:(id)a0 forType:(long long)a1 error:(id *)a2;
- (BOOL)updateWithRegisteredTicket:(id)a0 error:(id *)a1;
- (id)dataRepresentationWithError:(id *)a0;
- (id)unsealMessage:(id)a0 signedByPublicIdentity:(id)a1 error:(id *)a2;
- (id)keyRollingTicketWithError:(id *)a0;
- (void)unsealMessageAndAttributes:(id)a0 signedByPublicIdentity:(id)a1 decryptionBlock:(id /* block */)a2;
- (id)publicDeviceIdentityWithError:(id *)a0;
- (void)unsealMessage:(id)a0 signedByPublicIdentity:(id)a1 decryptionBlock:(id /* block */)a2;
- (BOOL)eraseFromKeyChain:(id *)a0;
- (BOOL)shouldRollEncryptionIdentity;

@end

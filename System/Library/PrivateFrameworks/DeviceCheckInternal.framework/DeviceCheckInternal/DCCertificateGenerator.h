@class NSData, DCContext;

@interface DCCertificateGenerator : NSObject {
    NSData *_publicKey;
    DCContext *_context;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)_encryptData:(id)a0 serverSyncedDate:(id)a1 error:(id *)a2;
- (void)_generateCertificateChainWithCompletion:(id /* block */)a0;
- (BOOL)_isNSDate:(id)a0;
- (void)generateEncryptedCertificateChainWithCompletion:(id /* block */)a0;
- (id)initWithContext:(id)a0 publicKey:(id)a1;
- (int)keybagHandle;

@end

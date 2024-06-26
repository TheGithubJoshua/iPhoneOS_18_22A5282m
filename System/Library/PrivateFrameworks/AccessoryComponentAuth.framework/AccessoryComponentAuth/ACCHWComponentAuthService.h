@interface ACCHWComponentAuthService : NSObject <ACCHWComponentAuthServiceProtocol>

- (unsigned int)_findModuleAuthService:(int)a0 withAuthFlags:(unsigned int *)a1;
- (void)authenticateVeridianWithChallenge:(id)a0 completionHandler:(id /* block */)a1;
- (void)signVeridianChallenge:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_verifyModuleFDR:(id)a0 forModuleType:(int)a1;
- (void)verifyBatteryMatch:(id)a0 completionHandler:(id /* block */)a1;
- (int)_verifyCertificate:(id)a0;
- (int)_signChallenge:(id)a0;
- (void)_authenticateModuleWithChallenge:(id)a0 completionHandler:(id /* block */)a1 moduleType:(int)a2 updateRegistry:(BOOL)a3;
- (BOOL)_getForVeridianFDRData:(id)a0 intermediateCert:(id *)a1 leafCert:(id *)a2;
- (int)_verifyModuleCertificate:(id)a0 forModuleType:(int)a1;
- (int)_verifyBatteryMatch:(id)a0;
- (int)_verifySignature:(id)a0;
- (BOOL)_verifyDeviceInfo:(unsigned int)a0;
- (void)_notifyComponentAuthFailure;
- (void)authenticateBatteryWithChallenge:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_verifyDeviceIDSN:(unsigned int)a0;
- (void)authenticateTouchControllerWithChallenge:(id)a0 completionHandler:(id /* block */)a1 updateRegistry:(BOOL)a2;

@end

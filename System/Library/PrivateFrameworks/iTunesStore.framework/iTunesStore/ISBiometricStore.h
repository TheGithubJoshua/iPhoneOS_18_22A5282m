@class NSNumber, NSCache, NSLock;

@interface ISBiometricStore : NSObject {
    NSCache *_contextCache;
    NSLock *_lock;
}

@property long long biometricState;
@property (readonly, getter=isBiometricStateEnabled) BOOL biometricStateEnabled;
@property (readonly) NSNumber *lastRegisteredAccountIdentifier;

+ (void)tokenUpdateDidFinishWithLogKey:(id)a0;
+ (id)sharedInstance;
+ (BOOL)shouldUseExtendedEnrollment;
+ (id)countryCode;
+ (id)keychainLabelForKeyWithAccountID:(id)a0 purpose:(long long)a1;
+ (BOOL)tokenUpdateShouldStartWithLogKey:(id)a0;
+ (BOOL)shouldUseX509;
+ (long long)tokenUpdateState;
+ (BOOL)shouldUseApplePayClassic;
+ (id)diskBasedPaymentSheet;
+ (id)keychainLabelForAccountID:(id)a0 purpose:(long long)a1;
+ (BOOL)shouldUseAutoEnrollment;
+ (id)keychainLabelForCertWithAccountID:(id)a0 purpose:(long long)a1;
+ (BOOL)shouldUseUpsellEnrollment;
+ (BOOL)isActionSupported:(long long)a0 withBiometricAuthenticationContext:(id)a1;
+ (id)applePayClassicNetworks;

- (BOOL)deleteKeychainTokensForAccountIdentifier:(id)a0 error:(id *)a1;
- (id)init;
- (id)createAttestationDataForAccountIdentifier:(id)a0 purpose:(long long)a1 error:(id *)a2;
- (id)signData:(id)a0 context:(id)a1 error:(id *)a2;
- (long long)biometricAvailabilityForAccountIdentifier:(id)a0;
- (BOOL)canPerformExtendedBiometricActionsForAccountIdentifier:(id)a0;
- (BOOL)canPerformBiometricOptIn;
- (void).cxx_destruct;
- (void)clearLastRegisteredAccountIdentifier;
- (BOOL)isIdentityMapValidForAccountIdentifier:(id)a0;
- (id)fetchContextFromCacheWithToken:(id)a0 evict:(BOOL)a1;
- (unsigned long long)keyCountForAccountIdentifier:(id)a0;
- (void)saveIdentityMapForAccountIdentifier:(id)a0;
- (id)createX509CertChainDataForAccountIdentifier:(id)a0 purpose:(long long)a1 error:(id *)a2;
- (id)x509CertChainDataForAccountIdentifier:(id)a0 purpose:(long long)a1 regenerateCerts:(BOOL)a2 error:(id *)a3;
- (id)publicKeyDataForAccountIdentifier:(id)a0 purpose:(long long)a1 error:(id *)a2;
- (unsigned long long)identityMapCount;
- (void)registerAccountIdentifier:(id)a0;
- (void)addContextToCache:(id)a0 withToken:(id)a1;

@end

@class NSString;

@interface CertUITrustManager : NSObject {
    NSString *_access;
}

+ (void)_migrateVersionZeroFromAccessGroup:(id)a0 toGroup:(id)a1;
+ (void)migrateFromVersionOne;
+ (void)migrateFromVersionZero;
+ (id)defaultTrustManager;

- (unsigned int)rawTrustResultForSSLTrust:(struct __SecTrust { } *)a0 hostname:(id)a1 service:(id)a2;
- (id)init;
- (void)addSMIMETrust:(struct __SecTrust { } *)a0 sender:(id)a1;
- (void)addSSLTrust:(struct __SecTrust { } *)a0 hostname:(id)a1 service:(id)a2;
- (int)_actionForTrust:(struct __SecTrust { } *)a0 exceptions:(id)a1;
- (BOOL)_hasExceptionsForSMIMETrust:(struct __SecTrust { } *)a0 sender:(id)a1;
- (unsigned int)_rawTrustResultForTrust:(struct __SecTrust { } *)a0 exceptions:(id)a1;
- (void)clearSavedTrustSettingsForTrust:(struct __SecTrust { } *)a0 host:(id)a1 service:(id)a2;
- (id)initWithAccessGroup:(id)a0;
- (int)actionForTrust:(struct __SecTrust { } *)a0 forHost:(id)a1 andService:(id)a2;
- (int)actionForSMIMETrust:(struct __SecTrust { } *)a0 sender:(id)a1;
- (void).cxx_destruct;
- (void)allowTrust:(struct __SecTrust { } *)a0 forHost:(id)a1 service:(id)a2;
- (void)removeSSLTrust:(struct __SecTrust { } *)a0 hostname:(id)a1 service:(id)a2;
- (int)actionForSSLTrust:(struct __SecTrust { } *)a0 hostname:(id)a1 service:(id)a2;
- (void)removeSMIMETrust:(struct __SecTrust { } *)a0 sender:(id)a1;
- (void)removeAllTrusts;
- (id)_getExceptionsForSSLTrust:(struct __SecTrust { } *)a0 hostname:(id)a1 service:(id)a2;

@end

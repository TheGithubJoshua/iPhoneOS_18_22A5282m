@class ACAccountStore, GKThreadsafeDictionary;

@interface GKPlayerCredentialController : NSObject

@property (retain, nonatomic) ACAccountStore *store;
@property (retain, nonatomic) GKThreadsafeDictionary *primaryCredentialCache;
@property (retain, nonatomic) GKThreadsafeDictionary *allCredentialsCache;
@property (nonatomic) BOOL lastSaveFailed;
@property long long loginCancelledCount;
@property (readonly) BOOL loginDisabled;

+ (id)sharedController;
+ (id)accessQueue;
+ (void)migrateOldAccountInformation;

- (void)accountStoreDidChange:(id)a0;
- (id)init;
- (id)_transactAndWait:(id /* block */)a0;
- (id)accessQueue;
- (void)setContactAssociationID:(id)a0 contactIntegrationConsent:(int)a1 serviceLastUpdateTimestamp:(id)a2 forEnvironment:(long long)a3 forcefully:(BOOL)a4 completionHandler:(id /* block */)a5;
- (void)accountStoreEmailDidChange:(id)a0;
- (id)allCredentialsForEnvironment:(long long)a0;
- (void)getAltDSIDFromIDMSForCredential:(id)a0 completionHandler:(id /* block */)a1;
- (id)primaryCredentialForEnvironment:(long long)a0;
- (id)credentialForUsername:(id)a0 environment:(long long)a1;
- (void)replaceCredential:(id)a0 withCredential:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)pushCredentialForEnvironment:(long long)a0;
- (void)removeAllCredentialsForEnvironment:(long long)a0 completionHandler:(id /* block */)a1;
- (void)removeCredential:(id)a0 completionHandler:(id /* block */)a1;
- (void)_transact:(id /* block */)a0 complete:(id /* block */)a1;
- (id)primaryCredentialForEnvironment:(long long)a0 accountStore:(id)a1;
- (void)dealloc;
- (void)setPrimaryCredential:(id)a0 completionHandler:(id /* block */)a1;
- (id)suggestedUsername;
- (void)setCredential:(id)a0 completionHandler:(id /* block */)a1;
- (id)credentialForPlayer:(id)a0 environment:(long long)a1;
- (unsigned long long)loginStatusForCredential:(id)a0;
- (void)invalidateCredentialCaches;

@end

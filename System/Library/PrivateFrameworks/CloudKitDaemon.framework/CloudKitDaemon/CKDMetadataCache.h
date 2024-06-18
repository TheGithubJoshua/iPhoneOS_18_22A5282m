@class NSObject;
@protocol OS_dispatch_queue;

@interface CKDMetadataCache : CKDSQLiteCache

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue;

+ (id)dbFileName;
+ (id)cacheDatabaseSchema;
+ (id)sharedCache;

- (void)setGlobalConfiguration:(id)a0;
- (void)expungeAllData;
- (id)globalConfiguration;
- (void)setPushToken:(id)a0 forAppContainerAccountTuple:(id)a1;
- (void)setCachedDSID:(id)a0 forAccountID:(id)a1;
- (void)removeKnownApplicationID:(id)a0;
- (id)knownContainerizedApplicationIDs;
- (void)willCreateDatabase;
- (void)expungeOldData;
- (id)publicKeyOfType:(id)a0 withIdentifier:(id)a1;
- (id)applicationMetadataForApplicationID:(id)a0;
- (void)inlock_setDateOfLastTokenUpdate:(id)a0;
- (id)knownAppContainerAccountTuples;
- (void)removeContainerID:(id)a0;
- (id)initWithCacheDir:(id)a0;
- (void)setPublicKey:(id)a0 ofType:(id)a1 withIdentifier:(id)a2;
- (void)setApplicationMetadata:(id)a0 forApplicationID:(id)a1;
- (void)setAppContainerAccountMetadata:(id)a0 forAppContainerAccountTuple:(id)a1;
- (void)inlock_expungeDataForAccountID:(id)a0;
- (id)inlock_applicationMetadataForApplicationID:(id)a0;
- (void)expungeDataForAccountID:(id)a0;
- (void).cxx_destruct;
- (id)containerServerInfoForContainerID:(id)a0 accountID:(id)a1;
- (id)knownAppContainerAccountTuplesForAccountID:(id)a0;
- (id)appContainerAccountMetadataForAppContainerAccountTuple:(id)a0;
- (void)expungeStaleAccountIDs;
- (id)inlock_containerServerInfoForContainerID:(id)a0 accountID:(id)a1;
- (id)knownApplicationIDs;
- (void)setContainerServerInfo:(id)a0 forContainerID:(id)a1 accountID:(id)a2;
- (id)knownAppContainerTuples;
- (id)pushTokenForAppContainerAccountTuple:(id)a0 filterOldTokens:(BOOL)a1;
- (id)dateOfLastTokenUpdate;
- (void)setDateOfLastTokenUpdate:(id)a0;
- (id)cachedDSIDForAccountID:(id)a0;

@end

@class NSString, NSDictionary, _WKWebsiteDataStoreConfiguration, WKHTTPCookieStore;
@protocol _WKWebsiteDataStoreDelegate;

@interface WKWebsiteDataStore : NSObject <WKObject, NSSecureCoding> {
    struct ObjectStorage<WebKit::WebsiteDataStore> { struct type { unsigned char __lx[280]; } data; } _websiteDataStore;
    struct WeakObjCPtr<id<_WKWebsiteDataStoreDelegate>> { id m_weakReference; } _delegate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, setter=_setResourceLoadStatisticsEnabled:) BOOL _resourceLoadStatisticsEnabled;
@property (nonatomic, setter=_setResourceLoadStatisticsDebugMode:) BOOL _resourceLoadStatisticsDebugMode;
@property (nonatomic, setter=_setPerOriginStorageQuota:) unsigned long long _perOriginStorageQuota;
@property (nonatomic, setter=_setBoundInterfaceIdentifier:) NSString *_boundInterfaceIdentifier;
@property (nonatomic, setter=_setAllowsCellularAccess:) BOOL _allowsCellularAccess;
@property (nonatomic, setter=_setProxyConfiguration:) NSDictionary *_proxyConfiguration;
@property (nonatomic, setter=_setAllowsTLSFallback:) BOOL _allowsTLSFallback;
@property (weak, nonatomic) id<_WKWebsiteDataStoreDelegate> _delegate;
@property (readonly, copy, nonatomic) _WKWebsiteDataStoreConfiguration *_configuration;
@property (readonly, nonatomic, getter=isPersistent) BOOL persistent;
@property (readonly, nonatomic) WKHTTPCookieStore *httpCookieStore;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nonPersistentDataStore;
+ (id)_allWebsiteDataTypesIncludingPrivate;
+ (void)_allowWebsiteDataRecordsForAllOrigins;
+ (BOOL)_defaultDataStoreExists;
+ (BOOL)_defaultNetworkProcessExists;
+ (void)_deleteDefaultDataStoreForTesting;
+ (void)_fetchAllIdentifiers:(id /* block */)a0;
+ (void)_makeNextNetworkProcessLaunchFailForTesting;
+ (void)_removeDataStoreWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_setCachedProcessSuspensionDelayForTesting:(double)a0;
+ (void)_setNetworkProcessSuspensionAllowedForTesting:(BOOL)a0;
+ (const struct OpaqueWKNotificationManager { } *)_sharedServiceWorkerNotificationManager;
+ (id)allWebsiteDataTypes;
+ (id)defaultDataStore;

- (id)initWithCoder:(id)a0;
- (void)_logUserInteraction:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (BOOL)_hasServiceWorkerBackgroundActivityForTesting;
- (void)_synthesizeAppIsBackground:(BOOL)a0;
- (void)_closeDatabases:(id /* block */)a0;
- (void)_deletePushAndNotificationRegistration:(id)a0 completionHandler:(id /* block */)a1;
- (void)_loadedSubresourceDomainsFor:(id)a0 completionHandler:(id /* block */)a1;
- (void)_scheduleCookieBlockingUpdate:(id /* block */)a0;
- (id)_initWithConfiguration:(id)a0;
- (void)_clearPrevalentDomain:(id)a0 completionHandler:(id /* block */)a1;
- (void)_setBackupExclusionPeriodForTesting:(double)a0 completionHandler:(id /* block */)a1;
- (void)_getPendingPushMessages:(id /* block */)a0;
- (int)_networkProcessIdentifier;
- (void)_setPrevalentDomain:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_networkProcessHasEntitlementForTesting:(id)a0;
- (void)_sendNetworkProcessWillSuspendImminently;
- (void)_renameOrigin:(id)a0 to:(id)a1 forDataOfTypes:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)_hasRegisteredServiceWorker;
- (void)_processStatisticsAndDataRecords:(id /* block */)a0;
- (void)_trustServerForLocalPCMTesting:(struct __SecTrust { } *)a0;
- (void)_isRegisteredAsSubresourceUnderFirstParty:(id)a0 thirdParty:(id)a1 completionHandler:(id /* block */)a2;
- (void)encodeWithCoder:(id)a0;
- (void)_originDirectoryForTesting:(id)a0 topOrigin:(id)a1 type:(id)a2 completionHandler:(id /* block */)a3;
- (void)_processPersistentNotificationClick:(id)a0 completionHandler:(id /* block */)a1;
- (void)_isRelationshipOnlyInDatabaseOnce:(id)a0 thirdParty:(id)a1 completionHandler:(id /* block */)a2;
- (id).cxx_construct;
- (void)_clearResourceLoadStatistics:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_fetchDataRecordsOfTypes:(id)a0 withOptions:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)_terminateNetworkProcess;
- (void)_processPushMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)_setThirdPartyCookieBlockingMode:(BOOL)a0 onlyOnSitesWithoutUserInteraction:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)removeDataOfTypes:(id)a0 modifiedSince:(id)a1 completionHandler:(id /* block */)a2;
- (void)_appBoundDomains:(id /* block */)a0;
- (void)removeDataOfTypes:(id)a0 forDataRecords:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchDataRecordsOfTypes:(id)a0 completionHandler:(id /* block */)a1;
- (void)_allowTLSCertificateChain:(id)a0 forHost:(id)a1;
- (void)_setServiceWorkerOverridePreferences:(id)a0;
- (void)_scopeURL:(id)a0 hasPushSubscriptionForTesting:(id /* block */)a1;
- (BOOL)_networkProcessExists;
- (void)_setResourceLoadStatisticsTestingCallback:(id /* block */)a0;
- (void)_setResourceLoadStatisticsTimeAdvanceForTesting:(double)a0 completionHandler:(id /* block */)a1;
- (void)_clearLoadedSubresourceDomainsFor:(id)a0;
- (void)dealloc;
- (void)_processPersistentNotificationClose:(id)a0 completionHandler:(id /* block */)a1;
- (void)_sendNetworkProcessDidResume;
- (void)_countNonDefaultSessionSets:(id /* block */)a0;
- (void)_getOriginsWithPushAndNotificationPermissions:(id /* block */)a0;
- (void)_statisticsDatabaseHasAllTables:(id /* block */)a0;
- (void)_getResourceLoadStatisticsDataSummary:(id /* block */)a0;
- (void)_sendNetworkProcessPrepareToSuspend:(id /* block */)a0;
- (void)_setPrivateClickMeasurementDebugModeEnabledForTesting:(BOOL)a0;
- (void)_appBoundSchemes:(id /* block */)a0;
- (void)_getAllStorageAccessEntriesFor:(id)a0 completionHandler:(id /* block */)a1;
- (void)_getIsPrevalentDomain:(id)a0 completionHandler:(id /* block */)a1;

@end
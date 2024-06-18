@class NSUserDefaults, PPKVOObserver, NSObject, _PASLock;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PPSettings : NSObject {
    NSUserDefaults *_portraitDefaults;
    NSUserDefaults *_canLearnFromAppDefaults;
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_initializationComplete;
    PPKVOObserver *_canLearnFromAppKVOObserver;
    PPKVOObserver *_weightKVOObserver;
    PPKVOObserver *_abGroupKVObserver;
    PPKVOObserver *_queryPlanLoggingKVOObserver;
}

@property (nonatomic, getter=isAppConnectionsLocationsEnabled) BOOL appConnectionsLocationsEnabled;

+ (void)clearTestSettings;
+ (id)sharedInstance;
+ (BOOL)isCloudSyncEnabled;
+ (void)disableBundleIdentifier:(id)a0;
+ (id)cloudSyncDisabledFirstPartyBundleIds;
+ (BOOL)isVoiceAssistantEnabled;

- (id)userDefaults;
- (id)init;
- (id)trialPathOverrideForNamespaceName:(id)a0 factorName:(id)a1;
- (void)setAssetDefaultBundleOverridePath:(id)a0 assetIdentifier:(id)a1;
- (void)setTrialPathOverrideForNamespaceName:(id)a0 factorName:(id)a1 path:(id)a2;
- (id)assetDefaultBundleOverridePathForAssetIdentifier:(id)a0;
- (void)setEntitiesMappingTrieSha256:(id)a0;
- (double)assetMetadataRefreshIntervalSeconds;
- (void)setWrittenSharedWithYouContentAvailable:(BOOL)a0;
- (void)rewriteSyncStateForDisabledBundleIdsAsync;
- (BOOL)hasWrittenSharedWithYouContentAvailable;
- (void)setAssetMetadataRefreshIntervalSeconds:(double)a0;
- (id)abGroupOverride;
- (void)setWrittenSharedWithYouContentConsumed:(BOOL)a0;
- (void)registerCloudKitDisabledBundleIdRewriteHandler;
- (BOOL)queryPlanLoggingEnabled;
- (BOOL)trialUseDefaultFiles;
- (void).cxx_destruct;
- (void)refreshCloudKitDisabledBundleIdsAsync;
- (id)entitiesMappingPreviousTrieSha256;
- (void)setTrialUseDefaultFiles:(BOOL)a0;
- (BOOL)hasWrittenSharedWithYouContentConsumed;
- (void)clearAssetMetadataRefreshIntervalSeconds;
- (int)registerDisabledBundleIdentifierChangeHandler:(id /* block */)a0;
- (BOOL)isAuthorizedToLogLocation;
- (double)weightMultiplier;
- (void)setQueryPlanLoggingEnabled:(BOOL)a0;
- (id)trialPathOverrides;
- (void)setEntitiesBackfilledTimestamp:(id)a0;
- (BOOL)showLocationsFoundInApps;
- (void)deregisterDisabledBundleIdentifierChangeHandlerWithToken:(int)a0;
- (void)deregisterQueryPlanLoggingChangeHandlerWithToken:(int)a0;
- (void)triggerDelayedCloudSyncRewrite;
- (int)registerQueryPlanLoggingChangeHandler:(id /* block */)a0;
- (BOOL)bundleIdentifierIsEnabledForCloudKit:(id)a0;
- (id)entitiesBackfilledTimestamp;
- (BOOL)bundleIdentifierIsEnabledForDonation:(id)a0;
- (void)registerDisabledBundleIdPurgeHandler;

@end

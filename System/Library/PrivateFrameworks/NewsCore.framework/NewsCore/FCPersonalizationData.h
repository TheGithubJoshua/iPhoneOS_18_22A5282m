@class NSString, NSMutableDictionary, NSData, FCPersonalizationTreatment, CKRecord, NSObject;
@protocol OS_dispatch_queue, FCOperationThrottler;

@interface FCPersonalizationData : FCPrivateDataController <FCOperationThrottlerDelegate, FCCoreConfigurationObserving, FCDerivedPersonalizationData, FCPersonalizationDataSource> {
    BOOL _attemptingUpload;
    NSMutableDictionary *_aggregates;
    CKRecord *_remoteRecord;
    NSObject<OS_dispatch_queue> *_accessQueue;
    FCPersonalizationTreatment *_treatment;
    id<FCOperationThrottler> _saveThrottler;
}

@property (readonly, nonatomic) FCPersonalizationTreatment *personalizationTreatment;
@property (readonly, nonatomic) NSData *pbData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)desiredKeys;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;
+ (BOOL)requiresPushNotificationSupport;
+ (BOOL)requiresBatchedSync;
+ (unsigned long long)localStoreVersion;
+ (id)backingRecordZoneIDs;
+ (id)commandStoreFileName;
+ (id)backingRecordIDs;
+ (long long)commandQueueUrgency;
+ (id)localStoreFilename;
+ (void)configureKeyValueStoreForJSONHandling:(id)a0;
+ (BOOL)requiresHighPriorityFirstSync;

- (BOOL)canHelpRestoreZoneName:(id)a0;
- (void)removeObserver:(id)a0;
- (id)allAggregates;
- (id)init;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (void)syncWithCompletion:(id /* block */)a0;
- (void)activityObservingApplicationWillTerminate;
- (id)initWithPBData:(id)a0 treatment:(id)a1;
- (void)generateDerivedDataWithMaxAggregateCount:(unsigned long long)a0 qualityOfService:(long long)a1 completion:(id /* block */)a2;
- (id)lookupAggregatesWith:(id)a0 creationBlock:(id /* block */)a1;
- (void)activityObservingApplicationWindowDidBecomeForeground;
- (void)d_allResults:(id /* block */)a0 completion:(id /* block */)a1;
- (id)aggregatesForFeatures:(id)a0;
- (void)enumerateAggregatesUsingBlock:(id /* block */)a0;
- (id)createAggregateWith:(id)a0 clicks:(double)a1 impressions:(double)a2;
- (void)loadLocalCachesFromStore;
- (id)localStoreMigrator;
- (id)initWithAggregates:(id)a0;
- (void)modifyLocalAggregatesForFeatureKeys:(id)a0 withAction:(unsigned long long)a1 actionCount:(unsigned long long)a2 defaultClicks:(double)a3 defaultImpressions:(double)a4 impressionBias:(double)a5 groupBias:(double)a6;
- (void)clearPersonalizationData;
- (void).cxx_destruct;
- (void)updateFeatures:(id)a0 withAction:(unsigned long long)a1 displayRank:(long long)a2 groupRank:(long long)a3 groupType:(long long)a4 individually:(BOOL)a5 configurableValues:(id)a6;
- (void)configurationManager:(id)a0 configurationDidChange:(id)a1;
- (void)updateAggregatesWith:(id)a0 creationBlock:(id /* block */)a1 updateBlock:(id /* block */)a2;
- (id)recordsForRestoringZoneName:(id)a0;
- (id)aggregatesForFeatureKeys:(id)a0;
- (void)prepareAggregatesForUseWithCompletionHandler:(id /* block */)a0;
- (id)baselineAggregateWithConfigurableValues:(id)a0;
- (void)addObserver:(id)a0;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (void)operationThrottler:(id)a0 performAsyncOperationWithCompletion:(id /* block */)a1;
- (void)activityObservingApplicationWindowDidBecomeBackground;
- (id)aggregateForFeatureKey:(id)a0;
- (id)d_allGlobalAggregates;

@end

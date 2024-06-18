@class NSDictionary, _ATXRecentInstallCache, ATXAppLaunchMicroLocation, _ATXAppInfoManager, NSString, NSArray, _ATXAppDailyDose, ATXBBNotificationManager, ATXActionPredictionBlacklist, ATXCurrentABGroupDetails, ATXAppPredictionBlacklist, NSObject, ATXPredictionContextBuilder, _ATXAppInstallMonitor, NSUserDefaults, ATXMagicalMomentsUpdateMonitor, ATXMediaApplications, _ATXAppLaunchMonitor, ATXCDNDownloaderTriggerManager, ATXAppFeaturizer, _ATXAppLaunchLocation, ATXAppIntentMonitor, ATXAppLaunchLogger;
@protocol OS_dispatch_queue;

@interface _ATXAppPredictor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_dayZeroParameters;
    NSDictionary *_dayZeroIntentParameters;
    NSString *_dayZeroABGroupIdentifier;
    NSString *_dayZeroIntentABGroupIdentifier;
    _ATXAppLaunchLocation *_appLaunchLocation;
    _ATXAppDailyDose *_appDailyDose;
    _ATXRecentInstallCache *_recentInstallCache;
    ATXPredictionContextBuilder *_predictionContextBuilder;
    _ATXAppLaunchMonitor *_appLaunchMonitor;
    ATXAppIntentMonitor *_appIntentMonitor;
    _ATXAppInstallMonitor *_appInstallMonitor;
    ATXAppLaunchLogger *_appLaunchLogger;
    ATXAppFeaturizer *_appFeaturizer;
    ATXBBNotificationManager *_notificationManager;
    ATXMagicalMomentsUpdateMonitor *_mmPredictionMonitor;
    _Atomic BOOL _appLaunchAndInstallMonitorsInitialized;
    _Atomic BOOL _iOSOnlyDependenciesInitialized;
    NSUserDefaults *_userDefaults;
    ATXAppPredictionBlacklist *_appPredictionBlacklist;
    ATXActionPredictionBlacklist *_actionPredictionBlacklist;
    ATXMediaApplications *_mediaApps;
    _ATXAppInfoManager *_appInfoManager;
    ATXAppLaunchMicroLocation *_microLocation;
    ATXCurrentABGroupDetails *_currentABGroupDetails;
}

@property (retain, nonatomic) NSArray *abGroupIdentifiers;
@property (retain, nonatomic) ATXCDNDownloaderTriggerManager *cdnDownloaderTriggerManager;

+ (id)sharedInstance;
+ (id)getParseTreeForConsumerSubType:(unsigned char)a0;
+ (id)recreateSharedInstanceWithCurrentABGroup;
+ (id)_arrayFromSet:(id)a0 upToSize:(unsigned long long)a1;
+ (void)updateConfidenceForItem:(struct ATXPredictionItem { id x0; unsigned long long x1; float x2[817]; float x3; BOOL x4; BOOL x5; } *)a0 subscores:(id)a1;
+ (id)inputScoresForPredictionItem:(const struct ATXPredictionItem { id x0; unsigned long long x1; float x2[817]; float x3; BOOL x4; BOOL x5; } *)a0;
+ (id)pruneItemsToRankForConsumerSubType:(unsigned char)a0 itemsToRank:(id)a1 datastore:(id)a2;

- (void)train;
- (BOOL)writeCacheFileWithSerializedChunks:(id)a0 path:(id)a1 cacheFileDescriptors:(id)a2 consumerSubType:(unsigned char)a3;
- (id)init;
- (void)_updateFromZeroDayIntentAsset;
- (id)getPredictionModelDetailsForConsumerSubType:(unsigned char)a0;
- (BOOL)_initIOSOnlyDependencies;
- (BOOL)predictAndWriteCacheFileWithLimit:(unsigned long long)a0 consumerSubType:(unsigned char)a1 intent:(id)a2 candidateBundleIdentifiers:(id)a3 candidateActiontypes:(id)a4 scoreLogger:(id)a5 path:(id)a6 cacheFileDescriptors:(id)a7 featureCache:(id)a8;
- (id)initInternal;
- (void)_addZeroDayAppIntentKeysToBundleIdTable:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_updateFromAsset;
- (void)resetRecentInstallCache;
- (double)predictionScoreAndUpdateConfidenceForItem:(struct ATXPredictionItem { id x0; unsigned long long x1; float x2[817]; float x3; BOOL x4; BOOL x5; } *)a0 consumerSubType:(unsigned char)a1;
- (id)appLaunchMonitor;
- (void)_updateFromZeroDayAsset;
- (void)_setActionBlacklist:(id)a0;
- (void)receiveFeedbackForConsumerType:(unsigned long long)a0 consumerSubType:(unsigned char)a1 atxResponse:(id)a2 engagementType:(unsigned long long)a3 engagedBundleId:(id)a4 bundleIdsShown:(id)a5 explicitlyRejectedBundleIds:(id)a6 context:(id)a7;
- (struct vector<ATXPredictionItem, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem *x0; struct ATXPredictionItem *x1; struct __compressed_pair<ATXPredictionItem *, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem *x0; } x2; })_evalFeaturesForAppForAllIntents:(id)a0 scoreLogger:(id)a1 context:(id)a2;
- (void)iterZeroDayAppIntentKeysWithBlock:(id /* block */)a0;
- (id)recentInstallCache;
- (BOOL)_initAppLaunchAndInstallMonitors;
- (id)_allDayZeroApps;
- (void)logCacheAgeAtRefreshForNonBlendingCachesWithCachePath:(id)a0 consumerSubType:(unsigned char)a1;
- (struct vector<ATXPredictionItem, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem *x0; struct ATXPredictionItem *x1; struct __compressed_pair<ATXPredictionItem *, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem *x0; } x2; })_evalFeaturesForActions:(id)a0 scoreLogger:(id)a1 context:(id)a2 featureCache:(id)a3;
- (struct vector<ATXPredictionItem, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem *x0; struct ATXPredictionItem *x1; struct __compressed_pair<ATXPredictionItem *, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem *x0; } x2; })_getPredictionForItems:(id)a0 clipBundleIdsToRank:(id)a1 consumerSubType:(unsigned char)a2 intent:(id)a3 scoreLogger:(id)a4 context:(id)a5 featureCache:(id)a6;
- (struct unordered_map<NSString *, const ATXPredictionItem *, ATXNSStringHash, ATXNSStringEqual, std::allocator<std::pair<NSString *const, const ATXPredictionItem *>>> { struct __hash_table<std::__hash_value_type<NSString *, const ATXPredictionItem *>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, const ATXPredictionItem *>, ATXNSStringHash, ATXNSStringEqual, true>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, const ATXPredictionItem *>, ATXNSStringEqual, ATXNSStringHash, true>, std::allocator<std::__hash_value_type<NSString *, const ATXPredictionItem *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, const ATXPredictionItem *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, const ATXPredictionItem *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, const ATXPredictionItem *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, const ATXPredictionItem *>, void *> *> *>>> { void **x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, const ATXPredictionItem *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, const ATXPredictionItem *>, void *> *> *>> { unsigned long long x0; } x0; } x1; } x0; } x0; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, const ATXPredictionItem *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, const ATXPredictionItem *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, const ATXPredictionItem *>, void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, const ATXPredictionItem *>, ATXNSStringHash, ATXNSStringEqual, true>> { unsigned long long x0; } x2; struct __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, const ATXPredictionItem *>, ATXNSStringEqual, ATXNSStringHash, true>> { float x0; } x3; } x0; })_createMapOfKeyToItemForPredictionItems:(const void *)a0;
- (id)_appsToPredictWithConsumerSubType:(unsigned char)a0 intent:(id)a1 candidateBundleIdentifiers:(id)a2 allSBApps:(id)a3 appPredictionBlacklist:(id)a4 digitalHealthBlacklist:(id)a5;
- (void).cxx_destruct;
- (id)predictWithLimit:(unsigned long long)a0 consumerSubType:(unsigned char)a1 intent:(id)a2 candidateBundleIdentifiers:(id)a3 candidateActiontypes:(id)a4 scoreLogger:(id)a5;
- (id)getABGroups;
- (void)setupScoreLogger:(id)a0 forConsumerSubType:(unsigned char)a1;
- (id)predictWithLimit:(unsigned long long)a0 consumerSubType:(unsigned char)a1 intent:(id)a2 candidateBundleIdentifiers:(id)a3 candidateActiontypes:(id)a4 scoreLogger:(id)a5 predictionItemsToKeep:(void *)a6 predictedItemsOutParameter:(void *)a7 featureCache:(id)a8;
- (id)_appPredictionsSeedAppsGivenSBAppList:(id)a0 consumerSubType:(unsigned char)a1 minimumDesiredApps:(unsigned long long)a2;
- (struct vector<ATXPredictionItem, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem *x0; struct ATXPredictionItem *x1; struct __compressed_pair<ATXPredictionItem *, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem *x0; } x2; })_evalFeaturesForAppIntents:(id)a0 scoreLogger:(id)a1 context:(id)a2;
- (void)_initFeaturizers;
- (double)_predictionScoreAndUpdateConfidenceForItem:(struct ATXPredictionItem { id x0; unsigned long long x1; float x2[817]; float x3; BOOL x4; BOOL x5; } *)a0 interpreter:(id)a1 consumerSubType:(unsigned char)a2 scoreLogger:(id)a3 intentType:(id)a4;
- (id)predictWithLimit:(unsigned long long)a0 consumerSubType:(unsigned char)a1 intent:(id)a2 candidateBundleIdentifiers:(id)a3 candidateActiontypes:(id)a4 scoreLogger:(id)a5 predictionItemsToKeep:(void *)a6 predictedItemsOutParameter:(void *)a7 context:(id)a8 featureCache:(id)a9;
- (id)appInstallMonitor;
- (void)dealloc;
- (id)predictWithLimit:(unsigned long long)a0 consumerSubType:(unsigned char)a1 intent:(id)a2 candidateBundleIdentifiers:(id)a3 candidateActiontypes:(id)a4 scoreLogger:(id)a5 predictionItemsToKeep:(void *)a6 predictedItemsOutParameter:(void *)a7 datastore:(id)a8;
- (double)finalScoreForSubscores:(id)a0 consumerSubType:(unsigned char)a1;
- (id)appIntentMonitor;
- (id)predictWithLimit:(unsigned long long)a0 consumerSubType:(unsigned char)a1 intent:(id)a2 candidateBundleIdentifiers:(id)a3 candidateActiontypes:(id)a4 scoreLogger:(id)a5 predictionItemsToKeep:(void *)a6 predictedItemsOutParameter:(void *)a7 context:(id)a8 datastore:(id)a9 featureCache:(id)a10;
- (void)_copyValidScoreInputsFromPredictionItem:(const struct ATXPredictionItem { id x0; unsigned long long x1; float x2[817]; float x3; BOOL x4; BOOL x5; } *)a0 toPredictionItem:(struct ATXPredictionItem { id x0; unsigned long long x1; float x2[817]; float x3; BOOL x4; BOOL x5; } *)a1;

@end

@class NSHashTable, NSString, NSArray, FCKeyValueStore, FCPushNotificationCenter, FCCommandQueue, FCAsyncSerialQueue, FCCloudContext;

@interface FCPrivateDataController : NSObject <FCJSONEncodableObjectProviding, FCPrivateZoneSyncManagerDelegate, FCPrivateRecordSyncManagerDelegate, FCCommandQueueDelegate, FCCKZoneRestorationSource, FCCKZonePruningAssistant, FCAppActivityObserving> {
    BOOL _waitingForFirstSync;
    BOOL _preparedForUse;
    FCPushNotificationCenter *_pushNotificationCenter;
    NSString *_storeDirectory;
    FCCommandQueue *_commandQueue;
    NSArray *_syncManagers;
    unsigned long long _changeCount;
    FCAsyncSerialQueue *_syncQueue;
    NSHashTable *_stateObservers;
}

@property (readonly, nonatomic, getter=isSyncingEnabled) BOOL syncingEnabled;
@property (nonatomic, getter=isSyncingEnabled) BOOL syncingEnabled;
@property (readonly, nonatomic) FCCloudContext *context;
@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) FCKeyValueStore *localStore;
@property (readonly, nonatomic, getter=isDirty) BOOL dirty;
@property (readonly, getter=isWaitingForFirstSync) BOOL waitingForFirstSync;
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
+ (void)populateLocalStoreClassRegistry:(id)a0;
+ (id)internalLocalStoreKeys;
+ (BOOL)isLocalStoreKeyInternal:(id)a0;

- (BOOL)canHelpRestoreZoneName:(id)a0;
- (void)removeObserver:(id)a0;
- (id)init;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (void)syncWithCompletion:(id /* block */)a0;
- (unsigned long long)softMaxRecordCountWhenMigratingZoneName:(id)a0;
- (void)handleSyncDidResetLocalDataForRecordZoneWithID:(id)a0;
- (void)activityObservingApplicationWindowDidBecomeForeground;
- (void)loadLocalCachesFromStore;
- (id)localStoreMigrator;
- (id)pruneRecords:(id)a0 forZoneName:(id)a1;
- (void).cxx_destruct;
- (void)handleSyncCompletion;
- (double)softMaxRecordAgeWhenMigratingZoneName:(id)a0;
- (BOOL)canHelpPruneZoneName:(id)a0;
- (id)recordsForRestoringZoneName:(id)a0;
- (void)dealloc;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (void)addObserver:(id)a0;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (id)jsonEncodableObject;
- (void)markAsDirty;
- (void)performFirstSyncWithCompletion:(id /* block */)a0;
- (void)zoneSyncManagerNotifyObservers:(id)a0;
- (void)zoneSyncManager:(id)a0 stateDidChange:(id)a1;
- (void)_possiblySimulateCrashWithMessage:(id)a0;
- (void)addCommandToCommandQueue:(id)a0;
- (void)addStateObserver:(id)a0;
- (void)assertReadyForUse;
- (void)createLocalStore;
- (void)disableSyncing;
- (void)enableSyncing;
- (void)forceSyncWithCompletion:(id /* block */)a0;
- (BOOL)isBackedByAnyRecordZoneIDsInSet:(id)a0;
- (void)mergeLocalStoreWithCloudWithPrivateDataDirectory:(id)a0;
- (void)performFirstSyncWithCallbackQueue:(id)a0 completion:(id /* block */)a1;
- (void)prepareForUse;
- (long long)qualityOfServiceForNextCommandInCommandQueue:(id)a0;
- (void)recordSyncManager:(id)a0 stateDidChange:(id)a1;
- (void)recordSyncManagerNotifyObservers:(id)a0;
- (void)removeStateObserver:(id)a0;
- (void)saveWithCompletion:(id /* block */)a0;
- (void)syncWithCallbackQueue:(id)a0 completion:(id /* block */)a1;

@end

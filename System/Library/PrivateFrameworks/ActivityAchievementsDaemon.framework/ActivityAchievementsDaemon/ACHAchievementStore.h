@class NSHashTable, ACHTemplateAssetRegistry, ACHAchievementProgressEngine, NSString, NSMutableDictionary, NSObject, NSMutableArray, ACHAwardsClient, ACHEarnedInstanceStore, ACHTemplateStore;
@protocol OS_dispatch_queue;

@interface ACHAchievementStore : NSObject <ACHTemplateStoreObserving, ACHEarnedInstanceStoreObserving, ACHAchievementProgressEngineObserving, ACHTemplateAssetRegistryDelegate, ACHAchievementStoring> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _syncLock;
    NSMutableArray *_initialFetchObserversToCall;
}

@property (retain, nonatomic) ACHAwardsClient *client;
@property (retain, nonatomic) ACHTemplateStore *templateStore;
@property (retain, nonatomic) ACHEarnedInstanceStore *earnedInstanceStore;
@property (retain, nonatomic) ACHTemplateAssetRegistry *templateAssetRegistry;
@property (retain, nonatomic) ACHAchievementProgressEngine *progressProvider;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) int protectedDataToken;
@property (nonatomic) BOOL templateStoreFinishedInitialFetch;
@property (nonatomic) BOOL earnedInstancsStoreFinishedInitialFetch;
@property (nonatomic) BOOL needsUpdateWhenProtectedDataAvailable;
@property (retain, nonatomic) NSMutableDictionary *achievementsByTemplateUniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)templateStore:(id)a0 didAddNewTemplates:(id)a1;
- (void)removeObserver:(id)a0;
- (void)_lock_removeTemplatesFromLocalStore:(id)a0;
- (id)_lock_populateMostRecentEarnedInstanceAndCountForAllAchievements;
- (id)initWithClient:(id)a0 templateStore:(id)a1 earnedInstanceStore:(id)a2 templateAssetRegistry:(id)a3 progressProvider:(id)a4;
- (void)_lock_addTemplatesToLocalStore:(id)a0;
- (id)allAchievements;
- (BOOL)_lock_addProgressAndGoalToAchievement:(id)a0;
- (void)earnedInstanceStoreDidFinishInitialFetch:(id)a0;
- (void)earnedInstanceStoreDidReceiveSyncNotification:(id)a0;
- (void)templateStoreDidFinishInitialFetch:(id)a0;
- (void)_performWithLock:(id /* block */)a0;
- (void)progressProviderDidUpdateProgressValues:(id)a0;
- (void)_notifyObserversOfUpdatedAchievements:(id)a0;
- (void).cxx_destruct;
- (void)_notifyObserversOfRemovedAchievements:(id)a0;
- (id)ephemeralAchievementWithTemplateUniqueName:(id)a0;
- (void)templateAssetRegistry:(id)a0 didUpdateResourcesForTemplatesWithSourceName:(id)a1;
- (void)recalculateProgressForAllAchievements;
- (id)_lock_ephemeralMonthlyChallengeAchievementForTemplateUniqueName:(id)a0 earnedInstance:(id)a1;
- (void)templateStore:(id)a0 didRemoveTemplates:(id)a1;
- (id)_lock_populateMostRecentEarnedInstancesAndCountsForAchievements:(id)a0;
- (void)earnedInstanceStore:(id)a0 didAddNewEarnedInstances:(id)a1;
- (void)dealloc;
- (void)_lock_notifyObserversOfInitialFetchCompletion;
- (void)earnedInstanceStore:(id)a0 didRemoveEarnedInstances:(id)a1;
- (BOOL)_initialFetchComplete;
- (id)achievementsForEarnedDateComponents:(id)a0;
- (void)_lock_populateResourcesForAchievementsWithTemplateSourceName:(id)a0;
- (void)addObserver:(id)a0;
- (void)_handleProtectedDataAvailabilityChangeNotification;
- (void)_notifyObserversOfNewAchievements:(id)a0;
- (id)achievementWithTemplateUniqueName:(id)a0;
- (void)loadAllAchievementsFromDatabaseIfNecessaryWithCompletionHandler:(id /* block */)a0;

@end

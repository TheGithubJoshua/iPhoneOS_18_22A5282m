@class NSHashTable, ACHTemplateAssetRegistry, ACHAchievementProgressEngine, NSString, NSMutableDictionary, NSObject, ACHEarnedInstanceStore, ACHTemplateStore;
@protocol OS_dispatch_queue;

@interface ACHLegacyAchievementStore : NSObject <ACHTemplateStoreObserving, ACHEarnedInstanceStoreObserving, ACHAchievementProgressEngineObserving, ACHTemplateAssetRegistryDelegate, ACHAchievementStoring>

@property (retain, nonatomic) ACHTemplateStore *templateStore;
@property (retain, nonatomic) ACHEarnedInstanceStore *earnedInstanceStore;
@property (retain, nonatomic) ACHTemplateAssetRegistry *templateAssetRegistry;
@property (retain, nonatomic) ACHAchievementProgressEngine *progressProvider;
@property (retain, nonatomic) NSMutableDictionary *achievementsByTemplateUniqueName;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue;
@property (nonatomic) BOOL templateStoreDidFinishInitialFetch;
@property (nonatomic) BOOL earnedInstanceStoreDidFinishInitialFetch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)templateStore:(id)a0 didAddNewTemplates:(id)a1;
- (void)removeObserver:(id)a0;
- (id)allAchievements;
- (void)earnedInstanceStoreDidFinishInitialFetch:(id)a0;
- (void)earnedInstanceStoreDidReceiveSyncNotification:(id)a0;
- (void)templateStoreDidFinishInitialFetch:(id)a0;
- (void)progressProviderDidUpdateProgressValues:(id)a0;
- (void)_notifyObserversOfUpdatedAchievements:(id)a0;
- (void).cxx_destruct;
- (void)_notifyObserversOfRemovedAchievements:(id)a0;
- (id)ephemeralAchievementWithTemplateUniqueName:(id)a0;
- (void)templateAssetRegistry:(id)a0 didUpdateResourcesForTemplatesWithSourceName:(id)a1;
- (void)recalculateProgressForAllAchievements;
- (void)templateStore:(id)a0 didRemoveTemplates:(id)a1;
- (void)earnedInstanceStore:(id)a0 didAddNewEarnedInstances:(id)a1;
- (void)_notifyObserversOfInitialFetchCompletion;
- (void)earnedInstanceStore:(id)a0 didRemoveEarnedInstances:(id)a1;
- (id)achievementsForEarnedDateComponents:(id)a0;
- (void)addObserver:(id)a0;
- (void)_notifyObserversOfNewAchievements:(id)a0;
- (id)achievementWithTemplateUniqueName:(id)a0;
- (void)loadAllAchievementsFromDatabaseIfNecessaryWithCompletionHandler:(id /* block */)a0;
- (void)_queue_addEarnedInstancesToLocalStore:(id)a0;
- (BOOL)_queue_addProgressAndGoalToAchievement:(id)a0;
- (void)_queue_addTemplatesToLocalStore:(id)a0;
- (id)_queue_ephemeralMonthlyChallengeAchievementForTemplateUniqueName:(id)a0 earnedInstance:(id)a1;
- (void)_queue_populateResourcesForAchievementsWithTemplateSourceName:(id)a0;
- (void)_queue_removeEarnedInstancesFromLocalStore:(id)a0;
- (void)_queue_removeTemplatesFromLocalStore:(id)a0;
- (id)initWithTemplateStore:(id)a0 earnedInstanceStore:(id)a1 templateAssetRegistry:(id)a2 progressProvider:(id)a3;

@end

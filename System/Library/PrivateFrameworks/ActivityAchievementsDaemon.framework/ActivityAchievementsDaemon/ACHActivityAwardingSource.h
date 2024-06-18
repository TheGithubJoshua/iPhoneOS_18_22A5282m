@class HDProfile, HKActivitySummary, NSObject, ACHAchievementProgressEngine, ACHEarnedInstanceAwardingEngine, HKHealthStore, NSMutableArray, ACHActivitySummaryIterator, ACHActivitySummaryUtility, NSCalendar, ACHActivityAwardingEnvironment, ACHDataStore, NSString, NSDictionary, ACHCurrentActivitySummaryQuery, ACHActivityTriggerGenerator, NSNumber, ACHActivityAwardingDataProvider, ACHTemplateStore, NSArray;
@protocol OS_dispatch_queue;

@interface ACHActivityAwardingSource : NSObject <HDHealthDaemonReadyObserver, HDCurrentActivitySummaryHelperObserver, ACHDataStorePropertyProviding, ACHEarnedInstanceAwarding, ACHAchievementProgressProviding>

@property (retain, nonatomic) NSCalendar *gregorianUTCCalendar;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (weak, nonatomic) HDProfile *profile;
@property (weak, nonatomic) ACHEarnedInstanceAwardingEngine *engine;
@property (weak, nonatomic) ACHAchievementProgressEngine *progressProvider;
@property (weak, nonatomic) ACHDataStore *dataStore;
@property (weak, nonatomic) ACHTemplateStore *templateStore;
@property (retain, nonatomic) ACHActivityAwardingDataProvider *dataProvider;
@property (retain, nonatomic) ACHActivityTriggerGenerator *triggerGenerator;
@property (retain, nonatomic) ACHActivityAwardingEnvironment *environment;
@property (retain, nonatomic) NSMutableArray *currentTemplates;
@property (retain, nonatomic) ACHActivityAwardingDataProvider *progressDataProvider;
@property (retain, nonatomic) ACHActivityAwardingEnvironment *progressEnvironment;
@property (retain, nonatomic) HKActivitySummary *todayActivitySummary;
@property (retain, nonatomic) HKActivitySummary *yesterdayActivitySummary;
@property (retain, nonatomic) ACHActivitySummaryIterator *activitySummaryIterator;
@property (retain, nonatomic) ACHActivitySummaryUtility *activitySummaryUtility;
@property (copy, nonatomic) id /* block */ incrementalUpdateCompletionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSNumber *overrideIsAppleWatch;
@property (readonly, nonatomic) BOOL isAppleWatch;
@property (retain, nonatomic) NSString *overrideWatchCountryCode;
@property (retain, nonatomic) NSString *watchCountryCode;
@property (nonatomic) BOOL isObservingSummaryUpdates;
@property (retain, nonatomic) ACHCurrentActivitySummaryQuery *currentActivitySummaryQuery;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly, nonatomic) NSArray *dataStorePropertyKeys;
@property (retain, nonatomic) NSDictionary *dataStoreProperties;

- (id)earnedInstancesForHistoricalInterval:(id)a0 databaseContext:(id)a1;
- (id)currentGoalQuantityForTemplate:(id)a0;
- (void)currentActivitySummaryHelper:(id)a0 didUpdateTodayActivitySummary:(id)a1 changedFields:(unsigned long long)a2;
- (id)currentProgressQuantityForTemplate:(id)a0;
- (BOOL)providesProgressForTemplate:(id)a0;
- (void)currentActivitySummaryHelper:(id)a0 didUpdateYesterdayActivitySummary:(id)a1 changedFields:(unsigned long long)a2;
- (void)dataStoreDidClearAllProperties:(id)a0 completion:(id /* block */)a1;
- (BOOL)_isAchievementStillEarnableForTemplate:(id)a0 andProgressEnvironment:(id)a1;
- (void)daemonReady:(id)a0;
- (void)startUp;
- (unsigned long long)_queue_triggersWithChangedSummaryFields:(unsigned long long)a0 dataProvider:(id)a1;
- (id)_queue_companionProgressEnvironment;
- (id)initWithProfile:(id)a0 dataStore:(id)a1 templateStore:(id)a2 awardingEngine:(id)a3 progressProvider:(id)a4;
- (void)_queue_updateDataProvider:(id)a0 forDateInterval:(id)a1 awardingBlock:(id /* block */)a2;
- (id)earnedInstancesForHistoricalInterval:(id)a0;
- (void)_queue_observeSummaries;
- (void).cxx_destruct;
- (BOOL)_hasMetGoalForTemplate:(id)a0 andActivitySummary:(id)a1;
- (id)initWithHealthStore:(id)a0 dataStore:(id)a1 templateStore:(id)a2 awardingEngine:(id)a3 progressProvider:(id)a4;
- (void)_queue_updateDataProvider:(id)a0 forDateInterval:(id)a1 awardingBlock:(id /* block */)a2 error:(id *)a3;
- (void)_runIncrementallyForChangedSummaryFields:(unsigned long long)a0;
- (id)_queue_progressEnvironment;
- (unsigned char)_creatorDevice;
- (void)_queue_startCurrentSummaryQuery;
- (id)_queue_evaluateTriggers:(unsigned long long)a0 activitySummary:(id)a1 templates:(id)a2 shouldLog:(BOOL)a3;

@end

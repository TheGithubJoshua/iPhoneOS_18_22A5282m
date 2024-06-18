@class RTLifeCycleManager, NSArray, RTXPCActivityManager, RTLearnedLocationStore, RTVisitStore, RTDarwinNotificationHelper, NSObject;
@protocol OS_dispatch_source;

@interface RTPurgeManager : RTService

@property (retain, nonatomic) NSObject<OS_dispatch_source> *memoryWarningDispatchSource;
@property (nonatomic) long long pressureState;
@property (retain, nonatomic) RTDarwinNotificationHelper *notificationHelper;
@property (retain, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (weak, nonatomic) RTLifeCycleManager *lifeCycleManager;
@property (retain, nonatomic) NSArray *purgers;
@property (retain, nonatomic) RTVisitStore *visitStore;
@property (readonly, nonatomic) RTXPCActivityManager *xpcActivityManager;

+ (id)purgeTypeToString:(long long)a0;

- (void)purge:(id /* block */)a0;
- (id)init;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (id)_lastLabeledLearnedVisitWithError:(id *)a0;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (id)_shortTermReferenceDate:(id)a0;
- (void)handleLanguageChangeNotification;
- (id)_cacheDateDependencyUnlabeledLearnedVisitWithDateInterval:(id)a0;
- (id)_cacheDateDependencyForVisitWithDateInterval:(id)a0;
- (id)_firstUnlabeledLearnedVisitWithError:(id *)a0;
- (id)_cacheDateDependencyLabeledLearnedVisitWithDateInterval:(id)a0;
- (void).cxx_destruct;
- (void)onCoreLocationPrivacyReset;
- (id)_generatePeriodicPurgeReferenceDateDict;
- (id)_selectPruneDateFromReferenceDateDict:(id)a0 purger:(id)a1 type:(long long)a2;
- (void)_unregisterForMemoryPressureWarnings;
- (void)dealloc;
- (void)_purgeWithType:(long long)a0 referenceDate:(id)a1 handler:(id /* block */)a2;
- (void)clearRoutineWithHandler:(id /* block */)a0;
- (void)_handleLanguageChangeNotification;
- (id)initWithDefaultsManager:(id)a0 learnedLocationStore:(id)a1 lifeCycleManager:(id)a2 platform:(id)a3 purgers:(id)a4 visitStore:(id)a5 xpcActivityManager:(id)a6;
- (id)_lastVisitWithError:(id *)a0;
- (void)_registerForMemoryPressureWarnings;
- (id)_determinePruneDate:(id)a0 boundaryInterval:(id)a1;
- (id)_longTermReferenceDate:(id)a0;
- (void)_purge:(id /* block */)a0;

@end

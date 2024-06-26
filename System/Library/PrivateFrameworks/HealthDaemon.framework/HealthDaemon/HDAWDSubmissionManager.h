@class NSString, HDProfile, NSMutableDictionary, _HDAWDPeriodicAction, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface HDAWDSubmissionManager : NSObject <HDProfileReadyObserver, HDDiagnosticObject, HDAnalyticsSubmissionCoordinatorDelegate> {
    NSMutableDictionary *_serverConnectionsByComponentId;
    NSMutableArray *_actions;
    NSObject<OS_dispatch_queue> *_queue;
    _HDAWDPeriodicAction *_fitnessDailyAction;
    BOOL _started;
    int _fitnessDailyCollectionEnabledNotifyToken;
}

@property (copy, nonatomic) id /* block */ testHandler;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (long long)_int64ForKeyPrefix:(id)a0 profile:(id)a1 date:(id *)a2 error:(id *)a3;
- (id)motionToken;
- (void)profileDidBecomeReady:(id)a0;
- (void)updateFitnessDailyCollectionEnabled;
- (void).cxx_destruct;
- (void)reportDailyAnalyticsWithCoordinator:(id)a0 completion:(id /* block */)a1;
- (id)diagnosticDescription;
- (id)_updateDeltaToInt64:(long long)a0 forKey:(id)a1 profile:(id)a2 currentDate:(id)a3 timeInterval:(double)a4 error:(id *)a5;
- (BOOL)isFitnessDailyCollectionEnabled;
- (long long)_nonAppleSourcesWithDataSince:(id)a0 transaction:(id)a1 error:(id *)a2;
- (void)dealloc;
- (void)resetTask:(id)a0;
- (BOOL)aggregateDatabaseSizeStats:(id)a0;
- (BOOL)_setInt64:(long long)a0 keyPrefix:(id)a1 profile:(id)a2 date:(id)a3 error:(id *)a4;
- (id)_activitySummaryForActivityCacheIndex:(long long)a0 error:(id *)a1;
- (long long)_manuallyEnteredTypesCountWithTransaction:(id)a0 error:(id *)a1;
- (BOOL)runTask:(id)a0 error:(id *)a1;

@end

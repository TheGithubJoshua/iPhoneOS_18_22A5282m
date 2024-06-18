@class HDXPCGatedActivity, NSString, HDProfile, NSObject, NSUserDefaults;
@protocol OS_os_log, HKHRDatabaseAnalysisSchedulerDelegate, HKHRDatabaseAnalysisSchedulerDatabaseAssertionProvider, HKHRDatabaseAnalysisSchedulerGatedActivityFactory;

@interface HKHRDatabaseAnalysisSchedulerImpl : NSObject <HDHealthDaemonReadyObserver, HKHRDatabaseAnalysisScheduler> {
    HDProfile *_profile;
    NSString *_identifier;
    NSObject<OS_os_log> *_loggingCategory;
    double _maximumDelay;
    double _retryDelay;
    id<HKHRDatabaseAnalysisSchedulerGatedActivityFactory> _gatedActivityFactory;
    id<HKHRDatabaseAnalysisSchedulerDatabaseAssertionProvider> _assertionProvider;
    NSUserDefaults *_persistentStateDefaults;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _state;
    HDXPCGatedActivity *_lock_gatedActivity;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HKHRDatabaseAnalysisSchedulerDelegate> delegate;

- (double)_retryDelayGivenRetryCount:(long long)a0;
- (void)daemonReady:(id)a0;
- (void)_runActivity:(id)a0 withCompletion:(id /* block */)a1;
- (id)initWithProfile:(id)a0 identifier:(id)a1 loggingCategory:(id)a2 maximumDelay:(double)a3 retryDelay:(double)a4 gatedActivityFactory:(id)a5 assertionProvider:(id)a6 persistentStateDefaults:(id)a7;
- (void)_maybeRetryLater;
- (void)scheduleAnalysis;
- (void).cxx_destruct;
- (void)_requestGatedActivityRunWithDelay:(double)a0;
- (void)_runMaintenanceOperationForActivity:(id)a0 assertion:(id)a1 withCompletion:(id /* block */)a2;
- (void)_resetRetryCounter;
- (BOOL)_enterStateIfPossible:(unsigned long long)a0;
- (id)_gatedActivity;
- (id)retryCountKey;
- (void)forceAnalysis;
- (id)initWithProfile:(id)a0 identifier:(id)a1 loggingCategory:(id)a2 maximumDelay:(double)a3 retryDelay:(double)a4;

@end

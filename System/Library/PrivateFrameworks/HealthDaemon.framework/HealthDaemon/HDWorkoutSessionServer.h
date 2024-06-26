@class HKDataFlowLink, HDProfile, BKSProcessAssertion, NSDate, HDWorkoutSessionTaskServer, NSObject, HKWorkoutActivity, HKSource, HDWorkoutManager, HDWorkoutSessionEntity, HDHealthStoreClient, HKStateMachine, NSString, HKWorkoutConfiguration, _HKCurrentWorkoutSnapshot, _HKExpiringCompletionTimer, NSArray, HKObserverSet, NSUUID;
@protocol HDWorkoutDataAccumulator, HDWorkoutSessionController, OS_dispatch_source, OS_dispatch_queue;

@interface HDWorkoutSessionServer : NSObject <HKDataFlowLinkProcessor, HKStateMachineDelegate, HDWorkoutSessionStateController, HDWorkoutDataSource> {
    HDProfile *_profile;
    HDWorkoutManager *_workoutManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_persistenceQueue;
    HKDataFlowLink *_workoutDataFlowLink;
    HKObserverSet *_observers;
    id<HDWorkoutSessionController> _sessionController;
    _HKExpiringCompletionTimer *_invalidationTimer;
    BKSProcessAssertion *_invalidationAssertion;
    HDWorkoutSessionEntity *_persistentEntity;
    double _stopEventGenerationWaitInterval;
    HKStateMachine *_stateMachine;
    HKStateMachine *_targetStateMachine;
    BOOL _hasFailed;
    _HKCurrentWorkoutSnapshot *_currentWorkoutSnapshot;
    NSObject<OS_dispatch_source> *_latestActivityUpdateTimer;
    NSDate *_requestedStartDate;
    NSDate *_requestedEndDate;
    HKWorkoutConfiguration *_firstActivityConfiguration;
}

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) HKWorkoutConfiguration *workoutConfiguration;
@property (readonly, copy, nonatomic) NSString *applicationIdentifier;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL canBePaused;
@property (readonly, nonatomic) BOOL isFirstParty;
@property (readonly, nonatomic) BOOL shouldStopPreviousSession;
@property (weak, nonatomic) HDWorkoutSessionTaskServer *taskServer;
@property (retain, nonatomic) HDHealthStoreClient *client;
@property (readonly, copy, nonatomic) NSString *clientProcessBundleIdentifier;
@property (readonly, copy, nonatomic) HKSource *clientSource;
@property (readonly, nonatomic) long long state;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *stopDate;
@property (readonly, copy, nonatomic) HKWorkoutActivity *currentActivity;
@property (readonly, copy, nonatomic) NSArray *activityConfigurations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<HDWorkoutDataAccumulator> workoutDataAccumulator;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (readonly, copy) NSUUID *workoutDataProcessorUUID;

+ (id)recoveredSessionServerWithProfile:(id)a0 sessionUUID:(id)a1 workoutManager:(id)a2 error:(id *)a3;
+ (BOOL)finishAllWorkoutsExcludingSessions:(id)a0 profile:(id)a1 error:(id *)a2;
+ (void)unitTest_setDefaultStopEventGenerationWaitInterval:(double)a0;
+ (BOOL)finishAllWorkoutSessionsForClient:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)sessionIdentifierForRecoveryInProfile:(id)a0 error:(id *)a1;
+ (id)workoutConfigurationForRecoveryWithProfile:(id)a0 sessionUUID:(id)a1 error:(id *)a2;

- (void)finish;
- (void)removeObserver:(id)a0;
- (void)generateError:(id)a0;
- (BOOL)prepareWithError:(id *)a0;
- (BOOL)resumeWithError:(id *)a0;
- (void)addObserver:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (void)endHeartRateRecovery;
- (void)unitTest_setCMWorkoutManager:(id)a0;
- (void)dealloc;
- (void)stateMachine:(id)a0 persistTransition:(id)a1;
- (void)stateMachine:(id)a0 didEnterState:(id)a1 date:(id)a2 error:(id)a3;
- (void)stateMachine:(id)a0 didTransition:(id)a1 fromState:(id)a2 toState:(id)a3 date:(id)a4 error:(id)a5;
- (void)stateMachine:(id)a0 willEnterState:(id)a1 date:(id)a2 error:(id)a3;
- (BOOL)pauseWithError:(id *)a0;
- (BOOL)endCurrentActivityOnDate:(id)a0 error:(id *)a1;
- (void)autoPauseWithDate:(id)a0;
- (void)autoResumeWithDate:(id)a0;
- (BOOL)beginNewActivityWithConfiguration:(id)a0 date:(id)a1 metadata:(id)a2 error:(id *)a3;
- (id)currentWorkoutSnapshot;
- (void)didBecomeCurrent;
- (void)didBeginNewActivity:(id)a0;
- (void)didDetectActivityChange:(id)a0;
- (void)didEndCurrentActivity:(id)a0;
- (void)didResignCurrentWithError:(id)a0;
- (BOOL)enableAutomaticDetectionForActivityConfigurations:(id)a0 error:(id *)a1;
- (BOOL)endWithError:(id *)a0;
- (void)fakeActivityDetection:(id)a0 workoutActivity:(id)a1 completion:(id /* block */)a2;
- (void)finishAggregationWithDate:(id)a0;
- (void)generateConfigurationUpdate:(id)a0;
- (void)generateEvent:(id)a0;
- (void)generateMetadata:(id)a0;
- (id)initWithProfile:(id)a0 configuration:(id)a1 sessionUUID:(id)a2 workoutManager:(id)a3;
- (void)setAssociatedWorkoutBuilderEntity:(id)a0;
- (BOOL)setTargetState:(long long)a0 date:(id)a1 error:(id *)a2;
- (void)setWorkoutDataAccumulator:(id)a0;
- (BOOL)startActivityWithDate:(id)a0 error:(id *)a1;
- (BOOL)stopActivityWithDate:(id)a0 error:(id *)a1;
- (BOOL)storeSessionControllerState:(id)a0 forRecoveryIdentifier:(id)a1 error:(id *)a2;
- (id)taskServerConfigurationForRecoveryWithError:(id *)a0;
- (void)unitTest_generateStopEvent;
- (void)unitTest_generateWorkoutConfigurationUpdate:(id)a0;
- (void)unitTest_setSessionController:(id)a0;
- (void)unitTest_setStopEventGenerationWaitInterval:(double)a0;
- (BOOL)unitTest_updateLatestActivityDate:(id)a0;
- (void)workoutDataDestination:(id)a0 didBeginActivity:(id)a1;
- (void)workoutDataDestination:(id)a0 didChangeFromState:(unsigned long long)a1 toState:(unsigned long long)a2;
- (void)workoutDataDestination:(id)a0 didEndActivity:(id)a1;
- (void)workoutDataDestination:(id)a0 didUpdateConfiguration:(id)a1;
- (void)workoutDataDestination:(id)a0 requestsDataFrom:(id)a1 to:(id)a2;
- (void)workoutDataDestination:(id)a0 requestsFinalDataFrom:(id)a1 to:(id)a2 completion:(id /* block */)a3;

@end

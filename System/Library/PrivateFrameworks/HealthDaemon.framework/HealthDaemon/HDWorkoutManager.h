@class NSMutableDictionary, HDLocationManager, HDProfile, NSObject, HDAlertSuppressor, NSMutableArray, HDAssertion, NSString, NSHashTable, HDWorkoutSessionServer, HDWorkoutLocationSmoother, HDWatchAppStateMonitor, HKObserverSet;
@protocol OS_dispatch_queue;

@interface HDWorkoutManager : NSObject <HDDevicePowerObserver, HDDiagnosticObject, HDProfileReadyObserver, HDWorkoutDataAccumulatorObserver, HDWorkoutSessionObserver> {
    HDWorkoutSessionServer *_currentWorkout;
    HDAssertion *_currentWorkoutAssertion;
    HDWorkoutSessionServer *_nextWorkout;
    NSMutableDictionary *_sessionServers;
    NSMutableDictionary *_sessionCreationHandlers;
    NSHashTable *_observerTable;
    HKObserverSet *_sessionObservers;
    HDWatchAppStateMonitor *_appStateMonitor;
    BOOL _hasPerformedPostLaunchSessionRecovery;
    NSMutableArray *_postLaunchRecoveryBlocks;
    NSObject<OS_dispatch_queue> *_postLaunchRecoveryCallbackQueue;
    HKObserverSet *_currentWorkoutObservers;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) HDWorkoutLocationSmoother *locationSmoother;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) BOOL isInHeartRateRecovery;
@property (readonly, nonatomic) HDAlertSuppressor *alertSuppressor;
@property (readonly, nonatomic) HDLocationManager *locationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (id)sessionServerWithConfiguration:(id)a0 sessionUUID:(id)a1 taskServer:(id)a2 error:(id *)a3;
- (void)workoutSession:(id)a0 didUpdateControllerStateForRecoveryIdentifier:(id)a1;
- (void)workoutSession:(id)a0 didUpdateDataAccumulator:(id)a1;
- (BOOL)hasAnyActiveWorkouts;
- (id)newCMSwimTracker;
- (void)addWorkoutEventObserver:(id)a0;
- (void)workoutSession:(id)a0 didEndActivity:(id)a1;
- (void)addWorkoutSessionObserver:(id)a0 queue:(id)a1;
- (void)startWatchAppWithWorkoutConfiguration:(id)a0 client:(id)a1 completion:(id /* block */)a2;
- (void)hk_fakeLapEventWithDate:(id)a0 strokeStyle:(long long)a1;
- (id)currentWorkoutSessionServer;
- (id)unitTest_currentWorkoutSession;
- (id)newBiomeInterface;
- (BOOL)currentActivityRequiresExtendedMode;
- (void)workoutSession:(id)a0 didChangeToState:(long long)a1 fromState:(long long)a2 date:(id)a3;
- (void)performWhenPostLaunchSessionRecoveryHasCompleted:(id /* block */)a0;
- (void)_receivedStartWorkoutAppRequest:(id)a0 completion:(id /* block */)a1;
- (void)profileDidBecomeReady:(id)a0;
- (void)workoutSession:(id)a0 didFailWithError:(id)a1;
- (void)workoutSession:(id)a0 didGenerateEvent:(id)a1;
- (BOOL)finishAllWorkoutsForClient:(id)a0 error:(id *)a1;
- (long long)currentWorkoutLocationType;
- (void)unitTest_smoothRoute:(id)a0 withSmoother:(id)a1 completion:(id /* block */)a2;
- (id)recoveredWorkoutSessionServerWithIdentifier:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)recoverWorkoutSessionForClient:(id)a0 server:(id)a1 completion:(id /* block */)a2;
- (void)generatePauseOrResumeRequestWithCompletion:(id /* block */)a0;
- (void)endHeartRateRecovery;
- (void)receivedStartWorkoutAppRequest:(id)a0 completion:(id /* block */)a1;
- (void)_startWatchAppWithWorkoutConfiguration:(id)a0 client:(id)a1 completion:(id /* block */)a2;
- (void)unregisterCurrentWorkoutObserver:(id)a0;
- (id)diagnosticDescription;
- (void)hk_fakeStopEventWithDate:(id)a0;
- (void)_sendStartWorkoutAppResponse:(id /* block */)a0 error:(id)a1;
- (void)workoutSession:(id)a0 didBeginActivity:(id)a1;
- (void)dealloc;
- (void)removeWorkoutSessionObserver:(id)a0;
- (void)unitTest_finishAllDetachedWorkoutBuilders;
- (id)currentWorkoutClient;
- (void)devicePowerMonitor:(id)a0 primaryPowerSourceIsCharging:(BOOL)a1;
- (void)getCurrentWorkoutSnapshotWithCompletion:(id /* block */)a0;
- (void)removeWorkoutEventObserver:(id)a0;
- (unsigned long long)currentWorkoutActivityType;
- (void)sessionServerFromSessionIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)registerCurrentWorkoutObserver:(id)a0;

@end

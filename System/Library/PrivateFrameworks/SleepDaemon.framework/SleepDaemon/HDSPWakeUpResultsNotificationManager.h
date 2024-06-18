@class HKSHGoalProgressEngine, NAFuture, NSString, HDSPEnvironment, HDSPWakeUpResultsNotificationStateMachine, NSDate;
@protocol HDSPSleepEventDelegate, HDSPActivityScheduler, NAScheduler;

@interface HDSPWakeUpResultsNotificationManager : NSObject <HDSPWakeUpResultsNotificationStateMachineInfoProvider, HDSPWakeUpResultsNotificationStateMachineDelegate, HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPNotificationObserver, HDSPSleepEventHandler, HDSPSleepEventProvider, HDSPSleepScheduleModelObserver, HDSPSleepScheduleStateObserver, HDSPTimeChangeObserver>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) HDSPWakeUpResultsNotificationStateMachine *stateMachine;
@property (readonly, nonatomic) NAFuture *queryResultFuture;
@property (readonly, nonatomic) HKSHGoalProgressEngine *goalProgressEngine;
@property (readonly, nonatomic) id<HDSPActivityScheduler> retryAttemptScheduler;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) BOOL isWakeUpResultsNotificationEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) id<HDSPSleepEventDelegate> sleepEventDelegate;

+ (id)retryActivity;
+ (id)retryCriteria;

- (void)unscheduleRetryAttempt;
- (id)upcomingEventsDueAfterDate:(id)a0;
- (void)significantTimeChangeDetected:(id)a0;
- (id)eventIdentifiers;
- (id)_sleepScheduleModel;
- (void)scheduleStateExpiration;
- (void)executeQuery;
- (void)stopObservingProtectedHealthDataAvailability;
- (void)postResultsNotification;
- (void)scheduleRetryAttempt;
- (void)startObservingProtectedHealthDataAvailability;
- (void)sleepEventIsDue:(id)a0;
- (id)_currentState;
- (id)initWithEnvironment:(id)a0;
- (id)notificationAttemptWindowForWakeUpBeforeDate:(id)a0;
- (id)diagnosticInfo;
- (void)environmentDidBecomeReady:(id)a0;
- (void)environmentWillBecomeReady:(id)a0;
- (id)performImmediateQueryForNotification;
- (void)_withLock:(id /* block */)a0;
- (void)sleepScheduleModelManager:(id)a0 didUpdateSleepScheduleModel:(id)a1;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0 previousState:(unsigned long long)a1 reason:(unsigned long long)a2;
- (id)notificationListener:(id)a0 didReceiveNotificationWithName:(id)a1;
- (BOOL)_isWaitingForWakeUp;
- (void)_updateState;
- (BOOL)_isDelayingForTracking;
- (void).cxx_destruct;
- (void)_lock_startQuery;
- (id)diagnosticDescription;
- (id)initWithEnvironment:(id)a0 retryAttemptScheduler:(id)a1;
- (double)_trackingDelayDuration;
- (void)unscheduleStateExpiration;

@end

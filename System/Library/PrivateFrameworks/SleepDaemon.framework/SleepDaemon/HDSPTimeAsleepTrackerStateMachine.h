@class NSDate, HDSPTimeAsleepTrackerActivityAfterWakeUpTrackingState, HDSPTimeAsleepTrackerManualTrackingState, NSString, HDSPTimeAsleepTrackerInternalEndState, HKSPSleepScheduleModel, HDSPTimeAsleepTrackerAutoTrackingState, HDSPTimeAsleepTrackerWaitingState, HDSPTimeAsleepTrackerActivityTrackingState, HDSPTimeAsleepTrackerDisabledState;
@protocol HDSPTimeAsleepTrackerStateMachineDelegate, HDSPTimeAsleepTrackerStateMachineInfoProvider, NAScheduler;

@interface HDSPTimeAsleepTrackerStateMachine : HKSPPersistentStateMachine <HDSPTimeAsleepTrackerStateMachineDelegate, HDSPTimeAsleepTrackerStateMachineInfoProvider, HDSPTimeAsleepTrackerStateMachineEventHandler>

@property (readonly, weak, nonatomic) id<HDSPTimeAsleepTrackerStateMachineDelegate> delegate;
@property (readonly, weak, nonatomic) id<HDSPTimeAsleepTrackerStateMachineInfoProvider> infoProvider;
@property (readonly, nonatomic) HDSPTimeAsleepTrackerDisabledState *disabledState;
@property (readonly, nonatomic) HDSPTimeAsleepTrackerWaitingState *waitingState;
@property (readonly, nonatomic) HDSPTimeAsleepTrackerAutoTrackingState *autoTrackingState;
@property (readonly, nonatomic) HDSPTimeAsleepTrackerActivityTrackingState *activityTrackingState;
@property (readonly, nonatomic) HDSPTimeAsleepTrackerActivityAfterWakeUpTrackingState *activityAfterWakeUpTrackingState;
@property (readonly, nonatomic) HDSPTimeAsleepTrackerManualTrackingState *manualTrackingState;
@property (readonly, nonatomic) HDSPTimeAsleepTrackerInternalEndState *internalEndState;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) BOOL isCharging;
@property (readonly, nonatomic) BOOL isWristDetectEnabled;
@property (readonly, nonatomic) BOOL inUserRequestedSleepMode;
@property (readonly, nonatomic) BOOL inWakeDetectionWindow;
@property (readonly, nonatomic) unsigned long long sleepScheduleState;

- (unsigned long long)loggingCategory;
- (id)initWithIdentifier:(id)a0 persistence:(id)a1 delegate:(id)a2 infoProvider:(id)a3 currentDateProvider:(id /* block */)a4;
- (void).cxx_destruct;
- (id)allStates;
- (void)bedtimeOccurred;
- (void)activityDetectedOnDate:(id)a0;
- (void)appLaunchedOnDate:(id)a0;
- (void)endSleepTrackingSessionWithReason:(unsigned long long)a0;
- (void)notifyForActivityDetectedOnDate:(id)a0;
- (void)sleepModeExitedWithReason:(unsigned long long)a0;
- (void)sleepSessionEndRequestedInternally;
- (void)sleepSessionFinished;
- (void)startActivityDetection;
- (void)startAppLaunchDetection;
- (void)startSleepTrackingSessionWithReason:(unsigned long long)a0;
- (void)startWakeDetectionOccurred;
- (void)stopActivityDetection;
- (void)stopAppLaunchDetection;
- (id)trackingWindowAfterDate:(id)a0;
- (void)userEngagedSleepMode;
- (void)wakeUpOccurredWithReason:(unsigned long long)a0;

@end

@class AWAttentionAwarenessClient, NSString, AFNotifyStatePublisher, NSDateFormatter, AFWatchdogTimer, AFMyriadAdvertisementContextManager, NSMutableDictionary, AFPowerAssertionManager, AFMyriadRecord, AFMyriadEmergencyCallPunchout, AFMyriadContext, NSObject, AFMyriadSession, AFMyriadAdvertisementContextRecord, NSData, AFMyriadInstrumentation, WPHeySiri, AFMyriadPreferences, SFDiagnostics, NSUUID, NSDate, AFNotifyObserver, AFMyriadGoodnessScoreEvaluator;
@protocol OS_dispatch_queue, OS_dispatch_source, AFArbitrationEventUpdatesDelegate;

@interface AFMyriadCoordinator : NSObject <AFNotifyObserverDelegate, WPHeySiriProtocol> {
    unsigned long long _myriadState;
    unsigned long long _nextState;
    unsigned long long _previousState;
    NSData *_previousAdvertisedData;
    NSMutableDictionary *_replies;
    NSMutableDictionary *_replyCounts;
    NSMutableDictionary *_repliesBeforeDecision;
    NSMutableDictionary *_previousTrumps;
    NSMutableDictionary *_incomingTrumps;
    NSMutableDictionary *_multipleContinuations;
    id _delegate;
    NSString *_deviceClassName;
    unsigned char _deviceClass;
    unsigned char _productType;
    NSString *_productTypeName;
    int _deviceAdjust;
    double _deviceDelay;
    double _deviceTrumpDelay;
    double _deviceVTEndtimeDistanceThreshold;
    double _deviceInEarDelay;
    double _deviceInEarInterval;
    unsigned char _deviceGroup;
    NSObject<OS_dispatch_queue> *_myriadWorkQueue;
    NSObject<OS_dispatch_queue> *_myriadAdvertisementContextQueue;
    NSObject<OS_dispatch_queue> *_myriadAttentionQueue;
    NSString *_timerLabel;
    NSObject<OS_dispatch_source> *_timer;
    NSUUID *_eventToken;
    AFWatchdogTimer *_overallTimeout;
    AFPowerAssertionManager *_powerAssertionManager;
    struct __CFNotificationCenter { } *_center;
    AFMyriadRecord *_triggerRecord;
    long long _recordType;
    unsigned long long _voiceTriggerTime;
    float _delayTarget;
    float _advertInterval;
    int _nTimesContinued;
    int _nTimesExtended;
    unsigned char _incomingAdjustment;
    AFMyriadRecord *_overrideMyriadRecord;
    int _slowdownMsecs;
    int _testInducedSlowdownMsecs;
    AFMyriadRecord *_maxSlowdownRecord;
    BOOL _BTLEReady;
    BOOL _inTask;
    BOOL _inSetupMode;
    BOOL _ducking;
    BOOL _stateMachineEncounteredError;
    BOOL _listenTimerIsRunning;
    BOOL _coordinationEnabled;
    BOOL _BLEActivityEnabled;
    BOOL _clientIsDirectActivating;
    BOOL _clientIsInEarActivation;
    BOOL _clientRecentlyLostElection;
    BOOL _clientLostDueToTrumping;
    BOOL _clientIsListeningAfterRecentWin;
    BOOL _clientIsWatchActivation;
    BOOL _clientIsWatchTrumpPromote;
    BOOL _clientIsRespondingToSlowdown;
    BOOL _clientDoneRespondingToSlowdown;
    BOOL _clientRespondingToCarPlay;
    BOOL _clientIsDeciding;
    int _constantGoodness;
    NSObject<OS_dispatch_source> *_timerSource;
    NSDateFormatter *_dateFormat;
    WPHeySiri *_heySiriBTLE;
    NSUUID *_designatedSelfID;
    NSDate *_triggerTime;
    int _nDeltaTs;
    AFMyriadEmergencyCallPunchout *_callPunchout;
    unsigned long long _lastDecisionTime;
    BOOL _lastDecision;
    unsigned short _lastPHash;
    double _lastEmergencyAttempt;
    BOOL _wasEmergency;
    BOOL _suppressLateTrigger;
    BOOL _ignoreInTaskTimer;
    SFDiagnostics *_sfdiagnostics;
    AFWatchdogTimer *_sfDiagnosticsTimer;
    struct { BOOL didRequestForBTLEScan; BOOL didRequestForBTLEAdvertisement; } _heySiriBTLEState;
    struct { NSObject<OS_dispatch_source> *waitTimer; id /* block */ waitBlock; BOOL isWaitTimerSuspended; } _wiproxReadinessTimer;
    struct { NSDate *advertTriggerAdvStartTime; NSDate *advertTriggerEndTime; } _advTiming;
    AFMyriadAdvertisementContextManager *_advContextManager;
    AFMyriadAdvertisementContextRecord *_contextRecord;
    AFMyriadGoodnessScoreEvaluator *_goodnessScoreEvaluator;
    AFMyriadSession *_myriadSession;
    AFNotifyStatePublisher *_electionBeginPublisher;
    AFNotifyStatePublisher *_electionWinPublisher;
    AFNotifyStatePublisher *_electionLossPublisher;
    AFNotifyStatePublisher *_electionRepostWinDecisionPublisher;
    AFNotifyObserver *_preferencesChangedNotification;
    AFNotifyObserver *_myriadStateMachineForceNoActivityObserver;
    unsigned long long _electionPublisherState;
    AFMyriadPreferences *_preferences;
    AWAttentionAwarenessClient *_attentionClient;
    id /* block */ _waitForWiproxReadinessToScan;
    unsigned long long _latestRecordReceivedTime;
    AFMyriadContext *_currentMyriadContext;
    AFMyriadInstrumentation *_myriadInstrumentation;
    NSUUID *_currentRequestId;
    NSDate *_lastWonBySmallAmountDate;
    id<AFArbitrationEventUpdatesDelegate> _arbitrationEventsDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearCurrentCoordinator;
+ (id)currentCoordinator;
+ (void)didChangeDefaults;

- (void)_cancelTimer;
- (void)heySiriDidUpdateState:(id)a0;
- (id)_stateAsString;
- (void)resetStateMachine;
- (void)startListening;
- (unsigned char)deviceClass;
- (void)_updateRepliesWith:(id)a0 id:(id)a1 data:(id)a2;
- (void)startAdvertisingFromOutgoingTrigger;
- (void)_resetAdvertisementTimings;
- (void)stopListening;
- (BOOL)_deviceShouldContinue:(id)a0;
- (void)_resetActionWindows;
- (BOOL)_inTaskTriggerWasTooSoon;
- (void)startAdvertisingFromInTaskVoiceTrigger;
- (void)startAdvertisingFromInEarTrigger;
- (void)_startTimer:(id)a0 for:(float)a1 thenEnterState:(unsigned long long)a2;
- (void)_winElection;
- (void)endTask;
- (void)_advertiseIndefinite:(id)a0;
- (void)_waitWiProx:(long long)a0 andExecute:(id /* block */)a1;
- (void)heySiriStartedScanning:(id)a0;
- (id)lateSuppressionRecord;
- (void)startListeningToEmergencySignal;
- (int)_myriadStateForSelf:(unsigned long long)a0;
- (id)initWithDelegate:(id)a0;
- (void)endAdvertisingWithDeviceProhibitions:(id)a0;
- (void)instrumentationUpdateBoost:(unsigned char)a0 value:(unsigned int)a1;
- (void)_createDispatchTimerFor:(double)a0 toExecute:(id /* block */)a1;
- (void)startAdvertisingEmergencyHandled;
- (void)_loseElection;
- (void)_startTimer:(id)a0 for:(float)a1 thenExecute:(id /* block */)a2;
- (id)_stateAsString:(unsigned long long)a0;
- (void)startWatchAdvertisingFromVoiceTriggerWithContext:(id)a0;
- (void)preheatWiProx;
- (void)_endAdvertising:(id /* block */)a0;
- (void)_duringNextWindowExecute:(id /* block */)a0;
- (void)_initDeviceClassAndAdjustments;
- (void)heySiriStartedAdvertising:(id)a0;
- (void)startAdvertisingFromVoiceTriggerWithGoodnessScoreContext:(id)a0 withContext:(id)a1;
- (void)_advertiseTrigger;
- (BOOL)_shouldHandleEmergency;
- (void)_createMyriadSessionIfRequired;
- (void)_handleStateMachineErrorIfNeeded;
- (id)_endAdvertisingAnalyticsContext:(BOOL)a0;
- (void)heySiriAdvertisingPending:(id)a0;
- (void)_waitWiProxAndExecute:(id /* block */)a0;
- (void)startAdvertisingForPHSSetupAfterDelay:(float)a0 maxInterval:(float)a1;
- (void)stopListening:(id /* block */)a0;
- (void)_enteringIntoState:(unsigned long long)a0 fromState:(unsigned long long)a1;
- (void)startAdvertising:(id)a0 afterDelay:(float)a1 maxInterval:(float)a2;
- (void)startAdvertisingFromVoiceTriggerAdjusted:(char)a0 withContext:(id)a1;
- (void)_addElectionAdvertisementDataToMyriadSession:(id)a0;
- (void)notifyObserver:(id)a0 didReceiveNotificationWithToken:(int)a1;
- (void)startAdvertisingFromCarPlayTrigger;
- (void)_stopListening:(id /* block */)a0;
- (id)stateAsString:(unsigned long long)a0;
- (void)_readDefaults;
- (void)_unduck;
- (void)startAdvertisingFromDirectTrigger;
- (id)voiceTriggerRecord;
- (void)injectAdvertisementForTesting:(id)a0 forDevice:(id)a1;
- (void)resetReplies;
- (void)_resetAudioData;
- (void)_clearWiProxReadinessTimer;
- (void)_stopAdvertisingAndListening;
- (BOOL)inTask;
- (void)_advertise:(id)a0 afterDelay:(float)a1 maxInterval:(float)a2 andMoveTo:(unsigned long long)a3;
- (void)_leaveBLEDiagnosticMode;
- (void)advertiseWith:(id)a0 afterDelay:(float)a1 maxInterval:(float)a2;
- (void)heySiriStoppedScanning:(id)a0;
- (void)_initializeWiProxReadinessTimer;
- (void)resetMyriadCoordinator:(id /* block */)a0;
- (void)_advertiseSuppressTriggerInOutput;
- (void)_forceLocalWinner:(id)a0;
- (void)_advertiseWith:(id)a0 afterDelay:(float)a1 maxInterval:(float)a2 thenExecute:(id /* block */)a3;
- (BOOL)_isAPhone:(unsigned char)a0;
- (BOOL)_shouldContinueFor:(id)a0;
- (void)_startAdvertisingFromVoiceTrigger;
- (id)emergencyRecord;
- (void)heySiri:(id)a0 foundDevice:(id)a1 withInfo:(id)a2;
- (void)startAdvertisingFromVoiceTriggerAdjusted:(char)a0;
- (void)readDefaults;
- (void).cxx_destruct;
- (BOOL)_shouldStopListeningBeforeAdvertising;
- (void)_signalEmergencyCallHandled;
- (id)responseObject:(unsigned short)a0;
- (void)setupActionWindows;
- (id)_phsSetupRecord;
- (void)_advertise:(id)a0 andMoveTo:(unsigned long long)a1;
- (void)setCurrentRequestId:(id)a0;
- (void)startWatchAdvertisingFromDirectTrigger;
- (void)_stopAdvertising:(id /* block */)a0;
- (void)_resumeWiProxReadinessTimer;
- (id)directTriggerRecord;
- (void)_createDispatchTimerForEvent:(id)a0 toExecute:(id /* block */)a1;
- (void)_suspendWiProxReadinessTimer;
- (void)startAdvertisingFromVoiceTrigger;
- (void)_setupActionWindows;
- (id)continuationRecord;
- (void)startAdvertisingFromOutgoingTriggerWithContext:(id)a0;
- (void)waitWiProx:(long long)a0 andExecute:(id /* block */)a1;
- (void)_createDispatchTimerWithTime:(unsigned long long)a0 toExecute:(id /* block */)a1;
- (void)startWatchAdvertisingFromDirectTriggerWithContext:(id)a0;
- (void)_enterBLEDiagnosticMode;
- (void)startAdvertisingFromInTaskVoiceTriggerWithContext:(id)a0;
- (void)startAdvertisingEmergency;
- (void)startWatchAdvertisingFromVoiceTrigger;
- (float)deviceTrumpDelay;
- (void)_startAdvertising:(id)a0 afterDelay:(float)a1 maxInterval:(float)a2;
- (void)_initializeTimer;
- (void)_adjustActionWindowsFromSlowdown:(int)a0;
- (void)setInTask:(BOOL)a0;
- (void)startAdvertisingFromDirectTriggerWithContext:(id)a0;
- (void)enterState:(unsigned long long)a0;
- (void)advertiseWith:(id)a0;
- (id)_triggerTypeForArbitrationParticipationFrom:(long long)a0;
- (void)_enterState:(unsigned long long)a0;
- (void)startAdvertisingFromAlertFiringVoiceTrigger;
- (void)startAdvertisingSlowdown:(unsigned short)a0;
- (void)startAdvertisingFromAlertFiringVoiceTriggerWithContext:(id)a0;
- (void)_cancelOverallTimeout;
- (void)requestWillPresentUsefulUserResult;
- (void)_setOverallTimeout;
- (void)_updateArbitrationParticipationContextWithDecision:(BOOL)a0;
- (void)_startAdvertisingFromInTaskVoiceTrigger;
- (void)startAdvertisingFromVoiceTriggerWithContext:(id)a0;
- (void)dealloc;
- (id)emptyRecord;
- (void)_suppressDeviceIfNeededWithVoiceTriggerEndTime:(double)a0 adverisementDispatchTime:(double)a1;
- (void)endAdvertisingAfterDelay:(float)a0;
- (void)_endAdvertisingWithDeviceProhibitions:(id)a0;
- (void)_startListeningAfterWiProxIsReady:(BOOL)a0 inState:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)updateRepliesWith:(id)a0 id:(id)a1 data:(id)a2;
- (void)_ageWedgeFilter;
- (void)setupEnabled:(BOOL)a0;
- (void)notifyCurrentDecisionResult;
- (id)_sortedReplies:(id)a0;
- (void)startListening:(id /* block */)a0;
- (void)endAdvertising:(id /* block */)a0;
- (id)slowdownRecord:(unsigned short)a0;
- (void)setupAdvIntervalsInDelay:(float *)a0 interval:(float *)a1 withSlowdown:(int)a2;
- (void)heySiriStoppedAdvertising:(id)a0;
- (id)emergencyHandledRecord;
- (void)_triggerABCForType:(id)a0 context:(id)a1;
- (void)startAdvertisingEmergencySignal;
- (void)myriadSession:(id /* block */)a0;
- (BOOL)_testAndUpdateWedgeFilter:(id)a0;
- (unsigned long long)_nextElectionPublisherState;
- (double)_contextFetchDelayForAdvertimentInterval:(double)a0 advertisementDelay:(double)a1;
- (void)_duringNextWindowEnterState:(unsigned long long)a0;
- (id)_sortedReplies;
- (void)_setMyriadContext:(id)a0;
- (void)_startListening:(id /* block */)a0;
- (void)startAdvertisingFromInTaskTriggerWithContext:(id)a0;
- (void)_pushMyriadAdvertisementContextToContextCollectorWithAdvertisementInterval:(double)a0 advertisementDelay:(double)a1;
- (id)_myriadSession;
- (void)startResponseAdvertising:(unsigned short)a0;
- (BOOL)_okayToSuppressOnOutput;
- (void)heySiri:(id)a0 failedToStartAdvertisingWithError:(id)a1;
- (void)_advertiseSlowdown;
- (void)_createWaitWiProxTimer:(long long)a0 waitBlock:(id /* block */)a1;
- (void)_clearMyriadSession;
- (id)_testAndFilterAdvertisementsFromContextCollector:(id)a0 voiceTriggerEndTime:(double)a1 advertisementDispatchTime:(double)a2 advertisement:(id)a3;
- (unsigned char)deviceGroup;
- (void)heySiri:(id)a0 failedToStartScanningWithError:(id)a1;
- (BOOL)_shouldUseContextCollector;
- (void)_startListenTimer;

@end

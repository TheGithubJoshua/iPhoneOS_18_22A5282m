@class NSTimer, NSString, SUCoreFSM, MAAutoAssetSelector, SUCoreLog, NSMutableDictionary, NSDictionary, NSMutableArray;

@interface MADAutoAssetConnector : NSObject

@property (readonly, retain, nonatomic) SUCoreLog *logger;
@property (readonly, retain, nonatomic) NSDictionary *stateTable;
@property (retain, nonatomic) SUCoreFSM *autoConnectorFSM;
@property (retain, nonatomic) NSString *latestSafeSummary;
@property (retain, nonatomic) NSMutableArray *monitorSelectors;
@property (retain, nonatomic) NSMutableArray *selectorsRequiringRetry;
@property (retain, nonatomic) NSMutableArray *triggeredSelectorsNoRetry;
@property (retain, nonatomic) NSMutableArray *triggeredSelectorsRequiringRetry;
@property (retain, nonatomic) NSTimer *initialWaitTimer;
@property (nonatomic) long long backoffRetryLevel;
@property (retain, nonatomic) NSTimer *backoffRetryTimer;
@property (retain, nonatomic) NSTimer *waitBeforeRetryTimer;
@property (retain, nonatomic) NSMutableDictionary *catalogServerNetworkPathObservers;
@property (retain, nonatomic) NSMutableDictionary *catalogServerNetworkPathStatus;
@property (retain, nonatomic) MAAutoAssetSelector *activeJobSelector;
@property (retain, nonatomic) NSMutableArray *currentAttemptRemainingSelectors;

+ (id)_getAutoAssetConnectorStateTable;
+ (void)alteredMonitoringSelectors:(id)a0 withTriggeredNoRetry:(id)a1 withTriggeredRequiringRetry:(id)a2;
+ (id)autoAssetConnector;
+ (id)backoffRetryLevelDefaultTimes;
+ (void)observedNetworkPathToServerDown:(id)a0;
+ (void)observedNetworkPathToServerUp:(id)a0;
+ (void)resumeMonitoringSelectors:(id)a0 withSelectorsRequiringRetry:(id)a1;
+ (void)scheduledSelectorFinished:(id)a0 withPotentialNetworkFailure:(BOOL)a1;
+ (void)simulateNetworkPathDown:(id)a0;
+ (void)simulateNetworkPathUp:(id)a0;

- (id)_updateLatestSummary;
- (id)init;
- (long long)performAction:(id)a0 onEvent:(id)a1 inState:(id)a2 withInfo:(id)a3 nextState:(id)a4 error:(id *)a5;
- (long long)actionUnknownAction:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)summary;
- (id)description;
- (void)_refreshTrackingOfFinishedSelector:(id)a0 withPotentialNetworkFailure:(BOOL)a1;
- (void)_addObserverForSelector:(id)a0;
- (void)_adoptAlteredSelectors:(id)a0;
- (void)_chooseOrderForNextAttemptAndStartFirstJob:(id)a0;
- (void)_firedTimer:(id)a0 ofTimerCategory:(id)a1;
- (id)_followupInUseServerStatus:(id)a0;
- (BOOL)_isAnyServerUpForJobsToBeAttempted:(id)a0;
- (BOOL)_isBackoffRetryRequired:(id)a0;
- (BOOL)_isPathToServerForSelectorUp:(id)a0;
- (BOOL)_isSelector:(id)a0 trackedByArray:(id)a1;
- (BOOL)_isSelectorBeingMonitored:(id)a0;
- (void)_issueFollowupApplicableServersUpDown:(id)a0;
- (void)_issueFollowupWhetherHaveJobs:(id)a0;
- (void)_logClearedActiveJobAndAttemptRemainingSelectors:(id)a0;
- (void)_logClearedActiveJobSelector:(id)a0;
- (void)_logClearedAttemptRemainingSelectors:(id)a0;
- (void)_logCurrentAttemptRemainingSelectors:(id)a0;
- (void)_logNextActiveJobForAttemptRemainingSelectors:(id)a0;
- (void)_logSelectorRequiringRetry:(id)a0 addedSelector:(id)a1;
- (void)_logSelectorRequiringRetry:(id)a0 removedSelector:(id)a1;
- (void)_logSelectorsBeingMonitored:(id)a0;
- (void)_logSelectorsRequiringRetry:(id)a0;
- (void)_logTriggeredSelectorNoRetry:(id)a0 addedSelector:(id)a1;
- (void)_logTriggeredSelectorNoRetry:(id)a0 removedSelector:(id)a1;
- (void)_logTriggeredSelectorRequiringRetry:(id)a0 addedSelector:(id)a1;
- (void)_logTriggeredSelectorRequiringRetry:(id)a0 removedSelector:(id)a1;
- (void)_logTriggeredSelectorsCleared:(id)a0;
- (void)_logTriggeredSelectorsNoRetry:(id)a0;
- (void)_logTriggeredSelectorsRequiringRetry:(id)a0;
- (void)_removeObserverForSelector:(id)a0;
- (void)_setBackoffRetryLevel:(long long)a0 forReason:(id)a1;
- (id)_startTimer:(id)a0 ofTimerCategory:(id)a1 forOneShotSecs:(long long)a2 withFiredMessage:(id)a3 postingEvent:(id)a4;
- (void)_stoppedTimer:(id)a0 ofTimerCategory:(id)a1;
- (void)_trackServerDown:(id)a0 fromLocation:(id)a1;
- (void)_trackServerUp:(id)a0 fromLocation:(id)a1;
- (BOOL)_triggerNextSelector;
- (long long)action_AlteredJobsDecidePreemptBackoff:(id)a0 error:(id *)a1;
- (long long)action_AlteredJobsDecideStillActiveJob:(id)a0 error:(id *)a1;
- (long long)action_AlteredJobsReplaceDecideHaveJobs:(id)a0 error:(id *)a1;
- (long long)action_DecideServerApplicableToJobs:(id)a0 error:(id *)a1;
- (long long)action_FiredBackoffDecideServerApplicableToJobs:(id)a0 error:(id *)a1;
- (long long)action_FiredBackoffIgnored:(id)a0 error:(id *)a1;
- (long long)action_FiredInitial:(id)a0 error:(id *)a1;
- (long long)action_FiredInitialDecideServerApplicableToJobs:(id)a0 error:(id *)a1;
- (long long)action_FiredRetryWait:(id)a0 error:(id *)a1;
- (long long)action_FiredRetryWaitIgnored:(id)a0 error:(id *)a1;
- (long long)action_FiredRetryWaitOrderAttemptFirstJobActive:(id)a0 error:(id *)a1;
- (long long)action_JobFinishedDecideHaveJobs:(id)a0 error:(id *)a1;
- (long long)action_JobFinishedDecideStillActiveJob:(id)a0 error:(id *)a1;
- (long long)action_NextScheduledJobNowActive:(id)a0 error:(id *)a1;
- (long long)action_OrderAttemptFirstJobActive:(id)a0 error:(id *)a1;
- (long long)action_ResumeDecideRequiringRetry:(id)a0 error:(id *)a1;
- (long long)action_StartBackoffAndRetryWaitTimers:(id)a0 error:(id *)a1;
- (long long)action_StartInitialWaitTimer:(id)a0 error:(id *)a1;
- (long long)action_StopBackoffOrderAttemptFirstJobActive:(id)a0 error:(id *)a1;
- (long long)action_StopBackoffTimer:(id)a0 error:(id *)a1;
- (long long)action_TrackServerDown:(id)a0 error:(id *)a1;
- (long long)action_TrackServerDownDecideApplicableToJobs:(id)a0 error:(id *)a1;
- (long long)action_TrackServerDownDecideInUseActiveJob:(id)a0 error:(id *)a1;
- (long long)action_TrackServerUp:(id)a0 error:(id *)a1;
- (long long)action_TrackServerUpDecideApplicableToJobs:(id)a0 error:(id *)a1;
- (long long)action_TrackServerUpDecideInUseActiveJob:(id)a0 error:(id *)a1;

@end

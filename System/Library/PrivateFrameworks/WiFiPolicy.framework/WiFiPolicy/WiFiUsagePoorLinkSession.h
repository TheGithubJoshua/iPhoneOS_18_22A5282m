@class NSString, NSObject, NSDate;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface WiFiUsagePoorLinkSession : WiFiUsageSession {
    NSObject<OS_dispatch_source> *_endSessionTimer;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_interface;
    long long _badLinkRssi;
    long long _goodLinkRssi;
    double _perSSID_deferJoin;
    double _perBSSID_deferJoin;
    BOOL _linkIsUp;
    NSDate *_lastJoinAt;
    BOOL _justJoined;
    NSDate *_lastLinkDownAt;
    BOOL _lastTdRecommended;
    BOOL _alerted;
    BOOL _executed;
    BOOL _toBeClosedAfterLQM;
    BOOL _toBeClosedAfterTdLogicEnd;
    BOOL _waitingOnLinkUp;
    NSString *_bssidAtTD;
    NSString *_ssidAtTD;
    NSDate *_lastDecisionAt;
    NSDate *_lastFastTDVotesAt;
    NSDate *_lastSuppressAt;
}

@property (nonatomic) BOOL tdTriggered;
@property (nonatomic) BOOL isLastDecisionStateValid;
@property (nonatomic) BOOL isLastSuppressStateValid;
@property (nonatomic) BOOL isLastFastTdVotesValid;
@property (nonatomic) struct { BOOL decision_TxPER; BOOL decision_BeaconPER; BOOL decision_FWTxPER; BOOL decision_GatewayARPFailure; BOOL decision_SymptomsDNSError; BOOL decision_AutoLeave; BOOL decision_ActiveProbe; BOOL decision_FastTD; int tdMode; BOOL motionbasedAggressiveTDEnabled; BOOL walkoutDetected; BOOL waitForRoam; BOOL edgeBSS; BOOL appsUsingWiFi; BOOL monitorMode; long long autoLeaveRSSIthreshold; } last_DecisionState;
@property (nonatomic) struct { BOOL aggressiveTDEnabled; BOOL rnfAllowed; BOOL fastTD; BOOL suppress_SymptomDataStallScoreGood; BOOL suppress_SymptomAppPolicyScore; BOOL suppress_FastCheapCellular; BOOL suppress_2dBGuard; BOOL suppress_NoFGnetwApp; BOOL suppress_TTR; BOOL suppress_UserInput; BOOL suppress_GoodAfterRoam; BOOL defer_activeProbing; BOOL defer_roaming; } last_SuppressState;
@property (nonatomic) struct { unsigned long long fastTD_voteCount; BOOL fastTD_vote_recommendation; BOOL fastTD_vote_TxPER; BOOL fastTD_vote_BeaconPER; BOOL fastTD_vote_FWTxPER; BOOL fastTD_RTApp; BOOL fastTD_Cheap5G; } last_FastTdVotes;
@property (nonatomic) unsigned long long last_RSSIMode;
@property (retain, nonatomic) NSString *tdEvalStartedBy;
@property (retain, nonatomic) NSString *tdEvalEndedBy;
@property (retain, nonatomic) NSDate *tdAlertedAt;
@property (retain, nonatomic) NSDate *tdConfirmedAt;
@property (retain, nonatomic) NSDate *tdExecutedAt;
@property (nonatomic) double tdEvalDuration;
@property (nonatomic) long long rssiAtTD;
@property (nonatomic) unsigned long long waitOnRoamStatus;
@property (retain, nonatomic) NSString *nextJoinReason;
@property (nonatomic) BOOL nextJoinIsSameSSID;
@property (nonatomic) BOOL nextJoinWhileDeferJoin;
@property (nonatomic) double timeToNextJoin;
@property (nonatomic) BOOL nextLinkUpIsSameBSSID;
@property (nonatomic) long long rssiAtNextLinkUp;
@property (nonatomic) BOOL tdRecommendAtNextLinkUp;
@property (nonatomic) long long rssiAtJoin;
@property (nonatomic) BOOL tdRecommendAtJoin;
@property (nonatomic) double timeSinceJoinATStart;
@property (nonatomic) int sessionStartedBy;
@property (nonatomic) int sessionEndedBy;
@property (nonatomic) double decision_TxPER_Duration;
@property (nonatomic) double decision_FWTxPER_Duration;
@property (nonatomic) double decision_BeaconPER_Duration;
@property (nonatomic) double decision_GatewayARPFailure_Duration;
@property (nonatomic) double decision_SymptomsDNSError_Duration;
@property (nonatomic) double decision_AutoLeave_Duration;
@property (nonatomic) double decision_ActiveProbe_Duration;
@property (nonatomic) double decision_FastTD_Duration;
@property (nonatomic) double vote_FastTD_Recommendation_Duration;
@property (nonatomic) double vote_FastTD_TXPER_Duration;
@property (nonatomic) double vote_FastTD_FWTxPER_Duration;
@property (nonatomic) double vote_FastTD_BeaconPER_Duration;
@property (nonatomic) double suppress_SymptomsNODataStall_Duration;
@property (nonatomic) double suppress_SymptomsAppPolicy_Duration;
@property (nonatomic) double suppress_FastCheapCellular_Duration;
@property (nonatomic) double suppress_2dBGuard;
@property (nonatomic) double suppress_NoFgNetwApp_Duration;
@property (nonatomic) double suppress_TTR_Duration;
@property (nonatomic) double suppress_UserInput_Duration;
@property (nonatomic) double suppress_GoodAfterRoam_Duration;
@property (nonatomic) double suppress_Roam_Duration;
@property (nonatomic) double suppress_ActiveProbing;
@property (nonatomic) double perCoreRSSI_NotUsed_Duration;
@property (nonatomic) double perCoreRSSI_Core0_Duration;
@property (nonatomic) double perCoreRSSI_Core1_Duration;
@property (nonatomic) unsigned long long roamStatus_Succeeded_Count_WhileTDWait;
@property (nonatomic) unsigned long long roamStatus_Failed_Count_WhileTDWait;
@property (nonatomic) unsigned long long roamStatus_FailedFilteredOut_Count_WhileTDWait;
@property (nonatomic) unsigned long long roamStatus_FailedNotFound_Count_WhileTDWait;
@property (nonatomic) unsigned long long roamStatus_Succeeded_Count_BeforeTDWait;
@property (nonatomic) unsigned long long roamStatus_Failed_Count_BeforeTDWait;
@property (nonatomic) unsigned long long roamStatus_FailedFilteredOut_Count_BeforeTDWait;
@property (nonatomic) unsigned long long roamStatus_FailedNotFound_Count_BeforeTDWait;

+ (id)sessionEndedBy:(int)a0;
+ (id)describeWiFiUsageMonitor_tdDecisionState:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; int x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; long long x15; })a0;
+ (id)describeWiFiUsageMonitor_tdExecState:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; })a0;
+ (id)describeWiFiUsageMonitor_tdFastTDState:(struct { unsigned long long x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; })a0;
+ (id)sessionStartedBy:(int)a0;

- (void)tdLogic_waitForRoamTime:(double)a0;
- (void)roamingStateDidChange:(BOOL)a0 reason:(unsigned long long)a1 andStatus:(unsigned long long)a2 andLatency:(unsigned long long)a3 andRoamData:(id)a4 andPingPongStats:(id)a5;
- (void)tdLogic_decisionState:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; int x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; long long x15; })a0;
- (id)metricName;
- (BOOL)expectsLQMUpdates;
- (void)tdLogic_alertedBy:(int)a0;
- (void)tdLogic_execState:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; })a0;
- (void)tdLogic_badRssi:(long long)a0 goodRSSI:(long long)a1;
- (void)tdLogic_deferJoin:(double)a0 perBSSID:(double)a1;
- (void)joinStateDidChange:(id)a0 withReason:(unsigned long long)a1 lastDisconnectReason:(long long)a2 lastJoinFailure:(long long)a3 andNetworkDetails:(id)a4;
- (void)tdLogic_end:(int)a0 evalTime:(double)a1 rssi:(long long)a2;
- (void)linkQualityDidChange:(id)a0;
- (id)eventDictionary:(BOOL)a0;
- (void)tdLogic_fastTdState:(struct { unsigned long long x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; })a0;
- (void)linkStateDidChange:(BOOL)a0 isInvoluntary:(BOOL)a1 linkChangeReason:(long long)a2 linkChangeSubreason:(long long)a3 withNetworkDetails:(id)a4;
- (void)summarizeSession;
- (void)triggerDisconnectAlerted:(BOOL)a0 confirmed:(BOOL)a1 executed:(BOOL)a2;
- (void)faultEventDetected:(unsigned long long)a0;
- (void)sessionDidEnd:(int)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)sessionDidStart:(int)a0;
- (id)initWithInterfaceName:(id)a0 onQueue:(id)a1;
- (BOOL)isBadRssi:(long long)a0;

@end

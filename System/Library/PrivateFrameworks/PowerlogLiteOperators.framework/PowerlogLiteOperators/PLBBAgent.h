@class NSMutableDictionary, PLEntryNotificationOperatorComposition, TUCallCenter, NSDate, NSObject, PLBasebandLogChannel, NSMutableArray, PLABMClient, PLBBTelephonyActivityMsg, PLCFNotificationOperatorComposition, NSString, PLBBTelephonyRegMsg, PLNSNotificationOperatorComposition, PLTelephonyConnection, NSNumber, CoreTelephonyClient, PLTimer;
@protocol OS_dispatch_queue;

@interface PLBBAgent : PLAgent <PLBasebandLogChannelDelegate, PLABMClientMessageDelegate, CoreTelephonyClientDelegate, CoreTelephonyClientDataDelegate, CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientCellularUsagePolicyDelegate> {
    struct IONotificationPort { } *ioNotifyPort;
    unsigned int notificationRef;
    unsigned int baseband_service;
    PLBasebandLogChannel *streamingChannel;
    PLBasebandLogChannel *cachedChannel;
}

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (readonly, nonatomic) PLTelephonyConnection *connection;
@property (retain) PLABMClient *abmClient;
@property (readonly) PLEntryNotificationOperatorComposition *sleepEntryNotifications;
@property (readonly) PLEntryNotificationOperatorComposition *wakeEntryNotifications;
@property (retain) PLCFNotificationOperatorComposition *cfNotifyBBReport30s;
@property (retain) PLCFNotificationOperatorComposition *cfNotifyBBReport;
@property (retain) PLNSNotificationOperatorComposition *thermalMonitorListener;
@property (retain) NSDate *lastReportRequestDate;
@property BOOL changed;
@property BOOL agentInited;
@property (retain) NSMutableDictionary *currentCallList;
@property BOOL lteCurrentState;
@property (retain) NSNumber *lastReportedSignal;
@property (retain) NSNumber *inDCH;
@property (retain) NSNumber *inUTBF;
@property (retain) NSString *simStatus;
@property (retain) NSString *operatorName;
@property (retain) PLBBTelephonyRegMsg *telRegMsgHelper;
@property (retain) PLBBTelephonyActivityMsg *telActMsgHelper;
@property (retain) PLNSNotificationOperatorComposition *bbICEModelLTEMetricsNotification;
@property (retain) NSDate *lastBBActivityTimestamp;
@property (retain) PLEntryNotificationOperatorComposition *canSleepNotification;
@property (retain) PLEntryNotificationOperatorComposition *didNotSleepNotification;
@property (retain) PLEntryNotificationOperatorComposition *telephonyActivityNotification;
@property (retain) PLTimer *channelReconnectTimer;
@property (retain) PLTimer *cacheCommitTimer;
@property double lastBBProtoPower;
@property double lastOOSPower;
@property (retain) NSDate *lastModeledOOSTimestamp;
@property double lastGWPower;
@property (retain) NSDate *lastOOSTimestamp;
@property double oosGWPower;
@property double oosCDMAPower;
@property double oosHDRPower;
@property double totalOosGWScanEnergy;
@property double totalOosCDMAScanEnergy;
@property double totalOosHDRScanEnergy;
@property BOOL isBBOOS;
@property BOOL isFirstTimeAccountingOOS;
@property BOOL isBBDataStandard;
@property (retain) NSObject<OS_dispatch_queue> *telephonyClientQueue;
@property (retain) CoreTelephonyClient *telephonyClient;
@property (retain) NSMutableArray *dsdsRegMsgs;
@property (retain) NSMutableArray *dsdsActivityMsgs;
@property (retain) TUCallCenter *callCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)load;
+ (id)defaults;
+ (id)humanReadableStateFromKey:(id)a0;
+ (id)entryIceMsgLite;
+ (id)getBBAgent;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)indexToRat:(unsigned long long)a0;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardSDM;
+ (id)entryEventForwardDefinitions;
+ (id)getNameBBReport;
+ (id)entryEventNoneBBReport;

- (void)initOperatorDependancies;
- (id)init;
- (void)setupTelephonyActivityChannels;
- (void)modelLTESLEEPMGRPower:(id)a0;
- (void)logTelephonyActivity;
- (void)log;
- (void)reconnectTimerFired;
- (void)modelStateTransitionPower:(id)a0 rat:(id)a1 state:(id)a2;
- (void)refreshRequestHandler;
- (void)modelGPSPower:(id)a0;
- (void)setupTelephonyRegistrationChannels;
- (void)setupKICEChannelsForDebug;
- (void)modelScanPower:(id)a0;
- (void)channelDidBecomeInvalid:(id)a0;
- (void)scheduleReconnect;
- (void)flushBBCacheWithClientInfo:(long long)a0;
- (void)setupKICEChannels;
- (void)logTelephonyRegistrationDSDSAtInit;
- (void)modelMavPower:(id)a0;
- (float)translateTransBW:(int)a0;
- (void)wakeMessage:(id)a0;
- (void)handlePLBasebandEventNotification:(id)a0;
- (void)postCDRXCapability:(BOOL)a0;
- (void)registerForICEModelMetricsNotifications:(id)a0;
- (long long)getSubsIdFromCTContext:(id)a0;
- (void)registerForMAVModelMetricsNotifications:(id)a0;
- (void)processTimeUpdateInfoDict:(id)a0;
- (void)modelMav10BBHWPower:(id)a0;
- (void)logOperatorName;
- (void)dataStatus:(id)a0 dataStatusInfo:(id)a1;
- (void)commitBBCacheWithClientInfo:(long long)a0;
- (void)operatorNameChanged:(id)a0 name:(id)a1;
- (void)setupBBChannelsWithAction:(long long)a0;
- (void)initCacheCommitTimer;
- (id)setupIOKitNotifications;
- (void)checkKICEChannelTimeout;
- (void)handlePostCDRXCapability;
- (id)humanReadableDataActiveString;
- (void)logTelephonyActivityDSDSAtInit;
- (void)createOOSAccountingEvent:(id)a0;
- (void)telephonyActivityNotificationCB_Agent:(id)a0 withName:(struct __CFString { } *)a1;
- (void)logTelephonyActivityAtInit;
- (void)registerForAirplaneModeChange;
- (void).cxx_destruct;
- (BOOL)isEarfcnHighBand:(int)a0;
- (id)humanReadableRegistrationStatus:(id)a0;
- (BOOL)setupChannel:(id)a0 withLogCodes:(id)a1 andEvents:(id)a2 andExtracode:(id)a3;
- (void)triggerMessage:(id)a0;
- (void)modelBB16Power:(id)a0;
- (void)cancelCacheCommitTimer;
- (BOOL)isChangedAndSetAirplaneMode;
- (void)resetCacheCommitTimer;
- (id)humanReadableDataIndicator:(id)a0;
- (void)modelOOSPower:(id)a0;
- (void)simStatusDidChange:(id)a0 status:(id)a1;
- (void)channel:(id)a0 hasDataAvailable:(id)a1;
- (void)logEntry:(id)a0;
- (id)humanReadableSimStatusString;
- (id)translateCallStatus:(int)a0;
- (void)smartDataModeChanged:(id)a0 userEnabled:(BOOL)a1;
- (void)logDSDSEventPointTelephonyActivityWithSubsId:(long long)a0 context:(id)a1 callStatus:(id)a2 simStatus:(id)a3 signalInfo:(id)a4 RATselection:(id)a5 andCurrCampedRAT:(id)a6;
- (void)bootStateChange:(id)a0;
- (void)eventToFlushCacheOccurred;
- (double)translateChannelRBsToChannelBW:(double)a0;
- (void)accountVoicePower:(id)a0 state:(id)a1;
- (void)cellChanged:(id)a0 cell:(id)a1;
- (BOOL)isTimeToRequestReport;
- (void)dealloc;
- (void)logEntries:(id)a0 withGroupID:(id)a1;
- (void)displayStatusChanged:(id)a0 status:(id)a1;
- (void)setupMavABMChannel;
- (void)logDSDSEventForwardTelephonyRegistrationWithKVPairs:(id)a0 subsId:(long long)a1 andOperator:(id)a2;
- (void)loadOOSModelValues;
- (void)scheduleFlushPostCacheCommit;
- (void)logTelephonyRegMsgWith:(id)a0;
- (void)logBasebandConfig;
- (void)eventToCommitCacheOccurred;
- (void)logTelephonyRegistrationAtInit;
- (void)cacheCommitTimerFired;
- (void)logDSDSEventForwardSDMwithSubsId:(long long)a0 SDMEnable:(BOOL)a1;
- (void)setOpName:(id)a0;
- (void)signalStrengthChanged:(id)a0 info:(id)a1;
- (void)modelPLEntry:(id)a0;
- (void)modelMavBBHWOtherPerRATPower:(id)a0;
- (void)metricMessage:(id)a0;
- (void)ratSelectionChanged:(id)a0 selection:(id)a1;
- (void)logMessage:(id)a0 andState:(id)a1;
- (void)connectionStateChanged:(id)a0 connection:(int)a1 dataConnectionStatusInfo:(id)a2;
- (void)setupTimeUpdateChannel;
- (void)callStatusChanged:(id)a0;
- (void)logEventNoneBBReportBy:(long long)a0 withAction:(long long)a1;
- (void)refreshBBReport;

@end
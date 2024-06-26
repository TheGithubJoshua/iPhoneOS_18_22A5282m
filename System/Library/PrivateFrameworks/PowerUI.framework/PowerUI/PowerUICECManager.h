@class NSDate, NSString, NSNumber, NSDictionary, PowerUINotificationManager, NSObject, PowerUIChargingController, NSUserDefaults, PowerUICECPredictedTimeManager;
@protocol OS_dispatch_queue, OS_os_log, OS_dispatch_source, _DKKnowledgeQuerying, _CDLocalContext;

@interface PowerUICECManager : NSObject <PowerUINotificationManagerClient, PowerUISignalMonitor>

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) id<_CDLocalContext> context;
@property (retain, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore;
@property (retain, nonatomic) NSDictionary *phaseDescriptions;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long currentPhase;
@property (nonatomic) BOOL isChargingPaused;
@property (nonatomic) BOOL displayedFirstTimeNotification;
@property (nonatomic) BOOL isCECEnabled;
@property (nonatomic) BOOL isCECTemporarilyDisabled;
@property (retain, nonatomic) NSDate *cecTemporarilyDisabledDate;
@property (retain, nonatomic) NSDate *userDeadline;
@property (retain, nonatomic) NSDate *pauseChargingCheckDate;
@property (retain, nonatomic) PowerUICECPredictedTimeManager *pluggedInTimeManager;
@property (retain, nonatomic) NSUserDefaults *defaults;
@property (retain, nonatomic) PowerUIChargingController *chargingController;
@property (retain, nonatomic) PowerUINotificationManager *unManager;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) double tPluggedInWaitInterval;
@property (nonatomic) BOOL tOverrideActiveCheck;
@property (nonatomic) BOOL firstChargingEvaluation;
@property (nonatomic) unsigned long long currentState;
@property (retain, nonatomic) NSDate *pluggedInDate;
@property (readonly, nonatomic) NSString *debugStatus;
@property (nonatomic) BOOL shouldSupportCEC;
@property (retain, nonatomic) NSNumber *pausedMaxBatteryLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)monitorWithDelegate:(id)a0;
+ (id)manager;
+ (BOOL)isCECSupported;
+ (id)fetchEstimatedCountryCode;

- (id)dateFormatter;
- (void)resetState;
- (id)init;
- (void)stopMonitoring;
- (void)startMonitoring;
- (void)loadState;
- (unsigned long long)signalID;
- (id)requiredFullChargeDate;
- (BOOL)isEnabled;
- (id)defaultDateToDisableUntilGivenDate:(id)a0;
- (void)recordAnalytics;
- (void).cxx_destruct;
- (id)status;
- (void)handleNotificationResponse:(id)a0;
- (void)handleCallback:(id)a0;
- (void)unregisterTimer;
- (BOOL)isEngaged;
- (BOOL)shouldEngageCEC;
- (void)analyticsCECEngagementEvaluation:(BOOL)a0 byPredictedTime:(BOOL)a1 byGridMix:(BOOL)a2;
- (void)analyticsCECSessionChargingState:(BOOL)a0;
- (unsigned long long)cecState;
- (void)clearAnalyticsDate;
- (BOOL)didDischargeWithBatteryLevel:(long long)a0;
- (BOOL)evaluateEngagementAndSetup;
- (void)evaluatePausingNow;
- (void)handleChargeUp;
- (void)handleDisengagement;
- (void)handleNewDebugState:(id)a0;
- (void)handlePowerUICECStateChange:(unsigned long long)a0 withHandler:(id /* block */)a1;
- (BOOL)hasInfluencedCharging;
- (BOOL)isActiveRegion;
- (void)monitorBatteryNotifications;
- (void)recordPowerLogEvent;
- (void)refreshShouldSupportCEC;
- (void)registerTimer;
- (id)sessionEndCECAnalytics;
- (void)setTemporarilyDisabled:(BOOL)a0 from:(id)a1;
- (void)setupTempDisabledCheckAfterInterval:(double)a0;
- (void)updatePhaseFrom:(unsigned long long)a0 to:(unsigned long long)a1;

@end

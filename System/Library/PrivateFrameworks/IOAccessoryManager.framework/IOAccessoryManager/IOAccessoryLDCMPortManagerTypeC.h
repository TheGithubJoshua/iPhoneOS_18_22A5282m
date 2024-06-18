@class NSMutableDictionary, HalogenTypeC, NSCondition, NSLock, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface IOAccessoryLDCMPortManagerTypeC : NSObject

@property (nonatomic) BOOL isPowerAssertionHeld;
@property (nonatomic) BOOL isMeasurementActive;
@property (nonatomic) BOOL isWet;
@property (nonatomic) BOOL isInternalBuild;
@property (nonatomic) BOOL isReceptacleEmpty;
@property (nonatomic) BOOL newAccArrived;
@property (nonatomic) BOOL userNotified;
@property (nonatomic) BOOL measureSBU;
@property (nonatomic) BOOL wetTooLongRecorded;
@property (nonatomic) BOOL mitigationsEnabled;
@property (nonatomic) BOOL mitigationsOverrideEnabled;
@property (nonatomic) BOOL fakeWetMeasurements;
@property (nonatomic) BOOL measurementsEnabled;
@property (nonatomic) BOOL selfTestFailed;
@property (nonatomic) BOOL refMeasurementFailed;
@property (nonatomic) BOOL sbuBootArgSet;
@property (nonatomic) BOOL enableMitigationsBootArgSet;
@property (nonatomic) BOOL skipTTRBootArgSet;
@property (nonatomic) BOOL didReportDisabledAnalytic;
@property (nonatomic) BOOL initialAlertShown;
@property (nonatomic) BOOL followupAlertShown;
@property (nonatomic) unsigned int drySinceWetCount;
@property (nonatomic) unsigned int selfTestFailureCount;
@property (nonatomic) unsigned int selfTestPassCount;
@property (nonatomic) unsigned int referenceMeasurementFailureCount;
@property (nonatomic) unsigned int referenceMeasurementPassCount;
@property (nonatomic) unsigned long long lastUserNotificationTimeNS;
@property (nonatomic) void *FBSOpenApplicationOptionKeyPromptUnlockDevice;
@property (nonatomic) NSObject<OS_dispatch_source> *timerSelfTest;
@property (nonatomic) NSObject<OS_dispatch_source> *timerReferenceMeasurement;
@property (nonatomic) NSObject<OS_dispatch_source> *timerPortStateCheck;
@property (nonatomic) NSMutableDictionary *ldcmErrorCountDict;
@property NSLock *defaultsRWLock;
@property (nonatomic) unsigned int sleepAssertionID;
@property (nonatomic) NSCondition *condition;
@property (nonatomic) struct __CFUserNotification { } *notification;
@property (nonatomic) struct { double intialResistance; double intialCapacitance; double intialImpedance; double initialWetWallTime; } wetMeasurementInfo;
@property (nonatomic) int analyticsDebugEvent;
@property (nonatomic) struct mach_timebase_info { unsigned int numer; unsigned int denom; } timeBase;
@property (nonatomic) NSObject<OS_dispatch_queue> *halogenTypeCUserPromptDispatchQueue;
@property (nonatomic) int lastMeasurementResult;
@property (nonatomic) int lastMeasurementStatus;
@property (nonatomic) HalogenTypeC *typeC;
@property (nonatomic) NSObject<OS_dispatch_queue> *halogenTypeCDispatchQueue;
@property (nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) unsigned long long wetPollingIntervalNs;
@property (nonatomic) unsigned long long dryPollingIntervalNs;

- (void)dealloc;
- (void)_checkPortState;
- (void)_loadFrontBoard;
- (BOOL)_checkIsReceptacleEmpty;
- (void)_controlLDCMMeasurements;
- (void)_dismissWetPrompt;
- (id)_fetchFilesToUpload:(id)a0;
- (void)_fileRadarHalogenTypeC:(id)a0 TTRCategory:(int)a1;
- (void)_generateAlternateMeasurementAnalytics:(BOOL)a0 measurementInfo:(struct { int x0; int x1; int x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; } *)a1 intervalSinceLastPass:(double)a2;
- (void)_generateAnalytics:(BOOL)a0 dryToWetTransition:(BOOL)a1 measurementInfo:(struct { int x0; int x1; int x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; } *)a2;
- (void)_generateFailureAnalytics:(int)a0 recordLDCMDisabled:(BOOL)a1 analyticsError:(int)a2;
- (void)_generateLDCMCSVData;
- (int)_halogenErrorToAnalyticError:(unsigned char)a0;
- (BOOL)_holdPowerAssertionTypeC:(BOOL)a0;
- (void)_manageLDCMSettings;
- (int)_measurementErrorToAnalyticError:(unsigned char)a0;
- (void)_processLDCMAnalyticsDefauts;
- (void)_processLDCMDefauts:(BOOL)a0;
- (void)_processMitigationsOverride;
- (void)_readLDCMBootArgs;
- (BOOL)_recordLDCMError:(int)a0;
- (void)_registerForLDCMNotifications;
- (void)_resetLDCMErrorDict;
- (BOOL)_setInitialUserNotificationTimestamp;
- (BOOL)_setMitigations:(BOOL)a0;
- (void)_showMitigationAlert;
- (void)_showWetPrompt;
- (BOOL)_throttleUserNotification;
- (void)_writeAndNotifyDefaults:(id)a0 value:(id)a1 domain:(id)a2 notify:(BOOL)a3 notification:(id)a4;
- (void)handleAttachEvent;
- (void)handleDetachEvent;
- (id)initWithParams:(unsigned long long)a0 dryPollingIntervalNs:(unsigned long long)a1;
- (void)performTypeCMeasurement;
- (void)performTypeCReferenceMeasurement;
- (void)performTypeCSelfTest;

@end
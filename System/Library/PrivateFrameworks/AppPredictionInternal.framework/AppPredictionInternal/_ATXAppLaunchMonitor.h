@class _ATXAppIconState, _PASLock, NSSet, _PASQueueLock, PETScalarEventTracker, ATXAppClipUsageDuetContextUpdateListener, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue, ATXPETEventTracker2Protocol;

@interface _ATXAppLaunchMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_appLaunchHistoryQueue;
    NSObject<OS_dispatch_queue> *_logQueue;
    _PASQueueLock *_history;
    _PASLock *_cdContext;
    PETScalarEventTracker *_updateLaunchHistoryTracker;
    NSUserDefaults *_userDefaults;
    ATXAppClipUsageDuetContextUpdateListener *_appClipChangeListener;
    id<ATXPETEventTracker2Protocol> _tracker;
    _ATXAppIconState *_appIconState;
    NSSet *_predictionUpdateBlacklist;
}

+ (void)_logPredictionForBundleId:(id)a0 poweringAppClipBundleId:(id)a1 urlHash:(id)a2 isClip:(BOOL)a3 appLaunchReason:(id)a4 appClipLaunchReason:(int)a5 consumerType:(unsigned long long)a6 consumerSubType:(unsigned char)a7 context:(id)a8;
+ (int)petClipCaptureTypeFromDuetClipLaunchReason:(int)a0;
+ (id)predictionUpdateBlacklistedBundleIds;
+ (void)mergeAppLaunches:(id)a0 andBacklightTransitions:(id)a1 callingAppLaunchBlock:(id /* block */)a2;
+ (void)_logAppLaunch:(id)a0 from:(unsigned long long)a1;

- (void)registerForAppChange;
- (id)init;
- (id)initWithAppInfoManager:(id)a0 appLaunchHistogramManager:(id)a1 appLaunchSequenceManager:(id)a2 appDailyDose:(id)a3 duetHelper:(id)a4 contextBuilder:(id)a5 tracker:(id)a6 predictionUpdateBlacklist:(id)a7 heroPoiManager:(id)a8;
- (void)_updateAppIconStateForTests:(id)a0;
- (void)handleAppOrClipLaunchNotificationForBundleId:(id)a0 poweringAppClipBundleId:(id)a1 urlHash:(id)a2 isClip:(BOOL)a3 appLaunchReason:(id)a4 appClipLaunchReason:(int)a5 date:(id)a6;
- (void)stop;
- (id)appIconState;
- (void)swapDuetHelper:(id)a0;
- (BOOL)isValidAppLaunchBundleId:(id)a0;
- (void)addLaunchWithBundleId:(id)a0 date:(id)a1 timeZone:(id)a2 reason:(id)a3;
- (void)start;
- (id)initWithAppInfoManager:(id)a0 appLaunchHistogramManager:(id)a1 appLaunchSequenceManager:(id)a2 appDailyDose:(id)a3 duetHelper:(id)a4 contextBuilder:(id)a5 tracker:(id)a6;
- (void)_logAppLaunchOverallCaptureRateForBundleId:(id)a0 launchReason:(id)a1;
- (void)handleBacklightChangeNotificationWithValue:(int)a0 date:(id)a1;
- (void)clearIntentHistogramHistory;
- (void)registerForBacklightChange;
- (void)startDeltaRecording;
- (id)initWithInMemoryStore;
- (void).cxx_destruct;
- (void)_addLaunchWithLockWitness:(id)a0 bundleId:(id)a1 date:(id)a2 timeZone:(id)a3 reason:(id)a4 context:(id)a5;
- (id)appLaunchSequenceManager;
- (id)stopDeltaRecording;
- (void)_logAppPanelCaptureRateForBundleId:(id)a0;
- (void)dealloc;
- (void)_logAppPanelLaunchRatioForBundleId:(id)a0 launchReason:(id)a1;
- (void)clearHistory;
- (id)dailyDose;
- (id)appLaunchHistogramManager;
- (void)processDonationsForPreviousAppSessionEndIfNeeded;
- (void)_syncForTests;
- (void)registerForAppClipLaunch;
- (void)logAppLaunchForBundleId:(id)a0 launchReason:(id)a1;
- (void)updateLaunchHistoryFromDuet:(double)a0 callback:(id /* block */)a1;
- (id)appInfoManager;

@end
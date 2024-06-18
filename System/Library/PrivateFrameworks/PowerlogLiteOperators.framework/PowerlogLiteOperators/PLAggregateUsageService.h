@class PLIntervalData, PLEntryNotificationOperatorComposition;

@interface PLAggregateUsageService : PLService

@property (retain) PLEntryNotificationOperatorComposition *displayOnNotification;
@property (retain) PLEntryNotificationOperatorComposition *displayOffNotification;
@property (retain) PLEntryNotificationOperatorComposition *wakeEntryNotification;
@property (retain) PLEntryNotificationOperatorComposition *sleepEntryNotification;
@property (retain) PLEntryNotificationOperatorComposition *audioEntryNotification;
@property (retain) PLEntryNotificationOperatorComposition *batteryIsChargingEntryNotification;
@property (retain) PLEntryNotificationOperatorComposition *batteryExternalConnectedEntryNotification;
@property (retain) PLEntryNotificationOperatorComposition *chargingEntryNotification;
@property (retain) PLEntryNotificationOperatorComposition *lockStateEntryNotification;
@property (retain) PLIntervalData *intervalData;

+ (void)load;
+ (id)defaults;

- (void)initOperatorDependancies;
- (void)registerForEntryNotifications;
- (id)init;
- (void)handleLockStateChange:(id)a0;
- (void)handleAudioStateChange:(id)a0;
- (void)handleConnectedChange:(id)a0;
- (void)handleScreenStateChange:(id)a0 withState:(BOOL)a1;
- (void)handleChargingChange:(id)a0;
- (void)initializeMetrics;
- (void)submitMetricsToAggd;
- (void)handleExternalConnectedChange:(id)a0;
- (void).cxx_destruct;
- (void)handleWakeStateChange:(id)a0 withState:(BOOL)a1;
- (void)updateSampledMetrics;
- (void)scheduleSubmissionAfter:(unsigned long long)a0;
- (void)handleLargeTimeGap;
- (void)testService;
- (void)instantiateMetrics;
- (int)numIntervalsToFill;

@end

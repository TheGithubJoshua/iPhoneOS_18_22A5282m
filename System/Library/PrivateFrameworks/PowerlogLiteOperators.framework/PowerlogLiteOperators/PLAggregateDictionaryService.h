@class PLMonotonicTimer, NSNumber, NSString, NSMutableDictionary, PLXPCResponderOperatorComposition, PLCFNotificationOperatorComposition, NSMutableArray;

@interface PLAggregateDictionaryService : PLService {
    double remainderUnpluggedEnergy;
    double remainderUnpluggedTime;
}

@property (retain) NSMutableArray *registeredNotifications;
@property (retain) PLMonotonicTimer *dailyTaskTimer;
@property (retain) PLCFNotificationOperatorComposition *blmAggregateCFNotification;
@property struct AggState { int state; double level; double timestamp; } last_state;
@property BOOL firstScreenOnAfterWake;
@property (retain) NSNumber *currentMachWakeTime;
@property (retain) NSString *wakeReasons;
@property (retain) NSString *wakeReasonString;
@property (retain) NSMutableDictionary *validReasonsDictionary;
@property (retain) NSMutableDictionary *localCache;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetricsListener;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetricsForceListener;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetricsTodayListener;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetricsTodayForceListener;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetrics24hrsListener;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetrics24hrsForceListener;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetrics1hrListener;
@property (retain) PLCFNotificationOperatorComposition *aggregateMetrics1hrForceListener;
@property (retain) PLXPCResponderOperatorComposition *metricSummarizationStateResponder;

+ (void)load;
+ (id)defaults;
+ (id)entryEventNoneDefinitionSessionsFile;
+ (id)entryEventNoneDefinitions;
+ (BOOL)metrickitClientsAvailable;

- (void)initOperatorDependancies;
- (id)init;
- (void)registerForMailNotifications;
- (void)registerForBatteryNotifications;
- (void)registerForBacklightLatencyNotifications;
- (void)setupMetricsAggregation;
- (unsigned long long)abstimeToNanosec:(unsigned long long)a0;
- (void)registerForAssertionNotifications;
- (void)initValidReasonsDictionary;
- (void)addToDurationScalarKey:(id)a0 withDuration:(double)a1;
- (void)logDuration:(double)a0 asDistribution:(id)a1;
- (void)registerForLocationNotifications;
- (void)updateAggregateStateWithEntry:(id)a0;
- (void)registerForBluetoothNotifications;
- (unsigned long long)bucketWakeTime:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)registerForCalendarNotifications;
- (void)registerForUIKitNotifications;
- (void)registerForApplicationNotifications;
- (void)logAggregateUIKitKeyboardActivityKey:(id)a0 withInfo:(id)a1 AggDKey:(id)a2;
- (void)registerForSCDynamicStoreNotifications;
- (void)registerForSpringboardNotifications;
- (void)registerForSafariNotifications;
- (void)registerForCameraNotifications;
- (void)setupMetricsListeners;
- (void)registerForAudioNotifications;
- (void)createMetricsFile:(id)a0;
- (void)registerForVideoNotifications;
- (void)logEventNoneSessionsFile;
- (void)logAggregateUIKitActivityKey:(id)a0 withInfo:(id)a1 AggDKey:(id)a2;

@end

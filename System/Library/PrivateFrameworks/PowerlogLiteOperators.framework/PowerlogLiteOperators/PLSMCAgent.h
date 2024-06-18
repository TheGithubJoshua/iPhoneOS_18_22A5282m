@class PLStateTrackingComposition, PLTimer, NSDictionary, PLEntryNotificationOperatorComposition, NSDate, PLEntry, NSMutableDictionary;

@interface PLSMCAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *sbc;
@property (retain) PLStateTrackingComposition *stateTracker;
@property (retain) NSDictionary *lastAccumlatedKeysSample;
@property (retain) NSDictionary *lastAccumlatedKeysSampleCA;
@property (retain) PLEntryNotificationOperatorComposition *focalAppSwitch;
@property (retain) NSDate *lastFocalSampleDate;
@property (retain) PLTimer *focalSwitchFilterTimer;
@property (retain) PLTimer *thermalAggregationTimer;
@property (retain) PLTimer *thermalMonitorTimer;
@property (retain) PLTimer *thermalLoggingTimer;
@property (retain) PLEntry *lastThermalInstantEntry;
@property (retain) NSDictionary *lastPowerAccumlatedSample;
@property (retain) NSDictionary *lastPowerAccumlatedSampleCA;
@property (retain) NSMutableDictionary *lastAccumValueDict;
@property (retain) NSMutableDictionary *lastAccumCycleCountDict;
@property struct { unsigned int x0; BOOL x1; struct SMCAccumPlatformInfo *x2; struct { unsigned int x0; struct { int x0; int x1; union { struct { int x0; BOOL x1; unsigned short x2; unsigned char x3; } x0; char x1[5]; } x2; unsigned int x3; } x1; union { unsigned long long x0; long long x1; double x2; } x2; union { unsigned long long x0; long long x1; double x2; } x3; union { unsigned long long x0; long long x1; double x2; } x4; } x3[4]; struct { unsigned int x0; struct { int x0; int x1; union { struct { int x0; BOOL x1; unsigned short x2; unsigned char x3; } x0; char x1[5]; } x2; unsigned int x3; } x1; union { unsigned long long x0; long long x1; double x2; } x2; union { unsigned long long x0; long long x1; double x2; } x3; union { unsigned long long x0; long long x1; double x2; } x4; } x4[4]; unsigned char x5; unsigned char x6; BOOL x7; BOOL x8; BOOL x9; struct { unsigned int x0[4]; unsigned int x1[4]; unsigned char x2; unsigned char x3; } x10; BOOL x11; } *smcConnection;

+ (void)load;
+ (id)entryEventNoneDefinitionPowerDeliveryKeys;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventBackwardDefinitionAccumulatedKeys;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionThermalKeys;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)channelValueDiffKey:(id)a0;
+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitionPowerAccumulatedKeys;
+ (id)entryEventForwardDefinitions;
+ (BOOL)supportsThermalSMC;
+ (id)cycleCountKey:(id)a0;
+ (id)entryEventPointDefinitionThermalInstantKeys;
+ (id)channelValueKey:(id)a0;
+ (id)variantKey:(id)a0;

- (void)initOperatorDependancies;
- (id)getAccumEntryFromSample:(id)a0 lastSample:(id)a1 withEntryKey:(id)a2 withDate:(id)a3;
- (id)init;
- (BOOL)writeKeyNumeric:(id)a0 withValue:(unsigned long long)a1;
- (void)parseThermalThresholds:(BOOL)a0 thermalPressure:(BOOL)a1 virtualTemp:(BOOL)a2 thermalLevel:(BOOL)a3;
- (void)log;
- (BOOL)readKeyViaOSAccum:(id)a0 toOutput:(struct { double x0; unsigned int x1; unsigned char x2; } *)a1;
- (void)stopThermalTimerAndlogFirstLowSample:(BOOL)a0;
- (id)accumulatedKeys;
- (BOOL)SMCKeyExists:(id)a0;
- (void)virtualTemperatureMonitorCallback;
- (BOOL)accumSupported;
- (void)registerThermalTimer;
- (void)logEventPointThermalKeys;
- (id)sampleAccumulatedKeys:(id)a0;
- (id)powerDeliveryResetKeys;
- (void)logAccumKeysToCA:(id)a0 withLastSample:(id)a1 andDate:(id)a2;
- (id)readKey:(id)a0;
- (id)powerDeliveryKeys;
- (id)thermalAggregationKeys;
- (BOOL)anyVirtualTemperatureAboveThreshold;
- (const struct SMCAccumChannelInfo { } *)getChannelInfo:(unsigned int)a0;
- (void)logThermalInstantAndAccumlatedKeys;
- (id)powerAccumulatedKeys;
- (id)resetAccumulatedKeys:(id)a0;
- (void).cxx_destruct;
- (void)logAccumulatedKeysToPowerlog:(BOOL)a0 ToCoreAnalytics:(BOOL)a1 withDate:(id)a2 isWake:(BOOL)a3;
- (void)handleStateChangeForSMCStats;
- (BOOL)sampleKey:(struct { double x0; unsigned int x1; unsigned char x2; } *)a0 forKey:(unsigned int)a1;
- (id)thermalKeys;
- (void)dealloc;
- (id)virtualTemperatureKeys;
- (id)thermalInstantKeys;
- (void)logPowerDeliveryKeys;
- (void)logThermalAggregationKeysToCA;

@end

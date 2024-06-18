@class PLTimer, PLXPCListenerOperatorComposition, PLEntryNotificationOperatorComposition, NSDate;

@interface PLProximityAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *radioStateListener;
@property (retain) PLXPCListenerOperatorComposition *clientStateListener;
@property (retain) PLXPCListenerOperatorComposition *radioPowerListener;
@property (retain) PLXPCListenerOperatorComposition *timerStateListener;
@property (retain) PLXPCListenerOperatorComposition *maintenanceListener;
@property (retain) PLXPCListenerOperatorComposition *deviceConnectionListener;
@property (retain) PLTimer *runTimeAggregatorTimer;
@property unsigned long long numBTLines;
@property unsigned long long numConnects;
@property unsigned long long numDisconnects;
@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) NSDate *lastSBCTimestamp;

+ (void)load;
+ (id)defaults;
+ (BOOL)isProximityLiteSupported;
+ (id)entryEventPointDefinitionMaintainedDevices;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitionClientState;
+ (id)entryEventPointDefinitionTimerState;
+ (BOOL)isProximitySupported;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitionBinnedDeviceConnection;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventBackwardDefinitionRadioPower;
+ (id)entryEventPointDefinitionDeviceConnection;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventForwardDefinitionRadioState;

- (void)initOperatorDependancies;
- (id)init;
- (void)logEventPointMaintenance:(id)a0;
- (void)log;
- (void)logEventPointTimerState:(id)a0;
- (void).cxx_destruct;
- (void)logEventPointDeviceConnection:(id)a0;
- (void)logEventForwardRadioState:(id)a0;
- (void)logEventForwardClientState:(id)a0;
- (void)logEventBackwardPowerStats:(id)a0;
- (void)logEventIntervalBinnedDeviceConnection;

@end

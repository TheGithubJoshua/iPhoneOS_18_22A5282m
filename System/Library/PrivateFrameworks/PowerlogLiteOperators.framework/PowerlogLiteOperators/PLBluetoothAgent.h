@class SPBeaconManager, NSString, NSMutableDictionary, PLEntryNotificationOperatorComposition, PLNSNotificationOperatorComposition, PLXPCListenerOperatorComposition, NSDate;

@interface PLBluetoothAgent : PLAgent {
    BOOL keepSessionAlive;
    struct BTSessionImpl { } *session;
    struct BTLocalDeviceImpl { } *localBluetoothDevice;
}

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLEntryNotificationOperatorComposition *sbcChanged;
@property (retain) PLNSNotificationOperatorComposition *thermalMonitorListener;
@property (readonly) NSString *btHardwareChipset;
@property (retain) PLXPCListenerOperatorComposition *leConnectionListener;
@property (retain) PLXPCListenerOperatorComposition *btHCIListener;
@property (retain) PLXPCListenerOperatorComposition *btA2DPListener;
@property (retain) PLXPCListenerOperatorComposition *btHFPListener;
@property (retain) PLXPCListenerOperatorComposition *btHCIVSEListener;
@property (retain) PLXPCListenerOperatorComposition *wirelessProxListener;
@property (readonly) PLEntryNotificationOperatorComposition *wakeEntryNotifications;
@property (retain) NSDate *lastPowerEntryDate;
@property unsigned char logCount;
@property (retain) NSMutableDictionary *ENScanCache;
@property (retain) PLXPCListenerOperatorComposition *ENListener;
@property (retain) SPBeaconManager *beaconManager;
@property (retain) PLXPCListenerOperatorComposition *magnetListener;
@property (retain) PLXPCListenerOperatorComposition *magnetOperationListener;

+ (void)load;
+ (id)defaults;
+ (id)entryEventBackwardDefinitionAHFPPower;
+ (id)entryEventPointDefinitionMagnetOperation;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventBackwardDefinitionEnhancedPowerProfileStats;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionMagnet;
+ (id)entryEventBackwardWakeupVSE;
+ (id)getScanCoreKeys;
+ (id)entryEventIntervalDefinitions;
+ (BOOL)shouldLogMarconi;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventBackwardDefinitionA2DPPower;
+ (id)entryEventBackwardDefinitionMaxDutyCycle;
+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitionPowerProfileStats;
+ (id)entryEventBackwardDefinitionWirelessProxScanDStats;
+ (id)entryEventForwardDefinitions;
+ (BOOL)shouldLogEnhancedStats;
+ (id)entryEventBackwardDefinitionDetailedPowerProfileStats;
+ (id)entryEventBackwardDefinitionHCITrace;

- (void)initOperatorDependancies;
- (id)advertisingDataDescription:(const char *)a0 :(unsigned long long)a1;
- (id)init;
- (void)logEventIntervalConnectedDevices;
- (BOOL)isDiscoverable;
- (void)logEventPointMagnetOperation:(id)a0;
- (void)log;
- (id)btHardwareChipsetQuery;
- (BOOL)bluetoothPresent;
- (void)logEventBackwardHFP:(id)a0;
- (void)logEventForwardPairedDevices;
- (void)bluetoothDeviceEvent:(int)a0 onDevice:(struct BTLocalDeviceImpl { } *)a1 withResult:(int)a2;
- (void)sessionTerminated:(struct BTSessionImpl { } *)a0 withResult:(int)a1;
- (void)attachSession;
- (void)logEventIntervalLeConnectedDevices:(id)a0 withRequest:(BOOL)a1;
- (void)modelBluetoothOffPower;
- (void)logEventBackwardA2DP:(id)a0;
- (BOOL)isConnected;
- (void)logwithBTOnCheck;
- (void)logEventBackwardPowerProfileStats;
- (void)logEventIntervalWakeVSE:(id)a0;
- (void)logEventIntervalHCIRawData:(id)a0;
- (void).cxx_destruct;
- (BOOL)modulePowered;
- (void)dealloc;
- (void)bluetoothSessionEvent:(int)a0 onSession:(struct BTSessionImpl { } *)a1 withResult:(int)a2;
- (void)logEventPointMagnet:(id)a0;
- (BOOL)isConnectable;
- (void)logEventBackwardMaxDutyCycle:(id)a0;
- (void)sessionAttached:(struct BTSessionImpl { } *)a0 withResult:(int)a1;
- (void)logEventBackwardWirelessProximity:(id)a0;
- (void)logEventForwardDeviceState;
- (struct BTLocalDeviceImpl { } *)localBluetoothDevice;
- (void)modelBluetoothPower:(id)a0;

@end

@class NSDate, NSString, PLBatteryUIResponderService, NSMutableDictionary, PLEntry, PLCoreStorage, NSNumber, PowerUISmartChargeClient;

@interface PLBatteryUIResponseTypePausedCharging : NSObject <PLBatteryUIResponseProtocol>

@property (retain) PLEntry *lastSmartChargingEntry;
@property int intervalStateSmartCharging;
@property (retain) PowerUISmartChargeClient *smartChargingClient;
@property (retain) NSDate *smartChargingDeadline;
@property (retain) PowerUISmartChargeClient *cleanEnergyChargingClient;
@property int intervalStateCEC;
@property (retain) NSDate *cleanEnergyChargingDeadline;
@property (retain) PLEntry *lastCameraStreamingEntry;
@property BOOL wasCameraStreaming;
@property (retain) PLEntry *lastTLCWithCameraStreamingEntry;
@property BOOL wasTLCWithCameraStreaming;
@property (retain) PLEntry *lastEntry;
@property int intervalStateTLC;
@property (retain) NSDate *start;
@property (retain) NSDate *end;
@property struct _PLTimeIntervalRange { double location; double length; } range;
@property (retain) PLCoreStorage *storage;
@property BOOL isCharging;
@property BOOL externalConnected;
@property (retain) NSNumber *currentChargeLevel;
@property (retain) PLEntry *lastConnectedEntry;
@property (retain) NSString *chargingStateIntervalsEntryKey;
@property int pausedChargingState;
@property (retain) NSMutableDictionary *resultDictionary;
@property (retain) PLBatteryUIResponderService *responderService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configure:(id)a0;
- (id)result;
- (void).cxx_destruct;
- (id)dependencies;
- (int)getState:(short)a0;
- (void)run;
- (void)coalesce;
- (void)configureTLCWithCameraStreaming;
- (int)configureState:(id)a0;
- (void)getChargingData;
- (void)configureCameraStreaming;
- (void)getCameraStreamingState;
- (void)getTLCWithCameraStreamingState;
- (void)setChargingPausedStates;
- (void)setCurrentlyChargingStates;
- (void)setTerminatedChargingStates;

@end

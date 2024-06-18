@class NSDictionary, BMSource;

@interface _DKBatteryMonitor : _DKMonitor {
    unsigned int _powerService;
    unsigned int _batteryNotification;
    struct IONotificationPort { } *_notifyPort;
    BMSource *_source;
}

@property (nonatomic) int immediateShutdownThreshold;
@property (nonatomic) BOOL hasInternalBattery;
@property (retain, nonatomic) NSDictionary *previousBatteryState;
@property (nonatomic) double previousPercentage;
@property (nonatomic) BOOL previouslyFullyCharged;

+ (id)eventStream;
+ (id)entitlements;
+ (id)_eventWithBatteryPercentage:(double)a0 isFullyCharged:(BOOL)a1;
+ (id)_BMEventWithBatteryPercentage:(double)a0 isFullyCharged:(BOOL)a1;
+ (void)setCurrentBatteryPercentage:(double)a0;

- (double)batteryPercentageFromPowerSourceDictionary:(id)a0;
- (BOOL)newBatteryState:(id)a0 differsSignificantlyFromState:(id)a1 currentBatteryPercentage:(double)a2 previousBatteryPercentage:(double)a3;
- (BOOL)fullyChargedFromPowerSourceDictionary:(id)a0;
- (void)stop;
- (BOOL)percentage:(double)a0 differsFrom:(double)a1;
- (BOOL)isCharging:(id)a0 differsFrom:(id)a1;
- (void)start;
- (void)_handleBatteryNotification;
- (void)deactivate;
- (BOOL)externalConnected:(id)a0 differsFrom:(id)a1;
- (void).cxx_destruct;
- (id)getBatteryProperties;
- (void)postImminentShutdownNotification:(double)a0;
- (void)updateBatteryStateDictionary:(id)a0 currentBatteryPercentage:(double)a1;
- (double)currentBatteryPercentage;
- (void)dealloc;
- (void)batteryStateChangeHandler;
- (BOOL)temperature:(id)a0 differsFrom:(id)a1;
- (BOOL)adapterType:(id)a0 differsFrom:(id)a1;
- (BOOL)fullyCharged:(id)a0 differsFrom:(id)a1;
- (void)completeStart;
- (void)_queue_handleNotification;
- (void)synchronouslyReflectCurrentValue;
- (BOOL)voltage:(id)a0 differsFrom:(id)a1;

@end

@interface MSBatteryPowerMonitor : NSObject {
    struct __CFRunLoopSource { } *_batteryRunLoopSource;
    struct IONotificationPort { } *_batteryIONotifyPort;
    unsigned int _batteryNotificationRef;
}

@property (nonatomic) double currentLevel;
@property (nonatomic, setter=setExternalPowerConnected:) BOOL isExternalPowerConnected;

+ (id)defaultMonitor;

- (id)init;
- (void)updateBatteryLevelWithBatteryEntry:(unsigned int)a0;
- (double)batteryPercentRemaining;
- (BOOL)_updateBatteryConnectedStateWithBatteryEntry:(unsigned int)a0;
- (void)updateBatteryConnectedStateWithBatteryEntry:(unsigned int)a0;
- (void)dealloc;

@end

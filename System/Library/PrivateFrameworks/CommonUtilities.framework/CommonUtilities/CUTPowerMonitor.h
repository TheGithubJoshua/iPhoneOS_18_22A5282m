@interface CUTPowerMonitor : NSObject {
    id _internal;
}

@property (readonly, nonatomic) BOOL isExternalPowerConnected;
@property (readonly, nonatomic) double batteryPercentRemaining;

+ (id)sharedInstance;

- (void)addDelegate:(id)a0;
- (void)updateBatteryLevelWithBatteryEntry:(unsigned int)a0;
- (id)_init;
- (void)removeDelegate:(id)a0;
- (void)_handlePowerChangedNotificationWithMessageType:(unsigned int)a0 notificationID:(void *)a1;
- (BOOL)_updateBatteryConnectedStateWithBatteryEntry:(unsigned int)a0;
- (BOOL)_initIOService;
- (void).cxx_destruct;
- (void)updateBatteryConnectedStateWithBatteryEntry:(unsigned int)a0;
- (void)dealloc;

@end

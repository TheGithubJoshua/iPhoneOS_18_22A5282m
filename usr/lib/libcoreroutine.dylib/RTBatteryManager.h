@class RTDarwinNotificationHelper;

@interface RTBatteryManager : RTService

@property (nonatomic) BOOL monitorBatteryStatusChanges;
@property (nonatomic) long long externalConnectionState;
@property (readonly, nonatomic) RTDarwinNotificationHelper *notificationHelper;

+ (BOOL)_ioDrawingUnlimitedPower;
+ (long long)currentExternalConnectionState;
+ (id)externalConnectionStateToString:(long long)a0;

- (void)_unregisterForNotifications;
- (id)init;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (void)fetchCurrentChargerConnectionState:(id /* block */)a0;
- (id)initWithQueue:(id)a0 notificationHelper:(id)a1;
- (void)startMonitoringBatteryStatusChanges;
- (void)stopMonitoringBatteryStatusChanges;
- (void)updateBatteryStatus:(long long)a0;

@end

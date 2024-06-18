@interface ATXDeviceStateMonitor : NSObject <ATXDeviceStateMonitorProtocol>

+ (id)SSID;
+ (BOOL)onWifi;
+ (void)setSSID:(id)a0;
+ (void)setAirplaneMode:(BOOL)a0;
+ (void)startMockingSystem;
+ (void)stopMockingSystem;
+ (BOOL)airplaneMode;

@end

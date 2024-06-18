@class NSString, USBFaultMonitor;

@interface ACCPlatformPluginIOKit : NSObject <ACCPlatformUSBFaultPluginProtocol, ACCPlatformUSBCableTypePluginProtocol, ACCPlatformIOKitPowerPluginProtocol, ACCPlatformUSBCameraKitHubPluginProtocol, ACCPlatformSleepAssertionPluginProtocol>

@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) USBFaultMonitor *monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *pluginName;

- (void)initPlugin;
- (void)clientHandledSleepNotification:(id)a0;
- (id)createSleepNotificationClient;
- (void)startPlugin;
- (void)removeApplePencilSleepAssertion;
- (void)setUSBHubOverCurrentSiphoning:(id)a0;
- (void)removeEASleepAssertion;
- (int)getBatteryChargingState;
- (BOOL)getUSBHubOverCurrentState:(id)a0;
- (void)removeMFi4SleepAssertion;
- (void)createSleepAssertionForUUID:(id)a0;
- (id)createBatteryNotificationClient;
- (void)stopPlugin;
- (int)getBatteryChargingType;
- (void)destroySleepAssertionForUUID:(id)a0;
- (void)usbCableTypeMonitor:(BOOL)a0 forUUID:(id)a1;
- (unsigned int)getUSBHubSiphoningCurrentActualRequirementInmA:(id)a0;
- (void).cxx_destruct;
- (unsigned int)getUSBHubSiphoningCurrentRequirementInmA:(id)a0;
- (BOOL)getBatteryChargingTypeIsInductive;
- (void)createMFi4SleepAssertion;
- (void)usbFaultMonitor:(BOOL)a0 forUUID:(id)a1;
- (void)initUSBCameraKitHubNotifications:(id)a0;
- (void)resetUSBHubOverCurrentSiphoning:(id)a0;
- (void)destroyBatteryNotificationsForClient:(id)a0;
- (BOOL)getUSBFaultStateforType:(int)a0;
- (unsigned int)getUSBHubUnitLoadInmA:(id)a0;
- (void)createApplePencilSleepAssertion;
- (int)getExternalBatteryChargingType;
- (void)createEASleepAssertion;
- (void)destroySleepNotificationsForClient:(id)a0;
- (BOOL)getExternalBatteryChargingTypeIsInductive;
- (BOOL)isExternalChargerConnected;
- (unsigned char)getBatteryChargeLevel;

@end

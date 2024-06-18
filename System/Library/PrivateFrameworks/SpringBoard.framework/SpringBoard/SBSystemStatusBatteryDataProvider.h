@class NSString, STBatteryStatusDomainPublisher, BCBatteryDeviceController;

@interface SBSystemStatusBatteryDataProvider : NSObject <BCBatteryDeviceObserving, BSInvalidatable>

@property (readonly, nonatomic) STBatteryStatusDomainPublisher *batteryDataPublisher;
@property (readonly, nonatomic) BCBatteryDeviceController *batteryDeviceController;
@property (nonatomic) BOOL shouldExposeNotChargingState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)_registerForNotifications;
- (void)connectedDevicesDidChange:(id)a0;
- (void)_updateData;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)_isInNotChargingState;
- (void)_noteNotChargingStatusChanged;
- (void)dealloc;
- (void)_updateShouldExposeNotChargingState;

@end

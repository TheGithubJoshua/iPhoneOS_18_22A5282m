@interface SPOwnerInterface : NSObject

+ (id)cbPeripheralManagementSession;

- (id)privateFirmwareUpdateSession;
- (id)settingsConfiguration;
- (id)persistentConnectionSession;
- (id)privateOwnerSession;
- (id)tagSeparationSession;
- (id)firmwareUpdateSession;
- (id)maintenanceConnectionSession;
- (id)separationMonitoringSession;
- (id)fmipRegisterInfo;
- (id)trackingAvoidanceService;
- (id)ownerSession;

@end

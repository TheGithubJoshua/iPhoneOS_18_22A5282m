@interface AKPeripheralAvailabilityManager_iOS : NSObject {
    struct __IOHIDManager { } *stylusHidManager;
}

@property (class, readonly) BOOL onlyDrawWithApplePencil;

@property unsigned long long currentAvailability;

- (id)init;
- (void)teardown;
- (void)dealloc;
- (void)postConnectionStatusNotification;
- (void)startMonitoringForPeripheralConnection;
- (void)stopMonitoringForPeripheralConnection;

@end

@class NSMutableArray;

@interface SBBluetoothController : NSObject {
    NSMutableArray *_devices;
    BOOL _tetheringConnected;
}

+ (id)sharedInstance;

- (int)batteryLevel;
- (BOOL)canReportBatteryLevel;
- (void)updateBattery;
- (void)removeDeviceNotification:(id)a0;
- (void)connectionChanged:(id)a0;
- (void).cxx_destruct;
- (void)startWatchingForDevices;
- (void)noteDevicesChanged;
- (void)addDeviceNotification:(id)a0;
- (id)deviceForAudioRoute:(id)a0;
- (id)firstBTDeviceToReportBatteryLevel;
- (void)bluetoothDeviceInitiatedVoiceControl:(id)a0;
- (void)bluetoothDeviceEndedVoiceControl:(id)a0;
- (void)stopWatchingForDevices;
- (void)updateTetheringConnected;
- (void)iapDeviceChanged:(id)a0;
- (void)batteryChanged:(id)a0;
- (void)dealloc;
- (BOOL)tetheringConnected;

@end

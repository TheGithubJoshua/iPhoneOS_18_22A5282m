@class NSMutableDictionary;

@interface BluetoothManager : NSObject {
    struct BTLocalDeviceImpl { } *_localDevice;
    struct BTSessionImpl { } *_session;
    int _available;
    int _state;
    BOOL _airplaneMode;
    BOOL _audioConnected;
    BOOL _scanningEnabled;
    BOOL _scanningInProgress;
    unsigned int _scanningServiceMask;
    struct BTDiscoveryAgentImpl { } *_discoveryAgent;
    struct BTPairingAgentImpl { } *_pairingAgent;
    struct BTAccessoryManagerImpl { } *_accessoryManager;
    NSMutableDictionary *_btAddrDict;
    NSMutableDictionary *_btDeviceDict;
}

@property (nonatomic) BOOL denylistEnabled;

+ (id)sharedInstance;
+ (int)lastInitError;
+ (id)sharedInstanceQueue;
+ (void)setSharedInstanceQueue:(id)a0;

- (id)localAddress;
- (int)bluetoothState;
- (id)pairedDevices;
- (id)init;
- (BOOL)isDiscoverable;
- (BOOL)isServiceSupported:(unsigned int)a0;
- (BOOL)enabled;
- (void)setDiscoverable:(BOOL)a0;
- (BOOL)available;
- (id)deviceFromAddressString:(id)a0;
- (int)powerState;
- (BOOL)connected;
- (BOOL)setPowered:(BOOL)a0;
- (BOOL)connectable;
- (BOOL)_setup:(struct BTSessionImpl { } *)a0;
- (BOOL)powered;
- (BOOL)setEnabled:(BOOL)a0;
- (void)dealloc;
- (void)_cleanup:(BOOL)a0;
- (void)_postNotification:(id)a0;
- (id)connectedDevices;
- (void)postNotification:(id)a0;
- (void)enableTestMode;
- (void)postNotificationName:(id)a0 object:(id)a1;
- (struct BTAccessoryManagerImpl { } *)_accessoryManager;
- (id)deviceFromIdentifier:(id)a0;
- (void)connectDevice:(id)a0;
- (void)disconnectDevice:(id)a0;
- (void)cancelPairing;
- (void)endVoiceCommand:(id)a0;
- (BOOL)devicePairingEnabled;
- (void)setDevicePairingEnabled:(BOOL)a0;
- (BOOL)_attach;
- (void)_connectabilityChanged;
- (void)_pairedStatusChanged;
- (void)_advertisingChanged;
- (void)_connectedStatusChanged;
- (void)_discoveryStateChanged;
- (void)setConnectable:(BOOL)a0;
- (void)_notifyFirstDeviceUnlockCompleted;
- (void)showPowerPrompt;
- (void)_postNotificationWithArray:(id)a0;
- (void)_powerChanged;
- (void)_removeDevice:(id)a0;
- (void)_restartScan;
- (void)_scanForServices:(unsigned int)a0 withMode:(int)a1;
- (void)_setScanState:(int)a0;
- (void)_updateAirplaneModeStatus;
- (void)_updateBluetoothState;
- (void)_updateDenylistMode;
- (void)acceptSSP:(long long)a0 forDevice:(id)a1;
- (id)addDeviceIfNeeded:(struct BTDeviceImpl { } *)a0;
- (BOOL)audioConnected;
- (void)bluetoothStateAction;
- (void)bluetoothStateActionWithCompletion:(id /* block */)a0;
- (void)connectDevice:(id)a0 withServices:(unsigned int)a1;
- (id)connectedDeviceNamesThatMayBeDenylisted;
- (id)connectingDevices;
- (BOOL)deviceScanningEnabled;
- (BOOL)deviceScanningInProgress;
- (void)disconnectDevicePhysicalLink:(id)a0;
- (BOOL)isAnyoneAdvertising;
- (BOOL)isAnyoneScanning;
- (int)maskLocalDeviceEvents:(unsigned int)a0;
- (id)pairedNonAppleHAEDevices;
- (void)postNotificationName:(id)a0 object:(id)a1 error:(id)a2;
- (void)resetDeviceScanning;
- (void)scanForConnectableDevices:(unsigned int)a0;
- (void)scanForServices:(unsigned int)a0;
- (void)setAudioConnected:(BOOL)a0;
- (void)setDeviceScanningEnabled:(BOOL)a0;
- (void)setPincode:(id)a0 forDevice:(id)a1;
- (BOOL)spatialAudioPlatformSupport;
- (void)startVoiceCommand:(id)a0;
- (void)unpairDevice:(id)a0;
- (BOOL)wasDeviceDiscovered:(id)a0;

@end
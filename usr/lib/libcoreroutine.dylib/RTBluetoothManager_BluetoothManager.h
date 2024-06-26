@class BluetoothManager, NSSet;

@interface RTBluetoothManager_BluetoothManager : RTBluetoothManager

@property (readonly, nonatomic) BluetoothManager *bluetoothManager;
@property (retain, nonatomic) NSSet *connectedDevices;
@property (nonatomic) BOOL observingConnections;
@property (nonatomic) long long carKitConnectionState;

- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_fetchCarKitConnectedStateWithHandler:(id /* block */)a0;
- (long long)getCarKitConnectionStateFromConnectedDevices:(id)a0;
- (void)shouldObserveConnections;
- (void)updateConnections;

@end

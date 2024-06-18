@class NSString, CBPeripheral, CBCentralManager;

@interface VOSBluetoothLowEnergyDevice : NSObject <VOSBluetoothConnectableDevice>

@property (readonly, nonatomic) CBPeripheral *peripheral;
@property (readonly, nonatomic) CBCentralManager *centralManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)address;
- (void)disconnect;
- (long long)compare:(id)a0;
- (BOOL)connected;
- (id)name;
- (void)connect;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)connecting;
- (BOOL)paired;
- (id)identifier;
- (void)unpair;
- (id)initWithPeripheral:(id)a0 manager:(id)a1;

@end

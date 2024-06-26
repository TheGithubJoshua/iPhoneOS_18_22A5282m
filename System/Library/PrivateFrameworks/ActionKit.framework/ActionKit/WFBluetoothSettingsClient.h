@class BluetoothManager, NSMutableDictionary, NSString;

@interface WFBluetoothSettingsClient : WFSettingsClient <WFBooleanStateSetting>

@property (readonly, nonatomic) BluetoothManager *manager;
@property (copy, nonatomic) id /* block */ availabilityCompletion;
@property (readonly, nonatomic) NSMutableDictionary *observeBlocksPerDeviceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)createClientWithCompletionHandler:(id /* block */)a0;

- (void).cxx_destruct;
- (void)registerForNotifications;
- (void)dealloc;
- (void)devicesChanged:(id)a0;
- (void)availabilityChanged:(id)a0;
- (void)getPairedDevicesMatchingType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)getStateWithCompletionHandler:(id /* block */)a0;
- (id)initWithBluetoothManager:(id)a0;
- (void)observePairedDevicesMatchingType:(unsigned long long)a0 update:(id /* block */)a1;
- (void)setState:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)waitForAvailabilityWithCompletionHandler:(id /* block */)a0;

@end

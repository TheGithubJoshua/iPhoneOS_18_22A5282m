@class NSArray, NSString, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface _BCPowerSourceController : NSObject <BCBatteryDeviceObservable> {
    int _powerSourceBatteryChangeNotifyToken;
    int _powerSourceTimeRemainingNotifyToken;
    int _accPowerSourceNotifyToken;
    int _accPowerSourceTimeRemainingNotifyToken;
    int _accAttachNotifyToken;
    int _lowPowerModeNotifyToken;
    BOOL _lowPowerModeActive;
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_observersToQueues;
}

@property (readonly, copy, nonatomic) NSArray *connectedDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (void)_notifyObserversWithBlock:(id /* block */)a0;
- (id)_nameForVendor:(long long)a0 accessoryCategory:(unsigned long long)a1 name:(id)a2 partName:(id)a3 isInternal:(BOOL)a4;
- (void)_notifyObserver:(id)a0 block:(id /* block */)a1 queue:(id)a2;
- (id)_orderedDevicesFromPowerSourcesBlob:(void *)a0 powerSourcesList:(struct __CFArray { } *)a1;
- (void)_endPowerSourceObserving;
- (id)_nameForCurrentDevice;
- (void)_updateLowPowerModeState;
- (unsigned long long)_accessoryCategoryFromPowerSourceAccessoryCategory:(id)a0 partType:(unsigned long long)a1 transportType:(long long)a2 vendor:(long long)a3 productIdentifier:(long long)a4;
- (BOOL)_shouldConsiderDeviceWithPowerSourceDescription:(id)a0;
- (unsigned long long)_partFromPowerSourcePartIdentifier:(id)a0;
- (id)_deviceByCoalescingDevice:(id)a0;
- (id)_identifierFromPowerSourceDescription:(id)a0;
- (long long)_lowBatteryLevelForCurrentDevice;
- (void).cxx_destruct;
- (int)_displayChargePercentForCurrentCapacity:(id)a0 andMaxCapacity:(id)a1 updateZeroValue:(BOOL)a2;
- (void)_beginPowerSourceObservingIfNecessary;
- (long long)_powerSourceStateFromPowerSourceStateString:(id)a0;
- (int)_registerForPowerSourceChangeNotification:(const char *)a0 token:(int *)a1 queue:(id)a2;
- (void)_queryConnectedDevices;
- (int)_registerForNotification:(const char *)a0 token:(int *)a1 queue:(id)a2 handler:(id /* block */)a3;
- (void)addBatteryDeviceObserver:(id)a0 queue:(id)a1;
- (long long)_vendorFromPowerSourceDescriptionVendorIdentifier:(id)a0 transportType:(long long)a1;
- (long long)_transportTypeFromPowerSourceTransportTypeString:(id)a0;
- (BOOL)_shouldCoalesceDevices:(id)a0 minimumPercentCharge:(long long *)a1;
- (void)dealloc;
- (void)removeBatteryDeviceObserver:(id)a0;
- (BOOL)_isLowPowerModeActive;
- (void)_handleLowPowerModeChanged:(int)a0;
- (BOOL)_isDevicePartOfPair:(id)a0;
- (long long)_lowBatteryLevelForVendor:(long long)a0 accessoryCategory:(unsigned long long)a1 transportType:(long long)a2;

@end

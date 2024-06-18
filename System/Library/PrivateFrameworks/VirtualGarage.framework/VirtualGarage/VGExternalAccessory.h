@class VGExternalAccessoryState, NSString, NSMutableDictionary, VGExternalAccessoryModelFilter, VGVehicleState, NSObject, VGVehicle;
@protocol VGExternalAccessoryUpdating, OS_dispatch_queue;

@interface VGExternalAccessory : NSObject <VGExternalAccessory> {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableDictionary *_trackedAccessoriesByConnectionId;
    VGExternalAccessoryState *_accessoryState;
    VGVehicleState *_currentVehicleState;
    VGVehicle *_currentVehicle;
    VGExternalAccessoryModelFilter *_modelFilter;
}

@property (weak, nonatomic) id<VGExternalAccessoryUpdating> accessoryUpdateDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)_identifier;
- (BOOL)_isConnectedToElectricVehicle;
- (void)_accessoryDidUpdateVehicle:(id)a0;
- (BOOL)isConnectedToAccessoryWithIdentifier:(id)a0;
- (id)_vehicleForCurrentState;
- (void)_updateFromVehicleInfo:(id)a0;
- (id)_modelIdFromArguments:(id)a0;
- (BOOL)_currentStatePassesEVRoutingRequirements;
- (void)_addNewCarPlayAccessory:(id)a0;
- (void)listCarsWithCompletion:(id /* block */)a0;
- (id)_bluetoothIdentifier;
- (BOOL)_isConnectedVehicleAllowlisted;
- (void)getStateOfChargeForVehicle:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_notifyDelegateWithCurrentVehicle;
- (void)_removeCarPlayAccessory:(id)a0;
- (id)_firmwareId;
- (void)_checkAvailableAccessoriesAndAttachIfNeeded;
- (BOOL)isConnectedToVehicle:(id)a0;
- (void)dealloc;
- (void)_accessoryDidDisconnect:(id)a0;
- (id)_vehicleStateForCurrentState;
- (BOOL)_isAccessoryTracked:(id)a0;
- (void)_accessoryDidConnect:(id)a0;
- (BOOL)_isConnectedToCarPlayAccessory;

@end

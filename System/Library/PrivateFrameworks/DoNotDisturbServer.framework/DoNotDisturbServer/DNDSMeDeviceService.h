@class DNDMeDeviceState, DNDSMeDeviceStore, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, DNDSBackingStore;

@interface DNDSMeDeviceService : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    DNDMeDeviceState *_meDeviceState;
    NSMutableSet *_listeners;
    DNDSMeDeviceStore *_store;
    id<DNDSBackingStore> _backingStore;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _storeLock;
}

@property (readonly, copy, nonatomic) DNDMeDeviceState *meDeviceState;

- (void)addListener:(id)a0;
- (void)_loadDataFromBackingStore;
- (id)init;
- (void)_queue_processDevices:(id)a0 error:(id)a1;
- (void)removeListener:(id)a0;
- (BOOL)_queue_saveDataToBackingStoreWithError:(id *)a0;
- (BOOL)_saveDataToBackingStoreWithError:(id *)a0;
- (void).cxx_destruct;
- (id)_queue_computeMeDeviceStateForDevices:(id)a0;
- (void)devicesChanged;
- (void)meDeviceChanged;
- (void)_queue_fetchAllDevices;

@end

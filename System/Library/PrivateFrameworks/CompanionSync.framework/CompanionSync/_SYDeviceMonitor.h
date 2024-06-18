@class NSUUID, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface _SYDeviceMonitor : NSObject {
    NSMutableSet *_devices;
    NSUUID *_currentTargetDeviceUUID;
    NSObject<OS_dispatch_queue> *_syncQ;
}

+ (id)sharedInstance;

- (id)init;
- (void)_deviceDidBecomeInactive:(id)a0;
- (void)_rebuildDeviceList;
- (id)allDevices;
- (void)_clearDeviceList;
- (id)deviceForPairingID:(id)a0;
- (void)addNRDevice:(id)a0;
- (id)currentTargetableDevice;
- (void)deviceBecameTargetable:(id)a0;
- (void).cxx_destruct;
- (void)_deviceDidBecomeActive:(id)a0;
- (id)deviceForNRDevice:(id)a0;
- (void)removeNRDevice:(id)a0;

@end

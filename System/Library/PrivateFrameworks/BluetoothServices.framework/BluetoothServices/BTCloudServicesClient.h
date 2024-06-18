@class NSObject, NSXPCConnection, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface BTCloudServicesClient : NSObject {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
}

@property (retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (BOOL)_ensureXPCStarted;
- (id)init;
- (void)cloudPairingIdentifierForPeripheral:(id)a0 completion:(id /* block */)a1;
- (void)createDeviceSupportInformationRecord:(id)a0 completion:(id /* block */)a1;
- (void)modifyDeviceSupportInformationRecord:(id)a0 completion:(id /* block */)a1;
- (void)deviceSupportInformationRecordsWithCompletion:(id /* block */)a0;
- (void)fetchSoundProfileRecordWithCompletion:(id /* block */)a0;
- (void)_invalidated;
- (void)modifyDeviceRecord:(id)a0 completion:(id /* block */)a1;
- (void)magicSettingsRecord:(id)a0 completion:(id /* block */)a1;
- (void)createMagicSettingsRecord:(id)a0 completion:(id /* block */)a1;
- (void)invalidate;
- (void).cxx_destruct;
- (void)magicSettingsRecordsWithCompletion:(id /* block */)a0;
- (void)createSoundProfileRecord:(id)a0 completion:(id /* block */)a1;
- (void)deviceSupportInformationRecord:(id)a0 completion:(id /* block */)a1;
- (void)modifyMagicSettingsRecord:(id)a0 completion:(id /* block */)a1;
- (void)deviceRecordsWithCompletion:(id /* block */)a0;
- (void)deleteSoundProfileRecordWithCompletion:(id /* block */)a0;
- (void)forceCloudPairingForIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)modifySoundProfileRecord:(id)a0 completion:(id /* block */)a1;
- (void)deleteMagicSettingsRecord:(id)a0 completion:(id /* block */)a1;
- (void)_interrupted;
- (void)createDeviceRecord:(id)a0 completion:(id /* block */)a1;
- (void)accountInfoWithCompletion:(id /* block */)a0;
- (void)deleteDeviceSupportInformationRecord:(id)a0 completion:(id /* block */)a1;
- (void)deviceRecord:(id)a0 completion:(id /* block */)a1;
- (void)deleteDeviceRecord:(id)a0 completion:(id /* block */)a1;

@end

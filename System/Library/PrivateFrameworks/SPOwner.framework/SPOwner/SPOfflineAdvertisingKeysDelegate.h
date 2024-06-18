@class FMXPCServiceDescription, NSString, FMXPCSession, SPBeaconManager, NSObject, CBPeripheralManager;
@protocol OS_dispatch_queue;

@interface SPOfflineAdvertisingKeysDelegate : NSObject <CBPeripheralManagerPrivateDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) SPBeaconManager *beaconManager;
@property (retain, nonatomic) CBPeripheralManager *peripheralManager;
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (nonatomic) BOOL inLowPowerMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)userAgentProxy;
- (id)proxy;
- (id)remoteInterface;
- (void)enterLowPowerMode;
- (void)processKeyResponse:(id)a0;
- (void)peripheralManagerDidUpdateState:(id)a0;
- (void).cxx_destruct;
- (long long)transformReason:(long long)a0;
- (void)peripheralManager:(id)a0 offlineAdvPayloadRequestedWithReason:(long long)a1;
- (id)initWithBeaconManager:(id)a0;
- (id)userAgentSyncProxy;
- (id)syncProxy;

@end

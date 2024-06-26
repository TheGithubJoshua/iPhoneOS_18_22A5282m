@class NSObject;
@protocol OS_dispatch_queue, WPObjectDiscoveryDelegate;

@interface WPObjectDiscovery : WPClient

@property (weak, nonatomic) id<WPObjectDiscoveryDelegate> delegate;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void)scanningFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)startTest;
- (id)clientAsString;
- (void)receivedTestResponse:(id)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)scanningStoppedOfType:(unsigned char)a0;
- (void)scanningStartedOfType:(unsigned char)a0;
- (void)deviceDiscovered:(id)a0;
- (void)stateDidChange:(long long)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)stopTest;
- (void)startScanning;
- (void)stopScanning;
- (void)updateScanningRequest:(id)a0 withUpdate:(id /* block */)a1;
- (void)devicesDiscovered:(id)a0;
- (BOOL)isScanningEnabled;
- (BOOL)isValidScanOptions:(id)a0;
- (BOOL)isValidScanRequest:(id)a0;
- (id)scanRequestFromScanMode:(long long)a0 UpdateTime:(double)a1;
- (id)scanRequestFromScanOptions:(id)a0;
- (void)scanningFailedWithError:(id)a0;
- (void)startScanningWithMode:(long long)a0;
- (void)startScanningWithMode:(long long)a0 Timeout:(double)a1;
- (void)startScanningWithOptions:(id)a0;
- (void)updateBeaconingExtended:(id)a0;
- (void)updateBeaconingInterval:(id)a0;
- (void)updateBeaconingKeys:(id)a0;
- (void)updateBeaconingState:(id)a0;
- (void)updateBeaconingStatus:(id)a0;
- (void)updateNearOwnerTokens:(id)a0;

@end

@protocol WPHeySiriProtocol;

@interface WPHeySiri : WPClient

@property (weak, nonatomic) id<WPHeySiriProtocol> delegate;
@property BOOL isScanning;

+ (long long)holdVouchers;

- (void)updateAdvertisingRequest:(id)a0 withUpdate:(id /* block */)a1;
- (void)advertisingPendingOfType:(unsigned char)a0;
- (void)advertisingStoppedOfType:(unsigned char)a0 withError:(id)a1;
- (void)advertisingFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)advertisingStartedOfType:(unsigned char)a0;
- (void)scanningFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (id)clientAsString;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)scanningStoppedOfType:(unsigned char)a0;
- (void)scanningStartedOfType:(unsigned char)a0;
- (void)deviceDiscovered:(id)a0;
- (void)stateDidChange:(long long)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)startScanning;
- (void)startScanningAndAdvertisingWithOptions:(id)a0;
- (void)stopScanning;
- (void)startAdvertisingWithData:(id)a0;
- (void)stopScanningAndAdvertising;
- (void)stopAdvertising;
- (void)startScanningAndAdvertisingWithData:(id)a0;
- (void)updateScanningRequest:(id)a0 withUpdate:(id /* block */)a1;

@end

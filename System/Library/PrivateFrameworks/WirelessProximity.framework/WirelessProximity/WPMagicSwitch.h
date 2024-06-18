@protocol WPMagicSwitchDelegate;

@interface WPMagicSwitch : WPClient

@property (weak, nonatomic) id<WPMagicSwitchDelegate> delegate;

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
- (void)stopScanning;
- (struct { long long x0; long long x1; long long x2; })dutyCycleToScanningRates:(long long)a0;
- (void)startAdvertisingWithData:(id)a0;
- (void)stopAdvertising;
- (void)startScanningWithData:(id)a0;

@end

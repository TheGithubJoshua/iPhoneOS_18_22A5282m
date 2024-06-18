@protocol WPAirPlaySoloDelegate;

@interface WPAirPlaySolo : WPClient

@property (weak, nonatomic) id<WPAirPlaySoloDelegate> delegate;

+ (unsigned char)puckStringToType:(id)a0;
+ (id)puckTypeToString:(unsigned char)a0;

- (void)peerTrackingAvailable;
- (void)advertisingPendingOfType:(unsigned char)a0;
- (void)peerTrackingFull;
- (void)advertisingStoppedOfType:(unsigned char)a0 withError:(id)a1;
- (void)advertisingFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (void)foundPeer:(id)a0 ofType:(unsigned char)a1;
- (void)advertisingStartedOfType:(unsigned char)a0;
- (void)stoppedTrackingPeer:(id)a0 ofType:(unsigned char)a1;
- (void)lostPeer:(id)a0 ofType:(unsigned char)a1;
- (id)init;
- (void)scanningFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (id)clientAsString;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)scanningStoppedOfType:(unsigned char)a0;
- (void)scanningStartedOfType:(unsigned char)a0;
- (void)startedTrackingPeer:(id)a0 ofType:(unsigned char)a1;
- (void)deviceDiscovered:(id)a0;
- (void)stateDidChange:(long long)a0;
- (void)failedToStartTrackingPeer:(id)a0 error:(id)a1;
- (void)startConnectionlessScanningWithData:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)stopConnectionlessAdvertising:(id)a0;
- (void)stopTrackingPeer:(id)a0 withData:(id)a1;
- (void)stopConnectionlessAdvertising;
- (void)startTrackingPeer:(id)a0 withData:(id)a1;
- (void)stopConnectionlessScanningWithData:(id)a0;
- (void)startConnectionlessAdvertisingWithData:(id)a0;

@end

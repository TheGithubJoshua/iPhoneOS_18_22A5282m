@class NSMutableSet;
@protocol WPPairingDelegate;

@interface WPPairing : WPClient

@property (weak, nonatomic) id<WPPairingDelegate> delegate;
@property (retain) NSMutableSet *ignoredDevices;
@property BOOL allowScreenOffScanning;

- (id)initWithDelegate:(id)a0 queue:(id)a1 machName:(id)a2;
- (void)scanningFailedToStart:(id)a0 ofType:(unsigned char)a1;
- (id)clientAsString;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (id)initWithDelegate:(id)a0;
- (void)scanningStoppedOfType:(unsigned char)a0;
- (void)scanningStartedOfType:(unsigned char)a0;
- (void)deviceDiscovered:(id)a0;
- (void)stateDidChange:(long long)a0;
- (void)startProximityPairingServiceScanningWithRSSI:(id)a0 duplicates:(BOOL)a1;
- (void)startProximityPairingServiceScanning;
- (void)invalidate;
- (void).cxx_destruct;
- (void)stopProximityPairingServiceScanning;
- (void)startProximityPairingServiceScanningWithRSSI:(id)a0 duplicates:(BOOL)a1 scanMode:(long long)a2;
- (void)ignoreDeviceUntilNextUnlock:(id)a0 ignoreDevice:(BOOL)a1;

@end

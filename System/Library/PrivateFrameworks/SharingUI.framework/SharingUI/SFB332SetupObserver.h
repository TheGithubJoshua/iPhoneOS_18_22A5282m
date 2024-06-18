@protocol SFB332UIProtocol;

@interface SFB332SetupObserver : SFXPCClient

@property (weak, nonatomic) id<SFB332UIProtocol> delegate;

- (BOOL)shouldEscapeXpcTryCatch;
- (void)enableBluetoothTapped;
- (id)remoteObjectInterface;
- (void)showSubsequentPairSuccess;
- (void)activate;
- (void)acquireHUDTransaction;
- (void)showEnableBluetoothPill;
- (id)machServiceName;
- (void)setDeviceType:(unsigned long long)a0;
- (void)setShouldShowWhatsNew:(BOOL)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)dismissUnlockPrompt;
- (void)pairTapped;
- (id)exportedInterface;
- (void)updateDeviceInfoWithName:(id)a0 batteryLevel:(double)a1 batteryLevelKnown:(BOOL)a2 edge:(unsigned long long)a3 orientation:(unsigned long long)a4;
- (void)dismissBTPrompt;
- (void)dismissChargingStatus;
- (void)dismissUIAnimated:(BOOL)a0;
- (void)showPairConsentPrompt;
- (void)showPairingSuccess;
- (void)showUnlockPrompt;
- (void)releaseHUDTransaction;
- (void)showChargingStatus;
- (void)showPairingFailure;
- (void)showPairingStarted;

@end

@protocol HDNearFieldInterfaceDelegate;

@interface HDNearFieldInterface : NSObject

@property (weak, nonatomic) id<HDNearFieldInterfaceDelegate> delegate;

- (BOOL)isNdefTagSessionInProgress;
- (id)startSinglePollExpressModeAssertion:(double)a0;
- (void)startFieldDetectSessionWithCompletion:(id /* block */)a0;
- (BOOL)setFieldDetectEnabled:(BOOL)a0;
- (void)endFieldDetectSession;
- (void).cxx_destruct;
- (void)startNdefTagSessionWithBluetoothLESecureOOBData:(id)a0 completion:(id /* block */)a1;
- (id)releaseSinglePollExpressModeAssertion;
- (void)endNdefTagSession;
- (BOOL)isFieldDetectSessionInProgress;

@end

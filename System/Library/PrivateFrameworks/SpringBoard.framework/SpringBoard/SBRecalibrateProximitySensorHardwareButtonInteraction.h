@class NSString, SBProximitySensorManager;

@interface SBRecalibrateProximitySensorHardwareButtonInteraction : SBHardwareButtonGestureParametersProviderBase <SBProximitySensorManagerObserver, SBHardwareButtonInteraction>

@property (retain, nonatomic) SBProximitySensorManager *sensorManager;
@property (nonatomic) BOOL didResetProxCalibration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)disallowsSinglePressForReason:(id *)a0;
- (BOOL)consumeInitialPressDown;
- (id)initWithProximitySensorManager:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)disallowsLongPressForReason:(id *)a0;
- (BOOL)_disallowsAnyPressForReason:(id *)a0;
- (BOOL)consumeSinglePressUp;
- (BOOL)disallowsTriplePressForReason:(id *)a0;
- (void).cxx_destruct;
- (BOOL)disallowsDoublePressForReason:(id *)a0;
- (id)hardwareButtonGestureParameters;

@end

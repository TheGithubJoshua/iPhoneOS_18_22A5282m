@class NSString, BSAbsoluteMachTimer, SBProximitySensorManager;

@interface SBRecalibrateProximitySensorMultiphaseHardwareButtonInteraction : SBHardwareButtonGestureParametersProviderBase <SBProximitySensorManagerObserver, SBHardwareButtonInteraction>

@property (nonatomic) long long phase;
@property (retain, nonatomic) SBProximitySensorManager *sensorManager;
@property (retain, nonatomic) BSAbsoluteMachTimer *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)disallowsSinglePressForReason:(id *)a0;
- (BOOL)consumeInitialPressDown;
- (id)initWithProximitySensorManager:(id)a0;
- (void)proximitySensorManager:(id)a0 objectWithinProximityDidChange:(BOOL)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)disallowsLongPressForReason:(id *)a0;
- (BOOL)_disallowsAnyPressForReason:(id *)a0;
- (BOOL)consumeSinglePressUp;
- (void)_transitionToPhase:(long long)a0;
- (BOOL)disallowsTriplePressForReason:(id *)a0;
- (void).cxx_destruct;
- (BOOL)disallowsDoublePressForReason:(id *)a0;
- (void)dealloc;
- (void)_timerDidFire;
- (id)hardwareButtonGestureParameters;
- (void)_transitionToPhase:(long long)a0 timeout:(double)a1;

@end

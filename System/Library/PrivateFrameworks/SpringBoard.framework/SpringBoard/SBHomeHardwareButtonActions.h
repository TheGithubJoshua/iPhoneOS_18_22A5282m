@class SBHardwareButtonGestureParameters, NSString, SBHardwareButtonActionList, SBHardwareButtonService, SBProximitySensorManager;
@protocol SBHardwareButtonGestureParametersProvider, SBHardwareButtonInteraction;

@interface SBHomeHardwareButtonActions : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonGestureParametersObserver> {
    BOOL _screenWasDimOnMenuDown;
    BOOL _dontUnlockOnButtonUp;
    long long _homeButtonType;
    SBHardwareButtonActionList *_buttonUpActions;
    SBHardwareButtonActionList *_buttonUpPostActions;
    unsigned long long _menuButtonHoldStartTime;
    double _menuButtonHoldStartAbsoluteTime;
    SBProximitySensorManager *_proximitySensorManager;
    SBHardwareButtonService *_hardwareButtonService;
    id<SBHardwareButtonInteraction, SBHardwareButtonGestureParametersProvider> _accessibilityButtonInteraction;
    id<SBHardwareButtonInteraction, SBHardwareButtonGestureParametersProvider> _siriButtonInteraction;
    SBHardwareButtonGestureParameters *_accessibilityGestureParameters;
    SBHardwareButtonGestureParameters *_siriGestureParameters;
}

@property (nonatomic, getter=isButtonDown) BOOL buttonDown;
@property (nonatomic) double currentLongPressDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performLongPressCancelledActions;
- (void)performLongPressActions;
- (void)_logMenuButtonHoldTime;
- (id)initWitHomeButtonType:(long long)a0;
- (void)provider:(id)a0 didUpdateButtonGestureParameters:(id)a1;
- (void)performDoubleTapUpActions;
- (void)performSinglePressUpActions;
- (void)configureForwardingToLockButtonActions:(id)a0;
- (void)performInitialButtonDownActions;
- (void)performDoublePressDownActions;
- (void)performFinalButtonUpActions;
- (BOOL)_performButtonPreflightActions;
- (void).cxx_destruct;
- (void)performAfterMenuButtonUpIsHandledUsingBlock:(id /* block */)a0;
- (void)performInitialButtonUpActions;
- (BOOL)_shouldIgnorePressesDueToProxOrIdle:(id *)a0;
- (void)performSinglePressUpActionsWithSourceType:(unsigned long long)a0;
- (id)hardwareButtonGestureParameters;
- (void)performWhenMenuButtonIsUpUsingBlock:(id /* block */)a0;
- (void)performTriplePressUpActions;

@end

@class NSMutableDictionary, SBLockHardwareButton, SBBacklightController, SBCombinationHardwareButtonActions, NSString, SBPressGestureRecognizer, SBProximitySensorManager, SBSOSLockGestureObserver, SBSOSClawGestureObserver, SBHomeHardwareButton, SBClickGestureRecognizer, SBVolumeHardwareButton, SBLongPressGestureRecognizer;

@interface SBCombinationHardwareButton : NSObject <UIGestureRecognizerDelegate, SBHardwareButtonGestureParametersObserver, SBSOSLockGestureObserverDelegate, SBSOSClawGestureObserverDelegate, SBPressPrecedenceArbiter> {
    NSMutableDictionary *_screenshotDisableAssertions;
    SBCombinationHardwareButtonActions *_buttonActions;
    SBClickGestureRecognizer *_screenshotGestureRecognizer;
    SBHomeHardwareButton *_homeHardwareButton;
    SBLockHardwareButton *_lockHardwareButton;
    SBVolumeHardwareButton *_volumeHardwareButton;
    SBProximitySensorManager *_proximitySensorManager;
    SBBacklightController *_backlightController;
    SBPressGestureRecognizer *_sosGestureRecognizer;
    SBSOSClawGestureObserver *_sosClawGestureObserver;
    SBSOSLockGestureObserver *_sosLockGestureObserver;
    SBLongPressGestureRecognizer *_shutdownGestureRecognizer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sosClawDidTriggerSOS:(id)a0 completion:(id /* block */)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)provider:(id)a0 didUpdateButtonGestureParameters:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_sosTriggerMechanismDidChange;
- (void)sosLockTriggerDidBecomeActive:(id)a0;
- (id)initWithScreenshotGestureRecognizer:(id)a0 shutdownGestureRecognizer:(id)a1 homeHardwareButton:(id)a2 lockHardwareButton:(id)a3 volumeHardwareButton:(id)a4 proximitySensorManager:(id)a5 backlightController:(id)a6;
- (void)sosLockTriggerDidBecomeInactive:(id)a0;
- (void)_backlightChanged:(id)a0;
- (void).cxx_destruct;
- (void)sosLockDidTriggerSOS:(id)a0 completion:(id /* block */)a1;
- (void)_configureSOSGestureBehaviors;
- (void)_setScreenshotDisabled:(BOOL)a0 forReason:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)sosClawDidBecomeActive:(id)a0;
- (void)screenshotGesture:(id)a0;
- (void)sosClawAutoCallInteractiveStateChanged:(id)a0 interacting:(BOOL)a1;
- (void)dealloc;
- (void)_configureGestureRecognizers;
- (void)shutdownGesture:(id)a0;
- (id)preemptablePressGestureRecognizers;
- (void)sosClawDidBecomeInactive:(id)a0;
- (void)sosGesture:(id)a0;

@end

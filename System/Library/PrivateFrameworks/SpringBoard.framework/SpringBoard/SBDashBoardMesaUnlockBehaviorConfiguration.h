@class NSString, SBLiftToWakeController, SBUIBiometricResource, CSLockScreenSettings;
@protocol SBBiometricUnlockBehaviorConfigurationDelegate;

@interface SBDashBoardMesaUnlockBehaviorConfiguration : NSObject <SBLiftToWakeObserver, SBBiometricUnlockBehaviorConfiguration> {
    SBLiftToWakeController *_liftToWakeController;
    CSLockScreenSettings *_prototypeSettings;
    SBUIBiometricResource *_biometricResource;
    Class _currentTriggerClass;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBBiometricUnlockBehaviorConfigurationDelegate> delegate;

- (id)_liftToWakeController;
- (void).cxx_destruct;
- (void)_setLiftToWakeController:(id)a0;
- (void)dealloc;
- (void)_accessibilityOptionsChanged:(id)a0;
- (Class)_currentUnlockTriggerClass;
- (void)_evaluateTriggerClass;
- (Class)_expectedTriggerClassIncludingAccessibility:(BOOL)a0;
- (BOOL)_isAccessibilityRestingUnlockPreferenceEnabled;
- (id)_unlockTriggerWithClass:(Class)a0;
- (id)initWithLiftToWakeController:(id)a0 biometricResource:(id)a1 lockScreenPrototypeSettings:(id)a2;
- (void)liftToWakeControllerEnablementDidChange:(id)a0;
- (id)newBehaviorForCurrentConfiguration;

@end

@class BSAbsoluteMachTimer;
@protocol SBBiometricUnlockBehaviorConfigurationDelegate;

@interface SBZionUnlockTrigger : SBMesaUnlockTrigger {
    id<SBBiometricUnlockBehaviorConfigurationDelegate> _behaviorConfigurationDelegate;
    BOOL _hasVisibleContentToReveal;
    BOOL _fingerOn;
    BOOL _fingerOffSinceWake;
    BSAbsoluteMachTimer *_restToOpenTimer;
    BSAbsoluteMachTimer *_minTouchIDTimer;
}

- (void)screenOn;
- (void)screenOff;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)description;
- (void)dealloc;
- (void)fingerOn;
- (void)_cancelMinTouchIDTimer;
- (void)_cancelRestToOpenTimer;
- (void)_evaluateRestToOpenTimer;
- (BOOL)_isRestToOpenAvailable;
- (void)_startRestToOpenTimer;
- (void)_startRestToOpenTimerWithDuration:(double)a0;
- (BOOL)bioUnlock;
- (void)fingerOff;
- (id)initWithUnlockBehaviorConfigurationDelegate:(id)a0;
- (void)lockButtonDown;

@end

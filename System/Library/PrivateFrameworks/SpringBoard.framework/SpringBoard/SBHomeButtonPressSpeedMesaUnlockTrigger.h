@class BSAbsoluteMachTimer;

@interface SBHomeButtonPressSpeedMesaUnlockTrigger : SBMesaUnlockTrigger {
    BSAbsoluteMachTimer *_slowPressTimer;
    BOOL _bioUnlockOccurred;
    BOOL _buttonIsDown;
    BOOL _fingerIsOn;
    BOOL _timerFired;
}

@property (nonatomic) double slowPressDuration;

- (void)screenOff;
- (void)_timerFired;
- (id)init;
- (void)_startTimer;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)description;
- (void)dealloc;
- (void)_invalidateTimer;
- (void)_evaluateUnlock;
- (BOOL)_isTimerRunning;
- (BOOL)_isPrimed;
- (BOOL)bioUnlock;
- (void)fingerOff;
- (void)menuButtonDown;
- (void)menuButtonUp;

@end

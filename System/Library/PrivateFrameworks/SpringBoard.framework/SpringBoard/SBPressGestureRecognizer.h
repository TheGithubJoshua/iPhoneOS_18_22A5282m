@class NSArray, NSSet, NSMutableArray, BSAbsoluteMachTimer;

@interface SBPressGestureRecognizer : UIGestureRecognizer {
    NSSet *_delayablePressTypes;
    NSSet *_precedencePressTypes;
    long long _internalGestureState;
    NSMutableArray *_delayedPressesInfo;
    double _latestDispatchedPressTimestamp;
    long long _latestDispatchedPressPhase;
    long long _latestDispatchedPressType;
    NSMutableArray *_unbalancedPressBeganTypes;
    BSAbsoluteMachTimer *_waitingGestureStateExpirationTimer;
    BOOL _isDispatchingPresses;
    BSAbsoluteMachTimer *_waitingForPreemptionTimer;
    double _precedencePressesTime;
    double _waitForPreemptionTimeInterval;
}

@property (retain, nonatomic) NSArray *pressTypesWithPrecedence;

- (void)_updatePublicPressInfo:(id)a0;
- (id)_gestureStateInfoForPressInfo:(id)a0;
- (void)_resetDelayedPresses;
- (double)waitForPreemptionTimeInterval;
- (double)latestPressTimestamp;
- (void)_reallyStartDispatchingDelayedPresses;
- (long long)latestPressPhase;
- (void)_startDispatchingDelayedPresses;
- (BOOL)_didGestureBegin;
- (void)_processPresses:(id)a0;
- (void)_resetState;
- (void)_cancelGesture;
- (long long)_delayedPressesCount;
- (long long)requiredPressTypesCount;
- (void)_applyGestureStateInfo:(id)a0;
- (id)_allowedPressTypes;
- (void)_waitGestureStateExpirationWithFireInterval:(double)a0 timerExpiredActionBlock:(id /* block */)a1;
- (BOOL)_isDispatchingDelayedPresses;
- (void)setWaitForPreemptionTimeInterval:(double)a0;
- (long long)latestPressType;
- (BOOL)_shouldStopDispatching;
- (id)gestureStateInfoForUnbalancedPressBeganCount:(long long)a0 previousCount:(long long)a1;
- (void)_processDelayablePresses:(id)a0;
- (void)_addDelayedPress:(id)a0;
- (void)_processPrecedencePresses:(id)a0;
- (void)_stopWaitingGestureStateExpiration;
- (void)_resetPublishedPressInfo;
- (void)setAllowedPressTypes:(id)a0;
- (void)_updateUnbalancedPressBeganTypesWithCurrentPressType:(long long)a0 andPhase:(long long)a1 result:(long long *)a2;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (id)name;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)dealloc;
- (void)reset;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)_isGestureFailedOrCancelled;
- (void)pressesChanged:(id)a0 withEvent:(id)a1;

@end

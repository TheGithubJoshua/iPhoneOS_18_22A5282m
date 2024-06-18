@class SBProximitySensorManager;
@protocol BSInvalidatable;

@interface SBDoubleClickSleepWakeHardwareButtonInteraction : SBSleepWakeHardwareButtonInteraction

@property (retain, nonatomic) id<BSInvalidatable> proxLockAssertion;
@property (retain, nonatomic) SBProximitySensorManager *proximitySensorManager;

- (void)observeFinalPressUp;
- (BOOL)consumeInitialPressDown;
- (id)initWithProximitySensorManager:(id)a0;
- (BOOL)consumeInitialPressUp;
- (void)_performWake;
- (void).cxx_destruct;
- (void)_performSleep;
- (void)observeSinglePressDidFail;
- (void)_resumeProxAfterMultiplePressIntervalForReason:(id)a0;
- (void)_resumeProxForReason:(id)a0;
- (void)_cancelPreviousResumeProxRequests;
- (BOOL)consumeSecondPressDown;
- (void)_suspendProx;

@end

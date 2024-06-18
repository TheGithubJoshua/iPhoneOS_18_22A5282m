@class NSMutableDictionary, BKSProcessAssertion, NSObject;
@protocol OS_dispatch_queue;

@interface PXPowerController : NSObject {
    _Atomic unsigned int _assertionIdentifierGenerator;
}

@property (class, readonly, nonatomic) PXPowerController *sharedController;

@property (readonly, nonatomic) NSMutableDictionary *assertionReasonsByIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *powerControllerQueue;
@property (retain, nonatomic) BKSProcessAssertion *backgroundProcessAssertion;
@property (nonatomic) unsigned int assertionID;
@property (nonatomic) double powerAssertionStartTime;
@property (nonatomic, getter=isBackgrounded) BOOL backgrounded;
@property (readonly, nonatomic) BOOL hasPowerAssertion;
@property (readonly, nonatomic) BOOL hasBackgroundAssertion;

- (id)init;
- (void)applicationWillResignActive:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (unsigned int)generateAssertionIdentifier;
- (void)applicationWillEnterForeground:(id)a0;
- (void)dealloc;
- (void)releasePowerAssertion;
- (void)acquireBackgroundAssertion;
- (void)acquireBackgroundAssertionIfNeeded;
- (void)addPowerAssertionForIdentifier:(unsigned int)a0 withReason:(unsigned int)a1;
- (void)handleEnteringBackground;
- (void)handleEnteringForeground;
- (void)invalidateBackgroundAssertion;
- (void)invalidateBackgroundAssertionIfNeeded;
- (void)releasePowerAssertionIfNeeded;
- (void)removePowerAssertionForIdentifier:(unsigned int)a0 withReason:(unsigned int)a1;
- (void)takePowerAssertion;
- (void)takePowerAssertionIfNeeded;

@end

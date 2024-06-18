@class PDAnimationTarget;

@interface PDTimeCondition : NSObject {
    BOOL mHasDelay;
    int mDelay;
    BOOL mHasTriggerEvent;
    int mTriggerEvent;
    PDAnimationTarget *mTarget;
}

- (id)init;
- (id)target;
- (int)delay;
- (void)setDelay:(int)a0;
- (void).cxx_destruct;
- (id)description;
- (void)setTriggerEvent:(int)a0;
- (void)setTarget:(id)a0;
- (int)triggerEvent;
- (BOOL)hasDelay;
- (BOOL)hasTriggerEvent;
- (int)writeDelay;

@end

@class SBIdleTimerDescriptor, NSString, ITAttentionAwareIdleTimer;

@interface SBBacklightIdleTimer : SBIdleTimerBase <ITIdleTimerDelegate, BSDescriptionProviding> {
    ITAttentionAwareIdleTimer *_attentionAwareTimer;
}

@property (nonatomic) double timeMultiplier;
@property (nonatomic) unsigned long long expectation;
@property (nonatomic) BOOL requiresManualReset;
@property (copy, nonatomic) SBIdleTimerDescriptor *descriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setActivated:(BOOL)a0;
- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (double)_effectiveQuickUnwarnTimeoutDurationForWarnTimeout:(double)a0;
- (BOOL)isActivated;
- (double)_effectiveExpireTimeoutDuration;
- (void)_stopIfManual;
- (id)succinctDescription;
- (BOOL)isDisabled;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (void)_reconfigureAttentionClientAndReset:(BOOL)a0;
- (double)_effectiveTimeoutForBaseTimeout:(double)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)_initWithAttentionAwareTimer:(id)a0;
- (void)_resetExpectation;
- (void)reset;
- (void)idleTimerDidReset:(id)a0 forUserAttention:(unsigned long long)a1 at:(double)a2;
- (double)_effectiveWarnTimeoutDuration;
- (id)initWithConfigurationIdentifier:(id)a0;
- (void)idleTimer:(id)a0 attentionLostTimeoutDidExpire:(id)a1;

@end

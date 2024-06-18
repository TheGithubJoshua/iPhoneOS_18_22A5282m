@protocol SBMesaUnlockTriggerDelegate;

@interface SBMesaUnlockTrigger : NSObject

@property (weak, nonatomic) id<SBMesaUnlockTriggerDelegate> delegate;
@property (nonatomic) BOOL authenticated;

- (void)screenOn;
- (void)screenOff;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)description;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)fingerOn;
- (BOOL)bioUnlock;
- (void)fingerOff;
- (void)lockButtonDown;
- (void)menuButtonDown;
- (void)menuButtonUp;
- (void)significantUserInteractionOccurred;

@end

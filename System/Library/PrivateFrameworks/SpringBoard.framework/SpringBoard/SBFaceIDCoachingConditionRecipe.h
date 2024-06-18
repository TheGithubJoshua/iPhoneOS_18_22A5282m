@class NSString;

@interface SBFaceIDCoachingConditionRecipe : NSObject <SBTestRecipe>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleVolumeIncrease;
- (void)handleVolumeDecrease;
- (id)title;
- (BOOL)_overrideCoachingConditionEnabled;
- (void)_setOverrideCoachingConditionEnabled:(BOOL)a0;
- (void)_setOverrideCoachingEvent:(unsigned long long)a0;

@end

@interface SBAnimationUtilities : NSObject

+ (double)adjustedRotationAnimationDurationForDuration:(double)a0 fromOrientation:(long long)a1 toOrientation:(long long)a2;
+ (id)animationSettingsForRotationFromInterfaceOrientation:(long long)a0 toInterfaceOrientation:(long long)a1;
+ (id)animationSettingsForRotationFromOrientation:(long long)a0 toOrientation:(long long)a1 withContext:(id)a2;

@end

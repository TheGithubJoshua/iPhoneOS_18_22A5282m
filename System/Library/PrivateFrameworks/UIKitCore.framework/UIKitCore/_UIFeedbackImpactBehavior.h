@interface _UIFeedbackImpactBehavior : UIImpactFeedbackGenerator

+ (id)impactBehaviorWithStyle:(long long)a0 coordinateSpace:(id)a1;
+ (id)impactBehaviorWithCoordinateSpace:(id)a0 configuration:(id)a1;

- (void)impactOccurredWithIntensity:(double)a0;

@end

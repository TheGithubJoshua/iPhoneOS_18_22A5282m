@interface _UIFeedbackDragBehavior : _UIDragFeedbackGenerator

+ (id)dragBehaviorWithStyle:(long long)a0 coordinateSpace:(id)a1;
+ (id)retargetBehaviorWithStyle:(long long)a0 coordinateSpace:(id)a1;
+ (id)dragBehaviorWithCoordinateSpace:(id)a0 configuration:(id)a1;

- (void)snappedToFinalPosition;
- (void)targetUpdated;

@end

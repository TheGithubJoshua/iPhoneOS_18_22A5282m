@interface UIInputViewAnimationStyle : NSObject <NSCopying> {
    BOOL _isLegacy;
}

@property (nonatomic) BOOL forAssertion;
@property (nonatomic) BOOL force;
@property (nonatomic) BOOL animated;
@property (nonatomic) BOOL dontMerge;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long extraOptions;
@property (nonatomic) BOOL interactivelyCancelled;
@property (readonly, nonatomic) BOOL isAnimationCompleted;
@property (readonly, nonatomic) BOOL canDismissWithScrollView;
@property (readonly, nonatomic) BOOL canTakeSnapshot;

+ (id)animationStyleAnimated:(BOOL)a0 duration:(double)a1;
+ (id)animationStyleImmediate;
+ (id)animationStyleDefault;

- (id)endPlacementForInputViewSet:(id)a0 windowScene:(id)a1;
- (id)controllerForStartPlacement:(id)a0 endPlacement:(id)a1;
- (id)endPlacementForInputViewSet:(id)a0;
- (void)launchAnimation:(id /* block */)a0 afterStarted:(id /* block */)a1 completion:(id /* block */)a2 forHost:(id)a3 fromCurrentPosition:(BOOL)a4;
- (id)legacyAnimationCopy;
- (id)startPlacementForInputViewSet:(id)a0 currentPlacement:(id)a1 windowScene:(id)a2;
- (id)startPlacementForInputViewSet:(id)a0 currentPlacement:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

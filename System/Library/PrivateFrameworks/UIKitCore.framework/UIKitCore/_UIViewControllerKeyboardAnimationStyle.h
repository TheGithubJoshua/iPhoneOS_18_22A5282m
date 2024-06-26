@class _UIViewControllerKeyboardAnimationStyleInfo, _UIViewControllerTransitionContext;

@interface _UIViewControllerKeyboardAnimationStyle : UIInputViewAnimationStyleDirectional

@property (readonly, nonatomic) _UIViewControllerKeyboardAnimationStyleInfo *info;
@property (nonatomic) BOOL allowCustomTransition;
@property (retain, nonatomic) _UIViewControllerTransitionContext *context;
@property (nonatomic) BOOL disableAlongsideView;

+ (id)animationStyleWithContext:(id)a0 useCustomTransition:(BOOL)a1;

- (BOOL)canTakeSnapshot;
- (id)controllerForStartPlacement:(id)a0 endPlacement:(id)a1;
- (BOOL)isAnimationCompleted;
- (void)launchAnimation:(id /* block */)a0 afterStarted:(id /* block */)a1 completion:(id /* block */)a2 forHost:(id)a3 fromCurrentPosition:(BOOL)a4;
- (BOOL)canDismissWithScrollView;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_launchAnimation:(id /* block */)a0 afterStarted:(id /* block */)a1 completion:(id /* block */)a2 forHost:(id)a3 fromCurrentPosition:(BOOL)a4;

@end

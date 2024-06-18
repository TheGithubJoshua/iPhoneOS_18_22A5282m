@class UIView;

@interface _UINavigationBarTransitionContextPresentSearch : _UINavigationBarTransitionContext {
    UIView *_transitioningScopeBarContainer;
}

- (int)transition;
- (void)cancel;
- (void)_resetContentAndLargeTitleViewCompleted:(BOOL)a0;
- (void)_prepareBackgroundView;
- (void).cxx_destruct;
- (void)animate;
- (void)_animateBackgroundView;
- (void)complete;
- (void)prepare;

@end

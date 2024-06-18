@interface _UINavigationBarTransitionContextPush : _UINavigationBarTransitionContext {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _endingNewTitleViewFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _endingNewBackButtonFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _endingBackIndicatorViewFrame;
    struct CGSize { double width; double height; } _titleTransitionDistance;
}

- (int)transition;
- (void)cancel;
- (void)_animateContentView;
- (void)_prepareBackgroundView;
- (void)_prepareContentView;
- (void)_animateScaleTransition;
- (void)_prepareSearchBar;
- (void)animate;
- (id)viewUsingEaseOutCurve;
- (void)_animateLargeTitleView;
- (void)_animateSearchBar;
- (void)_animateBackgroundView;
- (void)_finishWithFinalLayout:(id)a0 invalidLayout:(id)a1;
- (void)complete;
- (void)prepare;
- (void)_prepareLargeTitleView;
- (void)_prepareScaleTransition;

@end

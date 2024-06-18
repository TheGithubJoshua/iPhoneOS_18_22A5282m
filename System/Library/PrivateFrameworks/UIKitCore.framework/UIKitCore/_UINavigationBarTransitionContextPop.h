@interface _UINavigationBarTransitionContextPop : _UINavigationBarTransitionContext {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _endingNewTitleViewFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _endingNewBackButtonFrame;
    struct CGSize { double width; double height; } _titleTransitionDistance;
    double _titleTransitionAdjustment;
}

- (id)viewUsingEaseInCurve;
- (int)transition;
- (void)cancel;
- (void)_animateContentView;
- (void)_prepareBackgroundView;
- (void)_prepareContentView;
- (void)_animateScaleTransition;
- (void)_prepareSearchBar;
- (void)animate;
- (void)_animateLargeTitleView;
- (void)_animateSearchBar;
- (void)_animateBackgroundView;
- (void)_finishWithFinalLayout:(id)a0 invalidLayout:(id)a1;
- (void)complete;
- (void)prepare;
- (void)_prepareLargeTitleView;
- (void)_prepareScaleTransition;

@end

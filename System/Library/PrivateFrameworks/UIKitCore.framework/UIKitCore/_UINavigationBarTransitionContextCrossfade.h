@interface _UINavigationBarTransitionContextCrossfade : _UINavigationBarTransitionContext

- (int)transition;
- (void)cancel;
- (void)_animateContentView;
- (double)contentViewMaxY;
- (void)_prepareContentView;
- (void)_prepareSearchBar;
- (void)animate;
- (BOOL)shouldPerformTwoPartCrossfadeTransition;
- (void)_animateLargeTitleView;
- (void)_animateSearchBar;
- (void)_finishWithFinalLayout:(id)a0 invalidLayout:(id)a1;
- (void)complete;
- (void)prepare;
- (void)_prepareLargeTitleView;

@end

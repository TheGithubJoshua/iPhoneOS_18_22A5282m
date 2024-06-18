@class UISearchBar, UIView;

@interface _UINavigationBarTransitionContextDismissSearch : _UINavigationBarTransitionContext {
    UISearchBar *_transitioningSearchBar;
    UIView *_transitioningScopeBarContainer;
}

- (int)transition;
- (void)cancel;
- (void).cxx_destruct;
- (void)animate;
- (void)complete;
- (void)prepare;
- (BOOL)_shouldCrossfadeDismissal;

@end

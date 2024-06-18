@class _UINavigationCrossfadeAnimator;

@interface _UINavigationControllerVisualStyleTVOS : _UINavigationControllerVisualStyle {
    _UINavigationCrossfadeAnimator *_transitionController;
}

- (void).cxx_destruct;
- (BOOL)isUsingParallaxTransition;
- (id)transitionController;
- (id)initWithNavigationController:(id)a0;

@end

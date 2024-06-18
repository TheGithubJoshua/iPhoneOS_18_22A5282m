@class _UINavigationParallaxTransition, _UINavigationInteractiveTransition;

@interface _UINavigationControllerVisualStyleIOS : _UINavigationControllerVisualStyle {
    _UINavigationParallaxTransition *_transitionController;
    _UINavigationInteractiveTransition *_interactionController;
}

- (id)interactionController;
- (void)layoutContainerViewSemanticContentAttributeChanged:(id)a0;
- (void).cxx_destruct;
- (BOOL)isUsingParallaxTransition;
- (id)transitionController;
- (id)initWithNavigationController:(id)a0;
- (void)updateTransitionControllerWithOperation:(long long)a0;

@end

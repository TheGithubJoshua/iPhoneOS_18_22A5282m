@class UIVisualEffectView;

@interface _UIProgressiveBlurPresentationController : UIPresentationController

@property (readonly, nonatomic) UIVisualEffectView *visualEffectView;
@property (nonatomic) long long blurStyle;

- (id)_preferredAnimationControllerForPresentation;
- (BOOL)_forcesPreferredAnimationControllers;
- (id)_preferredAnimationControllerForDismissal;
- (long long)presentationStyle;
- (void)dismissalTransitionWillBegin;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void).cxx_destruct;
- (BOOL)_mayChildGrabPresentedViewControllerView;
- (void)presentationTransitionWillBegin;
- (void)_animateWithCoordinator:(id)a0 isPresenting:(BOOL)a1;
- (void)_configureSubviews;

@end

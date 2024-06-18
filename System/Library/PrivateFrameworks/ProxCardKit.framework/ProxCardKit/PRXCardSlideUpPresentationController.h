@class UIView;

@interface PRXCardSlideUpPresentationController : UIPresentationController

@property (readonly, nonatomic) UIView *dimmingView;

- (void)presentationTransitionDidEnd:(BOOL)a0;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (void)dismissalTransitionWillBegin;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void).cxx_destruct;
- (void)presentationTransitionWillBegin;
- (id)initWithDimmingStyle:(long long)a0 presentedViewController:(id)a1 presentingViewController:(id)a2;

@end

@class UIView;

@interface CUPresentationController : UIPresentationController {
    UIView *_dimmingView;
}

- (void)containerViewWillLayoutSubviews;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (void)dismissalTransitionWillBegin;
- (void).cxx_destruct;
- (void)presentationTransitionWillBegin;

@end

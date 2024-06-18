@class _UIBackdropView;

@interface SUICFullScreenBlurPresentationController : UIPresentationController {
    _UIBackdropView *_fullScreenBlurView;
}

@property (nonatomic) unsigned long long blurStyle;

- (void)presentationTransitionDidEnd:(BOOL)a0;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (void)dismissalTransitionWillBegin;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void).cxx_destruct;
- (void)presentationTransitionWillBegin;
- (void)_stageViewsForFadeIn;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1 blurStyle:(unsigned long long)a2;

@end

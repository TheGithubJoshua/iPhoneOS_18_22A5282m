@class UIWindow, AVPresentationContext, UIPresentationController, UIView, AVObservationController, UIViewController;

@interface AVPresentationController : NSObject {
    UIPresentationController *_presentationController;
}

@property (readonly, nonatomic) AVObservationController *observationController;
@property (weak, nonatomic) UIWindow *presentationWindowForDisablingAutorotation;
@property (readonly, nonatomic) AVPresentationContext *context;
@property (readonly, nonatomic) UIViewController *presentingViewController;
@property (readonly, nonatomic) UIViewController *presentedViewController;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) UIView *presentedView;

- (void)containerViewWillLayoutSubviews;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (BOOL)shouldPresentInFullscreen;
- (void)dismissalTransitionWillBegin;
- (BOOL)dismissed;
- (void).cxx_destruct;
- (void)dealloc;
- (void)presentationTransitionWillBegin;
- (BOOL)dismissing;
- (BOOL)presented;
- (BOOL)presenting;
- (BOOL)shouldRemovePresentersView;
- (void)_ensureOrientation:(long long)a0 enablingMixedOrientations:(BOOL)a1;
- (void)_observeSceneDidBecomeActiveForRestoringRotatability;
- (void)_prepareDismissingTransitionContext;
- (id)initWithPresentationController:(id)a0 presentedViewController:(id)a1 presentingViewController:(id)a2 withConfiguration:(id)a3;

@end

@class NSString;

@interface PUModalTransition : PUViewControllerTransition <UIViewControllerTransitioningDelegate>

@property (nonatomic, setter=_setOperation:) long long _operation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animateTransition:(id)a0;
- (id)presentingViewController;
- (id)interactionControllerForPresentation:(id)a0;
- (id)interactionControllerForDismissal:(id)a0;
- (void)finishInteractiveTransition;
- (id)animationControllerForDismissedController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (void)cancelInteractiveTransition;
- (void)completeInteractiveDismissTransitionFinished:(BOOL)a0;
- (void)completeInteractivePresentTransitionFinished:(BOOL)a0;
- (void)imageModulationIntensityDidChange;
- (void)transitionWillDismissInteractively:(BOOL)a0;
- (void)transitionWillPresentInteractively:(BOOL)a0;

@end

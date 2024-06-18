@class NSString, VUIConfirmationAnimatedTransitioning;

@interface VUIConfirmationTransitioningDelegate : NSObject <VUIConfirmationAnimatedTransitioningDelegate, UIViewControllerTransitioningDelegate> {
    VUIConfirmationAnimatedTransitioning *_presentTransition;
    VUIConfirmationAnimatedTransitioning *_dismissTransition;
}

@property (copy, nonatomic) id /* block */ presentedHandlerBlock;
@property (copy, nonatomic) id /* block */ dismissedHandlerBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (void)confirmationAnimatedTransitioningAnimationDidEnd:(id)a0;

@end

@class NSString, SBUIAnimationController;

@interface SBUIAnimationControllerAnimator : NSObject <SBViewControllerAnimatedTransitioning>

@property (readonly, weak, nonatomic) SBUIAnimationController *animationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (id)init;
- (id)initWithAnimationController:(id)a0;
- (id)transitionAnimationFactory:(id)a0;
- (void).cxx_destruct;

@end

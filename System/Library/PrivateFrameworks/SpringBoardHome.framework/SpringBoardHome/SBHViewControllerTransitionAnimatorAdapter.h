@class NSString;
@protocol SBHViewControllerTransitionAnimating;

@interface SBHViewControllerTransitionAnimatorAdapter : NSObject <SBViewControllerReversibleAnimatedTransitioning>

@property (nonatomic) unsigned long long transitionToken;
@property (readonly, nonatomic) id<SBHViewControllerTransitionAnimating> animator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)cancelTransition:(id)a0 withCompletionSpeed:(double)a1 completionCurve:(long long)a2;
- (void).cxx_destruct;
- (BOOL)supportsRestarting;
- (id)initWithAnimator:(id)a0;

@end

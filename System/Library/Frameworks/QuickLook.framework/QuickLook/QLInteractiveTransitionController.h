@class NSString;

@interface QLInteractiveTransitionController : QLTransitionController <UIViewControllerInteractiveTransitioning> {
    double _initialTransitioningViewWidth;
}

@property (nonatomic) double completeProgress;
@property (readonly, nonatomic) double completionSpeed;
@property (readonly, nonatomic) long long completionCurve;
@property (readonly, nonatomic) BOOL wantsInteractiveStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)transitionDuration:(id)a0;
- (void)startInteractiveTransition:(id)a0;
- (void)updateTransitionWithProgress:(double)a0;
- (void)_performForcedDismissal;
- (void)completeTransition:(BOOL)a0 withDuration:(double)a1;
- (void)updateTransitionWithProgress:(double)a0 isFinal:(BOOL)a1;

@end
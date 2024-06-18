@class NSString;
@protocol SBSwitcherContentViewControlling, NSObject;

@interface SBUISwitcherAnimationController : SBUIWorkspaceAnimationController <SBUIAnimationControllerObserver>

@property (weak, nonatomic) id<SBSwitcherContentViewControlling> contentViewController;
@property (copy, nonatomic) id /* block */ animationBlock;
@property (retain, nonatomic) id<NSObject> activityToken;
@property (nonatomic, getter=_isInterruptible, setter=_setInterruptible:) BOOL _interruptible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)animationSettings;
- (id)_previousLayoutState;
- (void)_didComplete;
- (void)_updatePPTsForAnimationEnd;
- (void)_updatePPTsForAnimationStart;
- (void)_addSignpostsAndEndAnimationTrackingForAnimationEnd;
- (BOOL)isReasonableMomentToInterrupt;
- (void).cxx_destruct;
- (BOOL)shouldResignActiveForAnimation;
- (void)animationControllerDidFinishAnimation:(id)a0;
- (BOOL)isInterruptible;
- (id)_layoutState;
- (void)_addSignpostsAndBeginAnimationTrackingForAnimationStart;
- (id)initWithWorkspaceTransitionRequest:(id)a0 contentViewController:(id)a1 childAnimationControllers:(id)a2 animationBlock:(id /* block */)a3;
- (void)_startAnimation;

@end

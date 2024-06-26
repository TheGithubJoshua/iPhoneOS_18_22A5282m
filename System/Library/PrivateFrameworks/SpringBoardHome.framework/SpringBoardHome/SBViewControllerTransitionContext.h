@class NSMutableSet, NSString, NSMutableDictionary, NSMapTable, UIView, BSUIAnimationFactory, NSMutableArray;
@protocol UIViewControllerInteractiveTransitioning, SBHViewControllerTransitionAnimationContext, SBViewControllerTransitionContextDelegate, UIViewControllerAnimatedTransitioning;

@interface SBViewControllerTransitionContext : NSObject <SBViewControllerContextTransitioning, SBViewControllerTransitionCoordinator> {
    NSMutableDictionary *_viewControllersByKey;
    NSMutableDictionary *_viewsByKey;
    NSMapTable *_initialFramesByViewController;
    NSMapTable *_finalFramesByViewController;
    BOOL _transitionStarted;
    BOOL _animationFinished;
    BOOL _transitionFinished;
    BOOL _transitionIsCancelled;
    BOOL _transitionWasEverCancelled;
    BOOL _transitionBeganInteractively;
    BOOL _transitionWasInteractive;
    BOOL _transitionDidBeginCalled;
    double _transitionPercentComplete;
    unsigned long long _transitionAnimationOptions;
    BSUIAnimationFactory *_transitionAnimationFactory;
    id<UIViewControllerAnimatedTransitioning> _animator;
    id<UIViewControllerInteractiveTransitioning> _interactor;
    NSMutableArray *_alongsideAnimations;
    NSMutableArray *_alongsideCompletions;
    NSMutableArray *_alongsideInteractionEndedHandlers;
    NSMutableSet *_alongsideAnimationViews;
    NSMutableArray *_transitionContinuations;
    unsigned long long _outstandingClientCompletionCount;
}

@property (retain, nonatomic) id<SBHViewControllerTransitionAnimationContext> animationContext;
@property (weak, nonatomic) id<SBViewControllerTransitionContextDelegate> delegate;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) id<UIViewControllerAnimatedTransitioning> animator;
@property (retain, nonatomic) id<UIViewControllerInteractiveTransitioning> interactor;
@property (nonatomic) long long presentationStyle;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } targetTransform;
@property (readonly, nonatomic) BOOL isTransitioning;
@property (nonatomic) BOOL wantsAnimation;
@property (retain, nonatomic) id userInfo;
@property (readonly, nonatomic, getter=isAnimated) BOOL animated;
@property (readonly, nonatomic, getter=isInteractive) BOOL interactive;
@property (readonly, nonatomic) BOOL transitionWasCancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL initiallyInteractive;
@property (readonly, nonatomic) BOOL isInterruptible;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) double transitionDuration;
@property (readonly, nonatomic) double percentComplete;
@property (readonly, nonatomic) double completionVelocity;
@property (readonly, nonatomic) long long completionCurve;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialFrameForViewController:(id)a0;
- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalFrameForViewController:(id)a0;
- (void)notifyWhenInteractionEndsUsingBlock:(id /* block */)a0;
- (void)restartTransition;
- (void)completeTransition:(BOOL)a0;
- (void)updateInteractiveTransition:(double)a0;
- (id)succinctDescription;
- (id)_interactiveAnimator;
- (BOOL)_animatorIsReversible;
- (id)viewControllerForKey:(id)a0;
- (id)_reversibleAnimator;
- (BOOL)animateAlongsideTransitionInView:(id)a0 animation:(id /* block */)a1 completion:(id /* block */)a2;
- (void)pauseInteractiveTransition;
- (BOOL)_animatorSupportsRestarting;
- (void)_runAlongsideAnimationBlocksWithFactory:(id)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)_updateTransitionAnimationFactoryAndOptions;
- (id)succinctDescriptionBuilder;
- (id)viewForKey:(id)a0;
- (BOOL)requiresCancellableAnimations;
- (void)setFinalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forViewController:(id)a1;
- (BOOL)requiresInteractiveAnimations;
- (void)cancelTransition;
- (BOOL)animateAlongsideTransition:(id /* block */)a0 completion:(id /* block */)a1;
- (void)_completeTransition;
- (BOOL)_interactorSupportsRestarting;
- (BOOL)_objectSupportsRestarting:(id)a0;
- (void)_completeTransitionIfPossible;
- (void)finishInteractiveTransition;
- (void)addTransitionContinuation:(id /* block */)a0;
- (void)setView:(id)a0 forKey:(id)a1;
- (void)startTransition;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (void)notifyWhenInteractionChangesUsingBlock:(id /* block */)a0;
- (void)_startInteractiveTransition;
- (void)setInitialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forViewController:(id)a1;
- (void)setViewController:(id)a0 forKey:(id)a1;
- (void)_runAlongsideAnimationBlocksInEnclosingAnimationContext;
- (BOOL)_animatorIsInteractive;
- (void)_runInteractionEndedHandlers;
- (BOOL)supportsCancelling;
- (BOOL)wasPreviousPhaseInteractive;
- (BOOL)requiresRestartableAnimations;
- (id /* block */)_acquireTransitionCompletion;
- (id)transitionAnimationFactory;
- (BOOL)transitionWasRestarted;
- (BOOL)supportsRestarting;
- (void)cancelInteractiveTransition;
- (unsigned long long)transitionAnimationOptions;

@end

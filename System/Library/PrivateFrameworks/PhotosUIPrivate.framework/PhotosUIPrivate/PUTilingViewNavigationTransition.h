@class NSString, PUTilingViewTransitionHelper;

@interface PUTilingViewNavigationTransition : PUNavigationTransition <PUTilingViewControllerTransition>

@property (readonly, nonatomic) PUTilingViewTransitionHelper *_tilingViewTransitionHelper;
@property (readonly, nonatomic) BOOL hasStarted;
@property (readonly, nonatomic, getter=isTransitionPaused) BOOL transitionPaused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)updatePausedTransitionWithProgress:(double)a0 interactionProgress:(double)a1;
- (void)animatePushTransition;
- (void)pauseTransition;
- (void)_animateTransitionWithOperation:(long long)a0;
- (BOOL)isInteractive;
- (void)animatePopTransition;
- (void).cxx_destruct;
- (void)resumeTransition:(BOOL)a0;
- (void)pauseTransitionWithOptions:(unsigned long long)a0;

@end

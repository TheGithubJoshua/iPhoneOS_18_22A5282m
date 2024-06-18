@class BKSDisplayRenderOverlay;

@interface SBUIStartupToHomescreenAnimationController : SBUIMainScreenAnimationController {
    BKSDisplayRenderOverlay *_persistentSnapshotOverlay;
}

- (id)animationSettings;
- (double)_animationDelay;
- (void)_cleanupAnimation;
- (void)_prepareAnimation;
- (BOOL)_shouldDismissBanner;
- (id)initWithTransitionContextProvider:(id)a0;
- (id)initWithTransitionContextProvider:(id)a0 overlay:(id)a1;
- (void).cxx_destruct;
- (void)_startAnimation;

@end

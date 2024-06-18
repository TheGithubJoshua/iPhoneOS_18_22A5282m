@class UIView;

@interface SBIconFadeAnimator : SBIconAnimator {
    UIView *_crossfadeView;
    BOOL _addedToWindow;
}

@property (nonatomic) BOOL fadesReferenceView;

- (void)_cleanupAnimation;
- (void)_prepareAnimation;
- (void).cxx_destruct;
- (void)_animateToFraction:(double)a0 afterDelay:(double)a1 withSharedCompletion:(id /* block */)a2;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_setAnimationFraction:(double)a0;
- (void)_applyAlphaForFraction:(double)a0;
- (id)initWithAnimationContainer:(id)a0 crossfadeView:(id)a1;

@end

@class SBFolderController, UIView, SBHLibraryPodZoomSettings;

@interface SBHLibraryPodFadeAnimator : SBIconAnimator {
    SBFolderController *_innerFolderController;
    UIView *_searchBar;
    BOOL _animationComplete;
}

@property (retain, nonatomic) SBHLibraryPodZoomSettings *settings;

- (void)cleanup;
- (void)_prepareAnimation;
- (void).cxx_destruct;
- (void)_animateToFraction:(double)a0 afterDelay:(double)a1 withSharedCompletion:(id /* block */)a2;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_setAnimationFraction:(double)a0;
- (void)_applyAlphaForFraction:(double)a0;
- (id)initWithAnimationContainer:(id)a0 innerFolderController:(id)a1 searchBar:(id)a2;

@end

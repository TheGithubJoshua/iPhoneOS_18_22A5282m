@class UIView, SBHCrossfadeZoomSettings;

@interface SBCrossfadeIconZoomAnimator : SBScaleIconZoomAnimator {
    UIView *_crossfadeView;
}

@property (retain, nonatomic) SBHCrossfadeZoomSettings *settings;
@property (nonatomic) BOOL performsTrueCrossfade;
@property (nonatomic) BOOL masksCorners;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_zoomedFrame;
- (void)_cleanupAnimation;
- (void)_prepareAnimation;
- (double)_appSnapshotCornerRadiusForFraction:(double)a0;
- (void)_cleanupZoom;
- (struct CGPoint { double x0; double x1; })_zoomedIconCenter;
- (void).cxx_destruct;
- (BOOL)fadesHomeScreen;
- (void)_performAnimationToFraction:(double)a0 withCentralAnimationSettings:(id)a1 delay:(double)a2 alreadyAnimating:(BOOL)a3 sharedCompletion:(id /* block */)a4;
- (void)_assertCrossfadeViewSizeIfNecessary;
- (unsigned long long)_numberOfSignificantAnimations;
- (double)maxHomeScreenZoomScale;
- (void)_delayedForRotation;
- (id)initWithFolderController:(id)a0 crossfadeView:(id)a1 icon:(id)a2;
- (void)_setAnimationFraction:(double)a0;

@end

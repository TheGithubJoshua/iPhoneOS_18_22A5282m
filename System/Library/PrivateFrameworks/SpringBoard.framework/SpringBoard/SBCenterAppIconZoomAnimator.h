@class SBHCenterAppZoomSettings, UIView, NSMutableArray, SBReversibleLayerPropertyAnimator;

@interface SBCenterAppIconZoomAnimator : SBCenterIconZoomAnimator {
    UIView *_appView;
    UIView *_appZoomView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _destinationFrame;
    unsigned char _testCompletionCount;
}

@property (retain, nonatomic) SBReversibleLayerPropertyAnimator *appZoomAnimator;
@property (retain, nonatomic) NSMutableArray *animationCompletions;
@property (retain, nonatomic) SBHCenterAppZoomSettings *settings;
@property double distantScale;

- (double)_iconZoomDelay;
- (void)_cleanupAnimation;
- (void)_prepareAnimation;
- (double)_appZoomDelay;
- (void)_fadeAppForZoomFraction:(double)a0;
- (void)_translateAppForZoomFraction:(double)a0;
- (void)_zoomAppForZoomFraction:(double)a0;
- (id)initWithFolderController:(id)a0 appView:(id)a1;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })cameraPosition;
- (void)_performAnimationToFraction:(double)a0 withCentralAnimationSettings:(id)a1 delay:(double)a2 alreadyAnimating:(BOOL)a3 sharedCompletion:(id /* block */)a4;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_delayedForRotation;
- (void)_setAnimationFraction:(double)a0;
- (double)_appZPositionForZoomFraction:(double)a0;

@end

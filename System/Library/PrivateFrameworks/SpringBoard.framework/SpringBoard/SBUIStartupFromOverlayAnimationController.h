@class NSString, SBSceneView, BKSDisplayRenderOverlay, SBOrientationTransformWrapperView, BSAnimationSettings;

@interface SBUIStartupFromOverlayAnimationController : SBUIMainScreenAnimationController <SBSceneViewPresentationConfiguring> {
    BKSDisplayRenderOverlay *_overlay;
    SBOrientationTransformWrapperView *_orientationWrapperView;
    SBSceneView *_sceneView;
}

@property (retain, nonatomic) BSAnimationSettings *animationSettings;
@property (nonatomic) BOOL waitsForAppActivation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_cleanupAnimation;
- (void)_prepareAnimation;
- (BOOL)_shouldDismissBanner;
- (id)initWithTransitionContextProvider:(id)a0;
- (long long)sceneViewPresentationPriority:(id)a0;
- (id)initWithTransitionContextProvider:(id)a0 overlay:(id)a1;
- (void).cxx_destruct;
- (id)sceneViewPresentationIdentifier:(id)a0;
- (BOOL)_waitsForActivatingSceneContentAvailableIfNecessary;
- (void)_startAnimation;

@end

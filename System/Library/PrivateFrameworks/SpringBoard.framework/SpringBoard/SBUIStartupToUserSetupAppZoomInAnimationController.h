@class NSString, SBSceneView, BKSDisplayRenderOverlay, SBOrientationTransformWrapperView;

@interface SBUIStartupToUserSetupAppZoomInAnimationController : SBUIMainScreenAnimationController <SBSceneViewPresentationConfiguring> {
    SBOrientationTransformWrapperView *_orientationWrapperView;
    SBSceneView *_sceneView;
    BKSDisplayRenderOverlay *_persistentSnapshotOverlay;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)animationSettings;
- (void)_cleanupAnimation;
- (void)_setHidden:(BOOL)a0;
- (id)_getTransitionWindow;
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

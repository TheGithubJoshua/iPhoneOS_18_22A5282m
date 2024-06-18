@class NSString, SBDeviceApplicationSceneView, UIView, SBOrientationTransformWrapperView, BSAnimationSettings;

@interface SBUIStartupFromBlackAnimationController : SBUIMainScreenAnimationController <SBSceneViewPresentationConfiguring> {
    UIView *_internalContainerView;
    UIView *_blackView;
    SBOrientationTransformWrapperView *_orientationWrapperView;
    SBDeviceApplicationSceneView *_sceneView;
}

@property (retain, nonatomic) BSAnimationSettings *animationSettings;
@property (nonatomic) BOOL waitsForAppActivation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_cleanupAnimation;
- (void)_setHidden:(BOOL)a0;
- (id)_getTransitionWindow;
- (void)_prepareAnimation;
- (BOOL)_shouldDismissBanner;
- (id)initWithTransitionContextProvider:(id)a0;
- (long long)sceneViewPresentationPriority:(id)a0;
- (void).cxx_destruct;
- (id)sceneViewPresentationIdentifier:(id)a0;
- (void)_showBlackView;
- (BOOL)_waitsForActivatingSceneContentAvailableIfNecessary;
- (void)_startAnimation;

@end

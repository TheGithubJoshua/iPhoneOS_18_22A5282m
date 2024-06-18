@class SBWorkspaceTransitionRequest, NSSet, SBDeviceApplicationSceneEntity;
@protocol BSInvalidatable;

@interface SBUIMainScreenAnimationController : SBUIWorkspaceAnimationController

@property (retain, nonatomic) id<BSInvalidatable> wallpaperRequiredAssertion;
@property (retain, nonatomic) id<BSInvalidatable> bannerSuppressionAssertion;
@property (readonly, nonatomic) SBWorkspaceTransitionRequest *transitionRequest;
@property (readonly, copy, nonatomic) NSSet *toApplicationSceneEntities;
@property (readonly, nonatomic) SBDeviceApplicationSceneEntity *toApplicationSceneEntity;
@property (readonly, copy, nonatomic) NSSet *fromApplicationSceneEntities;
@property (readonly, nonatomic) SBDeviceApplicationSceneEntity *fromApplicationSceneEntity;

- (BOOL)__wantsInitialProgressStateChange;
- (id)_primaryAppOrAnyAppFromSet:(id)a0;
- (void)_cleanupAnimation;
- (id)_getTransitionWindow;
- (void)_begin;
- (void)_dismissBannerAnimated:(BOOL)a0;
- (BOOL)_shouldDismissBanner;
- (id)initWithTransitionContextProvider:(id)a0;
- (void)__startAnimation;
- (void).cxx_destruct;
- (id)initWithWorkspaceTransitionRequest:(id)a0;

@end

@class SBIsolatedSceneOrientationFollowingWrapperViewController, SBDeviceApplicationSceneHandle, SBDeviceApplicationSceneOverlayBasicWrapperViewController, UIViewController;
@protocol SBDeviceApplicationSceneOverlayViewController, SBDeviceApplicationSceneOverlayViewProviderDelegate;

@interface SBDeviceApplicationSceneOverlayViewProvider : NSObject {
    SBIsolatedSceneOrientationFollowingWrapperViewController *_orientationWrapperViewController;
    SBDeviceApplicationSceneOverlayBasicWrapperViewController *_basicWrapperViewController;
}

@property (retain, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property (readonly, weak, nonatomic) id<SBDeviceApplicationSceneOverlayViewProviderDelegate> delegate;
@property (readonly, nonatomic) UIViewController<SBDeviceApplicationSceneOverlayViewController> *overlayViewController;
@property (readonly, nonatomic) BOOL prefersStatusBarHidden;
@property (readonly, nonatomic) long long preferredStatusBarStyle;
@property (readonly, nonatomic) BOOL wantsResignActiveAssertion;
@property (readonly, nonatomic) long long priority;

- (BOOL)shouldFollowSceneOrientation;
- (void)hideContentWithAnimation:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_activateIfPossible;
- (void)showContentWithAnimation:(BOOL)a0 completionHandler:(id /* block */)a1;
- (long long)bestHomeAffordanceOrientationForOrientation:(long long)a0;
- (id)_realOverlayViewController;
- (id)initWithSceneHandle:(id)a0 delegate:(id)a1;
- (void)noteDisplayModeChange:(long long)a0;
- (void)containerDidUpdateTraitsParticipant:(id)a0;
- (id)initialTraitsParticipantForOverlayContainer;
- (void)_deactivateIfPossible;
- (long long)preferredInterfaceOrientationForPresentation;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dealloc;

@end

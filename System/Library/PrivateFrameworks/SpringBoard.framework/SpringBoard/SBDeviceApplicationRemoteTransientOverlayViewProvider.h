@class NSString, SBDeviceApplicationRemoteTransientOverlayContainerViewController, NSMapTable, NSMutableArray;

@interface SBDeviceApplicationRemoteTransientOverlayViewProvider : SBDeviceApplicationSceneOverlayViewProvider <SBTransientOverlayViewControllerDelegate> {
    NSMutableArray *_activePresentationContexts;
    SBDeviceApplicationRemoteTransientOverlayContainerViewController *_containerVC;
    NSMapTable *_keyboardFocusRedirectionsByRemoteVC;
    BOOL _needsDeactivationWithNoActiveTransientOverlays;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)defaultSupportedInterfaceOrientationsForTransientOverlayViewController:(id)a0;
- (BOOL)shouldFollowSceneOrientation;
- (void)transientOverlayViewControllerWillBeginRotation:(id)a0 toInterfaceOrientation:(long long)a1;
- (void)transientOverlayViewControllerNeedsFeaturePolicyUpdate:(id)a0;
- (void)transientOverlayViewControllerNeedsProximityDetectionUpdate:(id)a0;
- (void)_activateIfPossible;
- (void)transientOverlayViewControllerNeedsStatusBarAppearanceUpdate:(id)a0;
- (void)transientOverlayViewControllerNeedsOrientationUpdatesDisabledUpdate:(id)a0;
- (void)transientOverlayViewControllerNeedsWhitePointAdaptivityStyleUpdate:(id)a0;
- (long long)preferredStatusBarStyle;
- (id)_realOverlayViewController;
- (BOOL)isPresentingTransientOverlay:(id)a0;
- (void)_handleAppSwitcherWillPresent:(id)a0;
- (BOOL)prefersStatusBarHidden;
- (id)initWithSceneHandle:(id)a0 delegate:(id)a1;
- (void)noteDisplayModeChange:(long long)a0;
- (void)transientOverlayViewControllerNeedsWindowHitTestingUpdate:(id)a0;
- (void)dismissRemoteTransientOverlayViewController:(id)a0;
- (void)transientOverlayViewControllerDidEndRotation:(id)a0;
- (void)_deactivateIfPossible;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)_handleCoverSheetDidPresent:(id)a0;
- (void).cxx_destruct;
- (BOOL)defaultShouldAutorotateForTransientOverlayViewController:(id)a0;
- (BOOL)isKeyboardVisibleForSpringBoardForTransientOverlayViewController:(id)a0;
- (void)transientOverlayViewControllerNeedsContentOpaqueUpdate:(id)a0;
- (void)transientOverlayViewControllerDidUpdatePresentationPrefersStatusBarHidden:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_dismissRemoteOverlayVC:(id)a0;
- (void)dealloc;
- (long long)defaultPreferredInterfaceOrientationForPresentationForTransientOverlayViewController:(id)a0;
- (void)transientOverlayViewControllerNeedsSceneDeactivationUpdate:(id)a0;
- (void)transientOverlayViewControllerNeedsGestureDismissalStyleUpdate:(id)a0;
- (void)presentRemoteTransientOverlayViewController:(id)a0 presentationRequest:(id)a1;

@end

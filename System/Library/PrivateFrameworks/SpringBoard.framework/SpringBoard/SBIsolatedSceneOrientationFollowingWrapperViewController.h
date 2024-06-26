@class SBIsolatedSceneOrientationFollowingWindow, NSString, SBFTraitsParticipant, SBDeviceApplicationSceneHandle, UIView, SBFTraitsOrientationResolutionPolicyInfo, SBWindowSelfHostWrapper, SBIsolatedSceneOrientationFollowingContainerView, UIViewController, SBWindowScene;
@protocol BSInvalidatable, SBIsolatedSceneOrientationFollowingWrapperOrientationDelegate, SBDeviceApplicationSceneOverlayView;

@interface SBIsolatedSceneOrientationFollowingWrapperViewController : UIViewController <SBFTraitsParticipantDelegate, SBDeviceApplicationSceneOverlayViewController> {
    SBDeviceApplicationSceneHandle *_sceneHandle;
    UIViewController *_contentViewController;
    SBWindowScene *_windowScene;
    SBIsolatedSceneOrientationFollowingWindow *_appOverlayWindow;
    SBFTraitsParticipant *_traitsParticipant;
    id<BSInvalidatable> _traitsResolutionPolicySpecifier;
    SBFTraitsOrientationResolutionPolicyInfo *_traitsOrientationResolutionPolicy;
    BOOL _initialOrientationHasBeenApplied;
    SBWindowSelfHostWrapper *_appOverlayHostWrapper;
    SBIsolatedSceneOrientationFollowingContainerView *_containerView;
    long long _sceneInterfaceOrientationMode;
    BOOL _rendersWhileLocked;
}

@property (weak, nonatomic) id<SBIsolatedSceneOrientationFollowingWrapperOrientationDelegate> orientationDelegate;
@property (readonly, nonatomic) long long currentInterfaceOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView<SBDeviceApplicationSceneOverlayView> *overlayView;

- (void)didChangeSettingsForParticipant:(id)a0 context:(id)a1;
- (void)updatePreferencesForParticipant:(id)a0 updater:(id)a1;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)participantAssociatedWindows:(id)a0;
- (void)containerDidUpdateTraitsParticipant:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundsForOverlayRootView;
- (void)_containerViewDidSetBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_containerViewDidSetCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)_containerViewDidSetHostOrientation:(long long)a0;
- (long long)_hostOrientation;
- (BOOL)_isSceneStatusBarHidden;
- (void)_updateOrientationResolutionPolicyWithContainerTraitsParticipant:(id)a0;
- (id)initWithContentViewController:(id)a0 sceneHandle:(id)a1 windowScene:(id)a2 orientationDelegate:(id)a3 rendersWhileLocked:(BOOL)a4;

@end

@class UIWindowScene, NSString, UIView, FBScene;
@protocol UIScenePresentation, PRUIModalRemoteViewControllerDelegate, PRUIModalEntryPoint, UIScenePresenter;

@interface PRUIModalRemoteViewController : UIViewController <BSDescriptionProviding, BSInvalidatable, FBSceneDelegate, FBSceneLayerManagerObserver> {
    id<PRUIModalEntryPoint> _entryPoint;
    UIWindowScene *_uiParentScene;
    BOOL _didConfigureScene;
    FBScene *_scene;
    id<UIScenePresenter> _scenePresenter;
    BOOL _invalidated;
    UIView<UIScenePresentation> *_scenePresentationView;
    BOOL _presentedPrefersStatusBarHidden;
}

@property (weak, nonatomic) id<PRUIModalRemoteViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)preferredStatusBarUpdateAnimation;
- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)prefersStatusBarHidden;
- (id)succinctDescription;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)didMoveToParentViewController:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)shouldAutorotate;
- (void)sceneDidDeactivate:(id)a0 withError:(id)a1;
- (void)invalidate;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (void)_teardown;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (unsigned long long)supportedInterfaceOrientations;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_update;
- (void)_updateSceneToSize:(struct CGSize { double x0; double x1; })a0 orientation:(long long)a1 withAnimationSettings:(id)a2 fence:(id)a3;
- (id)initWithEntryPoint:(id)a0;
- (void)_updateCommonModalSceneSettings:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 interfaceOrientation:(long long)a2;
- (void)_configureSceneIfNeededWithParentWindow:(id)a0;
- (void)_invalidateAfterDismissal;
- (void)_invokeDidDismissDelegateWithResponse:(id)a0;
- (void)_invokeWillDismissDelegateWithResponse:(id)a0;
- (void)_updateStatusBarVisibilityWithTransitionContext:(id)a0;

@end

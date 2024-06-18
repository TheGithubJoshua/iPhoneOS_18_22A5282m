@class NSString, UIScene, NSData, UIView, FBScene;
@protocol UIScenePresenter;

@interface ICSystemPaperSceneViewController : UIViewController <BSInvalidatable, FBSceneDelegate, _UISceneSettingsDiffAction> {
    UIView *_sceneContainerView;
    FBScene *_scene;
    id<UIScenePresenter> _scenePresenter;
    UIScene *_uiParentScene;
    BOOL _visible;
    BOOL _invalidated;
}

@property (readonly, copy, nonatomic) NSData *userActivityData;
@property (nonatomic, getter=isActive) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)presentSystemPaperWithUserActivityData:(id)a0 presenter:(id)a1 completion:(id /* block */)a2;

- (id)initWithCoder:(id)a0;
- (void)sceneDidActivate:(id)a0;
- (void)sceneContentStateDidChange:(id)a0;
- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (void)setNeedsFocusUpdate;
- (void)viewDidLayoutSubviews;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (void)viewDidLoad;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (void)updateFocusIfNeeded;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)didMoveToParentViewController:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)sceneDidDeactivate:(id)a0 withError:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_teardown;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (void)viewSafeAreaInsetsDidChange;
- (void)dealloc;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_performActionsForUIScene:(id)a0 withUpdatedFBSScene:(id)a1 settingsDiff:(id)a2 fromSettings:(id)a3 transitionContext:(id)a4 lifecycleActionType:(unsigned int)a5;
- (void)_update;
- (long long)contentState;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)a0;
- (void)_adjustParentScene;
- (void)_updateSceneToSize:(struct CGSize { double x0; double x1; })a0 orientation:(long long)a1 withAnimationSettings:(id)a2 fence:(id)a3;
- (id)initWithUserActivityData:(id)a0;
- (void)_updateSceneUIApplicationSceneSettingsWithBlock:(id /* block */)a0;
- (void)createLinkWithUserActivityData:(id)a0;
- (void)_updateSceneSafeAreaInsets;
- (void)_updateSceneUserInterfaceStyle;
- (id)uiActivityContinuationActionForUserActivityData:(id)a0;

@end

@class NSString, UIView, FBScene, CSBackgroundContentView;
@protocol UIScenePresenter, UIScenePresentation, CSWallpaperView;

@interface CSBackgroundContentViewController : CSCoverSheetViewControllerBase <SBFBacklightSceneHostEnvironmentProviding>

@property (readonly, nonatomic) FBScene *scene;
@property (readonly, nonatomic) id<UIScenePresenter> scenePresenter;
@property (readonly, nonatomic) UIView<UIScenePresentation> *presentationView;
@property (readonly, nonatomic, getter=isScreenOff) BOOL screenOff;
@property (readonly, nonatomic) CSBackgroundContentView *backgroundContentView;
@property (readonly, nonatomic) UIView<CSWallpaperView> *wallpaperView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithScene:(id)a0;
- (id)sceneHostEnvironmentEntriesForBacklightSession;
- (void)_updateForegroundState;
- (void)tapGestureRecognizerAction:(id)a0;

@end

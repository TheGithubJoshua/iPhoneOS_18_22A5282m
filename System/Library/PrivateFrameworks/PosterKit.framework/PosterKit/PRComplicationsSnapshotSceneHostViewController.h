@class FBScene;
@protocol UIScenePresenter;

@interface PRComplicationsSnapshotSceneHostViewController : UIViewController {
    FBScene *_scene;
    id<UIScenePresenter> _scenePresenter;
}

- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithScene:(id)a0;

@end

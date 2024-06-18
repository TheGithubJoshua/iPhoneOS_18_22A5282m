@class FBSceneWorkspace, FBScene, BLSHGenericSceneDelegateWithActionHandlers;
@protocol UIScenePresenter;

@interface CSBackgroundPresentationManager : NSObject

@property (readonly, nonatomic) FBSceneWorkspace *sceneWorkspace;
@property (readonly, nonatomic) id<UIScenePresenter> scenePresenter;
@property (readonly, nonatomic) FBScene *currentScene;
@property (readonly, nonatomic) BLSHGenericSceneDelegateWithActionHandlers *sceneDelegate;

- (id)init;
- (id)createBackgroundViewControllerForDefinition:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end

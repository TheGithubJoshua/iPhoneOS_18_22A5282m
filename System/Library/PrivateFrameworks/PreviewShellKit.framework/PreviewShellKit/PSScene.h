@class FBScene, NSString, PSSceneSettings;

@interface PSScene : NSObject

@property (readonly, nonatomic) FBScene *scene;
@property (readonly, nonatomic) NSString *sceneIdentifier;
@property (readonly, nonatomic) PSSceneSettings *sceneSettings;

- (void).cxx_destruct;
- (id)initWithScene:(id)a0;
- (void)updateSceneSettings:(id)a0 with:(id)a1;

@end

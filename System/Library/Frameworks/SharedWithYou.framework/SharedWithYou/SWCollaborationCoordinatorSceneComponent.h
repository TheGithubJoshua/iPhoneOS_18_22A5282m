@class UIScene, NSString;

@interface SWCollaborationCoordinatorSceneComponent : NSObject <_UISceneComponentProviding>

@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)load;
+ (void)_registerWithUIKit;

- (void).cxx_destruct;
- (id)_actionRespondersForScene:(id)a0;
- (id)initWithScene:(id)a0;

@end

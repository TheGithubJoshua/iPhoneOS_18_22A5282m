@class UISceneSession;

@interface _UIMutableCanvasDefinition : _UICanvasDefinition {
    UISceneSession *_sceneSession;
}

@property (retain, nonatomic) Class canvasSubclass;
@property (retain, nonatomic) Class delegateClass;

- (id)representedCanvas;
- (void)setUserInfo:(id)a0;
- (id)persistentIdentifier;
- (id)initWithRepresentation:(id)a0;
- (long long)systemType;
- (id)scene;
- (Class)canvasSubclass;
- (Class)delegateClass;
- (void).cxx_destruct;
- (void)setDelegateClass:(Class)a0;
- (void)setCanvasSubclass:(Class)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)stateRestorationActivity;
- (id)configuration;
- (id)userInfo;
- (id)role;

@end

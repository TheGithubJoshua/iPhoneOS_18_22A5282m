@class NSMapTable;

@interface _UIFBSSceneSubstrate : _UIContextBinderSubstrate {
    NSMapTable *_sceneLayerTable;
}

- (void)attachContext:(id)a0;
- (void).cxx_destruct;
- (void)detachContext:(id)a0;
- (id)initWithScene:(id)a0;

@end

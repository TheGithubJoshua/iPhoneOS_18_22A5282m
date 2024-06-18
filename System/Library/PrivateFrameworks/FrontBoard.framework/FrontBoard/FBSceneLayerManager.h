@class NSString, NSOrderedSet, NSHashTable, FBScene;

@interface FBSceneLayerManager : NSObject <BSDescriptionProviding> {
    NSOrderedSet *_fbsLayers;
    NSHashTable *_observers;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, weak, nonatomic) FBScene *scene;
@property (readonly, nonatomic) NSOrderedSet *layers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeObserver:(id)a0;
- (id)_initWithScene:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_observer_didStopTrackingLayers;
- (id)succinctDescription;
- (void)_observer_didStartTrackingLayers;
- (id)layerWithContextID:(unsigned int)a0;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_observer_sceneLayerManagerDidUpdateLayers;
- (void)_setLayers:(id)a0;
- (void)addObserver:(id)a0;

@end

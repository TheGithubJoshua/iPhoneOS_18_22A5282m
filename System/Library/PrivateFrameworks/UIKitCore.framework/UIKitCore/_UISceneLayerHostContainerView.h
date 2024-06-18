@class UIView, NSString, FBSSceneSettings, FBScene, NSSet, CAContext, UIScenePresentationContext, NSMutableSet, NSMutableOrderedSet, _UIContextLayerHostView;
@protocol _UISceneLayerHostContainerViewDataSource;

@interface _UISceneLayerHostContainerView : UIView <FBSceneLayerManagerObserver, BSInvalidatable> {
    NSMutableOrderedSet *_hostViews;
    NSMutableOrderedSet *_hostedLayers;
    NSMutableSet *_hiddenLayers;
    FBSSceneSettings *_effectiveSceneSettings;
    UIScenePresentationContext *_presentationContext;
    UIView *_innerLayerContainer;
    UIView *_backgroundView;
    CAContext *_asyncRenderGroupingContext;
    _UISceneLayerHostContainerView *_asyncRenderGroupingContainerView;
    _UIContextLayerHostView *_asyncRenderGroupingHostView;
    NSString *_debugDescription;
    BOOL _invalidated;
}

@property (readonly, weak, nonatomic) FBScene *scene;
@property (readonly, weak, nonatomic) id<_UISceneLayerHostContainerViewDataSource> dataSource;
@property (readonly, nonatomic) NSSet *hostedLayers;
@property (readonly, nonatomic) NSSet *nonHostedLayers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sceneLayerManagerDidUpdateLayers:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_realHostedLayers;
- (id)init;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)_hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1 windowServerHitTestWindow:(id)a2;
- (id)_backgroundView;
- (id)_presentationContextForLayer:(id)a0;
- (id)_asyncContext;
- (void)updateForGeometrySettingsChanges:(id)a0;
- (void)_toggleInheritsSecurityWithNewContext:(id)a0;
- (void)_toggleResizesHostedContextWithNewContext:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)succinctDescription;
- (id)_filteredLayersToPresent;
- (void)_invalidateAndRemoveAsyncViewsFromHierarchy;
- (void)_updateAsyncDrawingOptionsInAsyncPresentation;
- (void)popDataSource:(id)a0;
- (void)_applyBackgroundViewToHierarchy;
- (void)invalidate;
- (id)_asyncRenderingHostView;
- (BOOL)_canShowKeyboardLayer;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (void)_toggleStopsHitTestTransformAccumulationWithNewContext:(id)a0;
- (id)_presentationContext;
- (void)_setPresentationContext:(id)a0;
- (void)_toggleClippingDisabledWithNewContext:(id)a0;
- (void)_setDataSource:(id)a0;
- (void)_adjustHostViewFrameAlignment:(id)a0;
- (void)_rebuildLayersForNormalPresentationWithReason:(id)a0 withFence:(id)a1;
- (id)_createHostViewForLayer:(id)a0;
- (void)refreshDataSource:(id)a0;
- (void)_rebuildLayersForReason:(id)a0 withFence:(id)a1;
- (id)_hostViews;
- (id)initWithScene:(id)a0 debugDescription:(id)a1;
- (id)window;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (void)_refreshDataSource;
- (void)_presentationContextChangedFrom:(id)a0 toContext:(id)a1 force:(BOOL)a2;
- (void)_rebuildLayersForAsyncPresentationWithReason:(id)a0 withFence:(id)a1;
- (void)_updateRenderingModeForLayersInNormalPresentation;
- (void)pushDataSource:(id)a0;
- (id)_asyncRenderingContainerView;
- (void)_setBackgroundView:(id)a0;

@end

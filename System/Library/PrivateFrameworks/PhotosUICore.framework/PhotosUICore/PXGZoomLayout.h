@class PXGLayout, NSArray;

@interface PXGZoomLayout : PXGLayout {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    BOOL _settingSublayouts;
    BOOL _isUpdatingSublayouts;
}

@property (readonly, nonatomic) PXGLayout *primaryLayer;
@property (readonly, nonatomic) NSArray *layers;
@property (retain, nonatomic) id anchorObjectReference;
@property (nonatomic) struct CGPoint { double x; double y; } anchorViewportCenter;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;

- (void)sublayoutDidChangeLastBaseline:(id)a0;
- (id)init;
- (long long)itemForSpriteIndex:(unsigned int)a0;
- (void)_configureSublayouts;
- (void)referenceSizeDidChange;
- (void)userInterfaceDirectionDidChange;
- (void)sublayoutDidChangeContentSize:(id)a0;
- (void)safeAreaInsetsDidChange;
- (void)referenceDepthDidChange;
- (void)scrollSpeedRegimeDidChange;
- (void)sublayoutNeedsUpdate:(id)a0;
- (void).cxx_destruct;
- (void)didChangeSublayoutOrigins;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sublayout:(id)a0 visibleRectForRequestedVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_updateSublayoutGeometries;
- (void)visibleRectDidChange;
- (void)setLayers:(id)a0 primaryLayer:(id)a1;
- (long long)scrollableAxis;
- (void)screenScaleDidChange;
- (void)viewEnvironmentDidChange;
- (void)update;
- (void)enumerateVisibleAnchoringLayoutsUsingBlock:(id /* block */)a0;
- (id)axSpriteIndexes;
- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;

@end

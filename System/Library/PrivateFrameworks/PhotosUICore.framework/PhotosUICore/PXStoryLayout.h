@class PXStoryFadeOverlayLayout, PXStoryStyleSwitchingFullsizeLayout, NSShadow, NSString, PXStoryFullsizeLayout, PXStoryScrollLayout, PXStoryThumbnailChromeLayout, PXStoryItemPlacement, PXStoryModel, PXGLayout;

@interface PXStoryLayout : PXGAbsoluteCompositeLayout <PXGShadowSource, PXChangeObserver, PXStoryItemPlacementController, PXTapToRadarDiagnosticProvider> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _presentedContentFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _presentedContentFrameVelocity;
}

@property (readonly, nonatomic) PXStoryStyleSwitchingFullsizeLayout *styleSwitchingFullsizeLayout;
@property (readonly, nonatomic) PXStoryFullsizeLayout *thumbnailFullsizeLayout;
@property (readonly, nonatomic) PXGLayout *fullsizeLayout;
@property (readonly, nonatomic) PXStoryFullsizeLayout *currentFullsizePlayerLayout;
@property (readonly, nonatomic) PXStoryFadeOverlayLayout *fadeOverlayLayout;
@property (readonly, nonatomic) PXStoryScrollLayout *scrollLayout;
@property (readonly, nonatomic) PXStoryThumbnailChromeLayout *thumbnailChromeLayout;
@property (readonly, nonatomic) long long fullsizeLayoutIndex;
@property (readonly, nonatomic) long long scrollLayoutIndex;
@property (readonly, nonatomic) long long thumbnailChromeLayoutIndex;
@property (readonly, nonatomic) long long fadeOverlayLayoutIndex;
@property (readonly, nonatomic) long long diagnosticOverlayLayoutIndex;
@property (readonly, nonatomic) unsigned int shadowSpriteIndex;
@property (retain, nonatomic) NSShadow *shadow;
@property (retain, nonatomic) PXStoryItemPlacement *fullsizeContentPlacementOverride;
@property (readonly, nonatomic) id itemReference;
@property (weak, nonatomic) PXGLayout *accessoryItemPlacementLayout;
@property (nonatomic) double relativeZPositionAboveLegibilityGradients;
@property (retain, nonatomic) PXGLayout *diagnosticOverlayLayout;
@property (readonly, nonatomic) PXStoryModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateShadow;
- (void)_updateContent;
- (id)init;
- (void)_invalidateContent;
- (BOOL)allowsRepeatedSublayoutsUpdates;
- (void)referenceSizeDidChange;
- (void)alphaDidChange;
- (void)referenceDepthDidChange;
- (void)willUpdate;
- (void).cxx_destruct;
- (id)shadowForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (unsigned long long)contentChangeTrend;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (long long)scrollableAxis;
- (void)didUpdate;
- (id)initWithModel:(id)a0;
- (void)update;
- (double)cornerRadiusForShadowSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)diagnosticsItemProvidersInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_invalidateAXGroupRole;
- (void)_invalidateShadow;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 relativeZPosition:(double)a1 depth:(double)a2 forSublayoutAtIndex:(long long)a3;
- (void)_updateAXGroupRole;
- (void)enumerateSublayoutsForDetailedPlacement:(id)a0 ofItemWithReference:(id)a1 usingBlock:(id /* block */)a2;
- (id)itemPlacementControllerForItemReference:(id)a0;
- (id)placementInContext:(id)a0 forItemReference:(id)a1;
- (void)setPlacementOverride:(id)a0 forItemReference:(id)a1;

@end

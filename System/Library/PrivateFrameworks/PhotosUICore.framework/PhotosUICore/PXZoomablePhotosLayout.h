@class NSCache, PXGZoomLayout, PXZoomableInlineHeadersLayout, PXAssetReference, NSMutableSet, NSString, PXGBurstStackEffect, PXGEdgeStretchEffect, PXGItemsLayout, NSArray, PXAssetsDataSource, PXZoomablePhotosViewModel, PXMediaProvider, PXGAnchor, PXGOneColumnLayout, PXAssetsDataSourceManager, PXPhotosGridAssetDecorationSource, PXZoomablePhotosLayoutSpec, NSMapTable, PXNumberAnimator, NSDateInterval;
@protocol PXDisplayAssetFetchResult, PXZoomablePhotosContentLayout;

@interface PXZoomablePhotosLayout : PXGSplitLayout <PXAssetsDataSourceManagerObserver, PXChangeObserver, PXGDisplayAssetSource, PXZoomableInlineHeadersLayoutGeometrySource, PXGItemsLayoutDelegate, PXCuratedLibraryBodyLayout, PXPhotosSectionedLayoutBody> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _preUpdateFlags;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _postUpdateFlags;
    PXGZoomLayout *_zoomLayout;
    PXGEdgeStretchEffect *_edgeStretchEffect;
    unsigned int _pinchEffectCaptureSpriteIndex;
    struct _PXGSpriteIndexRange { unsigned int location; unsigned int length; } _lightBackgroundSpriteIndexRange;
    unsigned int _backgroundMediaVersion;
    PXZoomableInlineHeadersLayout *_inlineHeadersLayout;
    PXAssetsDataSourceManager *_dataSourceManager;
    PXAssetsDataSource *_currentDataSource;
    PXMediaProvider *_preheatMediaProvider;
    struct _NSRange { unsigned long long location; unsigned long long length; } _preheatedThumbsForItemsByColumnIndex[10];
    BOOL _isPreheatingByColumnIndex[10];
    BOOL _isPerformingUpdate;
    struct _NSRange { unsigned long long location; unsigned long long length; } _prefetchedForLoadedItems;
    struct _NSRange { unsigned long long location; unsigned long long length; } _cachedClampedItemRange;
    id<PXDisplayAssetFetchResult> _cachedClampedFetchResult;
    NSArray *_layers;
    NSArray *_itemLayouts;
    PXGItemsLayout<PXZoomablePhotosContentLayout> *_itemLayoutByHeaderLevel[2];
    PXGItemsLayout<PXZoomablePhotosContentLayout> *_decadesItemLayout;
    NSMutableSet *_itemLayoutsAllowedToLoad;
    PXNumberAnimator *_decorationAlphaAnimator;
    NSDateInterval *_lastReturnedDateInterval;
    long long _lastReturnedDateIntervalDataSourceIdentifier;
    NSArray *_lastReturnedLocationNames;
    long long _lastReturnedLocationNamesDataSourceIdentifier;
    BOOL _scrolledWhileAnimatingZoom;
    BOOL _performedInitialVisualShift;
    long long _visuallyStableAnchorItem;
    long long _visuallyStableAnchorItemDesiredColumn;
    BOOL _visuallyStableAnchorAllowedCloseToTop;
    PXGBurstStackEffect *_burstStackEffect;
    struct _PXGSpriteIndexRange { unsigned int location; unsigned int length; } _debugVisualizationSpriteIndexRange;
    NSArray *_debugVisualizationSpriteTitles;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _surroundingScrollableContent;
    NSCache *_providedEffectByAsset;
}

@property (readonly, nonatomic) PXZoomablePhotosLayoutSpec *spec;
@property (readonly, nonatomic) PXGAnchor *anchor;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } scaleCenterTargetInViewport;
@property (retain, nonatomic) PXAssetReference *anchorAssetReference;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } normalizedScaleCenterInAnchorSprite;
@property (readonly, nonatomic) NSMapTable *visualAnchorAssetReferenceItemByLayout;
@property (readonly, nonatomic) BOOL shouldAnimateTowardsAnchor;
@property (readonly, nonatomic) BOOL wasTracking;
@property (readonly, nonatomic) PXGItemsLayout<PXZoomablePhotosContentLayout> *primaryItemsLayout;
@property (readonly, nonatomic) PXGOneColumnLayout *oneColLayout;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } effectiveOverlayInsets;
@property (nonatomic) BOOL wantsOverBackgroundFloatingHeaderAppearance;
@property (readonly, nonatomic) PXGBurstStackEffect *burstStackEffect;
@property (copy, nonatomic) id /* block */ effectProvider;
@property (nonatomic) BOOL enableAddContentAccessoryItem;
@property (readonly, nonatomic) PXZoomablePhotosViewModel *viewModel;
@property (readonly, nonatomic) PXAssetsDataSource *presentedDataSource;
@property (readonly, nonatomic) PXPhotosGridAssetDecorationSource *assetDecorationSource;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } overlayInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } inlineHeaderOverlayInsets;
@property (nonatomic) BOOL preventFillingTopAreaInsets;
@property (copy, nonatomic) id /* block */ addContentHandler;
@property (nonatomic) long long bodyLayoutAXGroupRole;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)getBestAnchorColumns:(long long *)a0 forItemLayouts:(id)a1 startingAtBaseLayout:(id)a2 anchorItem:(long long)a3 normalizedScaleCenterInAnchor:(struct CGPoint { double x0; double x1; })a4 biasTowardsCenter:(BOOL)a5;
+ (id)visualizeBestAnchorColumnsForLayouts:(id)a0 imageWidth:(double)a1;

- (void)entityManagerDidChange;
- (void)appearStateDidChange;
- (void)axGroup:(id)a0 didChange:(unsigned long long)a1 userInfo:(id)a2;
- (void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(id /* block */)a0;
- (double)_itemCaptionSpacingForLayout:(id)a0;
- (id)presentedItemsGeometryForDataSource:(id)a0;
- (id /* block */)dateIntervalFutureForContentInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(unsigned long long)a1;
- (void)_updateDataSource;
- (id /* block */)locationNamesFutureForContentInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)initWithViewModel:(id)a0;
- (id)debugQuickLookObject;
- (id)_displayAssetForItem:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForItemAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 level:(unsigned long long)a1;
- (void)_updatePrefetching;
- (BOOL)_wantsDecorationForNumberOfColumns:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })itemsLayout:(id)a0 bestCropRectForItem:(long long)a1 withAspectRatio:(double)a2;
- (struct CGSize { double x0; double x1; })minSpriteSizeForPresentationStyle:(unsigned long long)a0;
- (void)_updateVisualShifting;
- (id)objectReferenceForSpriteIndex:(unsigned int)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfItemsForContentInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateEffectProvider;
- (BOOL)_wantsMiniDecorationForNumberOfColumns:(long long)a0;
- (struct CGSize { double x0; double x1; })itemsLayout:(id)a0 insetForItem:(long long)a1;
- (id)stringAttributesAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; double x1; })_spriteTransformForLayout:(id)a0;
- (void)invalidateItemsLayout;
- (unsigned long long)behaviorForCaptureSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)displayAssetRequestObserverForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 inLayout:(id)a1;
- (id)colorAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (BOOL)_layoutWantsSingleDateTitle;
- (unsigned int)itemsLayout:(id)a0 effectIdForItem:(long long)a1;
- (BOOL)_layoutIsAspectFit:(id)a0;
- (BOOL)_isAllowedToShiftItem:(long long)a0 inLayout:(id)a1;
- (BOOL)_layoutHasIndividualItems:(id)a0;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)attributedStringForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)_debugColors;
- (void)_updateLayers;
- (void)_updateDebugVisualizationSprites;
- (id)hitTestResultForSpriteIndex:(unsigned int)a0;
- (void)_updateEffectiveOverlayInsets;
- (id)stringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 inLayout:(id)a1;
- (void)_updatePinchEffect;
- (void)willUpdate;
- (void)_configureLayout:(id)a0;
- (BOOL)_performVisualShiftWithLayout:(id)a0 movingItem:(long long)a1 toColumn:(long long)a2;
- (void)scrollSpeedRegimeDidChange;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })floatingHeadersMarginsForLevel:(unsigned long long)a0;
- (void)_updateFloatingHeaderStyle;
- (void)_updateDecorationSource;
- (unsigned long long)supportedDisplayAssetPresentationStylesInLayout:(id)a0;
- (void).cxx_destruct;
- (void)_updateDecorationVisibility;
- (void)itemsLayout:(id)a0 updateTagsInSpriteInfos:(struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a1 forItemsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (BOOL)_layoutAllowsCaptionsInSquare:(id)a0;
- (BOOL)_layoutIsQuiteTransparent:(id)a0;
- (struct CGSize { double x0; double x1; })_scaleForLayout:(id)a0;
- (void)containingScrollViewDidScroll:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateBackgroundSprites;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForLevel:(unsigned long long)a0;
- (void)_ensureZoomingAnchor;
- (struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; })itemsLayout:(id)a0 cornerRadiusForItem:(long long)a1;
- (void)visibleRectDidChange;
- (void)_callAddContentActionHandler;
- (Class)viewClassForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (unsigned long long)contentChangeTrend;
- (double)_interItemSpacingForLayout:(id)a0;
- (void)_updateSurroundingScrollableContent;
- (double)itemsLayout:(id)a0 aspectRatioForItem:(long long)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)itemsGeometry;
- (long long)itemsLayout:(id)a0 itemForObjectReference:(id)a1 options:(unsigned long long)a2;
- (void)didUpdate;
- (void)screenScaleDidChange;
- (void)_updateZoom;
- (void)_updateZoomTransforms;
- (id)_createLayoutWithNumberOfColumns:(long long)a0;
- (void)_performAnchorAlignmentVisualShiftWithBaseLayout:(id)a0;
- (void)setSpec:(id)a0;
- (void)update;
- (void)enumerateVisibleAnchoringLayoutsUsingBlock:(id /* block */)a0;
- (long long)_estimatedItemsPerScreenForLayout:(id)a0;
- (struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; double x1; })spriteTransformForLevel:(unsigned long long)a0;
- (id)itemsLayout:(id)a0 objectReferenceForItem:(long long)a1;
- (unsigned long long)desiredPlaceholderStyleInLayout:(id)a0;
- (id)axSpriteIndexes;
- (BOOL)isAnimating;
- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;

@end
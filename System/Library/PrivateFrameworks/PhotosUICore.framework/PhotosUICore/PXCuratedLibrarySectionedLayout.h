@class NSString, PXGSpriteReference, PXAssetsDataSource, PXCuratedLibraryLayoutSpec, PXCuratedLibraryViewModel, PXAssetsSectionLayout, NSMutableIndexSet, NSIndexSet;

@interface PXCuratedLibrarySectionedLayout : PXGCompositeLayout <PXAssetsDataSourceManagerObserver, PXChangeObserver, PXGSublayoutProvider, PXGSublayoutFaultingDelegate, PXMonthsSublayoutProvider, PXCuratedLibraryViewModelPresenter, PXCuratedLibraryBodyLayout> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    PXAssetsDataSource *_currentDataSource;
    long long _currentZoomLevel;
    NSMutableIndexSet *_zoomLevelsPreferringDominantHeros;
    long long *_accumulatedSectionItems;
    long long _accumulatedSectionItemsCount;
    BOOL _isUpdatingSublayouts;
    long long _dataSourceIdentifierOfCachedSectionsWithSelectedItems;
    NSIndexSet *_cachedSectionsWithSelectedItems;
}

@property (class, nonatomic) BOOL shouldDisableLaunchOptimizations;

@property (nonatomic) BOOL isInitialLoad;
@property (nonatomic) BOOL performedInitialLoad;
@property (readonly, nonatomic) double defaultInterlayoutSpacing;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (readonly, nonatomic) long long presentedZoomLevel;
@property (readonly, nonatomic) PXAssetsDataSource *presentedDataSource;
@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel;
@property (retain, nonatomic) PXCuratedLibraryLayoutSpec *spec;
@property (nonatomic) double lateralMargin;
@property (readonly, nonatomic) PXAssetsSectionLayout *dominantSectionLayout;
@property (retain, nonatomic) id dominantHeroPreferences;
@property (retain, nonatomic) id lastVisibleDominantObjectReference;
@property (retain, nonatomic) PXGSpriteReference *lastHitSpriteReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSafeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (BOOL)allowsDanglingUpdatesAssertions;
- (void)clearLastVisibleAreaAnchoringInformation;
- (id /* block */)dateIntervalFutureForContentInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(unsigned long long)a1;
- (void)enumerateSectionBoundariesWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)viewModel:(id)a0 dominantAssetCollectionReferenceForZoomLevel:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sectionBoundariesForAssetCollectionReference:(id)a0;
- (id /* block */)locationNamesFutureForContentInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)layout:(id)a0 shouldPreventFaultOutOfSublayout:(id)a1;
- (id)init;
- (void)_configureSectionLayout:(id)a0 atIndex:(long long)a1;
- (id)initWithViewModel:(id)a0 spec:(id)a1;
- (BOOL)prefersDominantHeroForZoomLevel:(long long)a0;
- (void)willFaultOutSublayout:(id)a0 atIndex:(long long)a1;
- (void)layout:(id)a0 collectIndexesOfChapterHeaderSublayouts:(id)a1 heroSublayouts:(id)a2 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)_updatePreheating;
- (void)_updateFaultOutsets;
- (id)layout:(id)a0 createSublayoutAtIndex:(long long)a1;
- (id)_heroAssetCollectionReferenceClosestToAssetCollectionReference:(id)a0 zoomLevel:(long long)a1;
- (BOOL)allowsSublayoutUpdateCycleAssertions;
- (void)_anchorVisibleArea;
- (void)enumerateAssetsSectionSublayoutsUsingBlock:(id /* block */)a0;
- (void)didFaultInSublayout:(id)a0 atIndex:(long long)a1 fromEstimatedContentSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (void)setPrefersDominantHero:(BOOL)a0 forZoomLevel:(long long)a1;
- (void)_updatePrefetchedSectionsForFaultedInSublayout:(id)a0;
- (void)enumerateScrollablePagesWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)_heroSectionLayoutClosestToSectionLayout:(id)a0 zoomLevel:(long long)a1;
- (struct CGSize { double x0; double x1; })layout:(id)a0 estimatedContentSizeForSublayoutAtIndex:(long long)a1 referenceSize:(struct CGSize { double x0; double x1; })a2;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (long long)scrollableAxis;
- (void)_updateSublayoutsDataSource;
- (void)dealloc;
- (id)_targetAssetCollectionReferenceInZoomLevel:(long long)a0 forTransitionFromAssetCollectionReference:(id)a1;
- (void)update;
- (void)enumerateAssetsSectionSublayoutsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usingBlock:(id /* block */)a1;
- (void)enumerateVisibleAnchoringLayoutsUsingBlock:(id /* block */)a0;
- (void)_updateSublayoutsForSkimming;
- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (void)enumerateHeroSpritesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usingBlock:(id /* block */)a1;
- (void)_prepareAccumulatedSectionItemsBufferForSections:(long long)a0;

@end

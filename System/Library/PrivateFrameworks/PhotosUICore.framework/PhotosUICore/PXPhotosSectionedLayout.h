@class PXPhotosLayoutSpec, NSString, PXPhotosViewModel, NSIndexSet, PXAssetsDataSource;
@protocol PXPhotosSectionBodyLayoutProvider, PXPhotosSectionHeaderLayoutProvider;

@interface PXPhotosSectionedLayout : PXGStackLayout <PXGSublayoutProvider, PXChangeObserver, PXGSublayoutFaultingDelegate, PXAssetSectionLayoutDelegate, PXPhotosSectionBodyLayoutProviderInvalidationDelegate, PXPhotosSectionHeaderLayoutProviderInvalidationDelegate> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    BOOL _isUpdatingSublayouts;
    struct { BOOL floatingHeaderSnapshot; BOOL configureSectionHeaderLayout; } _headerProviderRespondsTo;
    long long _dataSourceIdentifierOfCachedSectionsWithSelectedItems;
    NSIndexSet *_cachedSectionsWithSelectedItems;
    long long _numberOfForcedSections;
}

@property (nonatomic) double interSectionSpacing;
@property (readonly, nonatomic) PXPhotosViewModel *viewModel;
@property (readonly, nonatomic) PXAssetsDataSource *assetsDataSource;
@property (retain, nonatomic) PXPhotosLayoutSpec *spec;
@property (readonly, nonatomic) id<PXPhotosSectionHeaderLayoutProvider> headerLayoutProvider;
@property (readonly, nonatomic) id<PXPhotosSectionBodyLayoutProvider> bodyLayoutProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enumerateItemsGeometriesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataSource:(id)a1 usingBlock:(id /* block */)a2;
- (void)photosSectionHeaderLayoutInvalidateConfiguredLayouts:(id)a0;
- (id)presentedItemsGeometryForSection:(unsigned long long)a0 inDataSource:(id)a1;
- (BOOL)allowsDanglingUpdatesAssertions;
- (id /* block */)dateIntervalFutureForContentInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(unsigned long long)a1;
- (id /* block */)locationNamesFutureForContentInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)layout:(id)a0 shouldPreventFaultOutOfSublayout:(id)a1;
- (id)init;
- (void)_invalidateSublayoutsDataSource;
- (void)assetSectionLayoutDidConfigureLayouts:(id)a0;
- (id)layout:(id)a0 createSublayoutAtIndex:(long long)a1;
- (BOOL)allowsSublayoutUpdateCycleAssertions;
- (id)topmostHeaderSnapshotInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)enumerateAssetsSectionSublayoutsUsingBlock:(id /* block */)a0;
- (void)_invalidateSublayoutsConfiguration;
- (void)_updateSublayoutsSpec;
- (void)didFaultInSublayout:(id)a0 atIndex:(long long)a1 fromEstimatedContentSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (BOOL)_shouldFaultInSection:(long long)a0 inDataSource:(id)a1;
- (void)_updateSublayoutGridConfiguratorForLayout:(id)a0;
- (void)photosSectionBodyLayoutInvalidateConfiguredLayouts:(id)a0;
- (void)willRemoveSublayout:(id)a0 atIndex:(long long)a1 flags:(unsigned long long)a2;
- (struct CGSize { double x0; double x1; })layout:(id)a0 estimatedContentSizeForSublayoutAtIndex:(long long)a1 referenceSize:(struct CGSize { double x0; double x1; })a2;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_performAddActionForSectionLayout:(id)a0;
- (void)_updateSublayoutsDataSource;
- (void)_updateSublayoutsConfiguration;
- (void)update;
- (void)enumerateAssetsSectionSublayoutsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usingBlock:(id /* block */)a1;
- (id)_createAnimationForChangeFromDataSource:(id)a0 toDataSource:(id)a1 changeDetails:(id)a2;
- (BOOL)_configureSectionLayout:(id)a0;
- (id)initWithViewModel:(id)a0 headerProvider:(id)a1 bodyProvider:(id)a2;
- (id)axSpriteIndexes;
- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (void)_invalidateSublayoutsSpec;

@end

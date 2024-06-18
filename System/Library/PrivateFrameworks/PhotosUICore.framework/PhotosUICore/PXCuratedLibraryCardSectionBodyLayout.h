@class PXCuratedLibraryCardSectionBodyLayoutSpec, PXGLayoutGuide, NSString, NSMutableIndexSet, PXCuratedLibrarySectionGeometryDescriptor, PXIndexPathSet, PXAssetsDataSource;
@protocol PXDisplayAssetFetchResult, PXDisplayAsset;

@interface PXCuratedLibraryCardSectionBodyLayout : PXGLayout <PXGDisplayAssetSource> {
    unsigned short _assetVersion;
    id<PXDisplayAsset> _keyAsset;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _postUpdateFlags;
    struct _PXGSpriteIndexRange { unsigned int location; unsigned int length; } _assetSpriteIndexRange;
    NSMutableIndexSet *_axSpriteIndexes;
}

@property (readonly, nonatomic) struct PXSimpleIndexPath { long long dataSourceIdentifier; long long section; long long item; long long subitem; } sectionIndexPath;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> keyAssetsFetchResult;
@property (readonly, nonatomic) long long section;
@property (readonly, nonatomic) PXAssetsDataSource *dataSource;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) long long zoomLevel;
@property (retain, nonatomic) PXCuratedLibraryCardSectionBodyLayoutSpec *spec;
@property (nonatomic) BOOL isSkimming;
@property (retain, nonatomic) PXIndexPathSet *skimmingIndexPaths;
@property (nonatomic) long long maxSkimmingIndex;
@property (nonatomic) long long currentSkimmingIndex;
@property (readonly, nonatomic) PXCuratedLibrarySectionGeometryDescriptor *presentedGeometryDescriptor;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } assetFrame;
@property (readonly, nonatomic) PXGLayoutGuide *assetLayoutGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(id /* block */)a0;
- (id)init;
- (id)layoutForItemChanges;
- (struct CGSize { double x0; double x1; })minSpriteSizeForPresentationStyle:(unsigned long long)a0;
- (void)setDataSource:(id)a0 section:(long long)a1;
- (id)objectReferenceForSpriteIndex:(unsigned int)a0;
- (id)axSelectedSpriteIndexes;
- (id)axSpriteIndexesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)referenceSizeDidChange;
- (id)axContentInfoAtSpriteIndex:(unsigned int)a0;
- (unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)a0 inDirection:(unsigned long long)a1;
- (id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 inLayout:(id)a1;
- (unsigned long long)supportedDisplayAssetPresentationStylesInLayout:(id)a0;
- (void).cxx_destruct;
- (void)_updateSprites;
- (void)_updateKeyAssetFetchResultWithDataSource:(id)a0 section:(long long)a1;
- (id)axVisibleSpriteIndexes;
- (void)screenScaleDidChange;
- (void)applySpriteChangeDetails:(id)a0 countAfterChanges:(unsigned int)a1 initialState:(id /* block */)a2 modifyState:(id /* block */)a3;
- (void)update;
- (void)_updateAXSprites;
- (unsigned long long)desiredPlaceholderStyleInLayout:(id)a0;
- (id)axSpriteIndexes;

@end

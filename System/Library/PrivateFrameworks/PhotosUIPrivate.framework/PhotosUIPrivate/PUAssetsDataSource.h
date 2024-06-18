@class NSIndexPath;

@interface PUAssetsDataSource : PUTilingDataSource

@property (class, readonly, nonatomic) PUAssetsDataSource *emptyDataSource;

@property (readonly, nonatomic) BOOL containsMultipleAssets;
@property (readonly, nonatomic) NSIndexPath *firstItemIndexPath;
@property (readonly, nonatomic) NSIndexPath *lastItemIndexPath;

- (id)assetCollectionAtIndexPath:(id)a0;
- (id)assetAtIndexPath:(id)a0;
- (id)assetReferenceAtIndexPath:(id)a0;
- (BOOL)isEmpty;
- (id)indexPathForAssetCollection:(id)a0;
- (id)indexPathForAssetReference:(id)a0;
- (BOOL)couldAssetReferenceAppear:(id)a0;
- (id)convertIndexPath:(id)a0 fromAssetsDataSource:(id)a1;
- (id)badgeInfoPromiseForAssetAtIndexPath:(id)a0;
- (id)startingAssetReference;
- (long long)numberOfAssetsWithMaximum:(long long)a0;
- (id)assetReferenceForAssetReference:(id)a0;
- (id)containedAssetsDataSourceAtIndexPath:(id)a0;

@end

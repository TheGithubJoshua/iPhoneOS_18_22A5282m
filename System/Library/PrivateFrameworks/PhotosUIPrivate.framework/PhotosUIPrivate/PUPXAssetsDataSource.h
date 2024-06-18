@class PXAssetsDataSource;

@interface PUPXAssetsDataSource : PUAssetsDataSource

@property (readonly, nonatomic) PXAssetsDataSource *underlyingDataSource;

- (id)init;
- (long long)numberOfSubItemsAtIndexPath:(id)a0;
- (id)assetReferenceAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (id)indexPathForAssetReference:(id)a0;
- (id)convertIndexPath:(id)a0 fromAssetsDataSource:(id)a1;
- (id)badgeInfoPromiseForAssetAtIndexPath:(id)a0;
- (id)initWithUnderlyingDataSource:(id)a0;

@end

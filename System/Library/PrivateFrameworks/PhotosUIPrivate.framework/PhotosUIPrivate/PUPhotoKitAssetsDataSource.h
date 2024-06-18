@class PXPhotosDataSource, NSString, PXPhotosDataSourceChange, NSCache;

@interface PUPhotoKitAssetsDataSource : PUAssetsDataSource

@property (readonly, nonatomic) PXPhotosDataSourceChange *change;
@property (readonly, nonatomic) NSString *changeFromDataSourceIdentifier;
@property (readonly, nonatomic) NSCache *_assetReferenceByIndexPathCache;
@property (readonly, nonatomic) PXPhotosDataSource *photosDataSource;

- (id)assetCollectionAtIndexPath:(id)a0;
- (long long)numberOfSubItemsAtIndexPath:(id)a0;
- (id)assetAtIndexPath:(id)a0;
- (id)assetReferenceAtIndexPath:(id)a0;
- (BOOL)isEmpty;
- (id)initWithImmutablePhotosDataSource:(id)a0 withChange:(id)a1 fromDataSourceIdentifier:(id)a2;
- (id)indexPathForAssetCollection:(id)a0;
- (void).cxx_destruct;
- (id)indexPathForAssetReference:(id)a0;
- (BOOL)couldAssetReferenceAppear:(id)a0;
- (id)convertIndexPath:(id)a0 fromAssetsDataSource:(id)a1;
- (id)badgeInfoPromiseForAssetAtIndexPath:(id)a0;
- (id)startingAssetReference;
- (long long)numberOfAssetsWithMaximum:(long long)a0;

@end

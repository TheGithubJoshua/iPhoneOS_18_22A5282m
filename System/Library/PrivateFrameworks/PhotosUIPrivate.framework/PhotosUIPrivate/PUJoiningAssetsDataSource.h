@class NSArray, NSDictionary;

@interface PUJoiningAssetsDataSource : PUAssetsDataSource

@property (readonly, nonatomic) NSArray *_dataSources;
@property (readonly, nonatomic) long long _totalNumberOfSections;
@property (readonly, nonatomic) NSDictionary *_containedDataSourceInfoByIdentifier;
@property (readonly, nonatomic) NSArray *_containedDataSourceInfos;

- (id)assetCollectionAtIndexPath:(id)a0;
- (long long)numberOfSubItemsAtIndexPath:(id)a0;
- (id)assetAtIndexPath:(id)a0;
- (id)assetReferenceAtIndexPath:(id)a0;
- (id)indexPathForAssetCollection:(id)a0;
- (void).cxx_destruct;
- (id)indexPathForAssetReference:(id)a0;
- (id)badgeInfoPromiseForAssetAtIndexPath:(id)a0;
- (id)startingAssetReference;
- (long long)numberOfAssetsWithMaximum:(long long)a0;
- (id)initWithDataSources:(id)a0;
- (id)_assetsDataSourceForExternalIndexPath:(id)a0 outDataSourceIndex:(out long long *)a1 outLocalIndexPath:(out id *)a2;
- (id)_externalIndexPathForLocalIndexPath:(id)a0 inAssetsDataSource:(id)a1;
- (id)containedAssetsDataSourceAtIndexPath:(id)a0;

@end

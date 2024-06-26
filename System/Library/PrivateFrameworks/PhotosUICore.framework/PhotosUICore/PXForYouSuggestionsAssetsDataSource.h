@class NSArray;
@protocol PXDisplayAssetCollection;

@interface PXForYouSuggestionsAssetsDataSource : PXAssetsDataSource {
    id<PXDisplayAssetCollection> _collection;
}

@property (copy, nonatomic) NSArray *assets;

+ (id)new;

- (id)init;
- (long long)numberOfItemsInSection:(long long)a0;
- (long long)numberOfSections;
- (void).cxx_destruct;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathForAssetReference:(id)a0;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)numberOfSubitemsInItem:(long long)a0 section:(long long)a1;
- (id)initWithDisplayAssets:(id)a0 collection:(id)a1;

@end

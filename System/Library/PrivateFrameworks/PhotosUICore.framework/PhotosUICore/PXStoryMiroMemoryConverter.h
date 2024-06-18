@class NSString, PHMemory;
@protocol PXDisplayAssetFetchResult, PXDisplayAsset;

@interface PXStoryMiroMemoryConverter : NSObject

@property (readonly, nonatomic) id<PXDisplayAsset> keyAsset;
@property (readonly, nonatomic) PHMemory *memory;
@property (readonly, nonatomic) BOOL containsAnyData;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> curatedAssets;
@property (readonly, nonatomic) NSString *flexMusicID;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)_fetchMiroCuratedAssetsInMemory:(id)a0;
- (void)_loadSavedMetadataForMemory:(id)a0;
- (id)createNewRecipeFromMiroMetadataWithError:(id *)a0;
- (id)initWithMemory:(id)a0 keyAsset:(id)a1;

@end

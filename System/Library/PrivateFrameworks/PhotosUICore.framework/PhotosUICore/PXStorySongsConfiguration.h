@protocol PXAudioAsset, PXAudioAssetFetchResult;

@interface PXStorySongsConfiguration : NSObject

@property (readonly, nonatomic) id<PXAudioAssetFetchResult> curatedAudioAssets;
@property (readonly, nonatomic) id<PXAudioAsset> currentAsset;

- (id)init;
- (id)previewConfiguration;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithCuratedAudioAssets:(id)a0;
- (id)initWithCuratedAudioAssets:(id)a0 currentAsset:(id)a1;

@end

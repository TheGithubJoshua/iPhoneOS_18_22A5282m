@class AVAssetDownloadCacheInternal;

@interface AVAssetDownloadCache : AVAssetCache {
    AVAssetDownloadCacheInternal *_internal;
}

- (BOOL)isPlayableOffline;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)a0;
- (id)URL;
- (id)_asset;
- (void)dealloc;
- (id)initWithAsset:(id)a0;

@end

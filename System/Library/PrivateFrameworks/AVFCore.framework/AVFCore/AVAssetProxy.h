@class AVAssetProxyInternal;

@interface AVAssetProxy : AVAsset {
    AVAssetProxyInternal *_assetProxy;
}

+ (id)assetProxyWithPropertyList:(id)a0;
+ (id)makePropertyListForMovieProxyHeader:(id)a0 name:(id)a1;

- (struct OpaqueFigPlaybackItem { } *)_playbackItem;
- (struct OpaqueFigFormatReader { } *)_formatReader;
- (id)initWithPropertyList:(id)a0;
- (id)tracks;
- (Class)_classForTrackInspectors;
- (void)dealloc;
- (BOOL)isProxy;
- (struct OpaqueFigAsset { } *)_figAsset;
- (id)_assetInspector;
- (id)_assetInspectorLoader;

@end

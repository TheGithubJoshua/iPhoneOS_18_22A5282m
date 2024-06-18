@class AVAssetInspector;

@interface AVAssetSynchronousInspectorLoader : AVAssetInspectorLoader {
    AVAssetInspector *_assetInspector;
}

- (BOOL)isPlayable;
- (id)lyrics;
- (BOOL)isReadable;
- (unsigned long long)hash;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isComposable;
- (BOOL)isEqual:(id)a0;
- (id)assetInspector;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (void)dealloc;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (BOOL)isExportable;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 keysForCollectionKeys:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithAssetInspector:(id)a0;

@end

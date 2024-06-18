@class AVDispatchOnce, AVWeakReference, NSURL, AVAssetInspector, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AVFigAssetInspectorLoader : AVAssetInspectorLoader {
    struct OpaqueFigAsset { } *_figAsset;
    int _figAssetCreationStatus;
    AVWeakReference *_weakReferenceToAsset;
    AVAssetInspector *_assetInspector;
    AVDispatchOnce *_assetInspectorOnce;
    NSObject<OS_dispatch_queue> *_completionHandlerQueue;
    struct OpaqueFigSimpleMutex { } *_loadingMutex;
    NSMutableArray *_loadingBatches;
    BOOL _loadingCanceled;
    BOOL _registeredForFigAssetNotifications;
    long long _fragmentMinderAssociationCount;
    NSURL *_URL;
}

+ (id)_figAssetPropertiesForKeys;
+ (void)_mapAssetKeys:(id)a0 toFigAssetPropertySet:(id)a1 figAssetTrackPropertySet:(id)a2 callerName:(id)a3;
+ (id)_figAssetTrackPropertiesForKeys;
+ (id)_figAssetTrackMediaSelectionPropertiesArray;
+ (id)_figAssetMediaSelectionPropertiesArray;

- (void)cancelLoading;
- (long long)fragmentCount;
- (id)variants;
- (BOOL)isPlayable;
- (long long)_statusOfValueForKey:(id)a0 error:(id *)a1 firstNonLoadedDependencyKey:(id *)a2;
- (struct OpaqueFigSimpleMutex { } *)_loadingMutex;
- (id)lyrics;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0 forAsset:(id)a1;
- (void)_addFigAssetNotifications;
- (id)figChapters;
- (id)_completionHandlerQueue;
- (id)URL;
- (BOOL)isAssociatedWithFragmentMinder;
- (void)_invokeCompletionHandlerForLoadingBatches:(id)a0;
- (void)_removeFigAssetNotifications;
- (long long)_loadStatusForProperty:(id)a0 figAsset:(struct OpaqueFigAsset { } *)a1 error:(id *)a2;
- (void)_setFragmentMindingInterval:(double)a0;
- (BOOL)isReadable;
- (struct OpaqueFigFormatReader { } *)_formatReader;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)_isStreaming;
- (BOOL)hasProtectedContent;
- (id)resolvedURL;
- (BOOL)isComposable;
- (void)_setIsAssociatedWithFragmentMinder:(BOOL)a0;
- (long long)firstFragmentSequenceNumber;
- (id)assetInspector;
- (id)asset;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (unsigned long long)downloadToken;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)a0;
- (Class)_classForTrackInspectors;
- (id)initWithURL:(id)a0 figAssetCreationFlags:(unsigned long long)a1 figAssetCreationOptions:(id)a2 avAssetInitializationOptions:(id)a3 forAsset:(id)a4;
- (double)_fragmentMindingInterval;
- (void)dealloc;
- (id)contentKeySpecifiersEligibleForPreloading;
- (id)figChapterGroupInfo;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (struct OpaqueFigAsset { } *)_figAsset;
- (id)originalNetworkContentURL;
- (BOOL)isExportable;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 keysForCollectionKeys:(id)a1 completionHandler:(id /* block */)a2;
- (id)_loadingBatches;

@end

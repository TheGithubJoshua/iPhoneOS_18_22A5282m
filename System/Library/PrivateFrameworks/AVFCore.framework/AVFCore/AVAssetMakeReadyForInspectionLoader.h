@class NSURL, AVAssetInspector, NSMutableArray;

@interface AVAssetMakeReadyForInspectionLoader : AVAssetInspectorLoader {
    AVAssetInspector *_assetInspector;
    struct OpaqueFigFormatReader { } *_formatReader;
    struct OpaqueFigSimpleMutex { } *_loadingMutex;
    NSMutableArray *_keysAwaitingCompletion;
    long long _status;
    int _basicInspectionFailureCode;
    NSURL *_URL;
}

- (void)cancelLoading;
- (long long)fragmentCount;
- (BOOL)isPlayable;
- (long long)_status;
- (struct OpaqueFigPlaybackItem { } *)_playbackItem;
- (struct OpaqueFigSimpleMutex { } *)_loadingMutex;
- (id)lyrics;
- (id)initWithURL:(id)a0;
- (id)URL;
- (BOOL)isReadable;
- (struct OpaqueFigFormatReader { } *)_formatReader;
- (BOOL)_isStreaming;
- (BOOL)hasProtectedContent;
- (BOOL)isComposable;
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;
- (long long)firstFragmentSequenceNumber;
- (id)assetInspector;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_inspectionRequiresAFormatReader;
- (void)dealloc;
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)a0;
- (id)figChapterGroupInfo;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (struct OpaqueFigFormatReader { } *)_copyFormatReaderFromFigObjectWithFigErrorCode:(int *)a0;
- (BOOL)isExportable;
- (id)_dictionaryOfSpecialLoadingMethodsForKeys;
- (id)_getAndPruneCompletionsWhileMutexLocked;
- (id)_loadValuesWhileMutexLockedForKeys:(id)a0;
- (BOOL)_providesAccurateTiming;
- (void)_serverHasDied;
- (void)_setStatus:(long long)a0 figErrorCode:(int)a1;
- (id)_statusOfValueForKeyThatIsAlwaysLoaded;
- (long long)_statusOfValueWhileMutexLockedForKey:(id)a0 error:(id *)a1;
- (BOOL)_statusOfValuesIsTerminalWhileMutexLockedForKeys:(id)a0;
- (BOOL)_updateStatusWhileMutexLocked:(long long)a0 figErrorCode:(int)a1;

@end

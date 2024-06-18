@class AVDispatchOnce, AVWeakReference;

@interface AVTrackReaderInspector : AVAssetTrackInspector {
    struct OpaqueFigFormatReader { } *_formatReader;
    struct OpaqueFigTrackReader { } *_trackReader;
    AVDispatchOnce *_copySampleCursorServiceOnce;
    struct OpaqueFigSampleCursorService { } *_figSampleCursorService;
    BOOL _sampleCursorTimeAccuracyIsExact;
    int _trackID;
    unsigned int _mediaType;
    AVWeakReference *_weakReferenceToAsset;
}

- (float)estimatedDataRate;
- (id)segments;
- (int)trackID;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (float)peakDataRate;
- (id)languageCode;
- (id)loudnessInfo;
- (unsigned int)_figMediaType;
- (struct CGSize { double x0; double x1; })dimensions;
- (BOOL)isPlayable;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (id)metadataForFormat:(id)a0;
- (id)commonMetadata;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (struct CGSize { double x0; double x1; })naturalSize;
- (int)naturalTimeScale;
- (int)playabilityValidationResult;
- (id)extendedLanguageTag;
- (id)mediaType;
- (long long)layer;
- (long long)totalSampleDataLength;
- (id)_trackReferences;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })latentBaseDecodeTimeStampOfFirstTrackFragment;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minSampleDuration;
- (BOOL)isExcludedFromAutoselectionInTrackGroup;
- (BOOL)isEnabled;
- (unsigned long long)hash;
- (long long)defaultAlternateGroupID;
- (id)segmentForTrackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (float)nominalFrameRate;
- (long long)alternateGroupID;
- (id)_initWithAsset:(id)a0 trackID:(int)a1 trackIndex:(long long)a2;
- (id)availableMetadataFormats;
- (BOOL)isEqual:(id)a0;
- (BOOL)isDecodable;
- (id)asset;
- (float)preferredVolume;
- (void)dealloc;
- (id)formatDescriptions;
- (int)decodabilityValidationResult;
- (struct OpaqueFigTrackReader { } *)_figTrackReader;
- (struct OpaqueFigSampleCursorService { } *)_getFigSampleCursorServiceReportingTimeAccuracy:(BOOL *)a0;
- (BOOL)isSelfContained;
- (long long)provisionalAlternateGroupID;
- (BOOL)requiresFrameReordering;
- (BOOL)hasAudioSampleDependencies;
- (id)mediaCharacteristics;

@end

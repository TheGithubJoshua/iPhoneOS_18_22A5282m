@class AVAsset, AVAssetTrackInternal;

@interface AVAssetTrack : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {
    AVAssetTrackInternal *_track;
}

@property (readonly, weak, nonatomic) AVAsset *asset;
@property (readonly, nonatomic) int trackID;

+ (BOOL)expectsPropertyRevisedNotifications;
+ (id)keyPathsForValuesAffectingTimeRange;
+ (id)mediaCharacteristicsForMediaTypes;

- (float)estimatedDataRate;
- (id)segments;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (float)peakDataRate;
- (id)languageCode;
- (id)loudnessInfo;
- (struct CGSize { double x0; double x1; })dimensions;
- (BOOL)isPlayable;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (id)metadataForFormat:(id)a0;
- (id)commonMetadata;
- (id)init;
- (id)_weakReference;
- (struct CGSize { double x0; double x1; })naturalSize;
- (int)naturalTimeScale;
- (id)locale;
- (int)playabilityValidationResult;
- (BOOL)hasSeamSamples;
- (id)extendedLanguageTag;
- (id)mediaType;
- (long long)layer;
- (long long)totalSampleDataLength;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minFrameDuration;
- (id)_trackReferences;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })latentBaseDecodeTimeStampOfFirstTrackFragment;
- (BOOL)hasAudibleBooksContent;
- (BOOL)isAudibleBooksContentAuthorized;
- (struct OpaqueFigAssetTrack { } *)_figAssetTrack;
- (BOOL)isExcludedFromAutoselectionInTrackGroup;
- (BOOL)isEnabled;
- (unsigned long long)hash;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })gaplessSourceTimeRange;
- (BOOL)hasProtectedContent;
- (long long)defaultAlternateGroupID;
- (id)segmentForTrackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)availableTrackAssociationTypes;
- (float)nominalFrameRate;
- (long long)alternateGroupID;
- (id)_initWithAsset:(id)a0 trackID:(int)a1 trackIndex:(long long)a2;
- (id)availableMetadataFormats;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })mediaPresentationTimeRange;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })mediaDecodeTimeRange;
- (BOOL)isDecodable;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })samplePresentationTimeForTrackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)preferredVolume;
- (BOOL)segmentsExcludeAudioPrimingAndRemainderDurations;
- (void)dealloc;
- (id)metadata;
- (id)segmentsAsPresented;
- (id)formatDescriptions;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (struct OpaqueFigTrackReader { } *)_figTrackReader;
- (BOOL)isSelfContained;
- (long long)provisionalAlternateGroupID;
- (BOOL)requiresFrameReordering;
- (id)_pairedForcedOnlySubtitlesTrack;
- (BOOL)_hasScaledEdits;
- (id)_assetTrackInspector;
- (id)_fallbackTrack;
- (id)_firstAssociatedTrackWithAssociationType:(id)a0;
- (BOOL)_firstFormatDescriptionIsLPCM;
- (BOOL)_hasEmptyEdits;
- (BOOL)_hasMultipleDistinctFormatDescriptions;
- (BOOL)_hasMultipleEdits;
- (id)_initWithAsset:(id)a0 trackID:(int)a1;
- (id)_initWithAsset:(id)a0 trackIndex:(long long)a1;
- (void)_startListeningToFigAssetTrackNotifications;
- (void)_stopListeningToFigAssetTrackNotifications;
- (BOOL)_subtitleFormatDescriptionMatchesTextDisplayFlags:(unsigned int)a0 flagsMask:(unsigned int)a1;
- (id)associatedTracksOfType:(id)a0;
- (BOOL)canProvideSampleCursors;
- (BOOL)hasAudioSampleDependencies;
- (BOOL)hasMediaCharacteristic:(id)a0;
- (BOOL)hasMediaCharacteristics:(id)a0;
- (void)loadAssociatedTracksOfType:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadMetadataForFormat:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadSamplePresentationTimeForTrackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completionHandler:(id /* block */)a1;
- (void)loadSegmentForTrackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completionHandler:(id /* block */)a1;
- (id)makeSampleCursorAtFirstSampleInDecodeOrder;
- (id)makeSampleCursorAtLastSampleInDecodeOrder;
- (id)makeSampleCursorWithPresentationTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)mediaCharacteristics;
- (long long)statusOfValueForKey:(id)a0;

@end

@class NSArray, AVDispatchOnce, NSURL, AVDisplayCriteria;

@interface AVFigAssetInspector : AVAssetInspector {
    struct OpaqueFigAsset { } *_figAsset;
    struct OpaqueFigFormatReader { } *_formatReader;
    AVDispatchOnce *_formatReaderOnce;
    AVDispatchOnce *_checkIsStreamingOnce;
    AVDispatchOnce *_makeDisplayCriteriaOnce;
    AVDisplayCriteria *_displayCriteria;
    BOOL _isStreaming;
    BOOL didCheckForSaveRestriction;
    BOOL hasSaveRestriction;
}

@property (readonly, nonatomic, getter=_figAsset) struct OpaqueFigAsset { } *figAsset;
@property (readonly, nonatomic, getter=_formatReader) struct OpaqueFigFormatReader { } *formatReader;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSArray *figChapterGroupInfo;
@property (readonly, nonatomic) NSArray *figChapters;
@property (readonly, nonatomic) NSURL *resolvedURL;
@property (readonly, nonatomic) NSURL *originalNetworkContentURL;
@property (readonly, nonatomic) BOOL hasProtectedContent;
@property (readonly, nonatomic, getter=_isStreaming) BOOL streaming;
@property (readonly, nonatomic) unsigned long long downloadToken;
@property (readonly, nonatomic) NSArray *variants;
@property (readonly, nonatomic) NSArray *contentKeySpecifiersEligibleForPreloading;

- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredTransform;
- (long long)fragmentCount;
- (BOOL)_hasQTSaveRestriction;
- (BOOL)isPlayable;
- (id)metadataForFormat:(id)a0;
- (id)commonMetadata;
- (long long)trackCount;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumTimeOffsetFromLive;
- (float)preferredSoundCheckVolumeNormalization;
- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (id)lyrics;
- (struct CGSize { double x0; double x1; })naturalSize;
- (id)initWithFigAsset:(struct OpaqueFigAsset { } *)a0;
- (int)naturalTimeScale;
- (id)SHA1Digest;
- (id)_assetAnalysisMessages;
- (id)propertyListForProxy;
- (id)identifyingTag;
- (id)identifyingTagClass;
- (id)alternateTrackGroups;
- (BOOL)supportsAnalysisReporting;
- (id)creationDate;
- (id)_nameForProxy;
- (BOOL)isReadable;
- (BOOL)providesPreciseDurationAndTiming;
- (id)preferredDisplayCriteria;
- (BOOL)isCompatibleWithAirPlayVideo;
- (unsigned long long)hash;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)canContainFragments;
- (BOOL)isComposable;
- (struct CGSize { double x0; double x1; })maximumVideoResolution;
- (id)availableMetadataFormats;
- (BOOL)isEqual:(id)a0;
- (BOOL)containsFragments;
- (long long)firstFragmentSequenceNumber;
- (id)availableVideoDynamicRanges;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (float)preferredVolume;
- (id)makePropertyListForProxyWithOptions:(id)a0;
- (void)dealloc;
- (id)trackReferences;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (id)_mediaSelectionGroupDictionaries;
- (BOOL)isExportable;
- (float)preferredRate;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })overallDurationHint;
- (id)httpSessionIdentifier;

@end

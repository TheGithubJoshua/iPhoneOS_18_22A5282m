@class NSArray, AVAssetInternal, AVDisplayCriteria;
@protocol AVLoggingIdentifier;

@interface AVAsset : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {
    AVAssetInternal *_asset;
}

@property (readonly) NSArray *availableChapterLocales;
@property (readonly, nonatomic) long long moovAtomSize;
@property (readonly, nonatomic) NSArray *fragments;
@property (readonly, retain, nonatomic) id<AVLoggingIdentifier> loggingIdentifier;
@property (readonly, nonatomic) id propertyListForProxy;
@property (readonly, nonatomic) BOOL isProxy;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, nonatomic) float preferredRate;
@property (readonly, nonatomic) float preferredVolume;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } preferredTransform;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } naturalSize;
@property (readonly, nonatomic) AVDisplayCriteria *preferredDisplayCriteria;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } minimumTimeOffsetFromLive;

+ (void)initialize;
+ (id)assetWithURL:(id)a0;
+ (BOOL)_assetCreationOptionsPrefersSandboxedOption:(id)a0;
+ (BOOL)_assetCreationOptionsRequiresInProcessOperation:(id)a0;
+ (id)assetProxyWithPropertyList:(id)a0;
+ (id)assetWithData:(id)a0 contentType:(id)a1 options:(id)a2;
+ (id)assetWithURL:(id)a0 figPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a1 trackIDs:(id)a2 dynamicBehavior:(BOOL)a3;
+ (BOOL)expectsPropertyRevisedNotifications;
+ (id)inspectionOnlyAssetWithFigAsset:(struct OpaqueFigAsset { } *)a0;
+ (id)inspectionOnlyAssetWithStreamDataParser:(id)a0 tracks:(id)a1;
+ (id)makeAssetLoggingIdentifier;
+ (BOOL)supportsPlayerItems;

- (void)cancelLoading;
- (id)mediaSelectionGroupForMediaCharacteristic:(id)a0;
- (BOOL)isPlayable;
- (id)metadataForFormat:(id)a0;
- (struct OpaqueFigPlaybackItem { } *)_playbackItem;
- (id)commonMetadata;
- (id)init;
- (float)preferredSoundCheckVolumeNormalization;
- (id)_weakReference;
- (id)lyrics;
- (int)naturalTimeScale;
- (id)tracksWithMediaType:(id)a0;
- (id)_assetAnalysisMessages;
- (id)tracksWithMediaCharacteristic:(id)a0;
- (id)alternateTrackGroups;
- (BOOL)supportsAnalysisReporting;
- (id)creationDate;
- (void)_setFragmentMindingInterval:(double)a0;
- (BOOL)isReadable;
- (struct OpaqueFigFormatReader { } *)_formatReader;
- (BOOL)providesPreciseDurationAndTiming;
- (BOOL)isCompatibleWithAirPlayVideo;
- (unsigned long long)hash;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)canContainFragments;
- (BOOL)_isStreaming;
- (BOOL)hasProtectedContent;
- (BOOL)isComposable;
- (struct CGSize { double x0; double x1; })maximumVideoResolution;
- (id)availableMetadataFormats;
- (void)_setIsAssociatedWithFragmentMinder:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithURL:(id)a0 options:(id)a1;
- (BOOL)containsFragments;
- (id)compatibleTrackForCompositionTrack:(id)a0;
- (id)availableVideoDynamicRanges;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)tracks;
- (Class)_classForTrackInspectors;
- (id)makePropertyListForProxyWithOptions:(id)a0;
- (double)_fragmentMindingInterval;
- (void)dealloc;
- (id)metadata;
- (id)trackReferences;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (id)valueForUndefinedKey:(id)a0;
- (id)trackWithTrackID:(int)a0;
- (struct OpaqueFigAsset { } *)_figAsset;
- (BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)a0;
- (id)_mediaSelectionGroupDictionaries;
- (BOOL)isExportable;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 keysForCollectionKeys:(id)a1 completionHandler:(id /* block */)a2;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })overallDurationHint;
- (id)_assetInspector;
- (id)_firstTrackGroupWithMediaTypes:(id)a0;
- (id)_nameForLogging;
- (BOOL)_mindsFragments;
- (BOOL)_needsLegacyChangeNotifications;
- (id)tracksWithMediaCharacteristics:(id)a0;
- (id)_ID3Metadata;
- (id)_absoluteURL;
- (unsigned long long)_addChapterMetadataItem:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 toChapters:(id)a2 fromIndex:(unsigned long long)a3;
- (id)_assetInspectorLoader;
- (id)_availableCanonicalizedChapterLanguages;
- (id)_chapterDataTypeForMediaSubType:(int)a0;
- (id)_chapterMetadataGroupsBestMatchingPreferredLanguages:(id)a0 containingItemsWithCommonKeys:(id)a1;
- (id)_chapterMetadataGroupsWithFigChapterGroups:(id)a0 titleLanguage:(id)a1 containingItemsWithCommonKeys:(id)a2;
- (id)_chapterMetadataGroupsWithTitleLanguage:(id)a0 containingItemsWithCommonKeys:(id)a1;
- (id)_chapterTracks;
- (id)_comparisonToken;
- (void)_handleURLRequest:(id)a0;
- (BOOL)_hasResourceLoaderDelegate;
- (void)_loadChapterInfo;
- (void)_loadValuesSynchronouslyForKeys:(id)a0 trackKeys:(id)a1;
- (struct OpaqueFigMutableComposition { } *)_mutableComposition;
- (BOOL)_requiresInProcessOperation;
- (void)_serverHasDied;
- (void)_setLoggingIdentifier:(id)a0;
- (void)_tracksDidChange;
- (id)_tracksWithClass:(Class)a0;
- (id)allMediaSelections;
- (id)audioAlternatesTrackGroup;
- (id)availableChapterLanguages;
- (id)availableMediaCharacteristicsWithMediaSelectionOptions;
- (id)chapterMetadataGroupsBestMatchingPreferredLanguages:(id)a0;
- (id)chapterMetadataGroupsWithTitleLocale:(id)a0 containingItemsWithCommonKeys:(id)a1;
- (void)findCompatibleTrackForCompositionTrack:(id)a0 completionHandler:(id /* block */)a1;
- (void)findUnusedTrackIDWithCompletionHandler:(id /* block */)a0;
- (id)initWithData:(id)a0 contentType:(id)a1 options:(id)a2;
- (void)loadChapterMetadataGroupsBestMatchingPreferredLanguages:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadChapterMetadataGroupsWithTitleLocale:(id)a0 containingItemsWithCommonKeys:(id)a1 completionHandler:(id /* block */)a2;
- (void)loadMediaSelectionGroupForMediaCharacteristic:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadMetadataForFormat:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadTrackWithTrackID:(int)a0 completionHandler:(id /* block */)a1;
- (void)loadTracksWithMediaCharacteristic:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadTracksWithMediaType:(id)a0 completionHandler:(id /* block */)a1;
- (id)mediaSelectionGroupForPropertyList:(id)a0 mediaSelectionOption:(id *)a1;
- (id)preferredMediaSelection;
- (unsigned long long)referenceRestrictions;
- (long long)statusOfValueForKey:(id)a0;
- (id)subtitleAlternatesTrackGroup;
- (id)trackGroups;
- (int)unusedTrackID;

@end

@class NSArray, NSString, NSDate, NSError, AVPlayerItemInternal;
@protocol NSObject, NSCopying;

@interface AVPlayerItem : NSObject <NSCopying> {
    AVPlayerItemInternal *_playerItem;
}

@property (readonly, nonatomic, getter=isAuthorizationRequiredForPlayback) BOOL authorizationRequiredForPlayback;
@property (readonly, nonatomic, getter=isApplicationAuthorizedForPlayback) BOOL applicationAuthorizedForPlayback;
@property (readonly, nonatomic, getter=isContentAuthorizedForPlayback) BOOL contentAuthorizedForPlayback;
@property (nonatomic, getter=_isExternalProtectionRequiredForPlayback, setter=_setExternalProtectionRequiredForPlayback:) BOOL _externalProtectionRequiredForPlayback;
@property (readonly, nonatomic, getter=_isRental) BOOL _rental;
@property (readonly, nonatomic) NSDate *_rentalStartDate;
@property (readonly, nonatomic) NSDate *_rentalExpirationDate;
@property (readonly, nonatomic, getter=_isRentalPlaybackStarted) BOOL _rentalPlaybackStarted;
@property (readonly, nonatomic) NSDate *_rentalPlaybackStartedDate;
@property (readonly, nonatomic) NSDate *_rentalPlaybackExpirationDate;
@property (readonly, nonatomic) NSArray *outputs;
@property (readonly, nonatomic) NSArray *mediaDataCollectors;
@property (copy, nonatomic) NSString *serviceIdentifier;
@property (retain) id<NSObject, NSCopying> AVKitData;
@property BOOL playHapticTracks;
@property (nonatomic) BOOL automaticallyHandlesInterstitialEvents;
@property (readonly, nonatomic) AVPlayerItem *templatePlayerItem;
@property (readonly) long long status;
@property (readonly) NSError *error;

+ (BOOL)_forNonStreamingURLsFireKVOForAssetWhenReadyForInspection;
+ (struct OpaqueCMTimebase { } *)_copyTimebaseFromFigPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0;
+ (id)playerItemWithAsset:(id)a0;
+ (BOOL)automaticallyNotifiesObserversOfHasEnabledAudio;
+ (BOOL)automaticallyNotifiesObserversOfPlaybackLikelyToKeepUp;
+ (BOOL)automaticallyNotifiesObserversOfHasEnabledVideo;
+ (BOOL)automaticallyNotifiesObserversOfLoadedTimeRanges;
+ (int)_createFigPlaybackItemForFigPlayer:(struct OpaqueFigPlayer { } *)a0 asset:(id)a1 URL:(id)a2 flags:(unsigned int)a3 options:(struct __CFDictionary { } *)a4 playbackItem:(struct OpaqueFigPlaybackItem **)a5;
+ (BOOL)automaticallyNotifiesObserversOfAllowProgressiveSwitchUp;
+ (void)initialize;
+ (BOOL)automaticallyNotifiesObserversOfAllowProgressiveResume;
+ (id)_initializeProtectedContentPlaybackSupportSessionAsynchronouslyForProvider:(id)a0 withOptions:(id)a1;
+ (BOOL)automaticallyNotifiesObserversOfAsset;
+ (BOOL)automaticallyNotifiesObserversOfSavesDownloadedDataToDiskWhenDone;
+ (BOOL)automaticallyNotifiesObserversOfAllowProgressiveStartup;
+ (id)playerItemWithURL:(id)a0;
+ (BOOL)automaticallyNotifiesObserversOfSeekableTimeRanges;
+ (BOOL)automaticallyNotifiesObserversOfTracks;
+ (BOOL)_hasOverrideForSelector:(SEL)a0;
+ (BOOL)_forStreamingItemsVendAssetWithFigPlaybackItem;
+ (BOOL)automaticallyNotifiesObserversOfPlaybackBufferEmpty;
+ (BOOL)automaticallyNotifiesObserversOfStatus;
+ (id)playerItemWithAsset:(id)a0 automaticallyLoadedAssetKeys:(id)a1;
+ (void)_uninitializeProtectedContentPlaybackSupportSession:(id)a0;
+ (BOOL)automaticallyNotifiesObserversOfVariantIndex;
+ (BOOL)automaticallyNotifiesObserversOfUsesMinimalLatencyForVideoCompositionRendering;
+ (BOOL)automaticallyNotifiesObserversOfPresentationSize;
+ (BOOL)automaticallyNotifiesObserversOfPlaybackBufferFull;

- (struct { long long x0; int x1; unsigned int x2; long long x3; })forwardPlaybackEndTime;
- (id)loudnessInfo;
- (id)init;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })reversePlaybackEndTime;
- (id)_weakReference;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (id)loadedTimeRanges;
- (struct CGSize { double x0; double x1; })presentationSize;
- (void)setReversePlaybackEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithURL:(id)a0;
- (void)setForwardPlaybackEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)selectedMediaOptionInMediaSelectionGroup:(id)a0;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)seekableTimeRanges;
- (id)copy;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_duration;
- (BOOL)hasEnabledVideo;
- (id)audioTimePitchAlgorithm;
- (id)mediaKind;
- (BOOL)canUseNetworkResourcesForLiveStreamingWhilePaused;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toleranceBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 toleranceAfter:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (BOOL)hasEnabledAudio;
- (void)setDelegate:(id)a0;
- (id)currentDate;
- (void)setCanUseNetworkResourcesForLiveStreamingWhilePaused:(BOOL)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentTime;
- (void)_setAsset:(id)a0;
- (void)setAudioMix:(id)a0;
- (id)description;
- (id)delegate;
- (void)removeOutput:(id)a0;
- (void)setAudioTimePitchAlgorithm:(id)a0;
- (id)asset;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setMediaKind:(id)a0;
- (id)tracks;
- (void)_attachToPlayer:(id)a0;
- (void)selectMediaOption:(id)a0 inMediaSelectionGroup:(id)a1;
- (id)audioMix;
- (void)_removeFPListeners;
- (void)dealloc;
- (BOOL)hasVideo;
- (void)_addFPListeners;
- (id)valueForUndefinedKey:(id)a0;
- (void)setLoudnessInfo:(id)a0;
- (id)initWithAsset:(id)a0;
- (void)addOutput:(id)a0;
- (id)_URL;
- (long long)_fileSize;
- (id)_loadedTimeRanges;
- (id)_player;
- (id)_nextItem;
- (id)_previousItem;
- (unsigned long long)restrictions;
- (void)setRestrictions:(unsigned long long)a0;
- (id)initWithAsset:(id)a0 automaticallyLoadedAssetKeys:(id)a1;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toleranceBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 toleranceAfter:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 completionHandler:(id /* block */)a3;
- (struct CGSize { double x0; double x1; })_presentationSize;
- (struct CGSize { double x0; double x1; })IFramePrefetchTargetDimensions;
- (unsigned int)RTCReportingFlags;
- (void)_addFAListeners;
- (BOOL)_canPlayReverse;
- (void)_changeStatusToFailedWithError:(id)a0;
- (id)_enabledTrackFormatDescriptions;
- (id)_nameForLogging;
- (void)_setVideoCompositionRenderSize:(struct CGSize { double x0; double x1; })a0;
- (void)_updateTimebase;
- (BOOL)canStepBackward;
- (void)dispatchIVarWrite:(BOOL)a0 locked:(BOOL)a1 block:(id /* block */)a2;
- (BOOL)reversesMoreVideoFramesInMemory;
- (void)setGaplessInfo:(id)a0;
- (void)setSuppressesAudioOnlyVariants:(BOOL)a0;
- (id)tracksPublisher;
- (BOOL)_canStepForward;
- (BOOL)_isReadyForInspectionOfDuration;
- (id)_preferredPixelBufferAttributes;
- (void)_setSyncLayersOnFigPlaybackItem;
- (id)_tracks;
- (double)preferredMaximumAudioSampleRate;
- (void)setInitialDate:(id)a0;
- (int)_CreateSeekID;
- (void)_addFoldedTBListeners;
- (void)_addInterstitialEventCollector;
- (void)_addInterstitialEventCollectorLocked:(BOOL)a0;
- (void)_addLegibleOutput:(id)a0;
- (void)_addMetadataCollector:(id)a0;
- (void)_addMetadataCollector:(id)a0 locked:(BOOL)a1;
- (void)_addMetadataOutput:(id)a0;
- (void)_addSyncLayer:(id)a0;
- (BOOL)_addToPlayQueueOfFigPlayerOfPlayer:(id)a0 afterFigPlaybackItemOfItem:(id)a1;
- (void)_addVideoOutput:(id)a0;
- (void)_applyCurrentAudioMix;
- (void)_applyCurrentVideoComposition;
- (void)_applyMediaSelectionOptions;
- (void)_attachToFigPlayer;
- (long long)_availableFileSize;
- (void)_cacheMediaSelectionOption:(id)a0 forMediaSelectionGroup:(id)a1;
- (id)_cachedTracks;
- (BOOL)_canPlayFastForward;
- (BOOL)_canPlayFastReverse;
- (BOOL)_canStepBackward;
- (void)_cancelPendingSeekAndRegisterSeekID:(int)a0 withCompletionHandler:(id /* block */)a1;
- (void)_clearCachedMediaSelectionGroup:(id)a0;
- (BOOL)_configurePlaybackItemAndReturnError:(id *)a0;
- (void)_configureVideoCompositionColorProperties;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_configuredTimeOffsetFromLive;
- (struct OpaqueFigCPEProtector { } *)_copyFigCPEProtector;
- (struct OpaqueFigPlaybackItem { } *)_copyFigPlaybackItem;
- (struct OpaqueFigPlaybackItem { } *)_copyFigPlaybackItemLocked:(BOOL)a0;
- (struct OpaqueCMTimebase { } *)_copyFoldedTimebase;
- (struct OpaqueCMTimebase { } *)_copyProxyFoldedTimebase;
- (struct OpaqueCMTimebase { } *)_copyProxyTimebase;
- (struct OpaqueCMTimebase { } *)_copyProxyUnfoldedTimebase;
- (id)_copyStateDispatchQueue;
- (struct OpaqueCMTimebase { } *)_copyUnfoldedFigTimebase;
- (id)_currentMediaSelectionFromFigSelectedMediaArray:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_currentTimeWithOptionalFoldedTimebase:(struct OpaqueCMTimebase { } *)a0;
- (id)_ensureAssetWithFigPlaybackItemWithTrackIDs:(id)a0;
- (void)_evaluateLegibleOutputs;
- (void)_evaluateMetadataOutputs;
- (void)_evaluateVideoOutputs;
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0 didFlushLegibleOutputWithDictionaryKey:(id)a1;
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0 didFlushMetadataOutputWithDictionaryKey:(id)a1;
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0 didOutputAttributedStrings:(id)a1 nativeSampleBuffers:(id)a2 atItemTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 withLegibleOutputsDictionaryKey:(id)a4;
- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0 didOutputSampleBuffers:(id)a1 fromTrackWithID:(int)a2 forMetadataOutputWithDictionaryKey:(id)a3;
- (id)_figSelectedMediaArray;
- (id)_fpNotificationNames;
- (BOOL)_getCachedNonForcedSubtitleEnabled:(BOOL *)a0;
- (BOOL)_getCachedPresentationSize:(struct CGSize { double x0; double x1; } *)a0;
- (void)_getVideoComposition:(id *)a0 customVideoCompositorSession:(id *)a1 figVideoCompositor:(struct OpaqueFigVideoCompositor **)a2;
- (BOOL)_hasEnabledAudio;
- (BOOL)_hasEnabledVideo;
- (BOOL)_hasEnqueuedVideoFrame;
- (BOOL)_hasSelectionInCachedMediaSelectionGroup:(id)a0;
- (void)_informObserversAboutAvailabilityOfCurrentMediaSelection;
- (void)_informObserversAboutAvailabilityOfDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_informObserversAboutAvailabilityOfPresentationSize;
- (void)_informObserversAboutAvailabilityOfTracks:(id)a0;
- (void)_insertAfterItem:(id)a0;
- (void)_invokeReadyForEnqueueingHandlers;
- (BOOL)_isAFileBasedItemThatsReadyToPlay;
- (id)_isExternalProtectionRequiredForPlaybackInternal;
- (BOOL)_isFigAssetReadyForInspectionOfMediaSelectionOptions;
- (BOOL)_isFigAssetReadyForInspectionOfMediaSelectionOptionsAndFigPlaybackItemIsReadyForInspection;
- (BOOL)_isNonForcedSubtitleDisplayEnabled;
- (BOOL)_isReadyForBasicInspection;
- (BOOL)_isReadyForInspectionOfPresentationSize;
- (BOOL)_isReadyForInspectionOfRecommendedTimeOffsetFromLive;
- (BOOL)_isReadyForInspectionOfTracks;
- (void)_kickAssetObserversIfAppropriate;
- (id)_legibleOutputForKey:(id)a0;
- (id)_legibleOutputsForKeys;
- (id)_loadedTimeRangesFromFPPlaybableTimeIntervals:(id)a0;
- (void)_makeReadyForEnqueueingWithCompletionHandler:(id /* block */)a0;
- (void)_markAsNeedingNewAssetWithFigPlaybackItem;
- (void)_markAsReadyForBasicInspection;
- (void)_markAsReadyForInspectionOfDuration;
- (void)_markAsReadyForInspectionOfPresentationSize;
- (void)_markAsReadyForInspectionOfRecommendedTimeOffsetFromLive;
- (void)_markAsReadyForInspectionOfTracks;
- (void)_markAssetWithFigPlaybackItemAsNeedingNewTracks;
- (void)_markFigAssetAsReadyForInspectionOfMediaSelectionOptions;
- (id)_mediaOptionsSelectedByClient;
- (id)_mediaOptionsSelectedByClientForKey:(id)a0;
- (id)_metadataCollectors;
- (id)_metadataOutputForKey:(id)a0;
- (id)_metadataOutputsForKeys;
- (id)_playbackCoordinator;
- (id)_playbackItemNotificationPayloadToError:(struct __CFDictionary { } *)a0;
- (id)_playbackProperties;
- (void)_playerChangeStatusToFailedWithError:(id)a0;
- (id)_playerConnection;
- (void)_postSeekCompletionNotificationWithSeekID:(int)a0 andResult:(BOOL)a1;
- (id)_propertyListForMediaSelection:(id)a0 forGroup:(id)a1;
- (id)_propertyListForSelectedMediaOptionUsingFigSelectedMediaArrayObtainedFromGroup:(id)a0;
- (void)_quietlySetEQPreset:(int)a0;
- (void)_quietlySetServiceIdentifier;
- (void)_quietlySetVariantIndex:(long long)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_recommendedTimeOffsetFromLive;
- (void)_removeFAListeners;
- (void)_removeFoldedTBListeners;
- (void)_removeFromItems;
- (void)_removeFromPlayQueueOfFigPlayerOfAttachedPlayer;
- (void)_removeInterstitialEventCollector;
- (void)_removeInterstitialEventCollectorLocked:(BOOL)a0;
- (void)_removeLegibleOutput:(id)a0;
- (void)_removeMediaOptionsSelectedByClient;
- (void)_removeMetadataCollector:(id)a0;
- (void)_removeMetadataCollector:(id)a0 locked:(BOOL)a1;
- (void)_removeMetadataOutput:(id)a0;
- (void)_removeSyncLayer:(id)a0;
- (void)_removeVideoOutput:(id)a0;
- (void)_renderingSuppressionDidChangeForOutput:(id)a0;
- (void)_respondToBecomingReadyForBasicInspection;
- (void)_respondToBecomingReadyForBasicInspectionWithDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toleranceBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 toleranceAfter:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 seekID:(int)a3 completionHandler:(id /* block */)a4;
- (id)_seekableTimeRanges;
- (id)_seekableTimeRangesFromFPSeekableTimeIntervals:(id)a0;
- (BOOL)_selectMediaOption:(id)a0 inMediaSelectionGroup:(id)a1;
- (void)_setAssetToAssetWithFigPlaybackItemIfAppropriate;
- (void)_setAudibleDRMInfo:(id)a0;
- (void)_setAudioCurvesAccordingToInputParameters:(id)a0 forTrackID:(int)a1;
- (void)_setAudioEffectParameters:(id)a0 forTrackID:(int)a1;
- (void)_setAudioTapProcessor:(struct opaqueMTAudioProcessingTap { } *)a0 forTrackID:(int)a1;
- (void)_setAudioTimePitchAlgorithm:(id)a0 forTrackID:(int)a1;
- (void)_setCurrentMediaSelection:(id)a0;
- (void)_setEQPreset:(int)a0;
- (void)_setMediaOptionsSelectedByClient:(id)a0 forKey:(id)a1;
- (void)_setPlaybackCoordinator:(id)a0;
- (void)_setRampInOutInfo:(id)a0;
- (void)_setSuppressesVideoLayers:(BOOL)a0;
- (void)_setTemplatePlayerItem:(id)a0;
- (void)_setTimeJumpedNotificationIncludesExtendedDiagnosticPayload:(BOOL)a0;
- (void)_setTimedMetadata:(id)a0;
- (void)_setURL:(id)a0;
- (void)_setVideoCompositionColorPrimaries:(id)a0;
- (void)_setVideoCompositionColorTransferFunction:(id)a0;
- (void)_setVideoCompositionColorYCbCrMatrix:(id)a0;
- (void)_setVideoCompositionFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_setVideoCompositionInstructions:(id)a0;
- (void)_setVideoCompositionRenderScale:(float)a0;
- (void)_setVideoCompositionSourceSampleDataTrackIDs:(id)a0;
- (void)_setVideoCompositionSourceTrackIDForFrameTiming:(int)a0;
- (void)_setVideoCompositor:(void *)a0;
- (unsigned char)_snapTimeToPausePlayback;
- (BOOL)_suppressesVideoLayers;
- (BOOL)_suppressionForOutputs:(id)a0;
- (BOOL)_timeJumpedNotificationIncludesExtendedDiagnosticPayload;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_timeToPauseBuffering;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_timeToPausePlayback;
- (id)_trackWithTrackID:(int)a0;
- (id)_tracksFromAssetTrackIDs;
- (id)_tracksWithFPTrackIDArray:(id)a0 fromFigPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a1;
- (void)_unregisterInvokeAndReleasePendingSeekCompletionHandlerForSeekID:(int)a0 finished:(BOOL)a1;
- (void)_updateAdvanceTimeForOverlappedPlaybackOnFigPlaybackItem;
- (void)_updateAggressivelyCachesVideoFramesOnFigPlaybackItem;
- (void)_updateAllowedAudioSpatializationFormats;
- (void)_updateAllowedAudioSpatializationFormatsFromFigItem;
- (void)_updateAlwaysMonitorsPlayabilityOnFigPlaybackItem;
- (void)_updateAppliesPerFrameHDRDisplayMetadataOnFigPlaybackItem;
- (void)_updateAudioSpatializationAllowed;
- (void)_updateAudioTapProcessorOnFigPlaybackItem;
- (void)_updateAutoSwitchAtmosStreamVariantsOnFigPlaybackItem;
- (void)_updateBlendsVideoFramesOnFigPlaybackItem;
- (void)_updateCanPlayAndCanStepPropertiesWhenReadyToPlayWithNotificationPayload:(id)a0 updateStatusToReadyToPlay:(BOOL)a1;
- (void)_updateCanUseNetworkResourcesForLiveStreamingWhilePausedOnFigPlaybackItem;
- (void)_updateConfiguredTimeOffsetFromLiveOnFigPlaybackItem;
- (void)_updateContinuesPlayingDuringPrerollForRateChangeOnFigPlaybackItem;
- (void)_updateContinuesPlayingDuringPrerollForSeekOnFigPlaybackItem;
- (void)_updateDecodesAllFramesDuringOrdinaryPlaybackOnFigPlaybackItem;
- (void)_updateFigTimePitchAlgorithmOnFigPlaybackItem;
- (void)_updateForwardPlaybackEndTimeOnFigPlaybackItem;
- (void)_updateIFramePrefetchTargetDimensionsOnFigPlaybackItem;
- (void)_updateImageQueueInterpolationCurveOnFigPlaybackItem;
- (void)_updateItemIdentifierForCoordinatedPlayback;
- (void)_updateLegibleSuppressionOnFigPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0 basedOnOutputs:(id)a1;
- (void)_updateLimitReadAheadOnFigPlaybackItem;
- (void)_updateLoopTimeRangeOnFigPlaybackItem;
- (void)_updateLoudnessInfoOnFigPlaybackItem;
- (void)_updateMaximumForwardBufferDurationOnFigPlaybackItem;
- (void)_updateMaximumTrailingBufferDurationOnFigPlaybackItem;
- (void)_updateMediaKindOnFigPlaybackItem;
- (void)_updateMinimumIntervalForIFrameOnlyPlaybackOnFigPlaybackItem;
- (void)_updateNonForcedSubtitleDisplayEnabledOnFigPlaybackItem;
- (void)_updatePlaybackLikelyToKeepUpTriggerOnFigPlaybackItem;
- (void)_updatePlaybackPropertiesOnFigPlaybackItem;
- (void)_updatePreferredMaximumAudioSampleRateOnFigPlaybackItem;
- (void)_updatePreferredMaximumResolutionForExpensiveNetworksOnFigPlaybackItem;
- (void)_updatePreferredMaximumResolutionOnFigPlaybackItem;
- (void)_updatePreferredMinimumResolutionOnFigPlaybackItem;
- (void)_updatePreferredPeakBitRateForExpensiveNetworksOnFigPlaybackItem;
- (void)_updatePreferredPeakBitRateOnFigPlaybackItem;
- (void)_updatePreservesTimeOffsetFromLive;
- (void)_updateRTCReportingFlagsOnFigPlaybackItem;
- (void)_updateRefreshesClosedCaptionsImmediatelyAfterSeekingOnFigPlaybackItem;
- (void)_updateRestrictionsOnFigPlaybackItem;
- (void)_updateRestrictsAutomaticMediaSelectionToAvailableOfflineOptions;
- (void)_updateReversePlaybackEndTimeOnFigPlaybackItem;
- (void)_updateReversesMoreVideoFramesInMemoryOnFigPlaybackItem;
- (void)_updateSeekingWaitsForVideoCompositionRenderingOnFigPlaybackItem;
- (void)_updateSnapTimeToPausePlaybackOnFigPlaybackItem;
- (void)_updateSoundCheckVolumeNormalizationOnFigPlaybackItem;
- (void)_updateSpeedThresholdForIFrameOnlyPlaybackOnFigPlaybackItem;
- (void)_updateStartsOnFirstEligibleVariantOnFigPlaybackItem;
- (void)_updateTaggedMetadataArray:(id)a0;
- (void)_updateTextHighlightArrayOnFigPlaybackItem;
- (void)_updateTextStyleRulesOnFigPlaybackItem;
- (void)_updateTimeToPauseBufferingOnFigPlaybackItem;
- (void)_updateTimeToPausePlaybackOnFigPlaybackItem;
- (void)_updateUsesIFrameOnlyPlaybackForHighRateScaledEditsOnFigPlaybackItem;
- (void)_updateUsesMinimalLatencyForVideoCompositionRenderingOnFigPlaybackItem;
- (void)_updateVariantPreferencesOnFigPlaybackItem;
- (void)_updateVideoApertureModeOnFigPlaybackItem;
- (void)_updateVideoEnhancementModeOnFigPlaybackItem;
- (void)_updateVideoSuppressionOnFigPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0 basedOnOutputs:(id)a1;
- (void)_updateVolumeAdjustmentOnFigPlaybackItem;
- (void)_updateWillNeverSeekBackwardsHintOnFigPlaybackItem;
- (id)_videoOutputs;
- (id)accessLog;
- (void)addMediaDataCollector:(id)a0;
- (void)addMediaDataCollector:(id)a0 locked:(BOOL)a1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })advanceTimeForOverlappedPlayback;
- (BOOL)advanceTimeForOverlappedPlaybackWasSet;
- (BOOL)aggressivelyCachesVideoFrames;
- (BOOL)aggressivelyCachesVideoFramesWasSet;
- (BOOL)allowProgressiveResume;
- (BOOL)allowProgressiveStartup;
- (BOOL)allowProgressiveSwitchUp;
- (unsigned long long)allowedAudioSpatializationFormats;
- (BOOL)allowedAudioSpatializationFormatsWasSet;
- (BOOL)allowsExtendedReadAhead;
- (BOOL)alwaysMonitorsPlayability;
- (BOOL)appliesPerFrameHDRDisplayMetadata;
- (BOOL)appliesPerFrameHDRDisplayMetadataWasSet;
- (BOOL)audioSpatializationAllowedWasSet;
- (struct opaqueMTAudioProcessingTap { } *)audioTapProcessor;
- (BOOL)autoSwitchAtmosStreamVariants;
- (id)automaticallyLoadedAssetKeys;
- (BOOL)automaticallyPreservesTimeOffsetFromLive;
- (BOOL)blendsVideoFrames;
- (BOOL)blendsVideoFramesWasSet;
- (BOOL)canPlayFastForward;
- (BOOL)canPlayFastReverse;
- (BOOL)canPlayReverse;
- (BOOL)canPlaySlowForward;
- (BOOL)canPlaySlowReverse;
- (BOOL)canStepForward;
- (void)cancelPendingSeeks;
- (id)configurationGroup;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })configuredTimeOffsetFromLive;
- (BOOL)continuesPlayingDuringPrerollForRateChange;
- (BOOL)continuesPlayingDuringPrerollForSeek;
- (id)copyWithZone:(struct _NSZone { } *)a0 newAssetOptions:(id)a1;
- (id)currentEstimatedDate;
- (id)currentMediaSelection;
- (id)currentStableVariantID;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentUnfoldedTime;
- (id)customVideoCompositor;
- (BOOL)decodesAllFramesDuringOrdinaryPlayback;
- (BOOL)decodesAllFramesDuringOrdinaryPlaybackWasSet;
- (id)errorLog;
- (id)gaplessInfo;
- (id)imageQueueInterpolationCurve;
- (BOOL)imageQueueInterpolationCurveWasSet;
- (id)initialDate;
- (id)initialEstimatedDate;
- (BOOL)isAudioSpatializationAllowed;
- (BOOL)isNonForcedSubtitleDisplayEnabled;
- (BOOL)isPlaybackBufferEmpty;
- (BOOL)isPlaybackBufferFull;
- (BOOL)isPlaybackLikelyToKeepUp;
- (BOOL)isRenderingSpatialAudio;
- (BOOL)limitReadAhead;
- (double)liveUpdateInterval;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })loopTimeRange;
- (int)makeSeekID;
- (float)maximumBitRate;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })maximumForwardBufferDuration;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })maximumTimePlayedToDuringOverlappedPlayback;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })maximumTimePlayedToSinceLastSeek;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })maximumTrailingBufferDuration;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumIntervalForIFrameOnlyPlayback;
- (BOOL)minimumIntervalForIFrameOnlyPlaybackWasSet;
- (id)nonForcedSubtitleDisplayEnabledPublisher;
- (id)playabilityMetrics;
- (long long)playbackLikelyToKeepUpTrigger;
- (BOOL)playerAppliesAutomaticMediaSelectionToGroup:(id)a0;
- (double)preferredForwardBufferDuration;
- (struct CGSize { double x0; double x1; })preferredMaximumResolution;
- (struct CGSize { double x0; double x1; })preferredMaximumResolutionForExpensiveNetworks;
- (struct CGSize { double x0; double x1; })preferredMinimumResolution;
- (double)preferredPeakBitRate;
- (double)preferredPeakBitRateForExpensiveNetworks;
- (struct CGSize { double x0; double x1; })preferredPeakPresentationSize;
- (BOOL)prefersOfflinePlayableVariants;
- (id)presentationSizePublisher;
- (float)progressTowardsPlaybackLikelyToKeepUp;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })recommendedTimeOffsetFromLive;
- (BOOL)refreshesClosedCaptionsImmediatelyAfterSeeking;
- (void)removeMediaDataCollector:(id)a0;
- (void)removeMediaDataCollector:(id)a0 locked:(BOOL)a1;
- (BOOL)requiresAccessLog;
- (void)resetAudioBufferedAhead;
- (BOOL)restrictsAutomaticMediaSelectionToAvailableOfflineOptions;
- (BOOL)reversesMoreVideoFramesInMemoryWasSet;
- (BOOL)savesDownloadedDataToDiskWhenDone;
- (BOOL)seekToDate:(id)a0;
- (BOOL)seekToDate:(id)a0 completionHandler:(id /* block */)a1;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completionHandler:(id /* block */)a1;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toleranceBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 toleranceAfter:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 seekID:(int)a3;
- (double)seekableTimeRangesLastModifiedTime;
- (BOOL)seekingWaitsForVideoCompositionRendering;
- (void)selectMediaOptionAutomaticallyInMediaSelectionGroup:(id)a0;
- (void)setAdvanceTimeForOverlappedPlayback:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setAggressivelyCachesVideoFrames:(BOOL)a0;
- (void)setAllowProgressiveResume:(BOOL)a0;
- (void)setAllowProgressiveStartup:(BOOL)a0;
- (void)setAllowProgressiveSwitchUp:(BOOL)a0;
- (void)setAllowedAudioSpatializationFormats:(unsigned long long)a0;
- (void)setAllowsExtendedReadAhead:(BOOL)a0;
- (void)setAlwaysMonitorsPlayability:(BOOL)a0;
- (void)setAppliesPerFrameHDRDisplayMetadata:(BOOL)a0;
- (void)setAudioSpatializationAllowed:(BOOL)a0;
- (void)setAudioTapProcessor:(struct opaqueMTAudioProcessingTap { } *)a0;
- (void)setAutoSwitchAtmosStreamVariants:(BOOL)a0;
- (void)setAutomaticallyPreservesTimeOffsetFromLive:(BOOL)a0;
- (void)setBlendsVideoFrames:(BOOL)a0;
- (void)setConfiguredTimeOffsetFromLive:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setContinuesPlayingDuringPrerollForRateChange:(BOOL)a0;
- (void)setContinuesPlayingDuringPrerollForSeek:(BOOL)a0;
- (void)setDecodesAllFramesDuringOrdinaryPlayback:(BOOL)a0;
- (void)setIFramePrefetchTargetDimensions:(struct CGSize { double x0; double x1; })a0;
- (void)setImageQueueInterpolationCurve:(id)a0;
- (void)setInitialEstimatedDate:(id)a0;
- (void)setLimitReadAhead:(BOOL)a0;
- (void)setLoopTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)setMaximumBitRate:(float)a0;
- (void)setMaximumForwardBufferDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setMaximumTimePlayedToDuringOverlappedPlayback:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setMaximumTrailingBufferDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setMinimumIntervalForIFrameOnlyPlayback:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setNonForcedSubtitleDisplayEnabled:(BOOL)a0;
- (void)setPlaybackLikelyToKeepUpTrigger:(long long)a0;
- (void)setPreferredForwardBufferDuration:(double)a0;
- (void)setPreferredMaximumAudioSampleRate:(double)a0;
- (void)setPreferredMaximumResolution:(struct CGSize { double x0; double x1; })a0;
- (void)setPreferredMaximumResolutionForExpensiveNetworks:(struct CGSize { double x0; double x1; })a0;
- (void)setPreferredMinimumResolution:(struct CGSize { double x0; double x1; })a0;
- (void)setPreferredPeakBitRate:(double)a0;
- (void)setPreferredPeakBitRateForExpensiveNetworks:(double)a0;
- (void)setPreferredPeakPresentationSize:(struct CGSize { double x0; double x1; })a0;
- (void)setPrefersOfflinePlayableVariants:(BOOL)a0;
- (void)setRTCReportingFlags:(unsigned int)a0;
- (void)setRefreshesClosedCaptionsImmediatelyAfterSeeking:(BOOL)a0;
- (void)setRequiresAccessLog:(BOOL)a0;
- (void)setRestrictsAutomaticMediaSelectionToAvailableOfflineOptions:(BOOL)a0;
- (void)setReversesMoreVideoFramesInMemory:(BOOL)a0;
- (void)setSavesDownloadedDataToDiskWhenDone:(BOOL)a0;
- (void)setSeekingWaitsForVideoCompositionRendering:(BOOL)a0;
- (void)setSnapTimeToPausePlayback:(unsigned char)a0;
- (void)setSoundCheckVolumeNormalization:(float)a0;
- (void)setSpeedThresholdForIFrameOnlyPlayback:(float)a0;
- (void)setStartsOnFirstEligibleVariant:(BOOL)a0;
- (void)setTextHighlightArray:(id)a0;
- (void)setTextStyleRules:(id)a0;
- (void)setTimeToPauseBuffering:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setTimeToPausePlayback:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setUsesIFrameOnlyPlaybackForHighRateScaledEdits:(BOOL)a0;
- (void)setUsesMinimalLatencyForVideoCompositionRendering:(BOOL)a0;
- (void)setVariantIndex:(long long)a0;
- (void)setVariantPreferences:(unsigned long long)a0;
- (void)setVideoApertureMode:(id)a0;
- (void)setVideoComposition:(id)a0;
- (void)setVideoEnhancementMode:(id)a0;
- (void)setVolumeAdjustment:(float)a0;
- (void)setWillNeverSeekBackwardsHint:(BOOL)a0;
- (unsigned char)snapTimeToPausePlayback;
- (float)soundCheckVolumeNormalization;
- (float)speedThresholdForIFrameOnlyPlayback;
- (BOOL)speedThresholdForIFrameOnlyPlaybackWasSet;
- (BOOL)startsOnFirstEligibleVariant;
- (void)stepByCount:(long long)a0;
- (BOOL)suppressesAudioOnlyVariants;
- (id)textHighlightArray;
- (id)textStyleRules;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })timeToPauseBuffering;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })timeToPausePlayback;
- (struct OpaqueCMTimebase { } *)timebase;
- (id)timedMetadata;
- (struct OpaqueCMTimebase { } *)unfoldedTimebase;
- (BOOL)usesIFrameOnlyPlaybackForHighRateScaledEdits;
- (BOOL)usesIFrameOnlyPlaybackForHighRateScaledEditsWasSet;
- (BOOL)usesMinimalLatencyForVideoCompositionRendering;
- (long long)variantIndex;
- (unsigned long long)variantPreferences;
- (id)videoApertureMode;
- (id)videoComposition;
- (id)videoEnhancementMode;
- (float)volumeAdjustment;
- (BOOL)willNeverSeekBackwardsHint;

@end
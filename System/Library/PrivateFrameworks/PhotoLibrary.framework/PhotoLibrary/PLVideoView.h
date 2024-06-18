@class NSDictionary, UIMovieScrubber, PLSlalomRegionEditor, PLProgressStack, NSMutableArray, NSString, PLPhotoBakedThumbnails, UIImage, UIActivityIndicatorView, NSTimer, PLVideoPosterFrameView, NSArray, NSMutableDictionary, PLMoviePlayerController, PFVideoAdjustments, PLVideoEditingOverlayView, NSObject, NSLock, UIView, PFVideoAVObjectBuilder, AVAssetExportSession, PLPhotoTileViewController, UIImageView, PLManagedAsset, NSURL;
@protocol PLVideoViewDelegate, OS_dispatch_queue, PLVideoOverlayButton;

@interface PLVideoView : UIView <UIMovieScrubberDelegate, UIMovieScrubberDataSource, PLMoviePlayerControllerDelegate, PLSlalomRegionEditorDelegate> {
    PLManagedAsset *_videoCameraImage;
    NSString *_pathToOriginalVideo;
    NSURL *_videoURL;
    PLPhotoTileViewController *_imageTile;
    UIView *_videoOverlayBackgroundView;
    PLVideoEditingOverlayView *_trimMessageView;
    UIImage *_posterFrameImage;
    UIImage *_snapshotImage;
    long long _scaleMode;
    UIView *_scrubberTitleView;
    NSTimer *_scrubberUpdateTimer;
    NSDictionary *_thumbnailOptionsDict;
    struct CGSize { double width; double height; } _thumbnailSize;
    PLPhotoBakedThumbnails *_bakedLandscapeThumbnails;
    PLPhotoBakedThumbnails *_bakedPortraitThumbnails;
    AVAssetExportSession *_exportSession;
    double _remakerStartTime;
    double _remakerEndTime;
    NSString *_trimmedPath;
    NSString *_videoPathAfterTrim;
    NSTimer *_trimProgressTimer;
    PLManagedAsset *_trimmedVideoClip;
    float _progress;
    PLMoviePlayerController *_moviePlayer;
    id<PLVideoViewDelegate> _delegate;
    double _maximumTrimLength;
    double _lastScrubbedValue;
    double _lastActualValue;
    double _duration;
    double _cachedCurrentPlaybackTime;
    NSArray *_imageGenerators;
    NSLock *_thumbnailReqlock;
    NSObject<OS_dispatch_queue> *_thumbnailReqQueue;
    AVAssetExportSession *_airplayExportSession;
    BOOL _isAirPlay;
    unsigned char _showsPlayButton : 1;
    unsigned char _showsScrubber : 1;
    unsigned char _canEdit : 1;
    unsigned char _loadMediaImmediately : 1;
    unsigned char _scrubberIsSubview : 1;
    unsigned char _viewWillAppear : 1;
    unsigned char _didLayout : 1;
    unsigned char _wasPlayingBeforeScrub : 1;
    unsigned char _playFromBeginning : 1;
    unsigned char _needsReloadScrubberThumbnails : 1;
    unsigned char _playing : 1;
    unsigned char _editing : 1;
    unsigned char _disableEditAfterTrim : 1;
    unsigned char _scrubbing : 1;
    unsigned char _scrubbingToRight : 1;
    unsigned char _deleteOriginalFile : 1;
    unsigned char _passthroughTrimming : 1;
    unsigned char _preparingMoviePlayer : 1;
    unsigned char _preparedMoviePlayer : 1;
    unsigned char _isMoviePlayerActive : 1;
    unsigned char _moviePlayerIsReady : 1;
    unsigned char _moviePlayerIsReadyForDisplay : 1;
    unsigned char _moviePlayerDidBuffer : 1;
    unsigned char _showingOverlay : 1;
    unsigned char _showingScrubber : 1;
    unsigned char _showScrubberWhenMovieIsReady : 1;
    unsigned char _playbackDidBegin : 1;
    unsigned char _loadScrubberThumbnails : 1;
    unsigned char _videoIsLandscape : 1;
    unsigned char _canCreateMetadata : 1;
    unsigned char _createPreviewPosterFrame : 1;
    unsigned char _isTrimming : 1;
    unsigned char _wasTrimmedInPlace : 1;
    unsigned char _remakingFailed : 1;
    NSMutableArray *_summaryThumbnailRequestTimestamps;
    NSMutableArray *_detailThumbnailRequestTimestamps;
    UIMovieScrubber *_scrubber;
    PLSlalomRegionEditor *_slalomRegionEditor;
    NSMutableDictionary *_cachedThumbnails;
    NSArray *_landscapeSummaryThumbnailTimestamps;
    NSArray *_portraitSummaryThumbnailTimestamps;
    UIActivityIndicatorView *_spinner;
    UIActivityIndicatorView *_shadowSpinner;
    UIView<PLVideoOverlayButton> *_videoOverlayPlayButton;
    BOOL _useLandscapeCache;
    double _videoStreamingStartTime;
}

@property (readonly, retain, nonatomic) NSString *_pathForVideoPreviewFile;
@property (readonly, retain, nonatomic) NSString *_pathForPrebakedLandscapeScrubberThumbnails;
@property (readonly, retain, nonatomic) NSString *_pathForPrebakedPortraitScrubberThumbnails;
@property (readonly, nonatomic) BOOL _mediaIsPlayable;
@property (readonly, nonatomic) BOOL _didSetPhotoData;
@property (nonatomic) BOOL _didInsertMoviePlayerView;
@property (nonatomic, setter=_setDidEditSlalom:) BOOL _didEditSlalom;
@property (readonly, nonatomic) PFVideoAVObjectBuilder *_videoAVObjectBuilder;
@property (readonly, nonatomic) BOOL _isFetchingVideo;
@property (nonatomic, setter=_setLocalVideoUnavailable:) BOOL _localVideoUnavailable;
@property (readonly, nonatomic) long long _expectedNotificationsCount;
@property (readonly, nonatomic) PFVideoAdjustments *_adjustmentsToCommit;
@property (nonatomic, setter=_setCanAttemptFetchingVideoDerivative:) BOOL _canAttemptFetchingVideoDerivative;
@property (nonatomic, setter=_setAttemptFetchingVideoDerivative:) BOOL _attemptFetchingVideoDerivative;
@property (retain, nonatomic) PLProgressStack *trimProgressStack;
@property (readonly, nonatomic) BOOL _slalomRegionEditorCreatedForScrubber;
@property (readonly, retain, nonatomic) NSString *pathForVideoFile;
@property (nonatomic) id<PLVideoViewDelegate> delegate;
@property (nonatomic) PLPhotoTileViewController *imageTile;
@property (readonly, nonatomic) PLManagedAsset *videoCameraImage;
@property (retain, nonatomic) PLManagedAsset *trimmedVideoClip;
@property (nonatomic) BOOL allowSlalomEditor;
@property (readonly, nonatomic) UIView *scrubberBackgroundView;
@property (readonly, nonatomic) UIImage *posterFrameImage;
@property (readonly, retain, nonatomic) PLVideoPosterFrameView *posterFrameView;
@property (readonly, nonatomic) double duration;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double endTime;
@property (readonly, nonatomic) NSString *videoPathAfterTrim;
@property (readonly, nonatomic) UIImageView *previewImageView;
@property (nonatomic) BOOL showsPlayOverlay;
@property (nonatomic) BOOL showsScrubber;
@property (nonatomic) BOOL prepareMoviePlayerForScrubberAutomatically;
@property (nonatomic) BOOL loadMediaImmediately;
@property (nonatomic) BOOL shouldPlayVideoWhenViewAppears;
@property (nonatomic) BOOL canEdit;
@property (nonatomic) BOOL scrubberIsSubview;
@property (nonatomic) double scrubberWidth;
@property (nonatomic) double currentTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_dequeueOverlayPlayButton;
+ (void)_enqueueOverlayPlayButton:(id)a0;
+ (id)videoViewForVideoFileAtURL:(id)a0;

- (void)_setDuration:(double)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)willMoveToSuperview:(id)a0;
- (void)_reset;
- (void)applicationWillResignActive;
- (void)play;
- (void)didMoveToSuperview;
- (void)pause;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stop;
- (void)applicationDidEnterBackground;
- (BOOL)isPlaying;
- (void)setProgress:(id)a0;
- (void)_deleteFileAtPath:(id)a0;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)forceStop;
- (void)_networkReachabilityDidChange:(id)a0;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)layoutSubviews;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)viewDidAppear;
- (void)_screenDidConnect:(id)a0;
- (void)_screenDidDisconnect:(id)a0;
- (void)movieScrubber:(id)a0 editingEndValueDidChange:(double)a1;
- (void)movieScrubber:(id)a0 editingStartValueDidChange:(double)a1;
- (id)movieScrubber:(id)a0 evenlySpacedTimestamps:(int)a1 startingAt:(id)a2 endingAt:(id)a3;
- (void)movieScrubber:(id)a0 requestThumbnailImageForTimestamp:(id)a1;
- (void)movieScrubber:(id)a0 requestThumbnailImageForTimestamp:(id)a1 isSummaryThumbnail:(BOOL)a2;
- (void)movieScrubber:(id)a0 valueDidChange:(double)a1;
- (void)movieScrubber:(id)a0 widthDelta:(float)a1 originXDelta:(float)a2;
- (void)movieScrubber:(id)a0 willZoomToMinimumValue:(double)a1 maximumValue:(double)a2;
- (void)movieScrubberDidBeginAnimatingZoom:(id)a0;
- (void)movieScrubberDidBeginEditing:(id)a0;
- (void)movieScrubberDidBeginScrubbing:(id)a0 withHandle:(int)a1;
- (void)movieScrubberDidCancelEditing:(id)a0;
- (void)movieScrubberDidEndAnimatingZoom:(id)a0;
- (void)movieScrubberDidEndScrubbing:(id)a0 withHandle:(int)a1;
- (void)movieScrubberDidFinishRequestingThumbnails:(id)a0;
- (double)movieScrubberDuration:(id)a0;
- (void)movieScrubberEditingAnimationFinished:(id)a0;
- (double)movieScrubberThumbnailAspectRatio:(id)a0;
- (void)movieScrubberWillBeginEditing:(id)a0;
- (void)movieScrubberWillBeginRequestingThumbnails:(id)a0;
- (void)setMaximumTrimLength:(double)a0;
- (id)_moviePlayer;
- (id)_pathForOriginalFile;
- (void)viewDidDisappear;
- (BOOL)isTrimming;
- (void)handleDoubleTap;
- (BOOL)_canAccessVideo;
- (void)_commitPendingAdjustmentsUpdate;
- (double)_thumbnailTimeFromScrubberTime:(double)a0;
- (void)_addThumbnailRequestForTimestamp:(id)a0 isSummaryThumbnail:(BOOL)a1;
- (void)_removeScrubber;
- (void)_serviceImageGenerationRequests;
- (void)hideTrimMessage;
- (void)updateScaleMode;
- (id)_assetForVideoPath:(id)a0;
- (id)_assetForVideoURL:(id)a0;
- (BOOL)_canAirPlayCurrentVideo;
- (BOOL)_canCreateMetadata;
- (BOOL)_canEditDuration:(double)a0;
- (BOOL)_canHandleAdjustmentData:(id)a0;
- (BOOL)_canPlayCloudSharedStreamedVideoWithLocalVideo;
- (void)_cancelAirplayExportSession;
- (void)_cancelDelayedCommitPendingAdjustmentsUpdate;
- (void)_cancelRemaking:(id)a0;
- (void)_clearImageGenerators;
- (void)_commitPendingAdjustmentsUpdateAndWait:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_configureImageGenerator:(id)a0 thumbnailSize:(struct CGSize { double x0; double x1; })a1 forSummaryThumbnails:(BOOL)a2;
- (void)_configurePlayerForStreamedVideoIfNecessary;
- (void)_createScrubberIfNeeded;
- (void)_didBeginPlayback;
- (void)_didScrubToValue:(double)a0 withHandle:(int)a1;
- (void)_displayPlaySpinner;
- (void)_enqueueAdjustmentsForCommit;
- (void)_exportCompletedWithSuccess:(BOOL)a0;
- (void)_fetchLocalContentEditingInput;
- (void)_fetchNonlocalVideo;
- (id)_filePathForFlattenedVideo;
- (id)_filePathForFlattenedVideoMetadata;
- (void)_flattenVideoWithCompletionHandler:(id /* block */)a0;
- (void)_handleScreenConnectionChange:(BOOL)a0;
- (void)_hideTrimMessageView:(BOOL)a0;
- (void)_hideVideoOverlay:(BOOL)a0;
- (void)_informDelegateAboutProgressChange:(float)a0;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 videoCameraImage:(id)a1 orientation:(long long)a2;
- (void)_insertMoviePlayerViewIfNecessary;
- (void)_invalidateSnapshotImage;
- (BOOL)_isFlattenedVideoUpToDate;
- (id)_loadThumbnailsIntoDictionary:(id)a0 isLandscape:(BOOL)a1 aspectRatio:(float)a2;
- (BOOL)_mediaIsCloudSharedStreamedVideo;
- (BOOL)_mediaIsVideo;
- (id)_metadataForFlattenedVideo;
- (double)_movieScrubberDuration;
- (double)_movieTimeFromScrubberTime:(double)a0;
- (id)_optionsForAVURLAsset;
- (void)_playbackFinished;
- (BOOL)_playerIsAirplay;
- (void)_prepareAndResumePlayback;
- (BOOL)_prepareMoviePlayerIfNeeded;
- (id)_readMetadataFromPath:(id)a0;
- (void)_reloadScrubberThumbnailsIfNeeded;
- (void)_removePlaySpinner;
- (void)_removeScrubberUpdateTimer;
- (void)_removeTrimProgressTimer;
- (void)_requestPreviewPosterFrameForVideoSize:(struct CGSize { double x0; double x1; })a0;
- (void)_resetScrubberUpdateTimer;
- (void)_resetTrimProgressTimer;
- (void)_saveCachedThumbnailsIfNecessary;
- (void)_savePreviewPosterFrameImage:(struct CGImage { } *)a0;
- (void)_scrubToMovieTime:(double)a0;
- (void)_scrubToSlalomRegionEditorStartHandle:(BOOL)a0;
- (void)_scrubberAnimationFinished;
- (double)_scrubberBackgroundHeight;
- (double)_scrubberStartTime;
- (double)_scrubberTimeFromMovieTime:(double)a0;
- (BOOL)_scrubberTimeNeedsMapping;
- (void)_setMoviePlayerActive:(BOOL)a0;
- (void)_setNeedsReloadScrubberThumbnails:(BOOL)a0;
- (void)_setPlaybackDidBegin:(BOOL)a0;
- (void)_setPlaying:(BOOL)a0;
- (void)_setupMoviePlayerIfNecessary;
- (BOOL)_shouldPlayFlattenedVideo;
- (BOOL)_shouldShowSlalomEditor;
- (BOOL)_shouldStreamCloudPhotoLibraryVideo;
- (BOOL)_shouldStreamVideo;
- (void)_showVideoOverlay;
- (void)_tearDownMoviePlayer;
- (id)_thumbnailSourceAsset;
- (void)_thumbnailsWereRegenerated:(id)a0 error:(id)a1 contextInfo:(void *)a2;
- (void)_updateForEditing;
- (void)_updatePosterFrameVisibility;
- (void)_updatePosterImageView;
- (void)_updateScaleModeForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_updateScrubberForSlowMotion;
- (void)_updateScrubberFrame;
- (void)_updateScrubberValue;
- (void)_updateScrubberVisibilityWithDuration:(double)a0;
- (void)_updateSlalomRegionEditorRange;
- (void)_updateSlalomRegionEditorState;
- (void)_updateSnapshotImage;
- (void)_updateTrimProgress;
- (void)_updateVideoAVObjectBuilderFromContentEditingInput:(id)a0;
- (void)_verifyOrRestartPlayback;
- (void)_videoOverlayFadeOutDidFinish;
- (id)_videoSnapshot;
- (void)_writeMetadata:(id)a0 toPath:(id)a1;
- (void)cancelTrim;
- (void)commitPendingUpdatesWithCompletionHandler:(id /* block */)a0;
- (void)importerFinishedProcessingTrimmedVideo:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 videoCameraImage:(id)a1 orientation:(long long)a2;
- (void)moviePlayerBufferingStateDidChange:(id)a0;
- (void)moviePlayerControllerDidBecomeActiveController:(id)a0;
- (BOOL)moviePlayerControllerShouldAllowExternalPlayback:(id)a0;
- (void)moviePlayerControllerWillResignAsActiveController:(id)a0;
- (void)moviePlayerDidChangeExternalPlaybackType:(id)a0;
- (void)moviePlayerDurationAvailable:(id)a0;
- (void)moviePlayerEncounteredAuthenticationError:(id)a0;
- (BOOL)moviePlayerExitRequest:(id)a0 exitReason:(int)a1;
- (void)moviePlayerHeadsetNextTrackPressed:(id)a0;
- (void)moviePlayerHeadsetPlayPausePressed:(id)a0;
- (void)moviePlayerHeadsetPreviousTrackPressed:(id)a0;
- (void)moviePlayerPlaybackDidEnd:(id)a0;
- (void)moviePlayerPlaybackRateDidChange:(id)a0;
- (void)moviePlayerPlaybackStateDidChange:(id)a0 fromPlaybackState:(unsigned long long)a1;
- (void)moviePlayerReadyToDisplay:(id)a0;
- (void)moviePlayerReadyToPlay:(id)a0;
- (id)moviePlayerRequestsPickedAirplayRoute:(id)a0;
- (BOOL)moviePlayerShouldNotifyOnPreparationError:(id)a0;
- (void)moviePlayerUpdatedDestinationPlaceholder:(id)a0;
- (void)moviePlayerWasSuspendedDuringPlayback:(id)a0;
- (id)movieScrubber:(id)a0 timestampsStartingAt:(id)a1 endingAt:(id)a2 maxCount:(int)a3;
- (id)newPreviewImageData:(id *)a0;
- (void)notifyOfChange:(id)a0 shouldReloadBlock:(id /* block */)a1;
- (void)notifyRequiredResourcesDownloaded;
- (void)playButtonClicked:(id)a0;
- (BOOL)playingToAirTunes;
- (BOOL)playingToVideoOut;
- (void)prepareMoviePlayer;
- (void)removeVideoOverlay;
- (void)setPosterFrameImage:(id)a0;
- (void)setShowsScrubber:(BOOL)a0 duration:(double)a1;
- (BOOL)shouldShowCopyCalloutAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)showTrimMessage:(id)a0 withBottomY:(float)a1;
- (id)slalomRegionEditor;
- (void)slalomRegionEditorDidBeginEditing:(id)a0 withStartHandle:(BOOL)a1;
- (void)slalomRegionEditorDidEndEditing:(id)a0;
- (void)slalomRegionEditorEndValueChanged:(id)a0;
- (void)slalomRegionEditorRequestForceUnzoom:(id)a0;
- (BOOL)slalomRegionEditorRequestForceZoom:(id)a0;
- (void)slalomRegionEditorStartValueChanged:(id)a0;
- (void)toggleScaleMode:(float)a0;
- (void)updateForRotationWithDuration:(double)a0 isLandscape:(BOOL)a1;
- (id)videoOverlayPlayButton;
- (id)videoScrubber;

@end
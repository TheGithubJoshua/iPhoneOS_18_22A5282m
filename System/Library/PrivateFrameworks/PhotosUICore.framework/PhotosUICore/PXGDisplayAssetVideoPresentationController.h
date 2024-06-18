@class PXVideoSessionManager, NSMutableDictionary, PXVideoSessionManagerDisplayAssetOptions, NSString, PXGVideoSessionPixelBufferSource, PXVideoSession, NSObject;
@protocol OS_dispatch_queue, PXGDisplayAssetVideoPresentationControllerDelegate, PXDisplayAsset;

@interface PXGDisplayAssetVideoPresentationController : PXObservable <PXStoryVideoPresentationController, PXChangeObserver, PXGMutableDisplayAssetVideoPresentationController_Private> {
    void *_videoSessionPresenter;
}

@property (readonly, nonatomic) id<PXDisplayAsset> displayAsset;
@property (readonly, nonatomic) BOOL shouldRewindOnBackAction;
@property (retain, nonatomic) PXVideoSession *videoSession;
@property (retain, nonatomic) PXGVideoSessionPixelBufferSource *pixelBufferSource;
@property (nonatomic) long long pixelBufferSourceCounter;
@property (nonatomic) float pendingPrerollRate;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } pendingSeekTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } pendingSeekToleranceBefore;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } pendingSeekToleranceAfter;
@property (retain, nonatomic) NSMutableDictionary *timeObserversByTime;
@property (nonatomic) float volume;
@property (nonatomic) BOOL shouldFadeVolumeChange;
@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (readonly, nonatomic) long long loadingPriority;
@property (readonly, nonatomic) id<PXDisplayAsset> displayAsset;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (readonly, nonatomic) PXVideoSessionManager *videoSessionManager;
@property (readonly, nonatomic) PXVideoSessionManagerDisplayAssetOptions *options;
@property (readonly, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<PXGDisplayAssetVideoPresentationControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL shouldDisplayPreviousNonnullPixelBuffer;
@property (readonly, nonatomic) BOOL shouldDisableAutomaticPixelBufferUpdates;
@property (readonly, nonatomic) BOOL isReadyForImmediatePlayback;
@property (readonly, nonatomic) BOOL isVisible;
@property (readonly, nonatomic) BOOL resetsDesiredPlayStateOnHide;
@property (readonly, nonatomic) long long desiredPlayState;
@property (readonly, nonatomic) long long actualPlayState;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } desiredTime;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } actualTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } beginningTime;
@property (readonly, nonatomic) BOOL isAtEnd;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } videoDuration;
@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } playbackTimeRange;
@property (readonly, nonatomic) BOOL isLoopingEnabled;
@property (readonly, nonatomic) BOOL isCrossfadingFromStillToVideoEnabled;
@property (readonly, nonatomic) BOOL isCleanApertureCompensationEnabled;
@property (readonly, nonatomic) NSString *audioSessionCategory;
@property (readonly, nonatomic) BOOL isDuckingOtherAudioEnabled;
@property (readonly, nonatomic) BOOL isMixingAudioWithOthersEnabled;
@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } playbackStartTime;

- (id)init;
- (void)setAudioSessionCategory:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (void)setIsVisible:(BOOL)a0;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)dealloc;
- (void)setVideoDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setIsAtEnd:(BOOL)a0;
- (void)rewind;
- (void)seekToBeginning;
- (void)setDesiredTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setIsReadyForImmediatePlayback:(BOOL)a0;
- (void)_invalidatePresentationControllerState;
- (void)_invalidateVideoSession;
- (void)_notifyReachedTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_performPendingPrerollIfNeeded;
- (void)_performPendingSeekIfNeeded;
- (void)_performPrerollAtRate:(float)a0;
- (void)_performSeekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toleranceBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 toleranceAfter:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)_prerollCompletedSuccessfully:(BOOL)a0;
- (void)_setupPixelBufferSourceIfNeededWithMediaProvider:(id)a0;
- (void)_setupVideoSessionIfNeededWithMediaProvider:(id)a0;
- (BOOL)_timeConversionNeeded;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_timeConvertedFromVideoSessionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })_timeRangeConvertedFromVideoSessionTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)_updatePresentationControllerState;
- (void)_updateVideoSession;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_videoSessionTimeConvertedFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })_videoSessionTimeRangeConvertedFromTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)initWithDisplayAsset:(id)a0 accessQueue:(id)a1;
- (id)initWithDisplayAsset:(id)a0 accessQueue:(id)a1 videoSessionManager:(id)a2 options:(id)a3 loadingPriority:(long long)a4;
- (BOOL)isPendingSeekScheduled;
- (id)pixelBufferSourceWithMediaProvider:(id)a0;
- (void)prerollForImmediatePlaybackAtRate:(float)a0 withMediaProvider:(id)a1;
- (void)recyclePixelBufferSource;
- (void)setActualPlayState:(long long)a0;
- (void)setActualTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setDesiredPlayState:(long long)a0;
- (void)setDesiredTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toleranceBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 toleranceAfter:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)setIsCleanApertureCompensationEnabled:(BOOL)a0;
- (void)setIsCrossfadingFromStillToVideoEnabled:(BOOL)a0;
- (void)setIsDuckingOtherAudioEnabled:(BOOL)a0;
- (void)setIsLoopingEnabled:(BOOL)a0;
- (void)setIsMixingAudioWithOthersEnabled:(BOOL)a0;
- (void)setPlaybackTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)setResetsDesiredPlayStateOnHide:(BOOL)a0;
- (void)setShouldDisableAutomaticPixelBufferUpdates:(BOOL)a0;
- (void)setShouldDisplayPreviousNonnullPixelBuffer:(BOOL)a0;
- (void)setVolume:(float)a0 withFade:(BOOL)a1;
- (void)startObservingBoundaryTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)stopObservingBoundaryTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)synchronouslySeekToDesiredTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 updatePixelBufferSource:(BOOL)a1;
- (id)videoSessionWithMediaProvider:(id)a0;

@end
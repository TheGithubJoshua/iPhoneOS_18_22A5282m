@class AVPictureInPicturePlaybackState, AVPictureInPictureController, AVSampleBufferDisplayLayerPlaybackDelegateAdapter, AVValueTiming, AVObservationController;
@protocol AVPictureInPictureSampleBufferPlaybackDelegate;

@interface AVSampleBufferDisplayLayerPlayerController : AVPlayerController {
    AVValueTiming *_timing;
}

@property (copy, nonatomic) AVPictureInPicturePlaybackState *playbackState;
@property (retain, nonatomic) AVObservationController *sbdlObservationController;
@property (nonatomic, getter=isPictureInPictureAvailable) BOOL pictureInPictureAvailable;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } contentTimeRange;
@property (nonatomic) long long status;
@property (nonatomic) long long timeControlStatus;
@property (retain, nonatomic) AVSampleBufferDisplayLayerPlaybackDelegateAdapter *playbackDelegateAdapter;
@property (weak, nonatomic) AVPictureInPictureController *pictureInPictureController;
@property (weak, nonatomic) id<AVPictureInPictureSampleBufferPlaybackDelegate> playbackDelegate;
@property (nonatomic) struct CGSize { double width; double height; } enqueuedBufferDimensions;

+ (id)keyPathsForValuesAffectingTiming;
+ (id)keyPathsForValuesAffectingPlaying;
+ (id)keyPathsForValuesAffectingRate;
+ (id)keyPathsForValuesAffectingHasLiveStreamingContent;
+ (id)keyPathsForValuesAffectingContentDimensions;
+ (id)keyPathsForValuesAffectingTimeControlStatus;
+ (id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingContentDuration;
+ (id)keyPathsForValuesAffectingContentDurationWithinEndTimes;
+ (id)keyPathsForValuesAffectingPictureInPicturePossible;
+ (id)keyPathsForValuesAffectingMaxTiming;
+ (id)keyPathsForValuesAffectingPaused;

- (double)contentDurationWithinEndTimes;
- (id)init;
- (BOOL)hasLiveStreamingContent;
- (double)currentTimeWithinEndTimes;
- (double)rate;
- (struct CGSize { double x0; double x1; })contentDimensions;
- (void)_updateStatus;
- (double)contentDuration;
- (id)maxTiming;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_currentSBDLTime;
- (id)timing;
- (void)setPictureInPictureInterrupted:(BOOL)a0;
- (void)_updateBackgroundAudioPlaybackPolicy;
- (void)pauseForAllCoordinatedPlaybackParticipants:(BOOL)a0;
- (void)_startObservation;
- (void)setPlaying:(BOOL)a0;
- (void)togglePlaybackEvenWhenInBackground:(id)a0;
- (void)_updatePlaybackStateTiming;
- (void)invalidatePlaybackState;
- (BOOL)isPlaying;
- (void)seekByTimeInterval:(double)a0 toleranceBefore:(double)a1 toleranceAfter:(double)a2;
- (BOOL)hasSeekableLiveStreamingContent;
- (BOOL)isPictureInPicturePossible;
- (double)_effectiveRate;
- (id)minTiming;
- (void).cxx_destruct;
- (void)dealloc;

@end

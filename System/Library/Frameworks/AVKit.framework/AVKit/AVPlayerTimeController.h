@class NSArray, AVValueTiming, AVObservationController, AVPlayer;

@interface AVPlayerTimeController : NSObject <AVTimeControlling>

@property (retain, nonatomic) AVValueTiming *timing;
@property (retain, nonatomic) AVValueTiming *minTiming;
@property (retain, nonatomic) AVValueTiming *maxTiming;
@property (readonly, nonatomic, getter=isReadyToPlay) BOOL readyToPlay;
@property (readonly, nonatomic) AVObservationController *observationController;
@property (retain, nonatomic) AVPlayer *player;
@property (readonly, nonatomic) double minTime;
@property (readonly, nonatomic) double maxTime;
@property (readonly, nonatomic) double contentDuration;
@property (readonly, nonatomic) double contentDurationWithinEndTimes;
@property (readonly, nonatomic) NSArray *seekableTimeRanges;
@property (readonly, getter=isCompletelySeekable) BOOL completelySeekable;
@property (readonly, nonatomic) BOOL hasSeekableLiveStreamingContent;
@property (readonly, nonatomic) BOOL canSeek;
@property (readonly, nonatomic, getter=isSeeking) BOOL seeking;
@property (readonly, nonatomic) double seekToTime;

+ (id)keyPathsForValuesAffectingReversePlaybackEndTime;
+ (id)keyPathsForValuesAffectingForwardPlaybackEndTime;
+ (id)keyPathsForValuesAffectingReadyToPlay;
+ (id)keyPathsForValuesAffectingSeekableTimeRanges;
+ (id)keyPathsForValuesAffectingContentDuration;
+ (id)keyPathsForValuesAffectingContentDurationWithinEndTimes;
+ (id)keyPathsForValuesAffectingMaxTime;

- (struct { long long x0; int x1; unsigned int x2; long long x3; })forwardPlaybackEndTime;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })reversePlaybackEndTime;
- (void)_updateTiming;
- (void)startTimingObservation;
- (id)initWithPlayer:(id)a0;
- (void)stopTimingObservation;
- (void)seekToTime:(double)a0 toleranceBefore:(double)a1 toleranceAfter:(double)a2;
- (void).cxx_destruct;
- (void)_updateMinAndMaxTiming;
- (void)dealloc;

@end

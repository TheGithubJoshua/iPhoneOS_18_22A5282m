@class AVPlayer, AVPlayerInterstitialEventController, AVTimeRange, AVTimeRangeCollection, AVPlayerTimeController, AVObservationController, AVPlayerInterstitialEventMonitor;
@protocol AVInterstitialControllerDelegateManager, NSObject, AVTimeControlling;

@interface AVInterstitialController : NSObject {
    id<NSObject> _playerItemTimeJumpedObserver;
    id<NSObject> _playerInterstitialEventsChangedObserver;
    id<NSObject> _playerInterstitialCurrentEventChangedObserver;
}

@property (retain, nonatomic) AVPlayerInterstitialEventMonitor *eventMonitor;
@property (retain, nonatomic) AVPlayerInterstitialEventController *eventController;
@property (retain, nonatomic) AVPlayer *interstitialPlayer;
@property (retain, nonatomic) AVObservationController *kvo;
@property (retain, nonatomic) AVObservationController *kvoPlayerItem;
@property (retain, nonatomic) AVTimeRange *interstitialTimeRangeInProgress;
@property (retain, nonatomic) id interstitialBoundaryTimeObserver;
@property (retain, nonatomic) AVTimeRangeCollection *interstitialTimeRangeCollection;
@property (retain, nonatomic) AVPlayer *player;
@property (weak, nonatomic) id<AVInterstitialControllerDelegateManager> delegateManager;
@property (readonly, nonatomic) AVTimeRange *currentInterstitialTimeRange;
@property (readonly, nonatomic) AVTimeRange *previousInterstitialTimeRange;
@property (readonly, nonatomic) double currentDisplayTime;
@property (readonly, nonatomic) double timeRemainingInCurrentInterstitial;
@property (readonly, nonatomic) double continuationTimeAfterInterstitial;
@property (copy, nonatomic) id /* block */ didEnterInterstitialTimeRangeBlock;
@property (copy, nonatomic) id /* block */ didLeaveInterstitialTimeRangeBlock;
@property (copy, nonatomic) id /* block */ didLeaveRequiredInterstitialTimeRangeBlock;
@property (copy, nonatomic) id /* block */ skipInterstitialTimeRangeBlock;
@property (readonly, nonatomic) BOOL shouldEnforceInterstitialPolicy;
@property (readonly, nonatomic) BOOL requiresLinearPlayback;
@property (readonly, nonatomic) AVPlayerTimeController<AVTimeControlling> *interstitialTimingController;

+ (id)newTimeRangeCollectionForPlayerItem:(id)a0 reversePlaybackEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 forwardPlaybackEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
+ (id)interstitialQueue;
+ (id)newTimeRangeCollectionForPlayerItem:(id)a0;

- (BOOL)isLive;
- (void)skipInterstitialTimeRange:(id)a0;
- (void)_stopObservingInterstitialTimeRanges;
- (void)_sendInterstitialBoundaryNotificationsForTime:(double)a0;
- (double)elapsedTimeForInterstitialPlayer;
- (id)init;
- (void)didPresentInterstitialTimeRange:(id)a0;
- (id)_copySynthesizedInterstitialTimeRanges;
- (BOOL)loadDurationOfCurrentOrNextInterstitialEvent:(id /* block */)a0;
- (void)willPresentInterstitialTimeRange:(id)a0;
- (id)nextInterstitialTimeRange;
- (id)currentOrEstimatedDate;
- (void)_updateInterstitialTimeRangeCollection;
- (void)cancelCurrentPlayerInterstitialEvent;
- (void)sendPendingInterstitialBoundaryNotificationIfNeeded;
- (void)sendInterstitialBoundaryNotificationsForTimeJumpIfNeeded;
- (double)displayTimeFromTime:(double)a0;
- (void)didBeginOrResumePlayback;
- (void)_sendInterstitialBoundaryNotificationForInterstitialTimeRange:(id)a0;
- (id)interstitialTimeRangeForPlayerInterstitialEvent:(id)a0;
- (double)currentTime;
- (void)invalidate;
- (double)timeToSeekAfterUserNavigatedFromTime:(double)a0 toTime:(double)a1;
- (void).cxx_destruct;
- (void)_sendInterstitialBoundaryNotificationsForEvent:(id)a0;
- (double)timeFromDisplayTime:(double)a0;
- (void)_startObservingInterstitialTimeRanges;
- (BOOL)_shouldSkipInterstitialTimeRange:(id)a0;
- (id)timeRangeForPlayerInterstitialEvent:(id)a0;
- (void)_setPendingTimeBoundary:(double)a0;
- (void)dealloc;
- (double)_pendingTimeBoundary;
- (void)updateSynthesizedInterstitialTimeRanges;
- (id)currentItem;
- (double)elapsedTimeWithinCurrentInterstitial;

@end

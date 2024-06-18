@class NSTimer, NSMutableArray, MNTracePlayerTimelineStream;
@protocol MNTracePlayerSchedulerDelegate;

@interface MNTracePlayerScheduler : NSObject {
    NSTimer *_timer;
    double _lastTimerScheduleTime;
    NSMutableArray *_timelineStreams;
    MNTracePlayerTimelineStream *_nextTimelineStream;
}

@property (weak, nonatomic) id<MNTracePlayerSchedulerDelegate> delegate;
@property (nonatomic) double speedMultiplier;
@property (nonatomic) double position;

- (id)init;
- (void)pause;
- (void).cxx_destruct;
- (void)resume;
- (void)dealloc;
- (void)_update;
- (void)_timerUpdated:(id)a0;
- (void)addTimelineStream:(id)a0;
- (void)removeAllTimelineStreams;
- (void)removeTimelineStream:(id)a0;

@end

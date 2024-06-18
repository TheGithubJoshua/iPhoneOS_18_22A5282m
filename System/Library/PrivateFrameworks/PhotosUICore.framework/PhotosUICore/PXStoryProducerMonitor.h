@class PXUpdater, NSString, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface PXStoryProducerMonitor : PXObservable <PXStoryMutableProducerMonitor, PXStoryQueueParticipant>

@property (class, copy, nonatomic) NSDate *currentDateForTesting;

@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) double currentTime;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double lastTime;
@property (readonly, nonatomic) float lastFractionCompleted;
@property (readonly, nonatomic) BOOL isLikelyToKeepUp;
@property (nonatomic) float estimatedFractionCompletedPlaybackSpeed;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)performChanges:(id /* block */)a0;
- (void)didPerformChanges;
- (void)_setNeedsUpdate;
- (void)setStartTime:(double)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)setLastTime:(double)a0;
- (void)_invalidateIsLikelyToKeepUp;
- (void)_updateIsLikelyToKeepUp;
- (id)initWithStoryQueue:(id)a0;
- (void)producerDidProduceResult:(id)a0;
- (void)setIsLikelyToKeepUp:(BOOL)a0;
- (void)setLastFractionCompleted:(float)a0;

@end

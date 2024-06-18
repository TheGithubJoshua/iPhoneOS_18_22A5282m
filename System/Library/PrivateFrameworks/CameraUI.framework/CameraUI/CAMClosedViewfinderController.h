@class NSMutableSet;
@protocol CAMClosedViewfinderControllerDelegate;

@interface CAMClosedViewfinderController : NSObject

@property (readonly, nonatomic) NSMutableSet *_reasonsForClosingViewfinder;
@property (nonatomic, setter=_setReferenceTime:) double _referenceTime;
@property (nonatomic, setter=_setReferenceTimeEvent:) long long _referenceTimeEvent;
@property (weak, nonatomic) id<CAMClosedViewfinderControllerDelegate> delegate;
@property (readonly, nonatomic, getter=isViewfinderClosed) BOOL viewfinderClosed;

- (void)_handleApplicationDidBecomeActive:(id)a0;
- (void)_handleApplicationWillEnterForeground:(id)a0;
- (void)_handleApplicationDidEnterBackground:(id)a0;
- (id)init;
- (void)_logWarningIfViewfinderStillClosed;
- (void)removeClosedViewfinderReason:(long long)a0;
- (BOOL)hasClosedViewfinderReason:(long long)a0;
- (void)removeClosedViewfinderReason:(long long)a0 afterDelay:(double)a1;
- (id)_descriptionStringForReferenceTimeEvent:(long long)a0;
- (void)_cancelDelayedLoggingForClosedViewfinder;
- (void)_scheduleLogWarningIfViewfinderStillClosedAfterDelay:(double)a0;
- (id)descriptionForTimeBetweenReferenceAndNow;
- (void)addClosedViewfinderReason:(long long)a0;
- (void).cxx_destruct;
- (void)_performDelayedRemovalOfReason:(id)a0;
- (void)_updateReferenceTimeToNowForEvent:(long long)a0;
- (void)dealloc;
- (void)cancelDelayedRemovalOfReason:(long long)a0;
- (id)_descriptionForReasons:(id)a0;
- (id)_descriptionStringForReason:(long long)a0;

@end
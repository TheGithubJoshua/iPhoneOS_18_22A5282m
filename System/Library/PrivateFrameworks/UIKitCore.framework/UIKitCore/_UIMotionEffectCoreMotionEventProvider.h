@class NSOperationQueue, CMMotionManager;

@interface _UIMotionEffectCoreMotionEventProvider : _UIMotionEffectEventProvider {
    CMMotionManager *_motionManager;
    NSOperationQueue *_motionEventQueue;
}

- (id)init;
- (void)setSlowUpdatesEnabled:(BOOL)a0;
- (double)slowUpdateIntervalForLogs;
- (void).cxx_destruct;
- (void)stopGeneratingEvents;
- (id)currentEvent;
- (void)startGeneratingEvents;
- (void)dealloc;
- (BOOL)shouldLogEvents;
- (double)fastUpdateIntervalForLogs;

@end

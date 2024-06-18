@protocol _UIMotionEffectEventConsumer;

@interface _UIMotionEffectEventProvider : NSObject

@property id<_UIMotionEffectEventConsumer> consumer;

- (void)setSlowUpdatesEnabled:(BOOL)a0;
- (double)slowUpdateIntervalForLogs;
- (void)stopGeneratingEvents;
- (id)currentEvent;
- (void)startGeneratingEvents;
- (BOOL)shouldLogEvents;
- (double)fastUpdateIntervalForLogs;
- (BOOL)wantsSynchronizedUpdates;

@end

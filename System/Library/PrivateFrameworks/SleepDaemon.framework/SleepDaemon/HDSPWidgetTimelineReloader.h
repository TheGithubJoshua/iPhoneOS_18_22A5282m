@class CHSTimelineController;

@interface HDSPWidgetTimelineReloader : NSObject <HDSPWidgetReloader> {
    CHSTimelineController *_timelineController;
}

- (id)init;
- (void)reloadSleepWidget;
- (void).cxx_destruct;

@end

@class NSTimer;

@interface TodayInvalidationTimerWrapper : NSObject {
    NSTimer *_tzSupportDayRolloverTimer;
}

- (void)invalidateTodayAndNotifyIfChanged;
- (id)initWithCalendar:(id)a0;
- (void)_setupTimeZoneTimerWithCalendar:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)todayChangedAfterInvalidation;
- (void)_killTimeZoneTimer;

@end

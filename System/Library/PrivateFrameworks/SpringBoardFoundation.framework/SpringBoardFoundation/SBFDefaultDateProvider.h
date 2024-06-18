@class NSString, NSMutableDictionary, NSTimer, NSCalendar;

@interface SBFDefaultDateProvider : NSObject <SBFDateProviding> {
    NSMutableDictionary *_minuteHandlers;
    unsigned long long _nextToken;
    NSTimer *_minuteTimer;
    NSCalendar *_calendar;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)removeMinuteUpdateHandler:(id)a0;
- (id)observeMinuteUpdatesWithHandler:(id /* block */)a0;
- (id)date;
- (void).cxx_destruct;
- (void)_minuteTimerFired;
- (void)_scheduleNextMinuteTimer;
- (void)_updateMinuteTimer;

@end

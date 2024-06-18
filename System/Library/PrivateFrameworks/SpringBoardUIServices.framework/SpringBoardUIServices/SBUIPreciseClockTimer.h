@class NSCalendar, NSMutableDictionary, CADisplayLink;

@interface SBUIPreciseClockTimer : NSObject {
    CADisplayLink *_displayLink;
    NSMutableDictionary *_minuteUpdateHandlers;
    unsigned long long _nextToken;
    NSCalendar *_calendar;
    long long _lastHour;
    long long _lastMinute;
}

+ (id)now;
+ (id)sharedInstance;

- (void)_updateDisplayLink;
- (id)init;
- (id)startMinuteUpdatesWithHandler:(id /* block */)a0;
- (void)_handleTimePassed;
- (void).cxx_destruct;
- (void)_updateDisplayLinkFrameIntervalForSecondsPastMinute:(double)a0;
- (void)stopMinuteUpdatesForToken:(id)a0;
- (void)dealloc;
- (void)_onDisplayLink:(id)a0;

@end

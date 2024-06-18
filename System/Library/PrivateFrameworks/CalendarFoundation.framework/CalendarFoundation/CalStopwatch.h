@class NSMutableDictionary;

@interface CalStopwatch : NSObject {
    BOOL _isRunning;
    unsigned long long _lastStartTime;
    unsigned long long _elapsedTime;
    BOOL _hasValidElapsedTime;
    NSMutableDictionary *_events;
}

@property BOOL usesSignalFlags;

- (id)init;
- (unsigned long long)elapsedTimeInNanoseconds;
- (void)markEventStart:(id)a0;
- (void)stop;
- (void)start;
- (double)markEventEnd:(id)a0;
- (double)markEventSplit:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)elapsedTimeAsString:(int)a0;
- (unsigned long long)elapsedTimeAsNumber:(int)a0;
- (void)reset;

@end

@class NSString;

@interface IMStopWatch : NSObject {
    unsigned long long _startTime;
    NSString *_descriptionString;
}

+ (void)initialize;
+ (id)stopwatch;
+ (id)stopwatchWithDescription:(id)a0;

- (id)init;
- (double)time;
- (void)report;
- (void)start;
- (void).cxx_destruct;
- (id)description;
- (void)reset;
- (void)setDescription:(id)a0;
- (void)reportWithMarker:(id)a0;

@end

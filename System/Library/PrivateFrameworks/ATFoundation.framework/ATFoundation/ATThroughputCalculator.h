@class ATMovingAverage;

@interface ATThroughputCalculator : NSObject {
    BOOL _suspended;
    double _lastUpdate;
    double _startTime;
    double _currentValue;
    ATMovingAverage *_average;
}

@property (readonly, nonatomic) double throughput;

- (id)init;
- (void)suspend;
- (BOOL)update:(double)a0;
- (void).cxx_destruct;
- (void)resume;

@end

@interface VKTimedAnimation : VKAnimation {
    double _duration;
    double _startTimestamp;
    double _lastTimestamp;
    BOOL _resuming;
    BOOL _startTimestampSet;
}

@property (copy, nonatomic) id /* block */ timingFunction;
@property (copy, nonatomic) id /* block */ stepHandler;

+ (void)setDragCoefficientGetter:(id /* block */)a0;

- (void)stopAnimation:(BOOL)a0;
- (id)init;
- (void)pause;
- (void)setDuration:(double)a0;
- (id)initWithDuration:(double)a0 name:(id)a1;
- (void)onTimerFired:(double)a0;
- (id)initWithDuration:(double)a0 priority:(long long)a1 name:(id)a2;
- (void).cxx_destruct;
- (void)resume;
- (double)duration;
- (BOOL)timed;
- (id)initWithName:(id)a0;
- (id)initWithDuration:(double)a0;

@end

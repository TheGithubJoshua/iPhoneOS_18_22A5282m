@interface VKDynamicAnimation : VKAnimation {
    double _lastTimestamp;
    BOOL _resuming;
}

@property (copy, nonatomic) id /* block */ dynamicStepHandler;

- (void)stopAnimation:(BOOL)a0;
- (id)init;
- (void)pause;
- (void)onTimerFired:(double)a0;
- (BOOL)runsForever;
- (void).cxx_destruct;
- (void)resume;
- (void)setRunsForever:(BOOL)a0;

@end

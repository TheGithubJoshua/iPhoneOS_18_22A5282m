@interface QLPUTimedAnimationGroup : QLPUAnimationGroup {
    BOOL _areAnimationsPaused;
    double _pausedElapsedTime;
}

@property (nonatomic) double beginTime;
@property (readonly, nonatomic) double currentTime;

- (double)elapsedTime;
- (void)setElapsedTime:(double)a0;
- (void)updateAnimations;
- (id)init;
- (void)_update;
- (void)pauseAnimations;
- (void)resumeAnimations;

@end

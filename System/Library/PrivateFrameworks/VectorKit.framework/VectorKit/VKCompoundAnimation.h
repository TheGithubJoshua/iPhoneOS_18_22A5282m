@class NSMutableArray;

@interface VKCompoundAnimation : VKAnimation

@property (readonly, nonatomic) NSMutableArray *animations;
@property (copy, nonatomic) id /* block */ groupStepHandler;

- (BOOL)running;
- (void)stopAnimation:(BOOL)a0;
- (void)pause;
- (void)setDuration:(double)a0;
- (void)onTimerFired:(double)a0;
- (void)startWithRunner:(id)a0;
- (BOOL)runsForever;
- (void).cxx_destruct;
- (void)resume;
- (double)duration;
- (BOOL)timed;
- (void)setRunsForever:(BOOL)a0;
- (id)initWithAnimations:(id)a0;

@end

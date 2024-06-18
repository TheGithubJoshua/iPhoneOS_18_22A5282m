@class CASpringAnimation;

@interface HUSpringAnimationSettings : HUAnimationSettings

@property (readonly, nonatomic) CASpringAnimation *springAnimation;
@property (nonatomic) double mass;
@property (nonatomic) double stiffness;
@property (nonatomic) double damping;
@property (nonatomic) double initialVelocity;
@property (nonatomic) double completionEpsilon;

+ (id)criticallyDampedSpringSettings;

- (id)init;
- (double)delay;
- (void)setSpeed:(double)a0;
- (void)setDuration:(double)a0;
- (id)_basicAnimationForView:(id)a0 withKeyPath:(id)a1;
- (double)speed;
- (void)setTimingFunction:(id)a0;
- (void)setRepeatCount:(float)a0;
- (void)setDelay:(double)a0;
- (float)repeatCount;
- (void).cxx_destruct;
- (id)timingFunction;
- (double)duration;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_updateDuration;
- (id)_initWithSpringAnimation:(id)a0 completionEpsilon:(double)a1;
- (double)interpolatedProgressForProgress:(double)a0;

@end

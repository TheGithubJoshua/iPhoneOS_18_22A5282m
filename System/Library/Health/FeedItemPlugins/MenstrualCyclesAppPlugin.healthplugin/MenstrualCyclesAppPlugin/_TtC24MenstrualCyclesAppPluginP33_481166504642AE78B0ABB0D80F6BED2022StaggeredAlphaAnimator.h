@interface _TtC24MenstrualCyclesAppPluginP33_481166504642AE78B0ABB0D80F6BED2022StaggeredAlphaAnimator : NSObject <UIViewAnimating> {
    void /* unknown type, empty encoding */ backgroundAnimator;
    void /* unknown type, empty encoding */ foregroundAnimator;
}

@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) BOOL running;
@property (nonatomic) BOOL reversed;
@property (nonatomic) double fractionComplete;

- (BOOL)isReversed;
- (void)stopAnimation:(BOOL)a0;
- (id)init;
- (BOOL)isRunning;
- (void)pauseAnimation;
- (void)startAnimation;
- (void)startAnimationAfterDelay:(double)a0;
- (void)finishAnimationAtPosition:(long long)a0;
- (void).cxx_destruct;

@end

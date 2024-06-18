@interface TeaUI.ImplicitAnimationGroup : NSObject <UIViewAnimating, UIViewImplicitlyAnimating> {
    void /* unknown type, empty encoding */ animators;
}

@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) BOOL running;
@property (nonatomic) BOOL reversed;
@property (nonatomic) double fractionComplete;

- (BOOL)isReversed;
- (void)stopAnimation:(BOOL)a0;
- (BOOL)isRunning;
- (void)continueAnimationWithTimingParameters:(id)a0 durationFactor:(double)a1;
- (void)pauseAnimation;
- (void)startAnimation;
- (void)startAnimationAfterDelay:(double)a0;
- (void)finishAnimationAtPosition:(long long)a0;
- (void)addCompletion:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;

@end

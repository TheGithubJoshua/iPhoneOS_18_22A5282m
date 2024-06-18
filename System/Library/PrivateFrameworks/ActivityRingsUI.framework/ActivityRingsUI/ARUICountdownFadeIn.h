@interface ARUICountdownFadeIn : ARUICountdownDefaultAnimation <ARUICountdownAnimation>

+ (id)identifier;

- (double)delay;
- (BOOL)cancelable;
- (id)timingFunction;
- (double)duration;
- (id)identifier;
- (void)applyToCountdownView:(id)a0 completion:(id /* block */)a1;

@end

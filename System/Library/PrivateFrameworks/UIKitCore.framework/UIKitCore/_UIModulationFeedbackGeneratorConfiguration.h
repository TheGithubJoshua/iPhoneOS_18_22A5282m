@class _UIFeedback;
@protocol _UIFeedbackContinuousPlayable;

@interface _UIModulationFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration

@property (retain, nonatomic) _UIFeedback<_UIFeedbackContinuousPlayable> *feedback;
@property (copy, nonatomic) id /* block */ feedbackUpdateBlock;

+ (id)defaultConfiguration;
+ (id)sliderConfiguration;

- (id)feedbackKeyPaths;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)requiredSupportLevel;

@end

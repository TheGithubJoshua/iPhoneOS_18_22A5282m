@class _UIFeedback;
@protocol _UIFeedbackDiscretePlayable;

@interface _UIImpactFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration

@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *feedback;
@property (copy, nonatomic) id /* block */ feedbackUpdateBlock;
@property (nonatomic) double minimumInterval;

+ (id)defaultConfiguration;
+ (id)rigidConfiguration;
+ (id)softConfiguration;
+ (id)lightConfiguration;
+ (id)strongConfiguration;

- (id)feedbackKeyPaths;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)requiredSupportLevel;

@end

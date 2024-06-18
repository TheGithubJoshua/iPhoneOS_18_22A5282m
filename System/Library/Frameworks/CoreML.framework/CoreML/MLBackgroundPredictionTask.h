@class NSURL, MLModelConfiguration, MLPredictionOptions;

@interface MLBackgroundPredictionTask : MLBackgroundTask

@property (copy, nonatomic) NSURL *modelURL;
@property (copy, nonatomic) MLModelConfiguration *modelConfiguration;
@property (copy, nonatomic) MLPredictionOptions *predictionOptions;

+ (BOOL)supportsSecureCoding;
+ (Class)taskRunnerClass;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

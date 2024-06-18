@class NSDictionary;

@interface _UINotificationFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration

@property (nonatomic) BOOL includePrivateEvents;
@property (retain, nonatomic) NSDictionary *feedbacks;

+ (id)defaultConfiguration;
+ (id)privateConfiguration;
+ (id)privateConfigurationForTypes:(id)a0;

- (id)feedbackKeyPaths;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)defaultEnabled;

@end

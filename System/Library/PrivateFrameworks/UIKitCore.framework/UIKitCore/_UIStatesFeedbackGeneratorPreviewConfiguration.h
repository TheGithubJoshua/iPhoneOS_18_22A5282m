@interface _UIStatesFeedbackGeneratorPreviewConfiguration : _UIStatesFeedbackGeneratorConfiguration

+ (id)commitState;
+ (id)revealState;
+ (id)defaultConfiguration;
+ (id)previewState;
+ (id)cancelState;

- (long long)requiredSupportLevel;
- (BOOL)defaultEnabled;

@end

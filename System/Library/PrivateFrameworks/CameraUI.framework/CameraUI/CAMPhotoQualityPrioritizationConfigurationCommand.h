@interface CAMPhotoQualityPrioritizationConfigurationCommand : CAMCaptureCommand

@property (readonly, nonatomic) long long _photoQualityPrioritization;

- (id)initWithCoder:(id)a0;
- (id)initWithPhotoQualityPrioritization:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSubcommands:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)executeWithContext:(id)a0;

@end

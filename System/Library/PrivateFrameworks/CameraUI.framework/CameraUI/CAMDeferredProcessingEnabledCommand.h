@interface CAMDeferredProcessingEnabledCommand : CAMCaptureCommand

@property (readonly, nonatomic, getter=_isEnabled) BOOL _enabled;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSubcommands:(id)a0;
- (id)initWithDeferredProcessingEnabled:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)executeWithContext:(id)a0;

@end

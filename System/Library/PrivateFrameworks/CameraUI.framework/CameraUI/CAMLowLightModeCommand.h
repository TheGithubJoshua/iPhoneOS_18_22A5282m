@interface CAMLowLightModeCommand : CAMCaptureCommand

@property (readonly, nonatomic) long long _lowLightMode;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithLowLightMode:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)executeWithContext:(id)a0;

@end

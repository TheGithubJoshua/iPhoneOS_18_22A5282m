@class CAMMomentCaptureSettings;

@interface CAMCTMInitiateCaptureCommand : CAMCaptureCommand

@property (readonly, nonatomic) CAMMomentCaptureSettings *_settings;

- (id)initWithCoder:(id)a0;
- (id)initWithSettings:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)executeWithContext:(id)a0;

@end

@interface CAMPrepareStillImageCaptureCommand : CAMCaptureCommand

@property (readonly, nonatomic) unsigned long long _systemTimeOfCapture;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithSystemTime:(unsigned long long)a0;

@end

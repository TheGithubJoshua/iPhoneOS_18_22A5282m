@interface CAMSampleBufferVideoFormatOutputCommand : CAMCaptureCommand

@property (readonly, nonatomic) long long _videoFormat;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithSampleBufferVideoFormat:(long long)a0;

@end

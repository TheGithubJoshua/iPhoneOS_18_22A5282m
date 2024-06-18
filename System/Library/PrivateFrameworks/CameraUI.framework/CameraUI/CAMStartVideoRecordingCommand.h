@class CAMVideoCaptureRequest;

@interface CAMStartVideoRecordingCommand : CAMCaptureCommand

@property (readonly, nonatomic) CAMVideoCaptureRequest *_request;

- (id)initWithRequest:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)_videoOrientationForCaptureOrientation:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)executeWithContext:(id)a0;

@end
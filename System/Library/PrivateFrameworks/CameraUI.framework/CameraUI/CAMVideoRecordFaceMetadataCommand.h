@interface CAMVideoRecordFaceMetadataCommand : CAMCaptureCommand

@property (readonly, nonatomic, getter=_isEnabled) BOOL _enabled;

- (id)initWithCoder:(id)a0;
- (id)initWithEnabled:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_connectionForMovieFileOutput:(id)a0 metadataPortType:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_addMetadataConnectionForPortType:(id)a0 videoDeviceInput:(id)a1 movieFileOutput:(id)a2 captureSession:(id)a3;
- (void)executeWithContext:(id)a0;

@end

@interface FigCaptureSourceDepthDataFormat : FigCaptureSourceFormat

@property (readonly) float fieldOfView;

- (id)highResStillImageDimensions;
- (id)copyWithNewPixelFormat:(unsigned int)a0;
- (unsigned int)mediaType;
- (BOOL)RGBIRStereoFusionSupported;
- (BOOL)gainMapSupported;
- (struct { int x0; int x1; })depthEngineOutputDimensions;
- (BOOL)isStillImageOnlyDepthData;

@end

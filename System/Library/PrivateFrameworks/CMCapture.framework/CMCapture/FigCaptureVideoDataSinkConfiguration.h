@interface FigCaptureVideoDataSinkConfiguration : FigCaptureSinkConfiguration

@property (nonatomic) BOOL discardsLateVideoFrames;
@property (nonatomic) BOOL optimizedForPreview;
@property (nonatomic) BOOL sceneStabilityMetadataEnabled;

- (int)sinkType;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

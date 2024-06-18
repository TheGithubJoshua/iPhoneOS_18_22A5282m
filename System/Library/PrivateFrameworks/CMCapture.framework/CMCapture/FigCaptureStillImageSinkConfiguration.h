@interface FigCaptureStillImageSinkConfiguration : FigCaptureSinkConfiguration

@property (nonatomic) BOOL quadraHighResCaptureEnabled;

- (int)sinkType;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

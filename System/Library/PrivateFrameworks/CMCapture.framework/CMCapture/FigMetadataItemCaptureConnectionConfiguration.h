@interface FigMetadataItemCaptureConnectionConfiguration : FigCaptureConnectionConfiguration

@property (retain, nonatomic) struct opaqueCMFormatDescription { } *formatDescription;
@property (retain, nonatomic) struct OpaqueCMClock { } *clock;
@property (nonatomic) int sourceSubType;

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end

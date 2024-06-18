@class CAMSemanticStyle;

@interface CAMSemanticStylesPreviewStyleCommand : CAMCaptureCommand

@property (readonly, nonatomic) CAMSemanticStyle *_style;

- (id)initWithCoder:(id)a0;
- (id)initWithStyle:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSubcommands:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)executeWithContext:(id)a0;

@end

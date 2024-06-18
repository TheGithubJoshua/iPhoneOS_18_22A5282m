@interface SHInnerCircleMaskLayer : SHPaletteLayer

@property (nonatomic) double innerCircleRelativeSize;

+ (BOOL)needsDisplayForKey:(id)a0;

- (void)setup;
- (void)drawInContext:(struct CGContext { } *)a0;

@end

@interface UIPatternCGColor : UICGColor {
    struct CGColor { } *_cachedUnflippedColor;
}

- (BOOL)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (id)colorSpaceName;
- (id)initWithCGColor:(struct CGColor { } *)a0;
- (BOOL)getWhite:(double *)a0 alpha:(double *)a1;
- (BOOL)getHue:(double *)a0 saturation:(double *)a1 brightness:(double *)a2 alpha:(double *)a3;
- (id)description;
- (void)dealloc;
- (BOOL)isPatternColor;

@end

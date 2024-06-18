@interface UITintColor : UIDynamicColor

- (BOOL)_isDeepColor;
- (BOOL)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (id)colorSpaceName;
- (double)alphaComponent;
- (BOOL)getWhite:(double *)a0 alpha:(double *)a1;
- (void)set;
- (struct CGColor { } *)CGColor;
- (id)init;
- (BOOL)getHue:(double *)a0 saturation:(double *)a1 brightness:(double *)a2 alpha:(double *)a3;
- (unsigned long long)hash;
- (BOOL)_isDynamicTintColor;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStroke;
- (id)_resolvedColorWithTraitCollection:(id)a0;
- (BOOL)isPatternColor;
- (void)setFill;

@end

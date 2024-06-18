@interface UIDynamicColor : UIColor

- (BOOL)_isDeepColor;
- (id)_highContrastDynamicColor;
- (BOOL)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (id)colorSpaceName;
- (BOOL)_isDynamic;
- (double)alphaComponent;
- (BOOL)getWhite:(double *)a0 alpha:(double *)a1;
- (void)set;
- (struct CGColor { } *)CGColor;
- (id)colorWithAlphaComponent:(double)a0;
- (BOOL)getHue:(double *)a0 saturation:(double *)a1 brightness:(double *)a2 alpha:(double *)a3;
- (id)_backgroundColorIgnoringHighContrast;
- (id)_resolvedMaterialWithTraitCollection:(id)a0;
- (void)setStroke;
- (id)resolvedColorWithTraitCollection:(id)a0;
- (id)_resolvedColorWithTraitCollection:(id)a0;
- (BOOL)isPatternColor;
- (void)setFill;

@end

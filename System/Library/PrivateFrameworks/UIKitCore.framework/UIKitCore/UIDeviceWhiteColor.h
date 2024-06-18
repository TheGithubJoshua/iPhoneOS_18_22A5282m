@interface UIDeviceWhiteColor : UIColor {
    double whiteComponent;
    double alphaComponent;
    _Atomic struct CGColor *_cachedColor;
}

- (BOOL)_isDeepColor;
- (BOOL)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (id)colorSpaceName;
- (id)initWithCGColor:(struct CGColor { } *)a0;
- (struct CGColor { } *)_createCGColorWithAlpha:(double)a0;
- (double)alphaComponent;
- (BOOL)getWhite:(double *)a0 alpha:(double *)a1;
- (void)set;
- (struct CGColor { } *)CGColor;
- (id)colorWithAlphaComponent:(double)a0;
- (BOOL)getHue:(double *)a0 saturation:(double *)a1 brightness:(double *)a2 alpha:(double *)a3;
- (id)initWithWhite:(double)a0 alpha:(double)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStroke;
- (void)dealloc;
- (void)setFill;

@end

@class UIDynamicColor;

@interface UIDynamicModifiedColor : UIDynamicColor {
    UIDynamicColor *_baseColor;
    double _alphaComponent;
    long long _contrast;
}

+ (BOOL)supportsSecureCoding;

- (id)_highContrastDynamicColor;
- (id)colorWithAlphaComponent:(double)a0;
- (unsigned long long)hash;
- (id)_backgroundColorIgnoringHighContrast;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_isDynamicTintColor;
- (void).cxx_destruct;
- (id)initWithBaseColor:(id)a0 alphaComponent:(double)a1 contrast:(long long)a2;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)_resolvedMaterialWithTraitCollection:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_resolvedColorWithTraitCollection:(id)a0;

@end

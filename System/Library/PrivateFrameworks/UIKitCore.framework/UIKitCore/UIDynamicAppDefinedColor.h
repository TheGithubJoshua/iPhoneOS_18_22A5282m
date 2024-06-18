@class NSDictionary;

@interface UIDynamicAppDefinedColor : UIDynamicColor {
    NSDictionary *_colorsByThemeKey;
}

+ (BOOL)supportsSecureCoding;

- (id)_generateColorsByTraitCollection;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_resolvedColorWithTraitCollection:(id)a0;
- (id)initWithColorsByTraitCollection:(id)a0;
- (id)_initWithColorsByThemeKey:(id)a0;

@end

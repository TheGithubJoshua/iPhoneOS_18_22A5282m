@class UIImage;

@interface UIDynamicPatternColor : UIDynamicColor {
    UIImage *_image;
}

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPatternImage:(id)a0;
- (id)_resolvedColorWithTraitCollection:(id)a0;

@end

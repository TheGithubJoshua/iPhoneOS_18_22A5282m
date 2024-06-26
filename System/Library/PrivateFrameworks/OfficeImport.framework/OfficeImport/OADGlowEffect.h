@class OADColor;

@interface OADGlowEffect : OADEffect {
    OADColor *mColor;
    float mRadius;
}

- (float)radius;
- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)setColor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setRadius:(float)a0;
- (id)color;

@end

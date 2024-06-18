@class OADFill;

@interface OADFillOverlayEffect : OADEffect {
    int mBlendMode;
    OADFill *mFill;
}

- (id)init;
- (void)setBlendMode:(int)a0;
- (unsigned long long)hash;
- (int)blendMode;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)fill;
- (void)setFill:(id)a0;

@end

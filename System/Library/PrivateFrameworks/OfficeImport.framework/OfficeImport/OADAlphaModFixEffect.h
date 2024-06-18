@interface OADAlphaModFixEffect : OADBlipEffect {
    float mAlpha;
}

- (id)init;
- (float)alpha;
- (unsigned long long)hash;
- (void)setAlpha:(float)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

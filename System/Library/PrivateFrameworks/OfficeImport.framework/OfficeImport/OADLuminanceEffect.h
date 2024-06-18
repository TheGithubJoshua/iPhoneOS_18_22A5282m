@interface OADLuminanceEffect : OADBlipEffect {
    float mBrightness;
    float mContrast;
}

- (void)setContrast:(float)a0;
- (float)contrast;
- (id)init;
- (void)setBrightness:(float)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)brightness;

@end

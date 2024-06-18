@class CIColor, UIColor;

@interface UICIColor : UIColor {
    CIColor *_ciColor;
    UIColor *_rgbColor;
}

- (BOOL)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (BOOL)getWhite:(double *)a0 alpha:(double *)a1;
- (void)set;
- (struct CGColor { } *)CGColor;
- (id)colorWithAlphaComponent:(double)a0;
- (id)_rgbColor;
- (id)initWithCIColor:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStroke;
- (void)setFill;
- (id)CIColor;

@end

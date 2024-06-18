@interface CPTextBox : CPRegion {
    double rotationAngle;
}

- (id)init;
- (double)rotationAngle;
- (id)description;
- (void)setRotationAngle:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (BOOL)isRotated;
- (void)accept:(id)a0;
- (BOOL)isBoxRegion;

@end

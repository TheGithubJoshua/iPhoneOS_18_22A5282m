@interface _UIPickerViewStyle_iOS : _UIPickerViewStyle

- (struct CGSize { double x0; double x1; })defaultSizeForTraitCollection:(id)a0;
- (double)horizontalPaddingForContents;
- (double)horizontalPaddingForCenterHighlightView;
- (double)defaultRowHeightForSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 forTraitCollection:(id)a1;
- (void)configureMaskGradientLayer:(id)a0;
- (BOOL)sizeIsValid:(struct CGSize { double x0; double x1; })a0;
- (double)paddingBetweenWheels;
- (id)createCenterHighlightView;
- (double)paddingAroundWheels;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })perspectiveTransform;

@end

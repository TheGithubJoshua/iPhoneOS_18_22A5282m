@interface _UIStatusBarVisualProvider_Split1080 : _UIStatusBarVisualProvider_Split1125

+ (double)height;
+ (struct CGSize { double x0; double x1; })notchSize;
+ (double)leadingCenteringOffset;
+ (double)referenceScreenScale;
+ (double)pillCenteringOffset;
+ (double)nativeDisplayWidth;

- (double)itemSpacing;
- (struct CGSize { double x0; double x1; })pillSize;
- (double)baselineBottomInset;
- (id)stringForCellularType:(long long)a0 condensed:(BOOL)a1;
- (struct CGSize { double x0; double x1; })smallPillSize;
- (double)leadingSmallPillSpacing;
- (long long)normalIconSize;

@end

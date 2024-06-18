@interface TLKLayoutUtilities : NSObject

+ (BOOL)isWideScreen;
+ (struct CGSize { double x0; double x1; })minimumButtonSize;
+ (struct CGSize { double x0; double x1; })maxThumbnailSize;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })deviceScaledRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (struct CGSize { double x0; double x1; })maxThumbnailSizeIsCompactWidth:(BOOL)a0;
+ (double)scaledValueForValue:(double)a0 withFont:(id)a1;
+ (double)contentHeightOfTableView:(id)a0 forWidth:(double)a1 maxHeight:(double)a2;
+ (void)requireIntrinsicSizeForView:(id)a0 withPriority:(float)a1;
+ (struct CGSize { double x0; double x1; })idealImageSizeWithSize:(struct CGSize { double x0; double x1; })a0 fittingSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)isLTR;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })deviceScaledRoundedInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
+ (double)ceilingValue:(double)a0 inView:(id)a1;
+ (void)requireIntrinsicSizeForView:(id)a0;
+ (void)applyRowBoundedSizingToImageView:(id)a0 isCompactWidth:(BOOL)a1;
+ (double)roundedValue:(double)a0 inView:(id)a1;
+ (void)setDynamicBaselineAlignmentsForLabel:(id)a0 top:(double)a1 bottom:(double)a2;
+ (void)applyMinimumSizeTouchInsetsForControlsInView:(id)a0;
+ (double)deviceScaledRoundedValue:(double)a0;
+ (BOOL)isSuperLargeAccessibilitySize;
+ (double)deviceScaledFlooredValue:(double)a0;
+ (id)controlsInView:(id)a0;
+ (BOOL)widthIsCompact:(double)a0;
+ (double)flooredValue:(double)a0 inView:(id)a1;

@end

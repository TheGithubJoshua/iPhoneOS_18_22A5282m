@class _UIStatusBarCycleAnimation;

@interface _UIStatusBarWifiSignalView : _UIStatusBarSignalView

@property (nonatomic) BOOL needsCycleAnimationUpdate;
@property (retain, nonatomic) _UIStatusBarCycleAnimation *cycleAnimation;

+ (double)_totalWidthForIconSize:(long long)a0;
+ (struct CGSize { double x0; double x1; })_intrinsicContentSizeForNumberOfBars:(long long)a0 iconSize:(long long)a1;
+ (double)widthForIconSize:(long long)a0;
+ (double)_barThicknessAtIndex:(unsigned long long)a0 iconSize:(long long)a1;
+ (double)_interspaceForIconSize:(long long)a0;
+ (id)_barImageWithSize:(struct CGSize { double x0; double x1; })a0 forScale:(double)a1 distance:(double)a2 angle:(double)a3 centerPoint:(struct CGPoint { double x0; double x1; })a4 cornerRadius:(double)a5 thickness:(double)a6 rounded:(BOOL)a7;

- (void)_iconSizeDidChange;
- (id)accessibilityHUDRepresentation;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_updateCycleAnimationIfNeeded;
- (void)_updateBars;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)_setNeedsUpdateCycleAnimation;
- (void)_updateFromMode:(long long)a0;
- (void)layoutSubviews;
- (double)_barCornerRadius;
- (void)_colorsDidChange;
- (void)_updateActiveBars;
- (void)_updateCycleAnimationNow;

@end

@class _UIStatusBarCycleAnimation;

@interface _UIStatusBarCellularSignalView : _UIStatusBarSignalView

@property (nonatomic) BOOL needsLargerScale;
@property (nonatomic) BOOL needsCycleAnimationUpdate;
@property (retain, nonatomic) _UIStatusBarCycleAnimation *cycleAnimation;

+ (struct CGSize { double x0; double x1; })_intrinsicContentSizeForNumberOfBars:(long long)a0 iconSize:(long long)a1;
+ (double)_barCornerRadiusForIconSize:(long long)a0;
+ (double)_heightForNormalBarAtIndex:(long long)a0 iconSize:(long long)a1;
+ (double)_barWidthForIconSize:(long long)a0;
+ (double)_interspaceForIconSize:(long long)a0;

- (void)_iconSizeDidChange;
- (id)accessibilityHUDRepresentation;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_updateCycleAnimationIfNeeded;
- (void)applyStyleAttributes:(id)a0;
- (double)_heightForBarAtIndex:(long long)a0 mode:(long long)a1;
- (double)_heightForBarAtIndex:(long long)a0;
- (void)_updateBars;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)_setNeedsUpdateCycleAnimation;
- (void)_updateFromMode:(long long)a0;
- (void)layoutSubviews;
- (void)_colorsDidChange;
- (void)_updateActiveBars;
- (void)_updateCycleAnimationNow;

@end

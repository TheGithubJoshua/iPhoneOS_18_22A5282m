@class NSString;

@interface _UIStatusBarVisualProvider_Split1170 : _UIStatusBarVisualProvider_FixedSplit <_UIStatusBarVisualProvider_CustomSplit>

@property (class, readonly) struct CGSize { double x0; double x1; } notchSize;
@property (class, readonly) double nativeDisplayWidth;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)pillFontSize;
+ (double)pillCenteringOffset;
+ (double)baseFontSize;
+ (double)LTEAPlusFontSize;
+ (double)bottomLeadingTopOffset;
+ (double)expandedFontSize;

- (double)itemSpacing;
- (struct CGSize { double x0; double x1; })pillSize;
- (id)stringForCellularType:(long long)a0 condensed:(BOOL)a1;
- (double)normalIconScale;
- (double)expandedIconScale;
- (double)lowerExpandedBaselineOffset;
- (struct CGSize { double x0; double x1; })smallPillSize;
- (double)leadingSmallPillSpacing;
- (struct CGSize { double x0; double x1; })expandedPillSize;
- (double)leadingItemSpacing;

@end

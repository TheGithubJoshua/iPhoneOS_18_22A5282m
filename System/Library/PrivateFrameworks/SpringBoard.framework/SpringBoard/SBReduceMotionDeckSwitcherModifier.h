@interface SBReduceMotionDeckSwitcherModifier : SBDeckSwitcherModifier

- (struct CGPoint { double x0; double x1; })adjustedOffsetForOffset:(struct CGPoint { double x0; double x1; })a0 translation:(struct CGPoint { double x0; double x1; })a1 startPoint:(struct CGPoint { double x0; double x1; })a2 locationInView:(struct CGPoint { double x0; double x1; })a3 horizontalVelocity:(inout double *)a4 verticalVelocity:(inout double *)a5;
- (struct CGPoint { double x0; double x1; })_pagingOrigin;
- (double)wallpaperScale;
- (double)_cardWidth;
- (double)depthForIndex:(unsigned long long)a0 displayItemsCount:(unsigned long long)a1 scrollProgress:(double)a2;
- (unsigned long long)indexForScrollProgress:(double)a0 displayItemsCount:(unsigned long long)a1 frameOrigin:(double)a2;
- (double)scrollProgressForIndex:(unsigned long long)a0 displayItemsCount:(unsigned long long)a1 frameOrigin:(double)a2;
- (struct CGSize { double x0; double x1; })_interpageSpacingForPaging;
- (double)leadingOffsetForIndex:(unsigned long long)a0 displayItemsCount:(unsigned long long)a1 scrollProgress:(double)a2;
- (double)titleAndIconOpacityForIndex:(unsigned long long)a0;
- (double)titleOpacityForIndex:(unsigned long long)a0 scrollProgress:(double)a1;
- (id)scrollViewAttributes;
- (double)homeScreenScale;
- (double)opacityForIndex:(unsigned long long)a0 scrollProgress:(double)a1;
- (double)scrollProgressForIndex:(unsigned long long)a0;
- (double)_switcherCardScale;
- (double)homeScreenAlpha;
- (void)resetAdjustedScrollingState;

@end

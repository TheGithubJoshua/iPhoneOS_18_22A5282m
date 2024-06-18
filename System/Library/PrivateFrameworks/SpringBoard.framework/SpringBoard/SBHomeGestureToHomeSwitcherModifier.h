@interface SBHomeGestureToHomeSwitcherModifier : SBTransitionSwitcherModifier {
    BOOL _showingOrAnimatingCardsForFlyIn;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (BOOL)isSwitcherWindowVisible;
- (unsigned long long)transactionCompletionOptions;
- (BOOL)isHomeScreenContentRequired;
- (id)appLayoutsToCacheSnapshots;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (double)scaleForIndex:(unsigned long long)a0;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (long long)homeScreenBackdropBlurType;
- (id)visibleAppLayouts;
- (long long)wallpaperStyle;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (BOOL)isWallpaperRequiredForSwitcher;
- (id)initWithTransitionID:(id)a0 showingOrAnimatingCardsForFlyIn:(BOOL)a1;

@end

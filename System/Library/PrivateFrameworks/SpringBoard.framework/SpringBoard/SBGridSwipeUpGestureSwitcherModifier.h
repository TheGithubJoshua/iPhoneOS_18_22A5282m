@class SBDismissSiriSwitcherModifier;

@interface SBGridSwipeUpGestureSwitcherModifier : SBGestureSwitcherModifier {
    struct CGPoint { double x; double y; } _translation;
    BOOL _isApplyingContentViewScaleToSwitcherViewBounds;
    SBDismissSiriSwitcherModifier *_dismissSiriModifier;
}

@property (readonly, nonatomic) BOOL delayCompletionUntilTransitionBegins;

- (struct CGPoint { double x0; double x1; })scrollViewContentOffset;
- (id)handleTransitionEvent:(id)a0;
- (double)contentViewScale;
- (void)didMoveToParentModifier:(id)a0;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (void)_applyPrototypeSettings;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })switcherViewBounds;
- (void).cxx_destruct;
- (long long)homeScreenBackdropBlurType;
- (id)visibleAppLayouts;
- (long long)wallpaperStyle;
- (BOOL)isWallpaperRequiredForSwitcher;
- (void)_performBlockByApplyContentViewScaleToSwitcherViewBounds:(id /* block */)a0;
- (long long)finalResponseForGestureEvent:(id)a0;
- (id)handleGestureEvent:(id)a0;
- (id)initWithGestureID:(id)a0;
- (id)initWithGestureID:(id)a0 delayCompletionUntilTransitionBegins:(BOOL)a1;

@end

@interface SKUIHorizontalLockupViewAccessibility : __SKUIHorizontalLockupViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityElements;
- (id)_accessibilityUserTestingChildren;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityCustomActions;
- (id)accessibilityValue;
- (id)_accessibilitySupplementaryHeaderViews;
- (id)_accessibilitySupplementaryFooterViews;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_resolvePreviewStateAfterTransitionForFlipView:(id)a0;
- (id)_accessibilityFindPlayButton;
- (id)_accessibilityFindStyledImageButton;
- (id)_accessibilityFindToggleButton;
- (id)_accessibilitySupplementaryFooterViewsIncludePlayButton:(BOOL)a0 includeStyledImageButton:(BOOL)a1;
- (BOOL)_playAction:(id)a0;
- (BOOL)_styledImageButtonAction:(id)a0;
- (BOOL)_toggleButtonAction:(id)a0;
- (BOOL)isAdvertisementView:(id)a0;

@end

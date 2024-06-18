@class UIView;

@interface PLUIAccessibilityMockSlider : UIAccessibilityElement

@property (retain, nonatomic) UIView *view;
@property (weak, nonatomic) id mockSliderDelegate;

- (void)accessibilityIncrement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)accessibilityDecrement;
- (BOOL)accessibilityScroll:(long long)a0;

@end

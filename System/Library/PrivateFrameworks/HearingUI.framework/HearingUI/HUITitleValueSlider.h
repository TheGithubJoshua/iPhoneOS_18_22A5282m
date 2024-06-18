@class UILabel, UIVisualEffectView, HUIStepSlider;

@interface HUITitleValueSlider : UIView

@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) HUIStepSlider *slider;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *valueLabel;

- (id)initWithEffect:(id)a0;
- (id)_accessibilityUserTestingChildren;
- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (void)accessibilityDecrement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;

@end

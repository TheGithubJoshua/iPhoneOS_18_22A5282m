@class UISlider, UILabel, UIView;

@interface AXUISettingsLabeledSliderCell : PSTableCell

@property (retain, nonatomic) UIView *leftView;
@property (retain, nonatomic) UISlider *sliderView;
@property (retain, nonatomic) UIView *rightView;
@property (retain, nonatomic) UILabel *rightLabel;
@property (nonatomic) BOOL segmented;

- (double)minimumValue;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)didMoveToSuperview;
- (double)maximumValue;
- (id)slider;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (void)traitCollectionDidChange:(id)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (double)initialValue;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityDecrement;
- (void)setLabelText:(id)a0;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (id)labelTextColor;
- (Class)sliderCellClass;
- (void)_updateLabelFont:(id)a0;
- (void)handleSliderBeingDragged:(id)a0;
- (void)handleSliderDidFinishDrag:(id)a0;
- (id)maximumTextSizeString;
- (double)rightViewPadding;

@end

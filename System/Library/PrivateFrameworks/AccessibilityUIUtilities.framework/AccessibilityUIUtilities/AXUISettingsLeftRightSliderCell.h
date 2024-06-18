@class UILabel;

@interface AXUISettingsLeftRightSliderCell : PSSliderTableCell {
    UILabel *_leftLabel;
    UILabel *_rightLabel;
    UILabel *_valueLabel;
}

@property (nonatomic) double displayValue;

- (void)setAccessibilityLabel:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)labelColor;
- (id)newControl;
- (void)updateValue;
- (BOOL)_accessibilityIgnoreInternalLabels;

@end

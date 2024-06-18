@class UIColor;

@interface CPUILabelButton : CPUIMediaButton

@property (retain, nonatomic) UIColor *disabledTextColor;

- (id)tintColor;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (id)colorForKnobFocusLayer;
- (void)updateButtonOpacityForKnobUnfocused;

@end

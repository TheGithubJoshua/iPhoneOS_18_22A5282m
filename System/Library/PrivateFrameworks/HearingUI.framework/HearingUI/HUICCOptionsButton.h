@class UILabel;

@interface HUICCOptionsButton : HUICCToggleButton

@property (retain, nonatomic) UILabel *statusLabel;

- (BOOL)enabled;
- (void).cxx_destruct;
- (id)accessoryView;
- (id)accessibilityHint;
- (void)updateValue;
- (id)contentValue;

@end

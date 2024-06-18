@interface SBHVisualStylingView : UIView

+ (id)visualStyleSetNameForUserInterfaceStyle:(long long)a0;

- (void)didMoveToSuperview;
- (void)traitCollectionDidChange:(id)a0;
- (void)didMoveToWindow;
- (void)_updateVisualStyling;

@end

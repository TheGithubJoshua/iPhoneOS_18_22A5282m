@interface _NCContentUnavailableView : _UIContentUnavailableView

- (id)_titleFont;
- (void)didMoveToWindow;
- (void)_updateVisualStyling;
- (void)_dynamicUserInterfaceTraitDidChange;
- (double)_labelAlpha;
- (id)_visualStylingProvider;

@end

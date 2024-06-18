@interface ICiOSTableAttachmentView : ICTableAttachmentView

- (id)accessibilityElements;
- (void)setHighlightColor:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)isAccessibilityElement;
- (id)targetForAction:(SEL)a0 withSender:(id)a1;
- (id)accessibilityLabel;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (BOOL)canBecomeFirstResponder;
- (id)tableAttachmentViewController;

@end

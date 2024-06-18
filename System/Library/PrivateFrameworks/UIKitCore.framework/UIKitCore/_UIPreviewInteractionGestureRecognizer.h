@interface _UIPreviewInteractionGestureRecognizer : UILongPressGestureRecognizer

- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)cancel;
- (void)setDelegate:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)recognize;

@end

@interface UIDictationATVLinearView : UIDictationView

- (void)setState:(int)a0;
- (BOOL)isShowing;
- (void)removeFromSuperview;
- (BOOL)drawsOwnBackground;
- (void)setRenderConfig:(id)a0;
- (void)returnToKeyboard;
- (void)finishReturnToKeyboard;
- (void)layoutSubviews;

@end

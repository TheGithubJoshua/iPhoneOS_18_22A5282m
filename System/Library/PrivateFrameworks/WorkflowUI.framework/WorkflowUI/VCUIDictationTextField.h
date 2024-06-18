@interface VCUIDictationTextField : UITextView

+ (double)bottomPadding;

- (void)startDictation;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)setAttributedPlaceholder:(id)a0;
- (id)placeholderLabel;
- (void)dictationDidFinish:(id)a0;

@end

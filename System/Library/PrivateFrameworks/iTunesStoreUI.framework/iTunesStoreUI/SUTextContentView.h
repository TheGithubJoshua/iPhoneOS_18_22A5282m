@class NSString, UILabel;

@interface SUTextContentView : UITextContentView {
    UILabel *_placeholderLabel;
}

@property (retain, nonatomic) NSString *placeholder;

- (BOOL)becomeFirstResponder;
- (void)setBackgroundColor:(id)a0;
- (BOOL)resignFirstResponder;
- (void)setText:(id)a0;
- (void)dealloc;
- (void)keyboardInputChangedSelection:(id)a0;
- (void)layoutSubviews;

@end

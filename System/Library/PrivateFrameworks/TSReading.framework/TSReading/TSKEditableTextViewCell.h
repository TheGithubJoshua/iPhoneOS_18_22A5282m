@class NSString, UIView, TSKPlaceholderTextView;
@protocol UITextViewDelegate;

@interface TSKEditableTextViewCell : UITableViewCell <UITextViewDelegate> {
    TSKPlaceholderTextView *mTextView;
    UIView *mInputView;
    BOOL mNumberHasDecimal;
    id<UITextViewDelegate> mSavedDelegate;
}

@property (retain, nonatomic) NSString *string;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setPlaceholder:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void)setInputView:(id)a0;
- (void)endEditing;
- (void)dealloc;
- (void)deleteBackward;
- (void)layoutSubviews;
- (BOOL)isNegative;
- (void)tintColorDidChange;
- (void)beginEditing;
- (BOOL)textViewShouldBeginEditing:(id)a0;
- (void)setTextDelegate:(id)a0;
- (void)p_insertString:(id)a0;
- (void)insertDecimalSeparator;
- (void)insertNumber:(long long)a0;
- (void)p_parseText:(id)a0;
- (void)parseText;
- (void)setTextTag:(long long)a0;
- (void)toggleNegative;

@end

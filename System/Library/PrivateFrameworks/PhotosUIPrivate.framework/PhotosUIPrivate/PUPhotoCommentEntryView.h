@class UITextView, NSString, UILabel, UIButton;
@protocol PUPhotoCommentEntryViewDelegate;

@interface PUPhotoCommentEntryView : UIView <UITextViewDelegate> {
    UILabel *placeholderLabel;
}

@property (readonly, retain, nonatomic) UITextView *textView;
@property (readonly, retain, nonatomic) UILabel *placeholderLabel;
@property (readonly, retain, nonatomic) UIButton *postButton;
@property (weak, nonatomic) id<PUPhotoCommentEntryViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearText;
- (double)preferredHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setText:(id)a0;
- (void)layoutSubviews;
- (void)textViewDidBeginEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (BOOL)textViewShouldBeginEditing:(id)a0;
- (BOOL)textViewShouldEndEditing:(id)a0;
- (id)trimmedText;

@end

@class NSString, SKUICommentPostBarTextField, UILabel, UIButton;
@protocol SKUICommentDelegate;

@interface SKUICommentPostBarView : UIView <UITextFieldDelegate> {
    UIButton *_postButton;
    SKUICommentPostBarTextField *_postTextField;
    UILabel *_asLabel;
    UIButton *_asNameButton;
    NSString *_asText;
}

@property (weak, nonatomic) id<SKUICommentDelegate> delegate;
@property (copy, nonatomic) NSString *commenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (void)setText:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)setPlaceholderText:(id)a0;
- (id)_asLabel;
- (id)_asNameButton;
- (void)_changeCommenter:(id)a0;
- (void)_post:(id)a0;
- (void)_postComment;
- (void)setAsText:(id)a0;
- (void)setPostButtonText:(id)a0;
- (void)setPostButtonVisible:(BOOL)a0;

@end

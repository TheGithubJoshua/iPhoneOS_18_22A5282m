@class UIButton, NSString, UIView;

@interface CKTextInlineNotificationView : CKInlineNotificationView {
    UIView *_contentView;
}

@property (retain, nonatomic) UIButton *textButton;
@property (retain, nonatomic) UIView *greyOutView;
@property (nonatomic) BOOL greyedOut;
@property (retain, nonatomic) NSString *text;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)text;
- (void).cxx_destruct;
- (id)contentView;
- (void)setText:(id)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)_handleContentSizeCategoryDidChange:(id)a0;
- (void)_handleTouchDown:(id)a0;
- (void)_handleTouchUpInside:(id)a0;
- (void)_handleTouchUpOutside:(id)a0;
- (struct CGSize { double x0; double x1; })contentViewSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)greyedOut;
- (void)setGreyedOut:(BOOL)a0;

@end

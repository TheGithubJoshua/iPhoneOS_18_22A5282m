@class UIView, NSString, UILabel, NSAttributedString, UIButton;
@protocol SKUIMessageBannerDelegate;

@interface SKUIMessageBanner : UIView {
    UILabel *_label;
    UIButton *_button;
    UIView *_borderView;
    UIButton *_clearButton;
}

@property (weak, nonatomic) id<SKUIMessageBannerDelegate> delegate;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSAttributedString *attributedMessage;
@property (nonatomic) BOOL showsClearButton;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)value;
- (void)_buttonAction:(id)a0;
- (void)_clearButtonAction:(id)a0;

@end
